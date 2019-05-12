#include <iostream>
#include<math.h>

int main() {
  long int n=600851475143;
 
  for(int i=3;i<=n;i+=2)
  {
    while(n%i==0)
    {std::cout<<i<<std::endl;
     n=n/i;
    }
  }
  return 0;
}