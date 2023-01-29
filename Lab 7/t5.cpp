#include<iostream>
using namespace std;
int totalDigits(int number);
int main(){
    int number,result;
    cout<<"ENter a number :";
    cin>>number;
    cout<<"Number of digits :"<<totalDigits(number);
}
int totalDigits(int number){
    int r,sum=0;
    while(number>0){
       r=number%10;
       number=number/10;
       sum=sum+1;
    }
    return sum;
}