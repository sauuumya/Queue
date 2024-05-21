#include<iostream>
#include<queue>
using namespace std;

int main(){
    //creation
    queue<int> q;

    //insertion
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    //size
    cout<<"Size: "<<q.size()<<endl;

    //pop
    q.pop();

    cout<<"Size after Popping: "<<q.size()<<endl;

    //isEMpty()
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    } else {
        cout<<"Queue is not empty. "<<endl;
    }

    //front element
    cout<<"Front element is: "<<q.front()<<endl;
    
    return 0;
}