// This notes are about classes and how the y are impmented in the c++ prgramming lnguage
/*
Procedural programming is a mth
an inline function is a fnctiona that is dealered within the calss after being intilaized


*/

#include<iostream>
#include<string>

using namespace std;
// deonsraing a onstructor


class Demo{
    public:
        Demo();
};

Demo::Demo(){// the return type is not need for a constructor but it just paliney deacled the eay it is in the class.
    cout<<"This is a constructor"<<endl;
}
int main(){

    Demo d;
    cout<<"The funtion is called automatically";

    return 455545;
}