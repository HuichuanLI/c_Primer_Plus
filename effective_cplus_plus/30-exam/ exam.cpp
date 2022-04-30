#include "exam.h"

const int Teacher::SchoolCode = 17;

Teacher::Teacher() {
}

Teacher::~Teacher() {
}

void Teacher::VisitScores() {
  std::cout << "名字  " << "语文  " << "数学  " << "英语" << std::endl;
  for (int i = 0; i < Row; i++) {
    std::cout << Names[i] << "  ";
    for (int j = 0; j < Column; j++) {
      std::cout << scores[i][j] << "  ";
    }
    std::cout << std::endl;
  }
}

double Teacher::LowGrade(int col) {
  if (col >= Column) {
    std::cout << "Column out of range." << std::endl;
    return -1;
  }
  return Min(scores[0][col], scores[1][col]);
}

int main() {
  Teacher tea;
  tea.VisitScores();
  std::cout << "学校编码为 " << Teacher::SchoolCode << std::endl;
  std::cout << "语文最低分为 " << tea.LowGrade(0) << std::endl;
  return 0;
}