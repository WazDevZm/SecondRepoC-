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

    Cylinder clyDemo (23.5, 45.6);
    // all has been don int he code
    /// already accesing all the eemesi the public dmain
    cout<<"Volume of Cylinder is: "<< clyDemo.findVolume()<<endl;












    return 67;
}