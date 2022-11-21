#include <iostream>

int main() {
  const double kOneThird{0.3333333333};
  std::cout << kOneThird << std::endl;
  std::cout << 1.0 / 3 << std::endl;
  if (1.0 / 3 == kOneThird) {
    std::cout << "Equals" << std::endl;
  }
  else {
    std::cout << "Different" << std::endl;
  }
  return 0;
}
