#include <iostream>

using namespace std;
int main()
{
    int s,v;
    cin >> s >> v;
    
    int eightdian = 8*60;
    int walktime = s/v;

    if (s % v != 0){
        walktime++;
    }
    walktime = walktime + 10 ;
    if(walktime > eightdian){
        int aday = 24*60-(walktime - eightdian);
        int adayhour = aday / 60 ;
        int adayminute = aday % 60;

        if(adayhour < 10 && adayminute < 10){
            cout << "0" << adayhour << ":" << "0" << adayminute ;
        }
        else if(adayhour < 10 && adayminute >= 10){
            cout << "0" << adayhour << ":" << adayminute ;
        }
        else{
            cout << adayhour << ":" << adayminute ;
        }
        
    }
    else{
        int hour = (eightdian - walktime) / 60;
        int minute = (eightdian - walktime) % 60;

        if(hour < 10 && minute < 10){
            cout << "0" << hour << ":" << "0" << minute ;
        }
        else if(hour < 10 && minute >= 10){
            cout << "0" << hour << ":" << minute ;
        }
        else{
            cout << hour << ":" << minute ;
        }
    }                        // 输出用 printf("%02d:%02d\n", hour / 60, minute % 60) 更简单 ，自动补0
    return 0;
}