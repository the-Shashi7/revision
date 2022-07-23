#include<iostream>
using namespace std;
#include "queue_class.cpp"

int main(){
    Queue q;
    q.Enqueue(10);
    cout<<q.size()<<endl;
    q.Enqueue(20);
    cout<<q.size()<<endl;
    q.Enqueue(30);
    cout<<q.size()<<endl;
    q.Enqueue(40);
    cout<<q.size()<<endl;
    q.Enqueue(50);
    cout<<q.size()<<endl;
    q.Enqueue(60);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.Dequeue();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    return 0;
}