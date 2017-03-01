#include <iostream>

int main(void)
{
 signed int num;
 int a,b=0;
 std::cout <<"ingrese número para operar"<<std::endl;
 std::cin>>a;
 while (b<a)

   {
     int sum;
     num=-b;
     sum=num+b;
     
     b++;
     std::cout<<"el resultado es"<<sum<<std::endl;
     
     
   }
 return 0;
}
