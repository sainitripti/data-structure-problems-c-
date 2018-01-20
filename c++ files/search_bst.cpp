#include<iostream>

using namespace std;

struct node
{ int data;
  struct node *right,*left;
};

struct node* insert(int data)
{ struct node* temp=new(struct node);
  temp->data=data;
  temp->left=NULL;
  temp->right=NULL;
  return temp;
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

struct node* search(struct node* node,int item)
{  if(node==NULL)
    { cout<<" Not found";
      return node;
    }
   if(node->data==item)
   return node;
  if(item<node->data)
   return search(node->left,item);
  else return search(node->right,item);
}

int main(void)
{ struct node* root=NULL;
  root=insert(30);
  root->left=insert(10);
  root->right=insert(40);
  root->left->right=insert(20);
  root->right->right=insert(50);
  cout<<"Inorder traversal: \n";
  inorder(root);
  cout<<"\n";
  struct node* node=search(root,30);
  if(node!=NULL)
   cout<<node->data;
  node=search(root,25);
  if(node!=NULL)
   cout<<node->data;
  cout<<"\n";
  return 0;
}
