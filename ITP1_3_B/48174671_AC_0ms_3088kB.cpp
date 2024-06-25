#include <iostream>

using namespace std;
int main() {
   int n,i,k;
   int a[10000];
   n=10000;
   i=1;
   while(i<=n){
       
       cin>>a[i];
       if(a[i]==0){
           break;
       }
       i++;
   }
   
    for(int j=1; j<i; j++ ){
        cout<<"Case "<<j<<": "<<a[j]<<endl;
    }
   
    return 0;
}