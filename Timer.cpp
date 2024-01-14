#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
using namespace std;
void stopwatch(int h, int m, int s){
    for(;;){
        if(h==0&&m==0&&s==0){

            break;
        }
        else if(h!=0&&m==0&&s==0){
            m=60;
            s=60;
            h--;
            m--;
            s--;

        }
         else if(h==0&&m!=0&&s!=0){


            s--;

        }
        else if(h==0&&m!=0&&s==0){
            s=60;
            m--;
            s--;

        }
        else if(s!=0){

            s--;
        }
        else if(m!=0&&s==0){
            s=60;
            m--;
            s--;
        }

        system("cls");
        cout<<h<<":"<<m<<":"<<s<<endl;
        Sleep(1000);
    }
}
int main(){
    cout<<"Welcome to my new project. The project name is Timer. Set your timer"<<endl;
    cout<<endl;
int h,m,s;
cout<<"Enter hour: ";
cin>>h;
cout<<"Enter minute: ";
cin>>m;
cout<<"Enter second: ";
cin>>s;


stopwatch(h,m,s);

Beep(1500,1000);


}
