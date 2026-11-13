#include <iostream>
using namespace std;

// Bubble sort (ascending order)
void bubbleSort(int a[], int n)
{
 for( int i=0; i<n-1; i++)
{
  for( int j = 0; j < n-i-1; j++)
  {
    if( a[j]  > a[j + 1])
    {
     int temp = a[j];
     a[j] = a[j+1]; 
     a[j+1] = temp; 
    }       
   }
 }
}
int main()
{
 int n;
 int sal[100];
 cout<< "Enter number of employees: ";
 cin>> n;

cout<< "Enter salaries: \n";
for(int i=0; i<n; i++ )
      cin>> sal[i];
 
bubbleSort(sal, n);

cout<< "\nSalaries in ascending order:\n ";
for( int i=0; i<n; i++)
      cout<< sal[i] << "\t";

cout<< "\n\nTop 5 highest salaries:\n";
int count = 1;
for( int i = n-1; i >= 0 && count <=5; i--, count ++)
        cout<< count << ". " << sal[i] << endl;
return 0;
}










