#include <iostream>

int main() {
  int a=1,b=2,sum=0;
  
  while(b<=4000000)
  {
    if(b%2==0)
    {sum=sum+b;}
    
    int c=a+b;
    a=b;
    b=c;

  }
  std::cout<<sum;
  return 0;
}  