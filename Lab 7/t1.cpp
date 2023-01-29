#include<iostream>
using namespace std;
int fibonacci(int n);
int main(){
    int n,result;
    cout<<"ENter the length :";
    cin>>n;
    result=fibonacci(n);
    cout<<result;
}
int fibonacci(int n){
    int n1=0,n2=1,sum=0;
    cout<<n1<<" "<<n2<<" ";
    for(int i=1;i<=n;i++){
      sum=n1+n2;
      cout<<sum<<", ";
      n1=n2;
      n2=sum;
    }

}