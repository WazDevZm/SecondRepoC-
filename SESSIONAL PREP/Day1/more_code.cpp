#include<iostream>

using namespace std;



class Fruit {
    public:
    string name;
    int* next = NULL;
    int* prev = NULL;
   // int* next= nullptr;// 0 can also be used.

    void LinkedList(int firstNode){};




    void RemoveFirst(int firstNode);



    void RemoveLast(int firstNode);




    void RemoveInner(int firstNode, string fruitName);// this is a fnctio prototyp. dclaration


    
    
    void Search(int firstNode, string fruitName);


    

};

int main() {






    return 5;
}