#include<iostream>
#include<string>
using namespace  std;
int main (){
    string str="devanshu";
    for(int i =0 ;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]>str[j]){
                char temp= str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    
    cout<<str;
    
    return 0;
}
