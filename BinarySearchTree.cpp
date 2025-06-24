#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the node class
    Node()
    {
        leftchild = nullptr;  // intialize left child to null
        rightchild = nullptr; // intialize right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // initializing ROOT to null
    }

    void insert()
    {
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;

        // Step 1:Allocate memory for the new node
        Node *newNode = new Node();

        // Step 2: Assign value to the data field of new node
        newNode->info = x;

        // step 3: Make the left and right child of the new node point to null
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // Step 4: Locate the Node which will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        // step 5: if parent is NULL (tree is empty)
        if (parent == nullptr)
        {
            // 5a:Mark the new node ad ROOT
            ROOT = newNode;

            // 5b: Exit
            return;
        }

        // Step 6: if the value in the data field of new node is less than that of parent
        if (x < parent->info)
        {
            // 6a: Make the left child of parent point to the new node
            parent->leftchild = newNode;

            // 6b: Exit
            return;
        }
        // Step7: if the value in the data field of the new node is greater than that of the parent
        else if (x > parent->info)
        {
            // 7a: Make the right child of parent point to the new node
            parent->rightchild = newNode;

            // 7b:Exit
            return;
        }
    }

    
    
};