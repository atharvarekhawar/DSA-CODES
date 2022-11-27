
#include <bits/stdc++.h>
#include <list>
#include <unordered_map>
#include <queue>
#include <vector>
using namespace std;
/*class node//adjacent list graph using nodes.
{
    public:
    string name;
    list<string>nbrs;


    node(string name)
    {
        this->name=name;
    }

};
class graph
{
    unordered_map<string,node*>m;
public:

    graph(vector<string>cities)
    {
        for(auto city : cities)
        {
            m[city]=new node (city);
        }
    }

    void addedge(string x,string y,bool undir=true)
    {
        m[x]->nbrs.push_back(y);
        if(undir)
        {
           m[y]->nbrs.push_back(x);
        }
  }

  void printlist()
  {
      for(auto citypair:m)
       {
        auto city=citypair.first;
        node*n=citypair.second;
        cout<<city<<" -> ";
       for(auto nbr : n->nbrs)
        {
           cout<<nbr<<" , " ;
        }
        cout<<endl;
       }

  }

};*/
class graph
{
    int V;//nodes
    list <int> *l;//points to array of lists

    public:

        graph(int v)
        {
            V=v;
            l=new list<int>[V];//dynamic memory  allocation is done and v number of lists are created in array.
        }

        void addedge(int i,int j,bool undir=true)
        {
            l[i].push_back(j);

            if(undir)
            {
                l[j].push_back(i);
            }
        }

        void printlist()
        {
            for(int i=0;i<V;i++)
            {
                cout<<i<<"-->";
                for(auto node : l[i])
                {
                    cout<<node<<", ";
                }
                cout<<endl;
            }
        }

        void bfs(int source)
        {
            queue<int>q;
            bool *visited=new bool [V]{0};
            q.push(source);
            visited[source]=true;

            while (!q.empty())
            {
                int f=q.front();
                cout<<f<<",";
                q.pop();

                for(auto nbr : l[f])
                {
                   if(!visited[nbr])
                    {
                     q.push(nbr);
                     visited[nbr]=true;
                    }
                }
            }


        }

        void dfshelper(int node,bool *visited)
        {
            visited[node]=true;
            cout<<node<<",";

            for(int nbr:l[node])
            {
                if(!visited[nbr])
                {
                    dfshelper(nbr,visited);
                }
            }
            return;

        }

        void dfs(int source)
        {
            bool *visited= new bool [V]{0};
            dfshelper(source,visited);

        }

        void topological_sort()//Kahn's algorithm (using same logic as breadth first search)
        {
            vector<int>indegree(V,0); // indegree vector will store the number of dependencies for a particular node.

            for(int i=0;i<V;i++)
            {
                for(auto nbr : l[i])
                {
                    indegree[nbr]++;
                }
            }

            queue<int>q;
            for(int i=0;i<V;i++)
            {
                if(indegree[i]==0)
                {
                    q.push(i);
                }
            }

            while(!q.empty())
            {
                int node=q.front();
                cout<<node<<"  ";
                q.pop();

                for(auto nbr : l[node])
                {
                    indegree[nbr]--;
                    if(indegree[nbr]==0)
                    {
                        q.push(nbr);
                    }

                }

            }

        }



};
int main()
{
   graph g(7);

   g.addedge(0,1);
   g.addedge(0,4);
   g.addedge(2,1);
   g.addedge(2,3);
   g.addedge(3,4);
   g.addedge(4,5);
   g.addedge(5,3);
   g.addedge(5,6);

   g.bfs(1);
   cout<<endl;
   g.dfs(1);

 /*  graph g(6);  // input for kahn's algorithm

  g.addedge(0,2,false);
   g.addedge(2,3,false);
    g.addedge(3,5,false);
     g.addedge(4,5,false);
      g.addedge(1,4,false);
       g.addedge(1,2,false);

       g.topological_sort();*/



  /* vector<string>cities={"delhi","london","paris","new york"};//input for graph using node class
   graph g(cities);

   g.addedge("delhi","london");
   g.addedge("new york","london");
   g.addedge("delhi","paris");
   g.addedge("paris","new york");

   g.printlist();*/


    return 0;
}
