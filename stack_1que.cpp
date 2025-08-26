// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define MAX 5  //using global variable
int stack[MAX];
int top=-1;
 void insert(int x){
     if(top>=MAX-1){
         cout<<"stack overflow condition";
     }
     else{
        stack[++top]=x;
        cout<<"pushed or insert successfully";
     }
     
     
 }
 void pop(){
     if(top==-1){//we use -1 as 0 is an index there can be element at 0 index also
         cout<<"\nstack underflow condition";
     }
     else{
         cout<<endl<<stack[top--]<<" removed";
         
     }
 }
 void isEmpty(){
     if (top==-1){
         cout<<endl<<"Stack is empty";
     }
     else{
         cout<<"\nstack is not empty";
     }
     
     
 }
 void isFull(){
     if(top==MAX-1){
         cout<<"";
     }
     else{
         cout<<"\nstack is not full";
     }
     
 }
 //peak returns the top most element or the last inserted element
 void peak(){
     if(top==-1){
         cout<<"\nundeflow condition";
     }
     else{
         cout<<endl<<stack[top]<<" is the peak element ";
     }
 }
 void display(){
     if(top==-1){
         cout<<"stack under flow";
     }
     else{
         cout<<"elements of the stack";
         for (int x : stack){
             cout<<x<<"\n";
         }
     }
 }
int main() {
   int x=8;
    insert(x);
    pop();
    insert(34);
    isEmpty();
    isFull();
    peak();
    display();
    return 0;
}
