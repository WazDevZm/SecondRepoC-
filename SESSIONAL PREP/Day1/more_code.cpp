#include<iostream>

using namespace std;


class Fruit {
    public:
    string firstName;
    string newName;
    Fruit* next = NULL;
    Fruit* prev = NULL;
   // int* next= nullptr;// 0 can also be used.
   Fruit(string fruitName){
    this->firstName = fruitName;
    this->newName = "";
    // static and instance
   }

    static void printList();




    static bool RemoveFirst(Fruit* firstNode);



    static bool RemoveLast(Fruit* firstNode);




    static bool RemoveInner(Fruit*firstNode, string fruitName);// this is a fnctio prototyp. dclaration



    
    static void SearchList(Fruit* firstNode, string fruitName);
    //static void printlist();
    static void push (Fruit* newNode);

};

Fruit* head = nullptr;

void Fruit::push(Fruit*newNode){
        if (head == NULL){
            
            return;
            // It is up tot the main to maintain the firstnode
        }else{
        
            Fruit* temp = head;
            while(temp-> next != NULL){
                temp = temp-> next;
            }
            // link newNode to temp
            temp-> next = newNode;
            newNode -> prev = temp;
        }
 };
void Fruit::printList(){
    Fruit* temp = head;
    while (temp != nullptr)
    {
        cout<< temp->firstName<<" ";
        temp = temp ->next;
    }
   
}
void Fruit::SearchList(string fn);

int main() {

    Fruit::push(new Fruit("Mango"));
    Fruit::push(new Fruit("Banana"));
    Fruit::push(new Fruit("Orange"));
    Fruit::push(new Fruit("Lemon"));
    Fruit::push(new Fruit("Guava"));
    Fruit::printList();
    cout<<Fruit::SearchList("Guava");


    return 5;
}