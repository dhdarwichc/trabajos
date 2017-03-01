#include <iostream>

int main (void)
  
{
  int b=0,sum=0;
  while(b<=8)
    {
      sum=sum+b;
      b+=2;
    }
  std::cout <<"el resultado es : "<<sum<<std::endl;

return 0;
}
