#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
int n, s;
int roll[20], marks[20][10];

cout<<"Enter no of students:";
cin>>n;
cout<<"Enter no of subjects:";
cin>>s;

//1&2 Input roll no and marks
for(int i=0; i<n; i++)
{
 cout<<"\nEnter roll no of student "<< i+1 <<" :";
 cin>>roll[i];
 for(int j=0; j<s; j++)
 {
  cout<<" Marks in subject "<< j+1 <<" : ";
  cin>> marks[i][j];
  }
 }

//3&4 Display marks table with total of each student
 cout<<"\n"<< setw(8) << "Roll";
 for(int j=0; j<s; j++)
      cout<< setw(8) << "Sub" + to_string(j + 1); 
 cout<< setw(8) << "Total" << endl;

 for(int i=0; i<n; i++)
 {
  int total=0;
  cout<< setw(8) <<  roll[i];
  for(int j=0; j<s; j++)
  {
    cout<< setw(8) << marks[i][j];
    total += marks[i][j];
   }
   cout<< setw(8) << total << endl;
 }

//5. Avg of each student
cout<< setw(8) <<" Avg";
for(int j=0; j<s; j++)
{
 float sum=0;
 for(int i=0; i<n; i++)
     sum += marks[i][j];
 cout<< setw(8) << fixed << setprecision(1) << sum / n;
  
 }  
 cout<< endl;

 return 0;

}













