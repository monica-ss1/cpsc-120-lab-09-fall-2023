// TODO(jv3ga): Juan Vega
// jv3ga@csu.fullerton.edu
// @jv3ga0107
// Partners: @monica-ss1

#include <iostream>
#include <string>
#include <vector>

// Calculate and return the Olympics average of scores.
// The return value is the average mean of all elements of scores, except for
// the minimum and maximum elements.
double JudgeAverage(const std::vector<double>& scores) {
  double min = scores[0];

  double max = scores[0];

  double total = 0;

  for (double i = 0; i < scores.size(); i++) {
    if (scores[i] < min) {
      min = scores[i];
    }
  }
  for (double i = 0; i < scores.size(); i++) {
    if (scores[i] > max) {
      max = scores[i];
    }
  }
  for (double i = 0; i < scores.size(); i++) {
    total += scores[i];
  }
  total -= min;

  total -= max;

  return total / (scores.size() - 2);
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