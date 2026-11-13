#include<iostream>
#include<algorithm>
using namespace std;

// Linear search: works on any list
int linearSearch(int a[], int n, int key, int &count)
{
 count = 0;
 for(int i=0; i<n ; i++)
 {
  count ++;
  if(a[i] == key)
        return i;
  }
  return -1;
}

//Binary search: works only on Sorted list
int binarySearch(int a[], int n, int key, int &count)
{
 int low = 0, high = n-1;
 count = 0;
 while(low <= high)
 {
  int mid =(low + high) / 2;
  count ++;
  if(a[mid] == key)
        return mid;
  else if (a[mid] < key)
         low = mid+1;
  else
         high = mid -1;
  }
  return -1;
}

int main()
{
 int n, key, c1, c2;
 int id[100];

 cout<<"Enter number of customers: ";
 cin>> n;
 cout<<"Enter customer account IDs:\n ";
 for(int i=0; i<n; i++)
       cin>> id[i];

 cout<<"Enter account ID to search: ";
 cin>>key;

//Linear search for the original
int r1= linearSearch (id, n, key, c2);
cout<<" \nLinear Search: ";
if(r1 == -1) cout<<"Not found";
else cout<<" Found at position "<< r1 + 1;
cout<<"| comparisons = "<< c1 <<endl;

//Sort first, then binary search
sort(id , id + n);
int r2 = binarySearch(id, n, key, c2);
cout<<"Binary Search: ";
if(r2 == -1) cout<< "Not Found";
else cout<<" Found at position "<<  r2 + 1 <<" (in sorted list)";
cout<<" | comparisons = "<< c2 <<endl;

return 0;
}






