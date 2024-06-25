
#include <iostream>
using namespace std;
void prin(int n){
    if(n==0){
    return;
    }
    else{
        cout<<"Hello World"<<endl;
        prin(n-1);
    }
}
int main() {
    int n=1000;
    prin(n);

    return 0;
}