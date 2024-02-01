#include<bits/stdc++.h>
#define ll long long int 
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    getline(cin,s);
    ll n = s.length();
    string str = "";
    for(ll i=0; i<n; i++) {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') {
            if(s[i]=='a') str+='e';
            else if(s[i]=='e') str+='i';
            else if(s[i]=='i') str+='o';
            else if(s[i]=='o') str+='u';
            else if(s[i]=='u') str+='a';
            
        }
        else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
            if(s[i]=='A') str+='E';
            else if(s[i]=='E') str+='I';
            else if(s[i]=='I') str+='O';
            else if(s[i]=='O') str+='U';
            else if(s[i]=='U') str+='A';
            
        }
        else if(s[i]>='a' && s[i] <= 'z' &&(s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u')) {
            if(s[i]=='b') str+='c';
            else if(s[i]=='c') str+='d';
            else if(s[i]=='d') str+='f';
            else if(s[i]=='f') str+='g';
            else if(s[i]=='g') str+='h';
            else if(s[i]=='h') str+='j';
            else if(s[i]=='j') str+='k';
            else if(s[i]=='k') str+='l';
            else if(s[i]=='l') str+='m';
            else if(s[i]=='m') str+='n';
            else if(s[i]=='n') str+='p';
            else if(s[i]=='p') str+='q';
            else if(s[i]=='q') str+='r';
            else if(s[i]=='r') str+='s';
            else if(s[i]=='s') str+='t';
            else if(s[i]=='t') str+='v';
            else if(s[i]=='v') str+='w';
            else if(s[i]=='w') str+='x';
            else if(s[i]=='x') str+='y';
            else if(s[i]=='y') str+='z';
            else if(s[i]=='z') str+='b';
        }
         else if(s[i]>='A' && s[i] <= 'Z' &&(s[i]!='A'||s[i]!='E'||s[i]!='I'||s[i]!='O'||s[i]!='U')) {
            if(s[i]=='B') str+='C';
            else if(s[i]=='C') str+='D';
            else if(s[i]=='D') str+='F';
            else if(s[i]=='F') str+='G';
            else if(s[i]=='G') str+='H';
            else if(s[i]=='H') str+='J';
            else if(s[i]=='J') str+='K';
            else if(s[i]=='K') str+='L';
            else if(s[i]=='L') str+='M';
            else if(s[i]=='M') str+='N';
            else if(s[i]=='N') str+='P';
            else if(s[i]=='P') str+='Q';
            else if(s[i]=='Q') str+='R';
            else if(s[i]=='R') str+='S';
            else if(s[i]=='S') str+='T';
            else if(s[i]=='T') str+='V';
            else if(s[i]=='V') str+='W';
            else if(s[i]=='W') str+='X';
            else if(s[i]=='X') str+='Y';
            else if(s[i]=='Y') str+='Z';
            else if(s[i]=='Z') str+='B';
        }
        else if(s[i] >= '0' && s[i] <= '9') {
            if(s[i]=='0') str+='1';
            else if(s[i]=='1') str+='2';
            else if(s[i]=='2') str+='3';
            else if(s[i]=='3') str+='4';
            else if(s[i]=='4') str+='5';
            else if(s[i]=='5') str+='6';
            else if(s[i]=='6') str+='7';
            else if(s[i]=='7') str+='8';
            else if(s[i]=='8') str+='9';
            else if(s[i]=='9') str+='0';
        } else if(s[i] == ' ') str += s[i];
        
    } 
    cout<<str<<endl;
    return 0;
}
