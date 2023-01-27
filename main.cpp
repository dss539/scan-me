#include <iostream>

int main()
{
  int unused = 42;
  auto result = new int();
  std::cout << "success\n";
  delete result;
  return *result;
}
