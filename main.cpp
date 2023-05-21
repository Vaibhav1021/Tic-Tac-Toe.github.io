#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char o[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int digit;
string a="";
string b="";
char token='X';
int r,c;
int d=0;
int p;
int q=0;



void one(){

    cout<<"     |        |      "<<endl;
    cout<<"  "<<o[0][0]<<"  |    "<<o[0][1]<<"   |  "<<o[0][2]<<"   "<<endl;
    cout<<"_____|________|______"<<endl;
    cout<<"     |        |      "<<endl;
    cout<<"  "<<o[1][0]<<"  |    "<<o[1][1]<<"   |  "<<o[1][2]<<"   "<<endl;
    cout<<"_____|________|______"<<endl;
    cout<<"     |        |      "<<endl;
    cout<<"  "<<o[2][0]<<"  |    "<<o[2][1]<<"   |  "<<o[2][2]<<"   "<<endl;
    cout<<"     |        |      "<<endl;
    p=0;

}
void two(){
  if(token=='X'){
    cout<<a<<" select the No. on the screen:";
    cin>>digit;
  }
  if(token=='O'){
    cout<<b<<" select the No. on the screen:";
    cin>>digit;
  }
    if(digit==1){
        r=0;
        c=0;
    }
    else if(digit==2){
        r=0;
        c=1;
    }
    else if(digit==3){
        r=0;
        c=2;
    }
    else if(digit==4){
        r=1;
        c=0;
    }
    else if(digit==5){
        r=1;
        c=1;
    }
    else if(digit==6){
        r=1;
        c=2;
    }
    else if(digit==7){
        r=2;
        c=0;
    }
    else if(digit==8){
        r=2;
        c=1;
    }
    else if(digit==9){
        r=2;
        c=2;
    }
    
    if((token=='X') && (o[r][c]!='X') && (o[r][c]!='O')){
        o[r][c]='X';
        token='O';
    }
    else if((token=='O') && (o[r][c]!='X') && (o[r][c]!='O')){
        o[r][c]='O';
        token='X';
    }
    else{
        cout<<"Invalid input,please select no.from screen only!!"<<endl;
        two();
    }


}
void three(){
    p=0;
     for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                 if(o[i][j]!='X' && o[i][j]!='O'){
                     p++;
                    }
                }
             }
    for(int i=0;i<3;i++){

            if((o[i][0]==o[i][1] && o[i][0]==o[i][2])){
                q++;
            }
            if((o[0][i]==o[1][i] && o[0][i]==o[2][i])){
                q++;
            }
    }
             if((o[0][0]==o[1][1] && o[0][0]==o[2][2])){
                 q++;
              
            }
            if( (o[0][2]==o[1][1] && o[2][0]==o[1][1])){
                q++;
            }

         if(p==0 && q==0){
           d=1;}

    }
void zero(){
cout<<"First Player name is: "<<endl;
    cin>>a;
    cout<<"Second Player name is: "<<endl;
    cin>>b;
    cout<<a<<" will play first with X"<<endl;
    cout<<b<<" then will play next with 0"<<endl;
}

int main()
{
    zero();
    while(q==0 && d!=1){
        one();
        two();
        three();
       
    }
    one();
    if(token=='X' && (d==0)){
        cout<<b<<" is the winner"<<endl;
        cout<<q;
    }
    else if(token=='O' && (d==0)){
        cout<<a<<" is the winner";
    }
    else if(d==1){
        cout<<"It's a draw";
    }
return 0;

  }
