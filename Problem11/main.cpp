#include <iostream>
#include <stdlib.h>

int DivCheck(int x);

int main() {
   int i;
   for(i=1; ;i++)
   { int s=(i*(i+1))/2;
     if(DivCheck(s)==5)
    {
      std::cout<<i;
      exit(0);
    }
    else 
    continue;

   }

   return 0;
}

int DivCheck(int x)
{ int c=0;
  
  for(int t=1;t<=x;t++)
  {
    if(x%t==0)
    c++;
  }
  
  return c;
}