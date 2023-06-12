 #include <bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;

    Node(int k){
        key = k;
        left = right = nullptr;
    }
};

void LevelOrder(Node *root){

    // Base Case
    if (root == NULL){
        return;
    }   

    // Create an empty queue
    queue<Node*> q;
    // push root
    q.push(root);


    while(!q.empty()){

        // Print front of queue and remove it from queue
        Node* curr = q.front();
        q.pop();
        cout << curr->key << " ";

        /* push left child */
        if(curr->left != NULL){
            q.push(curr->left);
        }
        /* push right child */
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(15);
    root->right = new Node(20);
    root->left->left = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->left->left = new Node(60);
    root->right->left->right = new Node(70);

    LevelOrder(root);

    /*
     *             10
     *      15            20
     *   30    N       40      50
     *  N  N         60  70   N  N
     */

    return 0;
}
