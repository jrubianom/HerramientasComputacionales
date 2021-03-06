#include<iostream>
#include <cstdlib>

// ./a out 10 -> argc = 2, argv = ["./a.out","10"]
int main(int argc, char **argv){
  int a =std::atoi(argv[1]);

  a = 2*a;
  
  std::cout<< "a: " << a << std::endl;
  
  return 0;

}
