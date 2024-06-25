#include<iostream>
using namespace std;
int main(){
    int a,b,x,y,r;
    cin>>a>>b>>x>>y>>r;
    if ((-100<=a&&a<=100)&&(-100<=b&&b<=100)&&(-100<=x&&x<=100)&&(-100<=y&&y<=100)&&(0<r&&r<=100)){
        if(x-r>=0&&x+r<=a&&y-r>=0&&y+r<=b){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    } 
   return 0;
}