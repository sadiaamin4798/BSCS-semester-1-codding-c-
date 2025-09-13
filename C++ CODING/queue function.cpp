#include<iostream>
#include<queue>
using namespace std ;
int main(){
queue<string> que;
que.push("asad");
que.push("amin");
que.push("affan");
que.push("shahzad");
cout <<"front: "<<que.front() << endl;
cout<<"back: " <<que.back()<< endl;
que.pop() ;
cout << "after pop: " << endl;
cout <<"front: "<<que.front() << endl;
cout<<"back: " <<que.back()<< endl;
que.pop() ;
cout << "after pop: " << endl;
cout <<"front: "<<que.front() << endl;
cout<<"back: " <<que.back()<< endl;
que.pop() ;
cout << "after pop: " << endl;
cout <<"front: "<<que.front() << endl;
cout<<"back: " <<que.back()<< endl;
que.pop() ;
cout << "after pop: " << endl;
cout <<"front: "<<que.front() << endl;
cout<<"back: " <<que.back()<< endl;
cout << "size: " <<que.size()<< endl;
cout << "empty: " <<que.empty()<< endl;
}