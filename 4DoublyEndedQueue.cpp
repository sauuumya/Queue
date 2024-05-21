#include<iostream>
using namespace std;

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        this->size=size;
        arr=new int[size];
        front =-1;
        rear= -1;
    }

    void pushRear(int data){
        //full check
        if(front == 0 && rear == size-1){
            cout<<"Queue is full."<<endl;
            return;
        } //queue is empty
        else if(front == -1){
            front = rear = 0;
           
        } // circular nature
        else if(rear == size -1 && front!= 0){
            rear =0;
           
        } // default case
        else {
            rear ++;
           
        }
        arr[rear] = data;
    }

    void pushFront(int data){
        if(front ==0 && rear == size-1){
            cout<<"Queue is full."<<endl;
            return;
        } 
        else if (front ==-1){
            front = rear = 0;
        }
        else if(front == 0 && rear != size -1){
            front = size-1;
        } 
        else {
            front --;
        }
        arr[front] = data;
    }

    void popFront(){
        //queue is full
        if(front == -1){
            cout<<"Queue is empty, cannnot pop."<<endl;
        } //queue is empty
        else if(front == rear){
            arr[front]=-1;
            front = rear =-1;
        } //circular nature
        else if( front == size -1){
            front =0;
        }
        // normal flow
        else{
            front ++;
        }
    }

    void popRear(){
        if(front == -1){
            cout<<"Queue is empty, cannot pop."<<endl;
        } 
        else if (front == rear){
            arr[rear]=-1;             //optional step
            front = rear = -1;
        } 
        else if (rear ==0 ){
            rear = size -1;
        } 
        else {
            rear--;
        }
    }
};
 
int main(){
    Deque q();
    return 0;
}