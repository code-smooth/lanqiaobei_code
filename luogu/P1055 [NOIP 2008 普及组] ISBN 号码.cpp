#include <iostream>
#include <string>
using namespace std;
int main(){
    string isbn;
    cin>>isbn;
    int right_ans = ((isbn[0]-'0')*1+(isbn[2]-'0')*2+(isbn[3]-'0')*3+(isbn[4]-'0')*4+
    (isbn[6]-'0')*5+(isbn[7]-'0')*6+(isbn[8]-'0')*7+(isbn[9]-'0')*8+(isbn[10]-'0')*9)%11;
    

   if(isbn[12]-'0' == right_ans and right_ans != 10){
        cout<<"Right";
    }
    else if(isbn[12] == 'X' and right_ans == 10){
        cout<<"Right";
    }
    else if(isbn[12]-'0' != right_ans and right_ans != 10){
        for(int i=0;i<=11;i++){
            cout<<isbn[i];
        }
        cout<<right_ans;
    }
    else if(isbn[12]-'0' != right_ans and right_ans == 10){
        for(int i=0;i<=11;i++){
            cout<<isbn[i];
        }
        cout<<"X";
    }
    return 0; 
}