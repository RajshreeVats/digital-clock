#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;


int main () {
    int hour=0, min=0, sec=0;

    while( true ) {
        system("cls");

        cout<<hour<<" : "<<min<<" : "<<sec<<endl;
        sec++;
        if(sec==60) {
            min++;
            sec=0;
            if(min==60) {
                hour++;
                min=0;
                 if(hour==24) {
                    hour=0;
                }
            }
           
        }
        sleep(1);

        
    }
    return 0;
}