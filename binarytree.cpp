#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    //constructor for the node class
    Node(string i, Node* l, Node* r)
    {
    info = i;
    leftchild = l;
    rightchild = r;
    }

};

class BinaryTree
{
public:
    Node* ROOT;

    BinaryTree()
    {
    ROOT = NULL; //initializing ROOT to null
    }

    void insert(string elemement) //
    {
        Node* newNode = new Node(elemement, NULL, NULL); //
        newNode->info = elemement;
        newNode->leftchild = NULL;
        newNode->rightchild = NULL;

        Node* parent = NULL;
        Node* currentNode = NULL;
        search(elemement, parent, currentNode);//

        if(parent == NULL) //
        {
            ROOT = newNode;
            return;
        }

        if(elemement < parent->info) //
        {
            parent->leftchild = newNode; //
        }
    }
};