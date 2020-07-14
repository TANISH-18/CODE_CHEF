

#include<bits/stdc++.h>
using namespace std;

int main(){
  int tc;
  cin>>tc;
  for(int t=0;t<tc;t++){
    int maxMove;
    cin>>maxMove;
    char B[8][8];
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
        B[i][j]='.';
      }
    }
    B[0][0]='O';
int fillX=9;
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
        if(maxMove>0) maxMove--;
        else if(fillX>0){
             B[i][j]='X';
             fillX-=1;
        }
      }
    }
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
        cout<<B[i][j];
      }
      cout<<"\n";
    }
    cout<<"\n";
  }
  return 0;
}