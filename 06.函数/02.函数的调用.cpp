#include <iostream>
using namespace std;

// 函数定义的时候，num1和num2并没有真实数据，它只是形式上的参数，简称形参
int add(int num1,int num2) {
  int sum = num1 + num2;
  return sum;
}

int main() {
  int a = 10;
  int b = 20;

  // 函数调用语法：函数名称（参数）
  // a和b称为 实际参数 简称实参
  // 当调用函数时，实参会传递给形参
  int c = add(a,b);

  cout << "c=" << c << endl;
  return  0;
}