#include <iostream>
#include <string>
using namespace std;

struct Node 
{
    int noMhs;
    string name;
    Node* next;
    Node* prev;
};

Node* START = NULL;

void addNote() {
    Node* newNode = new Node(); // step 1: create a new node
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode->noMhs;      // Assign Value to the data field of the new node
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name;       // Assign Value to the data fieldof the new node


    // Insert the new node in the list 
    if (START == NULL || newNode->noMhs == START->noMhs) {
        
        if (START != NULL && newNode->noMhs == START->noMhs) {
            cout << "\033[31mDuplicate roll numbers not allowed\033]0m" << endl;
            return;

        }
         // if the list is empty, make the new node the START
        newNode->next = START;   // step 3: make the new node point to the first node
        if (START != NULL) {
            START->prev = newNode; // step 4 : make the first node point to the new node

    }
    newNode->prev = NULL;  //step 5 : make the new node point to NULL
        START = newNode; // step 6 : make the new node the first node

 }
   else
  {
      // Insert the new Node in the middle or at the end
        Node *current = START; // step 1.a : start from the first node
        Node *previous = NULL; // step 1.b : previous node is NULL initially

        while (current != NULL && current->noMhs < newNode->noMhs) 

  {
                               // step 1.c : traverse the list to find the correct position

    previous = current;          // step 1.d : move the previous to the current node

  }         

  } 

}
