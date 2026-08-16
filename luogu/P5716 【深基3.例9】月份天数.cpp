#include <iostream>
using namespace std;
int main(){
    int year,month;
    cin>>year>>month;

    if((year%4==0 and year%100!=0) or year%400==0){
        year = 1;
    }
    else{
        year = 0;
    }

    if(month==2 and year==1){
        cout<<29;
    }
    else if(month==2 and year==0){
        cout<<28;
    }

    if(month==1 or month==3 or month==5 or month==7 or month==8 or month==10 or month==12){
        cout<<31;
    }
    else if(month==4 or month==6 or month==9 or month==11){
        cout<<30;
    }


    return 0;
}