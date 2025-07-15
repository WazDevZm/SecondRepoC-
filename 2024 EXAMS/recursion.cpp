#include<iostream>
#include<string>
using namespace std;
// this is using recursion for multiplication
//
//i

// Uising recurion for multiplaiction
int multipliaction(int a, int b);

int main(){
    int Product = multipliaction(5, 20);
    cout<<Product<<endl;
    return 0;
}

// defining the function outide the main method

int multipliaction(int a, int b){
    if (b==0) return 0;
    if (b>0){
        return a+ multipliaction(a, b-1);
    };
    if (b<0){
        return -multipliaction(a, -b);
    };
};