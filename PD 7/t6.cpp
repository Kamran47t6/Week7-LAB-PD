#include<iostream>
using namespace std;
int doctor(int day);
int main(){
    int day;
    cout<<"ENter number of days : ";
    cin>>day;
    doctor(day);

}
int doctor(int day){
    int patients,doctor=7,treated=0,untreated=0,sump=0,sumu=0;
    for(int i=1;i<=day;i++){
         cin>>patients;
         if(patients>doctor){
           treated=0+doctor;
           untreated=patients-treated;
           doctor++;
         }
         else if(patients<=doctor){
            treated=0+patients;
            untreated=patients-treated;
         }
         cout<<" Day"<<i<<" "<<treated<<" treated patients and "<<untreated<<" untreated patients :";
         sump=sump+treated;
         sumu=sumu+untreated;
         cout<<endl;

    }
    cout<<sump<<" Treated and "<<sumu<<" untreated ";
}

