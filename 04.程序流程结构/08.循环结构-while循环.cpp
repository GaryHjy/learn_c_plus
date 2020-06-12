#include <iostream>
using namespace std;

int main() {

  // while循环
  // 在程序执行的时候，程序必须提供跳出循环的出口，否则出现死循环
  // 在屏幕中打印0~9这10个数字

  int num = 0;
  // 要避免程序死循环
  while(num < 10) {
    cout << num << endl;
    num++;
  }

  return 0;
}