#include <iostream>
using namespace std;

int main() {
  
  // 取模运算其实就是求余数
  int a1 = 10;
  int b1 = 3;

  cout << a1 % b1 << endl;

  // 当除数除不过被除数时，余数还是被除数
  int a2 = 10;
  int b2 = 20;

  cout << a2 % b2 << endl; // 输出 10

  // 两个数相除，除数不能为0，故做不了取模的操作
  int a3 = 10;
  int b3 = 0;
  // cout << a3 % b3 << endl;

  // 两个小数之间是无法做取模操作
  double d1 = 3.14;
  double d2 = 1.1;

  // cout << d1 % d2 << endl;

  return 0;
}