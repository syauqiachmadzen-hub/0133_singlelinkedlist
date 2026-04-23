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

        Node *previos = START;
        Node *current = START;

        Wwhile (current != NULL && nim > current-> noMhs)
        {
          if (nim == current->noMhs)
          {
            cout << "\nDuplikasi noMhs tidak diijinkan\n";
            return 
          }
          previous = current;
          current = current->next;  
        }

        nodeBaru->next = current;
        previous->next = nodeBaru;
    }

    bool listEmpty()
    {
        return (START == NULL);
    }

    bool search(int nim,node *&previous, Node *&current)
    {
        previous = START;
        current = START;

        while (current != NULL && nim != current->noMhs)
        {
            previos = current;
            curent = current->next;
        }
        return current !- NULL;
    }

    bool delNode(int nim)
    {
        Node *current, *previous;

        if (!search(nim, previous, current))
        return false;
        
    }
}