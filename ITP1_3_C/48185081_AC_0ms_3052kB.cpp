#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int a,b,n;
    n=3000;
    while(n<=3000){
        cin>>a>>b;
        if(a==0 && b==0){
            break;
        }
        else if(a<=b){
            cout<<a<<" "<<b<<endl;;
        }
        else{
            cout<<b<<" "<<a<<endl;
        }
    }
    return 0;
}