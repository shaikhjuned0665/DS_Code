#include<iostream>
using namespace std;

struct Node
{
 int data;
 Node* next;
};

Node* top = NULL;

//Push : insert at beginning
void push( int x)
{
 Node* n = new Node;
 n->data = x;
 n->next = top;
 top = n;
 cout<< x << " pushed\n ";
}

//Pop : delete from beginning
void pop()
{
 if(top == NULL)
 {
  cout<< " Stack underflow (stack is empty)\n "; 
  return;
 }
 Node* t = top;
 cout<< t->data <<" popped\n ";
 top = top->next;
 delete t;
}

//Peek : show top element
void peek()
{
 if(top == NULL)
 {
 cout<<" stack is empty\n ";
 return;
 }
 cout<<" Top element = " << top->data <<endl;
}

//Display all elements
void display()
{
 if( top == NULL)
 {
  cout<< " stack underflow (stack is empty)\n ";
  return;
 }
 cout<< " stack (top to bottom)\n ";
 Node* t = top;
 while( t != NULL)
 {
  cout<< t->data << endl;
  t = t->next; 
 } 
}

int main()
{
 int ch, x;
 do
 {
  cout<< "\n 1.Push 2.Pop 3.Peek 4.Display 5.Exit ";
  cout<< " Enter choice: ";
  cin>>ch;
  switch(ch)
  {
  case 1: cout<< " Enter value: "; cin>> x; push(x); break;
  case 2: pop(); break;
  case 3: peek(); break;
  case 4: display(); break;
  case 5: cout<< " Bye\n "; break;
  default: cout<< " Invalid choice\n ";
  } 
 }while(ch != 5);
 return 0;
}




