// https://codeforces.com/contest/263/problem/A

#include <iostream>
 
using namespace std;
 
int main() {
   int row,col,step=0, a[5][5];
   for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           cin>>a[i][j];
           if(a[i][j]==1){
               row=i+1;
               col=j+1;
           }
       }
   }
   
   if(row ==1 || row==5) step+=2;
   else if(row==2 || row ==4) step++;
   
   if(col ==1 || col==5) step+=2;
   else if(col==2 || col ==4) step++;
   
   cout<<step;
   
}
