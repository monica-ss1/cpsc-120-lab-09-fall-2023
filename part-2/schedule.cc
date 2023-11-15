// Juan Vega
// jv3ga@csu.fullerton.edu
// @jv3ga0107
// Partners: @monica-ss1

#include <iostream>
#include <string>

// Boolean function with two parameter strings that returns true
// if the strings do not contain an 'e' at the same index
// and false if the strings contain an 'e' at the same index.
bool IsValid(const std::string& schedule1, const std::string& schedule2) {
  bool is_valid = true;

  for (size_t i = 0; i < schedule1.length() && i < schedule2.length(); i++) {
    if (schedule1[i] == 'e' && schedule2[i] == 'e') {
      is_valid = false;
      break;
    }
  }

  return is_valid;
}

int main(int argc, char const* argv[]) {
  std::string schedule1;
  std::string schedule2;

  std::cout << "Please enter the schedule of Philosopher 1: ";
  std::cin >> schedule1;

  std::cout << "Please enter the schedule of Philosopher 2: ";
  std::cin >> schedule2;

  bool is_schedule_valid{IsValid(schedule1, schedule2)};

  if (is_schedule_valid) {
    std::cout << "Valid schedule\n";
  } else {
    std::cout << "Invalid schedule\n";
  }
  return 0;
}