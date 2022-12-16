#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char o[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int digit;
string a="";
string b="";
char token='X';
int r,c;
bool d=false;


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
    else if(digit<1 || digit>9){
        cout<<"Invalid!!";
    }
    if((token=='X') && (o[r][c]!='X') && (o[r][c]!='0')){
        o[r][c]='X';
        token='O';
    }
    else if((token=='O') && (o[r][c]!='X') && (o[r][c]!='0')){
        o[r][c]='O';
        token='X';
    }
    else{
        cout<<"Grid is already occupied,please select no.from screen only!!"<<endl;
        two();
    }


}
bool three(){
    for(int i=0;i<3;i++){

            if((o[i][0]==o[i][1] && o[i][0]==o[i][2]) || (o[0][i]==o[1][i] && o[0][i]==o[2][i])){
                    return true;

            }
    }
             if((o[0][0]==o[1][1] && o[0][0]==o[2][2]) || (o[0][2]==o[1][1] && o[2][0])){
                return true;
            }




           for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                if(o[i][j]!='X' && o[i][j]!='0'){
                    return false;}
                }
             }


           d=true;
           return false;


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
    while(!three()){
        one();
        two();
        three();

    }
    one();
    if(token=='X' && (d==false)){

        cout<<b<<" is the winner"<<endl;

    }
    else if(token=='O' && (d==false)){

        cout<<a<<" is the winner";


    }
    else if(d==true){
        cout<<"It's a draw";




    }
return 0;

  }

