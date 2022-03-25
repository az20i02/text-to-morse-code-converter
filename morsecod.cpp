// FCAI – Programming 1 – 2022 - Assignment 2  
// Program Name: Morse Code 
//Author: abdulaziz mohamed 
// Last Modification Date: 23/3/2022 
// Author1 and ID and Group:20210777
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int j = 0;
char a[100];
const char *latin = "**ETIANMSURWDKGOHVF?L?PJBHCYZQ??54?3??2?????6????7??890";

void dash(){cout<<"-";}
void dot(){cout<<".";}

void conv(int decimal) {
    if (decimal) {
        conv(decimal/2);
        if (decimal != 1) decimal%2 ? dash() : dot();   
    } 
}

void morse(char c) {
    if (c >= 'a' && c <= 'z') c -= 32;
    if (c < 'A' || c > 'Z') return;
    int i = 0;
    while (latin[++i] != c);
    conv(i);
}

int main()
{
    cout<<"code writer : Hello user welcom to my code :) // my name is : {aziz} my ID is : {20210777}\n";
    cout<<"code writer : i hope you'll like my code her name is [sonia]\n";
    cout<<"code writer : [sonia] say hi to user\n";
    cout<<endl;
    cout<<"the code [sonia] : Hi my lover user my name is [sonia] i'll be your code I hope you'll enjoye using me  ;) \n";
    cout<<endl;
    int length = 0;
    
    cout << "[sonia] : honey please enter text : ";

    while (cin.peek() != '\n') {
      cin >> a[length++];
    }
cout<<endl;    
    int i = 0;
    while (i < length) {
      morse(a[i]);
      i++;
    }
    cout<<endl;
    cout << endl <<"[sonia] : I hope you enjoyed using me Darling :)";

    return 0;
}
