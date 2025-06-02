#include<iostream>
using namespace std;

class Student {
    private:
         string name;
         int age;
    public:
          Student (string n, int a){
            SetName(n);
            setAge (a);

          };
  // setter for name
   void SetName(string n){
    if (n == ""){
        cout<<"Unknown"<<endl;
    }
    else {
        name = n;
    }
}
// setter for age 
void setAge(int a) {
    if (a < 0) {
        cout << "Age cannot be negative." << endl;
    } else {
        age = a;
    }
}
        
        // getter for name
        string getName() const {
            return name;
        };
        
        // getter for age
        int getAge() const {
            return age;
        }
};


// fix the bugs in this code


int main() {
    // this meana they functiona dont have to be called in t main function












    return 56;
}