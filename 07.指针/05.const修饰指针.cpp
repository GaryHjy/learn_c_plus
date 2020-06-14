#include <iostream>
using namespace std;

int main() {

  // const修饰指针有三种情况
  // 1.const修饰指针 --- 常量指针 
  // 特点：指针的指向可以修改，但是指针指向的值无法修改
  int a = 10;
  int b = 20;
  const int * p = &a;
  // *p = 20; // 报错
  p = &b;

  cout << *p << endl;

  // 2.const修饰常量 --- 指针常量
  // 特点：指针的指向不可以改，指针指向的值可以改

  int * const p2 = &a;
  *p2 = 20; 
  // p = &b; // 报错
  cout << *p2 << endl;
  // 3.const即修饰指针，有修饰常量
  // 特点：指针的指向和指针指向的值都不可以修改
  const int * const p3 = &a;
  // *p3 = 100; // 错误
  // p3 = &b; // 错误



  return 0;
}