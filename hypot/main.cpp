#include <string>
#include <iostream>

#include <sqrt.h>

int main(int argc, char **argv) {
  // too lazy to do more error checking
  int a = std::stoi(argv[1]);
  int b = std::stoi(argv[2]);

  std::cout << peter::sqrt(a*a + b*b) << std::endl;

  return 0;
}
