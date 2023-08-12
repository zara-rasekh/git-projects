#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    int n=0;
    cin>>a>>b;
    string num[10]={"","one","two","three","four","five","six","seven","eight","nine",};
    
    
    
    for(int n=a;n<=b;n++){
    if(n>=1 &&  n<=9){
    
        
            cout<<num[n]<<endl;
    }
    if(n>9){
        
        if(n%2==0){
            cout<<"even";}
            else{
                cout<<"odd";
            
        }
    }
}
    return 0;
}