#include<iostream>
using namespace std;
float printPercentage(float number);
int main(){
    float number;
    cout<<"ENter the  length of number :";
    cin>>number;
    printPercentage(number);
}
float printPercentage(float number){
    double p1=0,p2=0,p3=0,p4=0,p5=0,num;
    for(int i=1;i<=number;i++){
         cin>>num;
         if(num>=0 && num<200){
            p1++;
         }
         else if(num>=200 && num<400){
            p2++;
         }
         else if(num>=400 && num<600){
            p3++;
         }
         else if(num>=600 && num<800){
            p4++;
         }
         else if(num>=800 && num<=1000){
            p5++;
         }
    }
    p1=p1/number*100;
    p2=p2/number*100;
    p3=p3/number*100;
    p4=p4/number*100;
    p5=p5/number*100;
    cout<<p1<<"%"<<endl;
    cout<<p2<<"%"<<endl;
     cout<<p3<<"%"<<endl;
      cout<<p4<<"%"<<endl;
       cout<<p5<<"%"<<endl;

}