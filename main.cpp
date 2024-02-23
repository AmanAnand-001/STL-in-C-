#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){


  // STL IN ARRAY
  
  array<int,4> a = {1,2,3,4};
 int size = a.size();
  
  for(int i =0; i<size; i++){
    cout<<a[i]<<endl;
  }
  cout << "Element at 2nd index is " << a.at(2) <<endl;
  cout << "Empty or not " << a.empty() <<endl;

  cout << "First element " << a.front() <<endl;
  cout << "Last element " << a.back() <<endl;


// STL IN VECTOR

  vector<int> ar(5,1);
  cout << "print a" << endl;
  for(int i:a){
    cout << i << " ";
  }
  cout << endl;
  
 vector<int> v;
  cout << "capacity " << v.capacity() << endl;

  v.push_back(1);
  cout << "capacity " << v.capacity() << endl;

  v.push_back(2);
  cout << "capacity " << v.capacity() << endl;

  v.push_back(3);
  cout << "capacity " << v.capacity() << endl;

  cout << "size " << v.size() <<endl;

  cout << "element at 2nd index " << v.at(2) <<endl;

  cout << "before pop " << endl;
  for(int i:v){
    cout << i << " ";
  }
  cout << endl;

  cout << "after pop " << endl;
  for(int i:v){
    cout << i << " ";
  }
  cout << endl;

  cout << "before clear size " << v.size() << endl;
  v.clear();
  cout << "after clear size " << v.size() << endl;

 
  // STL IN DEQUEUE
  
  deque<int> d;

    d.push_back(1);
    d.push_front(2);

    // for(int i : d){
      // cout << i << " ";
    // }

    // d.pop_front();
     cout << endl;
    // for(int i : d) {
      // cout << i << " ";
    // }

  cout << "Print first index element " << d.at(1) << endl;

    cout << "front " << d.front() << endl;
    cout << "back " << d.back() << endl;

    cout << "Empty or not " << d.empty() << endl;

    cout << "before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    cout << "after erase " << d.size() << endl;
    for(int i : d) {
      cout << i << " ";
    }

 
  // STL IN LIST
  
  list<int> l;

  list<int> n(5,100);
  for(int i:n){
    cout<<i<<" ";
  }
  cout << endl;

  l.push_back(1);
  l.push_front(2);

  for(int i:l){
    cout << i << " ";
  }
  cout << endl;
  l.erase(l.begin());
  cout << "after erase" << endl;
  for(int i:l){
    cout << i << " ";
  } 
  cout << endl;

  cout << "size of list " << l.size() << endl;


 // STL IN STACK
  
  stack<string> s;
  s.push("Aman"); 
  s.push("Anand");
  s.push("Thakur");

  cout << "Top element: " << s.top() << endl;

  s.pop();
  cout << "Top element: " << s.top() << endl;

  cout << "size of stack " << s.size() << endl;

  cout << "Empty or not " << s.empty() << endl; 


 // STL IN QUEUE
  
  queue<string> q;

  q.push("aman");
  q.push("anand");
  q.push("thakur");

  cout << "First element " << q.front() << endl;
  q.pop();
  cout << "First element " << q.front() << endl;

  cout << "Size of queue " << q.size() << endl;

}
