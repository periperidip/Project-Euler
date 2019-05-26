#include <iostream>

int main() {
  int n;
  for(n=998001;n>=10000;n--)
  { int a=n%10;
    int b=(n/10)%10;
    int c=(n/100)%10;
    int d=(n/1000)%10;
    int e=(n/10000)%10;
    int f=(n/100000)%10;

    if((a==f) && (b==e) && (c==d))
    {  for(int j=999;j>=100;j--)
      { 
        if((n%j==0))
        {if((n/j)<=999)
         {std::cout<<n;
         exit(0);}            
      }
      }
             
    }
    
    
  }
  return 0;
}