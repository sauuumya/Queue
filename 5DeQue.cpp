#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;

    dq.push_front(5);
    dq.push_front(10);
    dq.push_back(20);
    dq.push_back(30);

    cout<<"Size: "<<dq.size()<<endl;

    dq.pop_front();
    cout<<"Size: "<<dq.size()<<endl;

    dq.pop_back();
    cout<<"Size: "<<dq.size()<<endl;

    cout<<"front: "<<dq.front()<<endl;
    cout<<"Back: "<<dq.back()<<endl;

    if(dq.empty()){
        cout<<"DQ is empty."<<endl;
    } else {
        cout<<"DQ is not empty."<<endl;
    }
    return 0;
}