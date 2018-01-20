#include<iostream>
using namespace std;

struct adjlistnode
{ int dest;
  struct adjlistnode* next;
};

struct adjlist
{ struct adjlistnode* head;
};

struct graph
{ int V;
  struct adjlist* array;
};

struct adjlistnode* createnode(int dest)
{
  struct adjlistnode* newnode=new(adjlistnode);
  newnode->dest=dest;
  newnode->next=NULL;
  return newnode;
}

struct graph* creategraph(int V)
{ 
  struct graph* newgraph=new(graph);
  newgraph->V=V;
  newgraph->array=new(struct adjlist[V]);

  for(int i=0;i<V;++i)
     newgraph->array[i].head=NULL;
  
  return newgraph;
}

void addedge(struct graph* Graph,int src,int dest)
{ 
   struct adjlistnode* newnode=createnode(dest);
   newnode->next=Graph->array[src].head;
   Graph->array[src].head=newnode;
  
   newnode=createnode(src);
   newnode->next=Graph->array[dest].head;
   Graph->array[dest].head=newnode;
}

void printgraph(struct graph* Graph)
{ 
  for(int i=0;i<Graph->V;++i)
  { 
    cout<<"\n Vertex "<<i<<": \n head";
    struct adjlistnode* pcrawl=Graph->array[i].head;
    while(pcrawl!=NULL)
    { cout<<" -> "<<pcrawl->dest;
      pcrawl=pcrawl->next;
    }
  }
}

int main(void)
{
 int V=5;
 struct graph* g=new(graph);
 g=creategraph(V);
 addedge(g,0,1);
 addedge(g,0,4);
 addedge(g,1,2);
 addedge(g,1,3);
 addedge(g,1,4);
 addedge(g,2,3);
 addedge(g,3,4);

 printgraph(g);
 cout<<"\n";

 return 0;
}
