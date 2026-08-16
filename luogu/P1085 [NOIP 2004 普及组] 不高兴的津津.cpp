#include <iostream>
using namespace std;
int main(){
    int schtime,matime;
    int unhappydays = 0;
    int maxunhappy = 0;
    int maxunhappyday ;

    for(int i=1 ; i<=7 ; i++){
        cin>>schtime>>matime;
        if(schtime + matime > 8){
            unhappydays++;
            if(schtime + matime > maxunhappy){
                maxunhappy = schtime + matime;
                maxunhappyday = i;
            }
        }

    }
    if(unhappydays == 0){
        cout << 0;
    }
    else{
        cout<<maxunhappyday;
    }
    return 0;
}