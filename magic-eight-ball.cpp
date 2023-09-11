#include <iostream>
#include <cstdlib>

int main() {

  std::cout << "MAGIC 8-BALL:\n\n";
  srand(time(NULL));
  int answer = std::rand() % 10;
  std::cout << answer << "\n";
  if (answer == 0) {
    std::cout << "It is certain.\n";
  }
  else if (answer == 1) {
    std::cout << "My sources say no.\n";
  }
  else if (answer == 2) {
    std::cout << "Most likely.\n";
  }
  else if (answer == 3) {
    std::cout << "Reply hazy, try again.\n";
  }
  else if (answer == 4) {
    std::cout << "Concentrate and ask again.\n";
  }
  else if (answer == 5) {
    std::cout << "Outlook not so good.\n";
  }
  else if (answer == 6) {
    std::cout << "My sources say no.\n";
  }
  else if (answer == 7) {
    std::cout << "You may rely on it.\n";
  }
  else if (answer == 8) {
    std::cout << "Signs point to yes.\n";
  }
  else {
    std::cout << "Very doubtful.\n";
  }
}
