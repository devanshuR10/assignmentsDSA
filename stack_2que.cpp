// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
  stack<char> stack;//creating a charracterized stack
  string s1="devanshu";
  
  for(char c: s1){
      stack.push(c);
  }
  string rev="";
  while(!stack.empty()){ //using loop untill stack is empty
      rev += stack.top();
      stack.pop();
  }
   
   cout<<rev;

    return 0;
}
