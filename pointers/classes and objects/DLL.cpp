#include<iostream>

using namespace std;



class Node{
    public:
    int value;
    Node* next;
    Node* previous;
};
// uaing Ai to 10x outfou g the code
.. using AI to build scbale app in the use

// aming for fast and rwleiale ineter from my deide leaning how to cde an app from scratch is relay cool
// finding a niche that will help you in the business dev envtioment with respec tt ahet is need
// learning how use fu=gias for app dei
// how to build d app that cn be used in stellar conditons int he apsec
// buidlinga ll the scable syste int he ccoe int my ide in the
// w felng bolaed but we have to let mlcoked in the board that has been out i the comuty in the aniHan park that is thrt bcoude inth t cde
// the gowl is to speak to to Tim Cook and Bill Gtes int he coming duteute in the next xming years and datrt builfin all the
// the  systems tat we need to set up and get tuuning with thr vode in the ide, we have to g
// the goeal is to hge sted using the on boadning exprecince and tring to speak nt he ide being and trainig ad an indicato uing thr onadrninf exprenice
// core ml student, receive recommeded  couse to come wup witha all th code that is neeeed in the app
// usign s atesdy if oonecitonti palc eint h
int main () {

    Node* head = nullptr; // Initialize head pointer to null
    Node* tail = nullptr; // Initialize tail pointer to null
    Node* node= new Node;
    node->value = 10; // Example value
    node->next = nullptr; // Initialize next pointer to null
    node->previous = nullptr; // Initialize previous pointer to null

    node = new Node; // Create a new node
    node->value = 20; // Example value
    node->next = nullptr; // Initialize next pointer to null
    node->previous = head; // Set previous pointer to the current head
    if (head == nullptr) {
        head = node; // If head is null, set head to the new node
        tail = node; // Set tail to the new node as well
    } else {
        tail->next = node; // Link the current tail's next to the new node
        tail = node; // Update tail to the new node
    }
return 0; // Return 0 to indicate successful execution
}