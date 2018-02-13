#include <iostream>
#include <vector>

int main(void)
{
  std::string username;

  std::cout << "Username: ";
  std::getline(std::cin, username);
  std::cout << "Hello, " << username << std::endl;

  return 0;
}