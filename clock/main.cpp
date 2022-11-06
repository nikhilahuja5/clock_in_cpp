#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    int hour,minute,second,a,err;
    err = 0;
    while(err == 0){
        cout<<"enter Hour"<<endl;
        cin>>hour;
        cout<<"Enter Minutes"<<endl;
        cin>>minute;
        cout<<"Enter Seconds"<<endl;
        cin>>second;
        if(hour < 24 && minute <60 && second < 60){
            err++;
        }else{
            system("cls");
        }
    }
    while(hour > 0 || minute > 0 ||second > 0 ){
        system("cls");
        cout<<hour<<":"<<minute<<":"<<second<<endl;
        Sleep(1000);
        second--;
        if(minute <= 0 && second < 0  && hour > 0){
          hour--;
          minute = 59;
          second = 59;
        }
        if(second <= 0 && minute > 0){
          minute--;
          second = 59;
        }
    }
    return 0;
}
