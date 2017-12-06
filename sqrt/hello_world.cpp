#include <iostream>

int main(int argc, char **argv)
{
#ifndef FRENCH
  std::cout << "Hello, world!" << std::endl;
#else
  std::cout << "Bonjour, le monde!" << std::endl;
#endif
  return 0;
}
