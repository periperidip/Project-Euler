#include <iostream>

int main() {
  long int n=14,c=0;
  //long int A[1000000];
 for(n=13;n<16;n++)
  {
    while(n!=1)
    {
      if(n%2==0)
      {n=n/2;}
      else
      {n=((3*n)+1);}
      
      c++;
    }
  }
  std::cout<<c+1;
   

}