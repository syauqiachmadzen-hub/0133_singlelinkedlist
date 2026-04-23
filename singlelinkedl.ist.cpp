#include <iostream>
#include <string>
using namespace std;

class node
{
public:
   int noMhs;
   node *next;    
};

class LinkedList
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
          if (START != NULL && nim ==START->noMhs)
          {
            cout << "\nDuplikasi noMhs tidak diijinkan\n";
            return;
          }

          nodeBaru->next = START;
          START = nodeBaru;
          retrun;
        }
        
    }
}