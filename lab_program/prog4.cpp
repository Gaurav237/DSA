#include<bits/stdc++.h>
using namespace std;
vector<int> v;
/* A Binary Tree node */
class TNode
{
    public:
    int data;
    TNode* left;
    TNode* right;
};
 
TNode* newNode(int data);
 
TNode* sortedArrayToBST(vector<int> arr,int start, int end)
{
 
    if (start > end)
    return NULL;
 
    int mid = (start + end)/2;
    TNode *root = newNode(arr[mid]);
 
    root->left = sortedArrayToBST(arr, start,mid - 1);
    root->right = sortedArrayToBST(arr, mid + 1, end);
    return root;
}
 
TNode* newNode(int data)
{
    TNode* node = new TNode();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return node;
}
void printLeafNodes(TNode *root)
{
 
    if (!root)
        return;
 
    if (!root->left && !root->right)
    {
        v.push_back(root->data);
        cout << root->data << " ";
 
        return;
    }
 
    if (root->left){
        printLeafNodes(root->left);
    }
 
    if (root->right){
        printLeafNodes(root->right);
    }
}
 
int main(){
    int n;
    cout << "Enter no. of nodes : " << endl;
    cin >> n;
    vector <int>arr;
    cout << "Enter key Elements : " << endl;
    for(int i = 0; i < n; i++){
        int elem;
        cin >> elem;
        arr.push_back(elem);
    }

    sort(arr.begin(), arr.end());
    TNode *test = sortedArrayToBST(arr, 0, n - 1);
    cout << "the external nodes are" << endl;
    printLeafNodes(test);
    cout << endl;
    cout << "the internal nodes are" << endl;
    for(int i = 0 ; i < n; i++){
                int temp = arr[i];
                int s = 0;
        for(int j = 0 ; j < v.size(); j++){
            if(temp == v[j]){
                s = -1;
                break;
            }
        }
        if(s != -1){
            cout << temp << " ";
        }
    }
    }
