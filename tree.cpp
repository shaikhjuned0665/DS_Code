#include<iostream>
#include<string>
using namespace std;

struct Node
{
 char data;
 Node *left, *right;
};

//check if a character is an operator
bool isOperator(char c)
{
 return c == '+' || c == '-' || c == '*' || c == '/' || c == '^' ;
}

//Build a tree from prefix expression
Node* build(string &s, int &i)
{
 Node* n = new Node;
 n->data = s[i++];
 n->left = n->right = NULL;
 if(isOperator(n->data)) // Operator needs two childs
 {
  n->left = build(s, i);
  n->right = build(s, i);
 }
 return n;
}

// Post Order traversal: left - right - root ( gives postfix )
void postorder( Node* root)
{
 if (root == NULL)  return;
 postorder(root->left);
 postorder(root->right);
 cout << root->data;
}

//Delete tree using post-order (children first, then root)
void deleteTree(Node* root)
{
 if(root == NULL) return;
 deleteTree(root->left);
 deleteTree(root->right);
 cout<< " Deleting " << root->data << endl;
 delete root;
} 

int main()
{
 string s;
 int i = 0; 

cout<< " Enter prefix expression (no spaces): ";
cin>>s;

Node* root = build(s, i);

cout<< "\n Postfix expression: ";
postorder(root);
cout<< endl;

cout<< "\n Freeing Memory:\n ";
deleteTree(root);
root ==NULL;

return 0;

}





