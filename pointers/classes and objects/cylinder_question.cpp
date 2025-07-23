#include<iostream>


using namespace std;


class Cylinder {
    private:
        double radius;
        double height;
    public:
        static const double PI; // Static constant for PI
        // Constructor
        Cylinder (double r, double h) {
            radius = r;
            height = h;
        }
        // Getters
        double getRadius() {
            return radius;
        }
        double getHeight() {
            return height; // single lines for this cn be made usch tht we keep the code clean and neat

        }
        // Setters
        void setRadius ( double r){
            radius = r;
        }
        void setHeight (double h) {
            height = h;

        }
        double findVolume(){
            return PI * radius * radius* height;
        }

};

const double Cylinder::PI = 3.142;


int main(){

    // Demo: create and show volume for a single cylinder
    Cylinder clyDemo(23.5, 45.6);
    cout << "Demo Cylinder: radius = " << clyDemo.getRadius() << ", height = " << clyDemo.getHeight() << endl;
    cout << "Volume of Demo Cylinder is: " << clyDemo.findVolume() << endl;

    // Ask user how many cylinders to input (limit to a reasonable number)
    int n;
    cout << "\nHow many cylinders do you want to enter? ";
    cin >> n;
    if (n < 1 || n > 1000) n = 3; // default to 3 if invalid

    Cylinder CylinderList[1000] = {Cylinder(0,0)};
    for (int i = 0; i < n; i++) {
        double r, h;
        cout << "\nCylinder " << (i+1) << ":\nEnter radius: ";
        cin >> r;
        cout << "Enter height: ";
        cin >> h;
        CylinderList[i].setRadius(r);
        CylinderList[i].setHeight(h);
    }

    // Print volumes for entered cylinders
    cout << "\nVolumes of entered cylinders:" << endl;
    for (int i = 0; i < n; ++i) {
        if (CylinderList[i].getRadius() > 0 && CylinderList[i].getHeight() > 0) {
            cout << "Cylinder " << (i+1) << " Volume: " << CylinderList[i].findVolume() << endl;
        }
    }

    return 0;
}