#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int* arr;
};
//FUNCTION TO CHECK IF FULL
void isFull(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        cout<<"full"<<endl;
    }
};
//FUNCTION TO CHECK IF EMPTY 
void isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        cout<<"empty"<<endl;
    }
};
//FUNCTION TO PUSH ELEMENT 
void push(struct stack* ptr, int val){
    if(ptr->top == ptr->size-1){
      cout<<"no more elements can be added"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]= val;

    }
};
// FUNCTION TO PRINT ELEMENTS
void display(struct stack* ptr){
    int i = 0;

   while(i <= ptr->top){
    cout<<ptr->arr[i]<<" ";
    i++;
   }

};

int main(){
stack* st = new stack;
st->size = 4;
st->top = -1;
st->arr = new int[4]; //dynamic allocation

//   if(st->top==-1){
//     cout<<"underflow"<<endl; 

//   }
//   if(st->top == st->size-1){
//     cout<<"overflow"<<endl;

//   }

//   isEmpty(st);
//   isFull(st);
  push(st, 7) ;
  push(st, 9);
  push(st, 10);

  display(st);
 
return 0;

}