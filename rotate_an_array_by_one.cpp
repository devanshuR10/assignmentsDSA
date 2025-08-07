class Solution {
  public:
    void rotate(vector<int> &a) {
        // code here
    int n =a.size();
    int last =a[n-1];
    for(int i=n-1;i>0;i--){
         a[i]=a[i-1];
    }
    
    
    
    a[0]=last;
    
 }

};
