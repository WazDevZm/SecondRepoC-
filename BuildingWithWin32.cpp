#include<iostream>
#include<thread>
#include<Windows.h>
#include<commctrl.h>
using namespace std;


// power of vibe coding lol

 int main() {
// building a simple calculator usinf the Win32 API
    // This is a simple calculator program using the Win32 API
    // It creates a window with buttons for digits and operations
    // and performs basic arithmetic operations
    // Create a window class
    WNDCLASS wc = { 0 };
    wc.lpfnWndProc = DefWindowProc;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = "CalculatorClass";
    RegisterClass(&wc);
    // Create a window
    HWND hwnd = CreateWindowEx(
        0,
        "CalculatorClass",
        "Simple Calculator",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 300, 400,
        NULL,
        NULL,
        wc.hInstance,
        NULL
    );


















    return
 }