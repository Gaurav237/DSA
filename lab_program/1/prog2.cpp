#include <bits/stdc++.h>
using namespace std;

struct node{
    char data;
    node* left;
    node* right;
};

node* newnode(char val){
    node* Node = new node();
    Node->data = val;
    Node-> left = NULL;
    Node-> right = NULL;

    return (Node);
}

int search(char arr[], int start, int end, char value){
    for(int i = start; i <= end; i++){
        if(arr[i] == value){
            return i;
        }
    }
    return -1;
}

node* buildTree(char in[], char pre[], int inStrt, int inEnd)
{
    static int preIndex = 0;
 
    if (inStrt > inEnd)
        return NULL;

    node* tNode = newnode(pre[preIndex++]);
 
    if (inStrt == inEnd)
        return tNode;
 
    int inIndex = search(in, inStrt, inEnd, tNode->data);
 
    
    tNode->left = buildTree(in, pre, inStrt, inIndex - 1);
    tNode->right = buildTree(in, pre, inIndex + 1, inEnd);
 
    return tNode;
}
int height(node* node)
{
    if (node == NULL)
        return 0;
    else {
        
        int lheight = height(node->left);
        int rheight = height(node->right);
 
        
        if (lheight > rheight) {
            return (lheight + 1);
        }
        else {
            return (rheight + 1);
        }
    }
}

void printGivenLevel(struct node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1) {
        printGivenLevel(root->left, level - 1);
        printGivenLevel(root->right, level - 1);
    }
}

void printLevelOrder(struct node* root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++) {
        cout << "level: " << i - 1 << " "; 
        printGivenLevel(root, i);
        printf("\n");
    }
}

node* buildUtil(char in[], char post[], int inStrt,int inEnd, int* pIndex)
{

    if (inStrt > inEnd)
        return NULL;
 
    node* node = newnode(post[*pIndex]);
    (*pIndex)--;
 
    if (inStrt == inEnd)
        return node;
 
    int iIndex = search(in, inStrt, inEnd, node->data);
    node->right = buildUtil(in, post, iIndex + 1, inEnd, pIndex);
    node->left = buildUtil(in, post, inStrt, iIndex - 1, pIndex);
 
    return node;
}
 
node* buildTree(char in[], char post[], int n)
{
    int pIndex = n - 1;
    return buildUtil(in, post, 0, n - 1, &pIndex);
}

int main(){
    int len;
    cout << "length of the sequence" << endl;
    cin >> len;
    char inord[len];
    char preord[len];
    cout << "enter the inorder traversal" << endl;
    for(int i = 0 ; i < len ; i++){
        cin >> inord[i];
    }
    cout << "enter the preorder traversal" << endl;
    for(int i = 0 ; i < len; i++){
        cin >> preord[i];
    }
    node *root = buildTree(inord, preord, 0, len - 1);
   
   printLevelOrder(root);
    

/*    char inord[len] ;
    char postord[len];
    cout << "enter the inorder traversal" << endl;
    for(int i = 0 ; i < len ; i++){
        cin >> inord[i];
    }
    cout << "enter the postrder traversal" << endl;
    for(int i = 0 ; i < len; i++){
        cin >> postord[i];
    }
    node* root = buildTree(inord, postord, len);
    printLevelOrder(root);

  */
  
}