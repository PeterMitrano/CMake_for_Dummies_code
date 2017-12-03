#include <cmath>
#include <cstdlib>
#include <iostream>

#include "sqrt.h"

int main(int argc, char **argv)
{
  if (argc != 2) {
    std::cout << "USAGE: sqrt number"
              << std::endl
              << std::endl
              << "EXAMPLE: sqrt 64"
              << std::endl;
    return 0;
  }

  char *end;
  double number = strtod(argv[1], &end);

  if (end == argv[1] || *end != '\0')
  {
    std::cout << "Invalid characters: [" << end << "]" << std::endl;
    return 0;
  }

  std::cout << peter::sqrt(number) << std::endl;

  return 0;
}
