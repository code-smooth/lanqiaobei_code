#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int total = (c*60+d)-(a*60+b)  ;
    int hour = total/60;
    int minute = total%60;
    cout<<hour<<" "<<minute;
    return 0;
}