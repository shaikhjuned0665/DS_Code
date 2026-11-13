#include<iostream>
using namespace std;

struct Node
{
 int data;
 Node * next;
};

Node* front = NULL;
Node* rear = NULL;

//Enqueue from rear end
void enqueue(int x)
{
   Node* n = new Node;
   n->data = x;
   n->next = NULL;
   if(rear == NULL)
   { 
     front = rear =n;
   }else{
     rear->next = n;
     rear = n;
   }
  cout<<  x << " enqueued\n ";
}

//Dequeue from front end
void dequeue()
{
 if(front == NULL)
 {
  cout << " Queue underflow (queue is empty) ";
  return;
 }
 Node* t = front;
 cout <<  t->data << " dequeued \n ";
 front = front->next;
 if( front == NULL)
     rear = NULL;
 delete t;
}

//Travesal: display front to rear
void display()
{
 if(front == NULL)
 {
  cout << " Queue is empty \n";
  return;
 }
 cout << " Queue (front to rear) : ";
 Node * t = front;
 while( t != NULL)
 {
  cout<< t->data << "  " ;
  t = t->next;
 }
 cout << endl; 
}

int main()
{
 int ch, x;
 do
 {
  cout<< "\n 1.Enqueue 2.Dequeue 3.Display 4.Exit ";
  cout<< " Enter choice: ";
  cin>> ch;
  
  switch(ch)
  {
   case 1: cout<< "\n Enter value "; cin>> x; enqueue(x); break;
   case 2: dequeue(); break;
   case 3: display(); break;
   case 4: cout<< " Bye\n "; break;
   default: cout<< " Invalid choice ";  
  }
 }while( ch != 4 );
 return 0; 
}







