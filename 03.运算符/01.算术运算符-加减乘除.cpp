#include <iostream>
using namespace std;

int main() {

  int a1 = 10;
  int b1 = 3;

  cout << a1 + b1 << endl;
  cout << a1 - b1 << endl;
  cout << a1 * b1 << endl;
  cout << a1 / b1 << endl; // 两个整数相除，结果仍为整数，将小数部分去除

  int a2 = 10;
  int b2 = 20;

  cout << a2 / b2 << endl;

  int a3 = 10;
  int b3 = 0;
  
  // cout << a3/b3 << endl; // 错误！ 两个数相除，除数是不可以为0的

  // 两个小数可以相除
  double d1 = 0.5;
  double d2 = 0.25;

  cout << d1 / d2 << endl; // 运算结果可能为小数

  return 0;
}