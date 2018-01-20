#include<iostream>

using namespace std;

struct node
{ int data;
  struct node *right,*left;
};

struct node* newnode(int data)
{ struct node* temp=new(struct node);
  temp->data=data;
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}

struct node* insert(struct node* node,int data)
{
  if(node==NULL)
   return newnode(data);
  else 
  { if(node->data>data)
     node->left=insert(node->left,data);
    else if(node->data<data)
     node->right=insert(node->right,data);
  }
  return node;
}

 void inorder(struct node* node)
{ if(node==NULL)
   return;
  else
  { inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
  }
}

int main(void)
{ struct node* root=NULL;
  root=insert(root,50);
  insert(root,10);
  insert(root,40);
  insert(root,20);
  insert(root,30);
  cout<<"Inorder traversal: \n";
  inorder(root);
  cout<<"\n";
  return 0;
}

