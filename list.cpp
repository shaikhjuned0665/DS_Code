#include<iostream>
using namespace std;

struct Node
{
 int data;
 Node* next;
};
Node* head = NULL;

//Insert at the end (new allocates memory dynamically)

void insertNode(int x)
{
 Node* n = new Node;
 n->data = x;
 n->next = NULL;
 
 if(head == NULL)
 {
  head = n;
  return;
  }
  Node* t = head;
  while(t->next != NULL)
       t = t->next;
  t->next = n;
}

//Delete a node by value (delete free memory)
void deleteNode(int x)
{
   if(head == NULL)
  {
   cout<<"List is Empty\n ";
   return;
   }
   if(head -> data == x)
  {
    Node* t = head;
    head = head ->next;
    delete t;
    cout<<" Deleted\n";
    return;
  }
  Node* t = head;
  while(t->next != NULL && t->next->data != x)
   {  t = t->next; }
  if(t->next == NULL)
  {
   cout<<" Value not found\n";
   return;
  }
  Node* d = t->next;
   t->next = d ->next;
   delete d;
   cout<<" Deleted\n";
   
}

// Search a value
void searchNode(int x)
{
 Node* t = head;
 int pos = 1;
 while(t != NULL)
 {
  if(t->data == x)
  {
   cout<< x << " found at position "<< pos <<endl;
   return; 
  }
  t =t->next;
  pos++;
 }
 cout<< x <<"not found\n";
}

//display the list
void display()
{
 if(head == NULL)
  {     cout<<"List is empty\n";
        return;
   }
  Node* t = head;
  while (t != NULL)
 {
   cout<< t->data <<" -> ";
   t = t->next;
  }
 cout<<"NULL\n";
}

int main()
{
 int ch, x;
 do{
   cout<<"\n 1.Insert 2.Delete 3.Search 4.Display 5.Exit\n";
   cout<<" Enter choice: ";
   cin>> ch;

   switch(ch){
      case 1: cout<<" Enter value: "; cin>> x; insertNode(x); break;
      case 2: cout<<" Enter value to delete: "; cin>> x; deleteNode(x); break;
      case 3: cout<<" Enter value to search: "; cin>> x; searchNode(x); break;
      case 4: display(); break;
      case 5: cout<<" Bye\n"; break;
      default: cout<<"Invalid choice\n ";
  }

}while (ch != 5);

 return 0;
}
















