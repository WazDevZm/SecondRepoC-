#include <windows.h>
#include <vector>
#include <string>
#include <sstream>

struct Process {
    std::string name;
    int arrival;
    int burst;
    int remaining;
    int color;
};

std::vector<Process> processes;
std::vector<std::string> ganttChart;

int timeQuantum = 2;
bool simulationStarted = false;

HWND hArrival1, hBurst1;
HWND hArrival2, hBurst2;
HWND hQuantum;
HWND hButton;

void DrawGanttChart(HDC hdc) {
    int x = 10;
    int y = 200;
    int height = 40;
    int width = 30;

    for (size_t i = 0; i < ganttChart.size(); i++) {
        Rectangle(hdc, x, y, x + width, y + height);
        TextOutA(hdc, x + 5, y + 10, ganttChart[i].c_str(), ganttChart[i].length());
        x += width;
    }
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_COMMAND:
            if ((HWND)lParam == hButton) {
                // Read user input
                char buffer[10];
                GetWindowTextA(hArrival1, buffer, 10);
                int a1 = atoi(buffer);
                GetWindowTextA(hBurst1, buffer, 10);
                int b1 = atoi(buffer);

                GetWindowTextA(hArrival2, buffer, 10);
                int a2 = atoi(buffer);
                GetWindowTextA(hBurst2, buffer, 10);
                int b2 = atoi(buffer);

                GetWindowTextA(hQuantum, buffer, 10);
                timeQuantum = atoi(buffer);

                // Store processes
                processes.clear();
                ganttChart.clear();

                processes.push_back({"P1", a1, b1, b1, RGB(255, 100, 100)});
                processes.push_back({"P2", a2, b2, b2, RGB(100, 255, 100)});

                // Round Robin Scheduling
                int time = 0;
                std::vector<Process*> queue;

                while (true) {
                    bool done = true;
                    for (auto& p : processes) {
                        if (p.arrival <= time && p.remaining > 0 && std::find(queue.begin(), queue.end(), &p) == queue.end()) {
                            queue.push_back(&p);
                        }
                    }

                    if (!queue.empty()) {
                        Process* current = queue.front();
                        queue.erase(queue.begin());

                        int execTime = min(timeQuantum, current->remaining);
                        for (int i = 0; i < execTime; ++i) {
                            ganttChart.push_back(current->name);
                            time++;
                        }

                        current->remaining -= execTime;

                        // Re-check for new arrivals
                        for (auto& p : processes) {
                            if (p.arrival <= time && p.remaining > 0 && std::find(queue.begin(), queue.end(), &p) == queue.end() && &p != current) {
                                queue.push_back(&p);
                            }
                        }

                        if (current->remaining > 0)
                            queue.push_back(current);
                    } else {
                        // Idle
                        ganttChart.push_back("ID");
                        time++;
                    }

                    for (auto& p : processes) {
                        if (p.remaining > 0)
                            done = false;
                    }
                    if (done) break;
                }

                simulationStarted = true;
                InvalidateRect(hwnd, NULL, TRUE);
            }
            break;

        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);
            if (simulationStarted) {
                DrawGanttChart(hdc);
            }
            EndPaint(hwnd, &ps);
        } return 0;

        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow) {
    const char CLASS_NAME[] = "RoundRobinSim";
    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(0, CLASS_NAME, "Round Robin Simulator", WS_OVERLAPPEDWINDOW,
                               CW_USEDEFAULT, CW_USEDEFAULT, 600, 400,
                               NULL, NULL, hInstance, NULL);

    if (!hwnd) return 0;

    // Input fields and button
    CreateWindowA("STATIC", "Arrival P1:", WS_VISIBLE | WS_CHILD, 10, 10, 80, 20, hwnd, NULL, hInstance, NULL);
    hArrival1 = CreateWindowA("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 100, 10, 50, 20, hwnd, NULL, hInstance, NULL);
    CreateWindowA("STATIC", "Burst P1:", WS_VISIBLE | WS_CHILD, 160, 10, 80, 20, hwnd, NULL, hInstance, NULL);
    hBurst1 = CreateWindowA("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 240, 10, 50, 20, hwnd, NULL, hInstance, NULL);

    CreateWindowA("STATIC", "Arrival P2:", WS_VISIBLE | WS_CHILD, 10, 40, 80, 20, hwnd, NULL, hInstance, NULL);
    hArrival2 = CreateWindowA("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 100, 40, 50, 20, hwnd, NULL, hInstance, NULL);
    CreateWindowA("STATIC", "Burst P2:", WS_VISIBLE | WS_CHILD, 160, 40, 80, 20, hwnd, NULL, hInstance, NULL);
    hBurst2 = CreateWindowA("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 240, 40, 50, 20, hwnd, NULL, hInstance, NULL);

    CreateWindowA("STATIC", "Time Quantum:", WS_VISIBLE | WS_CHILD, 10, 70, 100, 20, hwnd, NULL, hInstance, NULL);
    hQuantum = CreateWindowA("EDIT", "2", WS_VISIBLE | WS_CHILD | WS_BORDER, 120, 70, 50, 20, hwnd, NULL, hInstance, NULL);

    hButton = CreateWindowA("BUTTON", "Simulate", WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON, 200, 70, 100, 30, hwnd, NULL, hInstance, NULL);

    ShowWindow(hwnd, nCmdShow);

    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
