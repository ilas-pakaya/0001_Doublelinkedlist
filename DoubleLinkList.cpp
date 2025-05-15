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
            if (START == NULL || nim <= START -> nomhs)
            {
                if (START != NULL && nim == START -> noMhs)
                {
                    cout << "\nDuplicate number not allowed" << endl;
                    return;
                }
                newNode -> next = START;
                if(START != NULL)
                   START -> prev = newNode;
                newNode -> prev = NULL;
                return;
            }
            node *current = START;
            while (current -> next != NULL && current -> next -> nomhs < nim)
            {
                current = current -> next;
            }

            if (current -> next != NULL && nim == current -> next -> nomhs)
            {
                cout << "\nDuplicate roll number not allowed" << endl;
                return;
            }

            newNode -> next = current -> next;
            newNode -> prev = current;
            if (current -> next != NULL)
                current -> next -> prev = newNode;
            current -> next = newNode;
        }

        void hapus()
        {
            if (START == NULL)
            {
                cout << "\nList is empty" << endl;
                return;
            }

            cout << "\nEnter the roll number of the student whose record is to be deleted";
            int rollNo;
            cin >> rollNo;

            Node *current = START;

            while (current != NULL && current -> nomhs != rollNo)
                current = current -> next;

            if (current == NULL)
            {
                cout << "\nRecord not found" << endl;
                return;
            }

            if (current == START)
            {
                START = current -> next;
                if (START != NULL)
                    START -> prev = NULL;
            }

            else
            {
                current -> prev -> next = current -> next;
                if (current -> next != NULL)
                    current -> next -> prev = current -> prev;
            }
            delete current;
            cout << "\nRecord with roll number" << rollNO << "deleted" << endl;
        }

        void traverse()
        {
            if (START == NULL)
            {
                cout <, "\nList is empty" << endl;
                return;
            }

            node *currentNode = START;
            cout << "\nRecords in ascending order of roll number are:\n";
            int 1 = 0;
            while (currentNode != NULL)
        }
};
