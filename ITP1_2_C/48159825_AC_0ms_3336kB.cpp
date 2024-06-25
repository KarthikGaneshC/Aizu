#include <iostream>


using namespace std;

int main()
{
  int a[3];
  for(int i=0; i<3; i++){
      cin>>a[i];
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if(a[i]<a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
  }
    
      cout<<a[0]<<" "<<a[1]<<" "<<a[2] << endl;
      
  

      
  
  
 

    return 0;
}