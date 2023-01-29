#include<iostream>
using namespace std;
int digitSum(int number);
int main(){
    int number,result;
    cout<<"ENter a number :";
    cin>>number;
    cout<<digitSum(number);
}
int digitSum(int number){
    int r,sum=0;
    while(number>0){
       r=number%10;
       number=number/10;
       sum=sum+r;
    }
    return sum;
}