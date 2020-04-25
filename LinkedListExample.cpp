// LinkedListExample.cpp : simple linked list implementation in c++.

#include <iostream>
#include <string>
using namespace std;

struct node {
    int data;
    node* next = NULL;
};

node* home = NULL;
node* tail = NULL;
node* current = NULL;
node* temp = NULL;

int main() {
    int input = 0;
    int i = 1;
    cout << "Enter -1 to stop and print the list\n\n";
    do {
        cout << "[" << i << "] Enter a number: ";
        cin >> input;
        current = new node;
        current->data = input;
        if(home == NULL) {
            home = current;
            tail = current;
        } else {
            tail->next = current;
            tail = current;
        }
        i++;
    } while(input != -1);
    temp = home;
    cout << "\nYour List:" << endl;
    while(temp != NULL) {
        if(temp->data != -1) cout << "= " << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}
