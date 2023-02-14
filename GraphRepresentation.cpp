#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    
    int n, m;
    cin>>n>>m;
    //Using Adjacent Matrix to represent the Undirected Graph 
    int a[n+1][m+1]; // Declaring adjacent matrix for storing graph
    for(int i=0;m>i;i++)
    {
        int u, v;
        cin >> u >> v;
        
        a[u][v] = 1; 
        a[v][u] = 1; 

    }
    /* 
    Time and Space Complexity when we use Adajacent Matrix to represent Unidirected Graph.    
    T(N) = O(N)
    S(N) = O(N)^2 
    */
    
    
    //Using Adjacent List to represent the Undirected Graph    
    vector<int> vec[n+1];
    
    for(int i=0;m>i;i++)
    {
        int u, v;
        cin >> u >> v;
        
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    /* 
    Time and Space Complexity when we use Adajacent List to represent Unidirected Graph.    
    T(N) = O(N)
    S(N) = O(2E)  Twice the number of edges,Since each edge is connected to tow Nodes
    */
    
    
    
    
    return 0;
}
 