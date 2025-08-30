#include<iostream>
using namespace std;
int main(){
    int a[3];
    int b[3];
    int c[3];
    int n;
    cout<<"enter the no of  element of the sparce matrix ";
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
      
            cout<<"enter the row"<<endl;
            cin>>a[i];
            cout<<"enter the column"<<endl;
            cin>>b[i];
            cout<<"enter the vlaue of the index"<<endl;
            cin>>c[i];
        
    }
    
    cout<<"row column value"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<b[i]<<" "<<c[i];

    }
    
    cout<<endl<<"transpose"<<endl;
    
    cout<<"row column value"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<b[i]<<" "<<a[i]<<" "<<c[i];

    }
    
    
    
    
    return 0;
}
