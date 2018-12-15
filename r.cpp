#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

struct Node {
  int data;
  Node *next;
};

struct LinkedList {
  Node *head;
  Node *tail;
};

// make the list 1->2->3->X
LinkedList* l() {
  LinkedList *l = new LinkedList;

  Node *one = new Node;
  Node *two = new Node;
  Node *three = new Node;
  one->data = 1;
  two->data = 2;
  three->data = 3;
  one->next = two;
  two->next = three;
  three->next = NULL;

  l->head = one;
  l->tail = three;

  return l;
}
string linkedListToString(Node* head){
  string a="";
  if (head==NULL){
    a="NULL";
  }else{
    string sub = linkedListToString(head->next);
    a= a+ to_string(head->data);
    a += "->";
    a += sub;
  }
  return a;
}
int main() {

  cout<<linkedListToString(l()->head);
  

  return 0;
}
