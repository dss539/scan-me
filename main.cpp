#include <iostream>

int main()
{
  auto result = new int();
  std::cout << "success\n";
  delete result;
  return *result;
}
