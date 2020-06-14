#include <iostream>
using namespace std;

void swap01(int a, int b) {
  int temp = a;
  a = b;
  b = temp;

  cout << "互换后：a = " << a << endl;
  cout << "互换后：b = " << b << endl;
};

void swap02(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {

  // 指针和函数
  // 1.值传递

  int a = 10;
  int b = 20;

  // swap01(a,b);

  // cout << "互换后实参：a = " << a << endl;
  // cout << "互换后实参：b = " << b << endl;

  // 2.地址传参
  // 如果是地址传递，可以修改实参


  swap02(&a,&b);
  cout << "地址传参互换后实参：a = " << a << endl;
  cout << "地址传参互换后实参：b = " << b << endl;

  return 0;
}