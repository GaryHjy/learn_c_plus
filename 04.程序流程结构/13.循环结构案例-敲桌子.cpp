#include <iostream>
using namespace std;

int main() {

  // 1. 先输出1到100的数字

  // 2.从这100个数字中找到特殊数字，改为"敲桌子"

  // 分析
  // 7的倍数   (7,14,21,...) % 7 = 0
  // 个位数为7 (17,27,37,...) % 10 = 7
  // 十位数为7 (71,72,73,...) / 10 = 7

  for(int i = 1; i <= 100; i++) {
    if(i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
      cout << "敲桌子" << endl;
    } else {
      cout << i << endl;
    }
  }

  return 0;
}