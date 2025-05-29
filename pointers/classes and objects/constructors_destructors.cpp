#include<iostream>

using namespace std;

class Cars{
    private:
        string brand;
        string model;
        int year;
    public:
    // constructor
    Cars(){
        cout<<"Constructor called!"<<endl; // semi colon is placed at the end of the class definition
    }
    // memeber function
    void setData(string b, string m, int y){
        brand = b;
        model = m;
        year = y;
    }
    void DisplayData(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
};
int main (){
    Cars car1, car2; // eben f the two obkect of the same class are made the construtir is stuill clalled twice
    car1.setData("Toyota", "Corolla", 2020);
    car2.setData("Honda", "Civic", 2021);
    car1.DisplayData();
    // as soon as an obeject in created the cosnstructor is called
    return 0;
}