#include <iostream>
using namespace std;

int main() {

  // 整型
  // 1.短整型 占用空间2字节 (-32768~32767)
  short num1 = 32767;

  // 2.整型(最常用) 占用空间4字节
  int num2 = 10;

  // 3.长整型 window占用空间4字节 linux为4字节（32位），8字节（64位）
  long num3 = 10;

  // 4.长长整型 占用空间8字节
  long long num4 = 10;

  cout << "num1 = " << num1 << endl;
  cout << "num2 = " << num2 << endl;
  cout << "num3 = " << num3 << endl;
  cout << "num4 = " << num4 << endl;

  return 0;
}