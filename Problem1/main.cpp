#include <iostream>

int main() {
  
  int sum=0,i;

  for(i=0;i<1000;i++)
  {
    if(i%3==0)
    sum+=i;
    else if(i%15==0)
    continue;
    else if (i%5==0)
    sum+=i;
  }
  std::cout<<sum;
  return 0;
}