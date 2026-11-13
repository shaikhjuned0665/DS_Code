#include<iostream>
using namespace std;
 struct Node
{
  int data;
  Node* next;
};

Node* head = NULL;

// Insert at Beginning
void insertBegin (int x)
{
 Node* n = new Node;
 n->data = x;
 n->next = head;
 head = n;
}

//Insert at end 
void insertEnd(int x)
{
 Node*n = new Node;
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

// Delete a node by value
void deleteNode(int x)
{
 if(head == NULL)
 {
  cout <<"List is empty\n";
  return;
  }
  if(head->data == x)
  {
   Node*t = head;
   head = head->next;
   delete t;
   cout <<"Deleted\n";
   return;
   }
 Node*t = head;
 while(t->next != NULL && t->next->data !=x)
          t = t->next;
 if(t->next == NULL)
  {   cout<< "Value not found\n";
     return;
   }
 Node* d = t->next;
 t->next = d->next;
 delete d;
 cout<<"Deleted\n";
}

//Traverse(Display)
void display()
{
 if(head == NULL)
 {
  cout<< "List is empty";
  return;

  }
 Node* t =head;
 while(t != NULL)
 {
  cout<< t->data << " -> "; 
  t = t->next;
 }
 cout<< "NULL\n";
}

int main()
{
 int ch, x;
 do{
  cout<< "\n 1.Insert at Begin 2.Insert at End 3.Delete 4.Display 5.Exit\n";
  cout<< " Enter Choice: ";
  cin>>ch;
 
  switch(ch)
  {
  case 1: cout<< " Enter value: "; cin>> x; insertBegin(x); break;
  case 2: cout<< " Enter value: "; cin>> x; insertEnd(x); break;
  case 3: cout<< " Enter value to delete: "; cin>> x; deleteNode(x); break;
  case 4: display(); break;
  case 5: cout<< " Bye\n"; break;
  default: cout<< " Invalid choice\n ";
  }

 }while (ch != 5);
 return 0;
} 










