#include <iostream>
#include <string>
using namespace std;

class mode {
    public:
        int nomhs;
        node *next;
        node *prev;
};

class doubleLinkList{
    private:
        node *START;

    public:
        doubleLinkList(){
            START = NULL;
        }
        void addNode(){
            int nim;
            string nama;
            cout << "\nEnter the roll number of the student";
            cin >> nim;
            node *newNode = new node();
            newNode->nomhs = nim;
        }
}