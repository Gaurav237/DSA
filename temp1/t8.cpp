#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = nullptr;
    }
};

class myStackLL{
private:
    Node* head;
    Node* tail;
    int size;
public:
    myStackLL(){
        head = tail = nullptr;
        size = 0;
    }

    void push(int x){
        Node* temp = new Node(x);
        size++;
        if(head == nullptr){
            head = temp;
            tail == temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }

    int pop(){
        if(head = nullptr){
            cout << "Underflow" << endl;
            return -1;
        }
        size--;
        Node* curr = head;
        while(curr->next != tail){
            curr = curr->next;
        }

        delete tail;
        tail = curr;
    }

    bool isEmpty(){
        if(size == 0){
            return true;
        }else{
            return false;
        }
    }
    
    int stackSize(){
        return size;
    }

};

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    myStackLL s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);


    return 0;
}
