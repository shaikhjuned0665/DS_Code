#include<iostream>
using namespace std;

int adj[10][10], visited[10], n;

// DFS : visit all cities reachable from city visited(v)
void dfs(int v)
{
 visited[v] = 1;
 for(int i=0; i<n; i++)
       if( adj[v][i] == 1 && !visited[i])
            dfs(i);
}

int main()
{
 int e, a, b;
 cout<< "\n Enter number of cities: ";
 cin>> n;
 cout<< "\n Enter number of flights: ";
 cin>> e;

// Input flights (two way)
for(int i=0; i<e; i++)
 {
  cout<< "\n Flight " << i+1<< " between cities (a b): ";
  cin >> a >> b;
  adj[a][b] = adj[b][a] =1; 
 }

// Dislay adjacency matrix
cout<< "\n Adjacency Matrix:\n ";

for(int j=0; j<n; j++)
      cout<< j << "  ";
cout<< endl;
for(int i=0; i<n; i++)
 {
   cout<< i << " : ";
   for(int j=0; j<n; j++)
         cout<< adj[i][j] << "  ";
   cout<< endl;
 }

// check connectivity
dfs(0);
int connected = 1;
for(int i=0; i<n; i++)
      if(!visited[i])
              connected = 0;

if(connected)
       cout<< "\n Graph is CONNECTED\n ";
else
       cout<< "\n Graph is NOT connected\n ";

return 0;

}



















