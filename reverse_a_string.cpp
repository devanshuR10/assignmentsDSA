// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() {
    // Write C++ code here
    string s1="hello";
    int length=5;
    for(int i=0;i<length/2;i++){
        int temp= s1[i];
        s1[i]=s1[5-i-1];
        s1[5-i-1]=temp;
        
    }
    cout<<s1;
    
    return 0;
}
