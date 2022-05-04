//
// Created by 李汇川 on 2022/5/1.
//

#include <iostream>

class TextBlock {
 public:
  TextBlock(std::string t) : text(t) {}
  ~TextBlock() {}

  const char &operator[](std::size_t position) const {
    std::cout << "const char& operator[](std::size_t position) const" << std::endl;
    return text[position];
  }

  char &operator[](std::size_t position) {
    std::cout << "char& operator[](std::size_t position)" << std::endl;
    return text[position];
  }

 private:
  std::string text;
};

// 在函数中, ctb 是常量
void print(const TextBlock &ctb) {
  // 调用 const TextBlock::operator[]
  std::cout << ctb[0] << std::endl;
  // ctb[0] = 'x';                           // 错误，不能修改一个常量
}

int main() {
  // 调用 TextBlock::operator[]
  TextBlock tb("Hello");
  std::cout << tb[0] << std::endl;        // 正确，只读一个非常量
  tb[0] = 'x';                            // 正确，修改一个非常量

  // 调用 const TextBlock::operator[]
  const TextBlock ctb("World");
  std::cout << ctb[0] << std::endl;       // 正确，只读一个常量
  // ctb[0] = 'x';                           // 错误，不能修改一个常量

  print(tb);

  return 0;
}