#include <iostream>
using namespace std;

int main() {

  // 乘法口诀表

  // 分析

  // 行数*列数 列数小于等于行数
  // 1 * 1 = 1
  // 2 * 1 = 2  2 * 2 = 4
  // ...

  for(int i = 1; i <= 9; i++) {

    for(int j = 1; j <= i; j++) {
      cout << j << "*" << i << "=" << j*i << "\t";
    }
    cout << endl;
    
  }

  return 0;
}
