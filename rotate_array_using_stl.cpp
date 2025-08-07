//rotating by one using stl
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int > vect={1,2,3,4,5};
    rotate(vect.begin(),vect.end()-1,vect.end());
    for(int i : vect){
        cout<<i<<" ";
    }
    
    
    return 0;
}
