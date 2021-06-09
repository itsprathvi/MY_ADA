/*
#include<iostream>
#include <list>
using namespace std;

class Graph
{
    int V; 
    list<int> *adj;   
public:
    Graph(int V){
        this->V = V;
        adj = new list<int>[V];
    }
    void addEdge(int v, int w);
    void BFS(int s);  
};
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::BFS(int s)
{
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    list<int> queue;
    visited[s] = true;

    queue.push_back(s);

    list<int>::iterator i;

    while(!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }

        }

    }
}

int main()
{
    int n,m;
    cout<<"Enter the Number of Vertices : ";
    cin>>n;
    Graph g(n);

    cout<<"Enter the number of Edges : ";
    cin>>m;
    int arr[m][2];
    for(int i=0;i<m;i++)
    {
        cin>>arr[m][0];
        int p = arr[m][0];
        cin>>arr[m][1];
        int q = arr[m][1];
        g.addEdge(p, q);
    }
    cout << "Breadth first traversal : ";
    g.BFS(0);
    cout<<endl;
    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;
#define N 100

bool bfs(int n, int v, bool visit[N], int array[N][N])
{
    visit[v] = true;
    bool flag = false;
    cout << "Path = " << v << " ";
    queue<int> path;
    path.push(v);
    while (!path.empty())
    {
        for (int w = 0; w < n; w++)
        {
            if ((array[v][w] >= 0) && (!visit[w]))
            {
                visit[w] = true;
                flag = true;
                cout << " " << w;
                path.push(w);
            }
            v = path.front();
            path.pop();
        }
    }
    cout << endl;
    return flag;
}

// bool dfs(int n, int v,bool visit[N], int adj[N][N])
// {
//     stack<int> path;
//     bool flag = false;
//     int w;
//     visit[v] = true;
//     path.push(v);
//     while(!path.empty())
//     {
//         v = path.top();
//         path.pop();
//         for(w = 1; w <= n; w++)
//         {
//             if((adj[v][w] >= 1) && (!visit[w]))
//             {
//                 visit[w] = true;
//                 flag = true;
//                 cout << " " << w;
//                 path.push(w);
//             }
//         }
//     }
//     return flag;

// }

int main()
{
    int i, j, n, v;
    bool visit[N];
    int array[N][N];
    cout << "Enter no of vertex : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> array[i][j];
        }
    }
    cout << "Enter starting vertex : ";
    cin >> v;
    for (i = 0; i < n; i++)
    {
        visit[i] = false;
    }

    if (bfs(n, v, visit, array))
    {
        cout << "Reachable from vertex : " << v << endl;
    }
    else
    {
        cout << "Not Reachable from vertex : " << endl;
    }

    /* if(dfs(n,v,visit,array)){
        cout<<"Reachable from vertex : "<<v<<endl;
    }
    else{
        cout<<"Not Reachable from vertex : "<<endl;
    }
    */
    return 0;
}