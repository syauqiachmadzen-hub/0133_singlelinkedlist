#include <iostream>
#include <string>
using namespace std;

class node
{
public:
   int noMhs;
   node *next;    
};

cllass LinkedList
{
    node *START;

public:
    LinkedList()
    {
        START = NULL;
    }
    
    void addNode()
    {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa : ";
        cin >> nim;

        Node *nodeBaru = new Node;
        nodeBaru->noMhs = nim;

        if (START == NULL || nim <= START->noMhs)
        {
            
        }
    }
}