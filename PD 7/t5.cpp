#include<iostream>
using namespace std;
void triangle(int n);
int main()
{
    int n;
    cout<<"ENter number of triangle :";
    cin>>n;
    triangle(n);
}
void triangle(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Number of dots :"<<sum;
}
