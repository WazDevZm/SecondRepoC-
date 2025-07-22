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

    Cylinder CylinderList[] = {Cylinder(0,0)};

    Cylinder clyDemo (23.5, 45.6);
    // all has been don int he code
    /// already accesing all the eemesi the public dmain
    cout<<"Volume of Cylinder is: "<< clyDemo.findVolume()<<endl;
    // prompting the user to enter all the values for the cylinders placed:
    // when inouting values we use the get function when we add values
    for ( int i  = 0 ; i < 1000; i++){
        double r, h;
        cout<<"Enter radius: ";
        cin>>r;
        cout<<"Enter height: ";
        cin>>h;
        CylinderList[i].setHeight(h);
        CylinderList[i].setRadius(r);
    };
    // when we are printing out values we use the get
    for (int i = 0; i < 1000; ++i) {
    if (CylinderList[i].getRadius() > 0 && CylinderList[i].getHeight() > 0) {
        cout << "Cylinder " << i + 1 << " Volume: "
             << CylinderList[i].findVolume() << endl;
    }
}




    return 67;
}