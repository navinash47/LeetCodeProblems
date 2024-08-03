#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
    
    if(i<n){
      func(i+1,n);
    }
    cout<<"Avi"<<endl;
    cout<<"i: "+ to_string(i)<<endl;
}
void func1(int i, int n){
  stack<int> s;
  for(;i<=n;i++){
    s.push(i);
  }
  while(!s.empty()){
    cout<<"Avi"<<endl;
    cout<<"i: "<<to_string(s.top())<<endl;
    s.pop();
  }
}

int main(){
  
  // Here, let’s take the value of n to be 4.
  int n = 4;
  cout<<"Func normal recursion: -----------"<< endl;
  func(1,n);
  cout<<"Func stack recursion: -----------"<< endl;
  func1(1,4);
  return 0;

}