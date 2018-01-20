#include<iostream>
#include<cstdlib>

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

struct node* min(struct node *node)
{ struct node* temp=node;
  while(temp->left!=NULL)
    temp=temp->left;
  return temp;
}

struct node* deletion(struct node* root,int item)
{ if(root==NULL)
   return root;
  if(item<root->data)
   root->left=deletion(root->left,item);
  else if(item>root->data)
   root->right=deletion(root->right,item);
  else
  { if(root->left==NULL)
    { struct node* temp=root->right;
      free(root);
      return temp;
    }
    else if(root->right==NULL)
    { struct node* temp=root->left;
      free(root);
      return temp;
    }
    
   struct node* temp=min(root->right);
   root->data=temp->data;
   root->right=deletion(root->right,temp->data);
  }
  return root;
}

int main(void)
{ struct node* root=NULL;
  root=insert(root,30);
  insert(root,10);
  insert(root,40);
  insert(root,20);
  insert(root,50);
  cout<<"Inorder traversal: \n";
  inorder(root);
  cout<<"\n Delete 20\n";
  root=deletion(root,20);
  cout<<"Inorder traversal: \n";
  inorder(root);
  cout<<"\n Delete 50\n";
  root=deletion(root,50);
  cout<<"Inorder traversal: \n";
  inorder(root);
  cout<<"\n";
  return 0;
}

