// C++ Program for traversal of Linked List

#include <bits/stdc++.h>
using namespace std;

// Define Node
class node {
  public:
    int data;
    node *next;
  };

//Function to print contents of Linked List starting from given node
void printList(node* n)
{
  while(n!=NULL) {
    cout << n->data <<" ";
    n = n->next;
  }
}

//Driver Code
int main()
{
  node* head = NULL;
  node* n2 = NULL;
  node* n3 = NULL;

  //Allocate 3 nodes in the heap
  head = new node();
  n2 = new node();
  n3 = new node();

  //Assign Data and Next to nodes
  head->data = 1;
  head->next = n2;

  n2->data = 2;
  n2->next = n3;

  n3->data = 3;
  n3->next = NULL;

  //Print node values
  printList(head);

  return 0;
}
