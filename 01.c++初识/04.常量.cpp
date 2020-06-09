#include <iostream>
using namespace std;

// 常量的定义
// 1. define 宏常量
// 2. const 修饰的变量

// 1
#define Day 7;


int main() {

  // 2 
  const int month = 12;
  cout << "一年有：" << month << "个月" << endl;

  cout << "一周有：" << Day;

  return 0;
}