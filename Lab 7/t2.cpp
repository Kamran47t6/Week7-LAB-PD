#include<iostream>
using namespace std;
int frequencychecker(int number,int digit);
int main(){
    int number,digit;
    cout<<"ENter a number :";
    cin>>number;
    cout<<"ENter a digit :";
    cin>>digit;
    frequencychecker(number,digit);
}
int frequencychecker(int number,int digit)
{
    int sum=0;
    while(number!=0){
        number=number/10;
         if(number==digit){
            sum++;
        }
        number=number%10;
    }
    cout<<"DIgits :"<<sum;
   
}