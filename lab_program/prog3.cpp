#include <bits/stdc++.h>
using namespace std;


struct Node{
    string key;
    Node* left;
    Node* right;
    Node(string k){
        key = k;
        left = right = nullptr;
    }
};

// this function calculates nearest greater value of the NON_LEAF Node which is to be deleted.
Node* getSuccessor(Node* curr){
    curr = curr->right;
    while(curr != NULL && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

Node* DeleteNode(Node* root, string x){
    if(root == NULL){
        return NULL;
    }

    if(root->key > x){
        root->left = DeleteNode(root->left, x);
    }else if(root->key < x){
        root->right = DeleteNode(root->right, x);
    }else{   // (root->key == x)
        if(root->left == NULL){ // this also consider the case for LEAF Node deletion.
            Node* temp = root->right;
            delete root;
            return temp;
        }else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }else{ // if node we are deleting is NON_LEAF Node
            Node* succ = getSuccessor(root);
            root->key = succ->key;
            root->right = DeleteNode(root->right, succ->key);
        }
    }
    return root;
}

void LevelOrder(Node *root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size() > 1){
        Node* curr = q.front();
        q.pop();
        if(curr == NULL){
            cout << "\n";
            q.push(NULL);
            continue;
        }
        cout << curr->key << " ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}


// Iterative
// Time Complexity => O(h)
// Auxiliary Space => O(1)
bool insert(Node* root, string st) {
    // this is when NO Binary Tree has been created, so (root == NULL)
    if(root == NULL){
        Node* temp = new Node(st);
        root = temp;
    } // ...

    Node *leafNode = NULL;
    while (root != NULL) {
        leafNode = root;
        if (root->key == st) {
            return false;
        }else if (root->key > st) {
            root = root->left;
        }else {
            root = root->right;
        }
    }
    // root ==  NULL
    Node *temp = new Node(st);
    if (leafNode->key > st) {
        leafNode->left = temp;
    }else{
        leafNode->right = temp;
    }

    return true;
}


int main() {

    // cout << "Enter 5 array elements" << endl;
    // int arr[5];
    // for(int i = 0; i < 5; i++){
    //     cin >> arr[i];
    // }

    Node* root = new Node("a");
    Node* t1 = new Node("c");
    Node* t2 = new Node("e");
    Node* t3 = new Node("g");
    Node* t4 = new Node("i");
    Node* t5 = new Node("k");
//    Node* t6 = new Node(16);
    root->left = t1;
    root->left->left = t2;
    root->right = t3;
    root->right->left = t4;
    root->right->right = t5;
//    root->right->left->left = t6;

    // string s = "b";
    // cin >> s;

   LevelOrder(root);
    // cout << boolalpha << insert(root, "d") << endl;
    // insert(root, "b");
    // LevelOrder(root);

    // DeleteNode(root,"i");
    // LevelOrder(root);

    return 0;
}
