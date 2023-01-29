#include<iostream>
using namespace std;
void nestedloop(int n);
void lowerpart(int n);
int main(){
    int n;
    cout<<"ENter number of rows :";
    cin>>n;
    nestedloop(n);
    lowerpart(n);
}
void nestedloop(int n){
    int s=0;
     for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        s++;
        for(int k=1;k<=s;k++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    for(int i=1;i<=n+1;i++){
        cout<<"*";
    }
    cout<<endl;
}
void lowerpart(int n){
    int s=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        
        for(int k=s;k>=1;k--){
            cout<<"*";
        }
        s--;
        cout<<endl;
    }
}
