//reversing using vecttor and algo
#include <iostream>
#include  <vector>
#include <algorithm>
using namespace std;
int main() {
    // Write C++ code here
     vector<int> vect={1,2,3,4,5,6};
      
      reverse(vect.begin(),vect.end());
      for(int i : vect){
          cout<<i<<" ";
      }
     

    return 0;
}
