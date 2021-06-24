#include<bits/stdc++.h>
using namespace std;
struct tree
{
int data;
struct tree *left;
struct tree *right;
};
tree *create(int data)
{
tree *temp;
temp=(struct tree *)malloc(sizeof(struct tree));
temp->data=data;
temp->left=NULL;
temp->right=NULL;
return temp;
}
tree *insert1(struct tree *root,int data)
{
struct tree *temp=root,*p=create(data),*pre;
if(root==NULL)
{
root=p;
}
else
{
while(temp!=NULL)
{
 //cout<<21<<endl;
pre=temp;
if(temp->data<p->data)
temp=temp->right;
else if(temp->data>p->data)
temp=temp->left;
else
{
free(p);
return root;
}
}
if(pre->data>p->data)
    pre->left=p;
else
    pre->right=p;

}
 //cout<<21<<endl;
return root;
}
void inorder(struct tree *root)
{
if(root!=NULL)
{
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}
}
void preorder(struct tree *root)
{
if(root!=NULL)
{
cout<<root->data<<" ";
preorder(root->left);

preorder(root->right);
}
}
void postorder(struct tree *root)
{
if(root!=NULL)
{
postorder(root->left);
postorder(root->right);
cout<<root->data<<" ";

}
}

void small(struct tree *root)
{
    tree *temp;
    if(root!=NULL)
    {
        while(root!=NULL)
        {
            temp=root;
         root=root->left;
        }
    }
    else
       cout<<"NULL"<<endl;
    cout<<temp->data<<endl;
}
void large(struct tree *root)
{
    tree *temp;
    if(root!=NULL)
    {
        while(root!=NULL)
        {
            temp=root;
         root=root->right;
        }
    }
    else
       cout<<"NULL"<<endl;
    cout<<temp->data<<endl;
}

void searchh(struct tree *root,int data)
{
    struct tree *temp,*pre;
    //cout<<data<<endl;
    if(root==NULL)
       cout<<"NULL"<<endl;
    else
    {
     temp=root;
     while(temp!=NULL && temp->data!=data)
     {
            pre=temp;
         if(data>temp->data)
            temp=temp->right;
         else
            temp=temp->left;
     }
     if(temp==NULL)
        cout<<"NOT FOUND"<<endl;

     else
        cout<<"FOUND"<<endl;
    }
}
int c=0;
int leaf(tree *root)
{
  tree *temp,*pre;
  if(root!=NULL)
  {
  leaf(root->left);
  leaf(root->right);
  if(root->left==NULL && root->right==NULL)
        c++;
  }
  return c;
}
int c1=0;
int height(tree *root)
{
  tree *temp,*pre;
  if(root==NULL)
    return 0;
  else
  {
  int lh=height(root->left);
  int rh=height(root->right);
  if(lh>rh)
    c1=lh+1;
  else
    c1=rh+1;
  }
  return c1;
}
 int c2=0;
int nodes(struct tree *root)
{
  struct tree *temp,*pre;

  if(root!=NULL)
  {
  nodes(root->left);
          c2++;
  nodes(root->right);

  }
  return c2;
}
int c3=0;
int sum(struct tree *root)
{
    if(root!=NULL)
    {
        sum(root->left);
        c3=c3+root->data;
        sum(root->right);
    }
    return c3;
}

void print(tree * root)
{
    if(root!=NULL)
    {
        print(root->left);
        if(root->left==NULL && root->right==NULL)
        cout<<root->data<<" ";
        print(root->right);
    }
}

tree *delete1(tree *root,int data)
{
tree *temp,*pre;
if(root==NULL)
return root;
else
{
  temp=root;
  while(temp!=NULL && temp->data!=data)
  {
      pre=temp;
      if(temp->data>data)
        temp=temp->left;
      else
        temp=temp->right;
  }
  if(temp==NULL)
    return root;
  else if(temp->left==NULL && temp->right==NULL)
  {
      if(temp==root)
        return NULL;
      else if(pre->left==temp)
        pre->left=NULL;
      else
        pre->right=NULL;
      free(temp);
  }
   else if((temp->left==NULL && temp->right!=NULL)||temp->left!=NULL && temp->right==NULL)
   {
       if(temp==root)
       {
           if(temp->right!=NULL)
            root=temp->right;
           else
             root=temp->left;
       }
       else if(pre->left==temp)
       {
           if(temp->right!=NULL)
            pre->left=temp->right;
           else
            pre->left=temp->left;
       }
        else if(pre->right==temp)
       {
           if(temp->right!=NULL)
            pre->right=temp->right;
           else
            pre->right=temp->left;
       }
       free(temp);
   }
   else
{
    struct tree *temp1=temp->left;
    struct tree *temp2=temp->right;
    struct tree *temp3=NULL;
    struct tree *temp4=NULL;
    temp3=temp->right;
    while(temp3->left!=NULL)
    {
        temp4=temp3;
        temp3=temp3->left;
    }
    if(temp4!=NULL)
        temp4->left=temp3->right;
    if(temp3!=temp2)
        temp3->right=temp2;
    temp3->left=temp1;
    if(temp==root)
    root=temp3;
    else if(pre->right==temp)
        pre->right=temp3;
    else if(pre->left==temp)
        pre->left=temp3;
    free(temp);
}
return root;
};

}

int main()
{
struct tree *root=NULL;
while(1)
{
    int x,data,y,y1,y2,y3,y4;
    cout<<"1. Insert"<<endl<<"2. Inorder"<<endl<<"3. preorder"<<endl<<"4.postorder"<<endl<<"5.exit"<<endl<<"6.Smallest"<<endl<<"7.Largest"<<endl<<"8.search"<<endl<<"9.leaf nodes"<<endl<<"10.height"<<endl<<"11.total nodes"<<endl<<"12.Edges"<<endl<<"13.sum"<<endl<<"14.print leaf"<<endl<<"15.delete node"<<endl;
    cin>>x;
    c=c1=c2=c3=0;
    switch(x){
case 1:cout<<"enter data\n";
       cin>>data;
       root=insert1(root,data);
       break;
case 2:inorder(root);
        cout<<endl;
        break;
case 3:preorder(root);
       cout<<endl;
        break;
case 4:postorder(root);
        cout<<endl;
        break;
case 5:exit(0);
case 6:small(root);
        break;
case 7:large(root);
        break;
case 8:cout<<"enter data\n";
       cin>>data;
       searchh(root,data);
        break;
case 9:y=leaf(root);
        cout<<y<<endl;
        break;
case 10:y1=height(root);
        cout<<y1<<endl;
        break;
case 11:y2=nodes(root);
        cout<<y2<<endl;
        break;
case 12:y3=nodes(root);
        cout<<y3-1<<endl;
        break;
case 13:y4=sum(root);
        cout<<y4<<endl;
        break;
case 14:print(root);
        cout<<endl;
        break;
case 15:cout<<"enter data\n";
        cin>>data;
        delete1(root,data);
        break;


default :cout<<"Wrong slelection"<<endl;
         break;
    }
}
return 0;
}
