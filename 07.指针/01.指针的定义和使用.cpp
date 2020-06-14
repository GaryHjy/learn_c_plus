#include <iostream>
using namespace std;

int main() {

  // 1.定义一个指针
  // 语法：数据类型 * 指针变量名
  int a = 10;

  int * p;
  // 指针记录变量地址
  p = &a;

  cout << "a的地址为：" << &a << endl;
  cout << "指针p为：" << p <<endl;

  // 2.使用指针
  // 可以通过解引用的方式找到指针指向的地址
  // 指针前加*代表解引用，找到指针指向的内存中的数据
  *p = 1000;
  cout << "a=" << a << endl;
  cout << "*p=" << *p << endl; 

  return 0;
}