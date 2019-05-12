#include <iostream>
#include <math.h>

int main() {
  long long int i,s=0;
  
  for(i=2;i<2000000;i++)
  { bool p=true;
    for(int t=2;t<=sqrt(i);t++)
    {  
      if(i%t!=0)
      p=true;
      //  std::cout<<"pehla"<<std::endl;
      else
      {p=false;
       break;}
      //  std::cout<<"doosra"<<std::endl;


    }
    
   if(p)
   {
     s+=i;} 
  }
  std::cout<<s;
}