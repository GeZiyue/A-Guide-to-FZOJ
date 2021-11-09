#include <bits/stdc++.h>

int main(int argc, char *argv[]) {
  int score = atoi(argv[1]);            // full score of this test case
  std::ifstream fin("user.in");         // where to read the input
  std::ifstream fstd(argv[2]);          // where to read the jury's answer
  std::ifstream fout("user.out");       // where to read the participant's output
  std::ofstream fscore("score.log");    // where to write the score
  std::ofstream freport("report.log");  // where to write the feedback information
  return 0;
}
