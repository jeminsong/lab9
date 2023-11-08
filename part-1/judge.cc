// Jemin Song
// jeminsong@csu.fullerton.edu
// @jeminsong
// Partners: @lybrenda

#include <iostream>
#include <string>
#include <vector>

// Calculate and return the Olympics average of scores.
// The return value is the average mean of all elements of scores, except for
// the minimum and maximum elements.
double JudgeAverage(std::vector<double>& scores) {
  double sum = 0.0;
  for (double& score : scores) {
    sum += score;
  }
  double max = scores[0];
  double min = scores[0];
  for (double score : scores) {
    if (score > max) {
      max = score;
    }
    if (score < min) {
      min = score;
    }
  }
  sum = sum - min;
  sum = sum - max;
  double average = sum / (scores.size() - 2);
  return average;
}

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  if (arguments.size() < 4) {
    std::cout << "error: you must give at least three scores\n";
    return 1;
  }

  std::vector<double> scores;
  for (int i = 1; i < arguments.size(); ++i) {
    scores.push_back(std::stod(arguments.at(i)));
  }

  double average{JudgeAverage(scores)};

  std::cout << "average is " << average << "\n";

  return 0;
}
