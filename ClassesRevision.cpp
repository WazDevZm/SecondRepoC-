#include<iostream>
using namespace std;


class Employee {
    public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        cout<<"Hello, my name is "<<Name<<endl;
        cout<<"I work at "<<Company<<endl;
    //all members of the class are private by default as you deal with the class
};

//Access Modifiers
// Public, Private, Protected
// Public - Accessible from outside the class
// Private - Accessible only from within the class
// Protected - Accessible only from within the class and by derived classes
int main(){
    Employee Employee1;
    Employee1.Name = "Wazingwa";
    Employee1.Company = "TellZed";
    Employee1.Age = 23;













    return 560;
}