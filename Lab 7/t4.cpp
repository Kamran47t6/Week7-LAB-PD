#include<iostream>
using namespace std;
int fibonacci(int n);
int main(){
   int n;
   cout<<"ENter a number :";
   cin>>n;
   fibonacci(n);
}
int fibonacci(int n){
    int n1=0,n2=1,result;
    cout<<n1<<","<<n2<<" ";
    for(int i=1;i<=n-2;i++){
        result=n1+n2;
        cout<<","<<result;
        n1=n2;
        n2=result;
    }
}
