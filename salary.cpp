#include <iostream>
using namespace std;

// Selection sort (ascending order)
void selectionSort(int a[], int n)
{
 for( int i=0; i<n-1; i++)
{
 int min = i;
 for( int j = i+1; j<n; j++)
 {
  if( a[j] < a[min])
      min = j;
  }
  int temp = a[i];
  a[i] = a[min];
  a[min] = temp;
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
 
selectionSort(sal, n);

cout<< "\nSalaries in ascending order:\n ";
for( int i=0; i<n; i++)
      cout<< sal[i] << "\t";

cout<< "\n\nTop 5 highest salaries:\n";
int count = 0;
for( int i = n-1; i>= 0 && count < 5; i--)
{
 cout<<sal[i]<< endl;
 count++;
}
return 0;
}










