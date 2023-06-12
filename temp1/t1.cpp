#include <bits/stdc++.h>
using namespace std;

class myStack{
private:
    int *arr;
    int top;
    int size;
public:
    myStack(int s){
        size = s;
        top = -1;
        arr = new int[s];
    }
    void push(int x){
        if(top == size - 1){
            cout << "OverFlow" << endl;
            return;
        }else{
            top++;
            arr[top] = x;
        }
    }

    int pop(){
        if(top < 0){
            cout << "Underflow" << endl;
            return -1;
        }else{
            int x = arr[top];
            top--;
            return x;
        }
    }
    int Top(){
        if(top < 0){
            cout << "Underflow" << endl; 
            return -1;
        }else{
            return arr[top];
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }


};

int main() {
    myStack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.Top() << endl;
    cout << s.isEmpty() << endl;



    return 0;
}
