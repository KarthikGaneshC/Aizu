
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
  long int s,h,m,x;
  cin>>s;
  h=(s/60)/60;
  m=((s/60)%60)%60;
  x=s-((h*60*60)+(m*60));
  
 
  cout<<h<<":"<<m<<":"<<x<<endl;
    return 0;
}