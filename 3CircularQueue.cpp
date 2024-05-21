#include<iostream>
using namespace std;

class CircularQueue{
    int *arr;
    int size;
    int front;
    int rear;

    CircularQueue(int size){
        this->size=size;
        arr= new int[size];
        front=-1;
        rear=-1;
    }

    void push(int data){
        //queue is full
        if( front==0 && rear== size-1 ){
            cout<<"Queue is full, cannot insert"<<endl;
            return;
        } 
        //queue is empty
        else if(front == -1){
            front = rear =0;
            arr[rear] = data;
        } 
        //circular nature
        else if (rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear ++;
            arr[rear]= data;
        }
    }

    void pop(){
        //empty check
        if(front == -1 ){
            cout<<"Queue is empty, cannot pop. "<<endl;
        }
        //single element
        else if (front == rear){
            arr[front] = -1;
            front = rear =-1;
        }
        //circular nature
        else if (front == size-1 ){
            front =0;
        }
        //normal flow
        else {
            front++;
        }
    }
};
int main(){
    return 0;
}