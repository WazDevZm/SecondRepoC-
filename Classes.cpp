#include<iostream>

using namespace std;
                                        //ererekre df dfiduffjfu0eff0FEF FDh#[ DIFD D IGIWJG# ig rirrrfifrir iiigirrgirgrigjr

class Product{
    public: // by default all declaration are privtate, set to public to make them accessible
    string name;
    long serial;
    double price;
    int quantity;
    void PrintMe(){
        cout<<"Hello Print me"<<endl;
    }
};
// Implementing and learning classes

class Cylinder {
public:
    double radius;
    double height;
    const double PI = 3.142;
    void volume(double radius, double height){
        cout<<"Volume of a cylinder:" <<PI*radius*radius*height<<endl;
    };

};
int main(){

    Product Prod;

    Prod.name = "Bread";
    Prod.serial = 23232323;
    Prod.price = 34.5;
    Prod.PrintMe();

  cout<<Prod.name<<Prod.serial<<Prod.price<<endl;// finishing up the all statement
  Cylinder shape;
  // I am learnig some cool coding concepts today, class is fun lol!
  cout<<"Hello!"<<endl;
  double height, radius;
  cout<<"Enter radius: ";
  cin>>shape.radius;
  cout<<"Enter Height";
  cin>>shape.height;
//COncpe to Constructores
  shape.volume();


 return 68080;
}
