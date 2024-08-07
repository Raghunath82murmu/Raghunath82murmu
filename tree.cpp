#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node* newnode( int data)
{
    node *temp = new node();
    temp-> data = data;
    temp-> left = NULL;
    temp-> right = NULL;
    return temp;
     /*        1
            /     \
            2      3
        /      \   / \
        4       N  N   5
          \
          66   */     
}
void printnode(node *n)
{
    while(n != NULL)
    {
        cout<<n->data<<" ";
        n = n->left;
        cout<<endl;
    }
}
int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->right->right = newnode(5);
    root->left->left->right = newnode(66);
    printnode(root);
    return 0;
}