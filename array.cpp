#include<iostream>
using namespace std;
int main()
{
int a[50], n, ch, pos, val, i;
cout <<"Enter size:";
cin>>n;
cout<<"Enter Elements:";
for(i=0; i<n; i++) cin>> a[i];

do
{
  cout<<"\n1.Insert 2.Delete 3.Search 4.Update 5.Display 6.Exit\n";
 cout<<"Enter Your Choice:";
 cin>>ch;
 
 if(ch==0 && ch>6)
 cout<<"Invalid Choice ";
 
 if(ch == 1)
 {
   cout<<"Enter Position ( 1 - "<< n + 1 << " ) and value: ";
   cin>>pos>>val;
   for(i=n; i>=pos; i--)
        a[i]= a[i - 1];
   a[pos -1 ] = val;
   n++;
  }
  else if(ch == 2)
  {
   cout<<"Enter Position to Delete:";
   cin>>pos;
   for(i = pos-1; i < n-1; i++)
        a[i] = a[i+1];
   n--;
   }
  else if( ch == 3)
  {
   cout<<"Enter a value to search: ";
   cin>>val;
   
   int found=0;
   for(i=0; i<n; i++)
        if(a[i] == val)
        {
         cout<<val<<" found at position "<< i+1 <<endl;
         found=1;
         break;
         }
   if(!found)
      cout<<"not found\n";
   }
   else if(ch == 4)
   {
    cout<<"Enter position and new value:";
    cin>> pos >> val;
    a[pos -1] = val;
 
    }
    else if(ch == 5)
    {
     for(i=0; i<n; i++)  cout<< a[i] <<" ";
     cout<<endl;
     }
     
}while(ch != 6);

return 0;
}