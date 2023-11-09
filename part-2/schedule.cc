// Jemin Song
// jeminsong@csu.fullerton.edu
// @jeminsong
// Partners: @lybrenda

#include <iostream>
#include <string>

bool IsValid(const std::string& schedule1, const std::string& schedule2) {
  bool variable = true;
  if (schedule1.size() != schedule2.size()) {
    return false;
  }
  for (int i = 0; i < schedule1.size(); ++i) {
    if (schedule1[i] == 'e' && schedule2[i] == 'e') {
      variable = false;
      break;
    }
  }
  return variable;
}
int main(int argc, char const* argv[]) {
  std::string first_schedule;
  std::string second_schedule;
  std::cout << "Please enter the schedule of Philosopher 1: ";
  std::cin >> first_schedule;
  std::cout << "Please enter the Schedule of Philosopher 2: ";
  std::cin >> second_schedule;

  bool is_valid = IsValid(first_schedule, second_schedule);

  if (is_valid) {
    std::cout << "Valid schedule\n";
  } else {
    std::cout << "Invalid schedule\n";
  }
  return 0;
}
