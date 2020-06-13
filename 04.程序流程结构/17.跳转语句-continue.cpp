#include <iostream>
using namespace std;


int main() {
  // continue语句

  for(int i = 0; i < 100; i++) {
    if(i % 2 == 0) {
      continue; // 跳出当前循环的行数，继续下一个循环
    }
    cout << i << endl;
  }

  return 0;
}