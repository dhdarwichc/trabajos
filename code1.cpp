#include <iostream>

int main (void)
{
  int age;
  std::cout<<"escriba edad: "<<std::endl;
  std::cin>>age;
  if (age>18)
    {
      std::cout<<"su edad es  : "<<age<<std::endl;

    }
  else
    {
      std::cout<<"eres muy enano"<<std::endl;

    }
  return 0;
}
