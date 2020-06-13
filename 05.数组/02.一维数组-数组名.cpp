#include <iostream>
using namespace std;

int main() {

  // 一维数组名称用途

  // 1.可以统计整个数组名在内存中的长度  sizeof(arr)
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  cout << "整个数组占用内存空间为：" << sizeof(arr) << endl;
  cout << "每个元素占用内存空间为：" << sizeof(arr[0]) << endl;
  cout << "数组中元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

  // 2.可以获取数组在内存中的首地址
  cout << "数组中首地址为：" << arr << endl;
  cout << "数组中第一个元素的首地址为：" << &arr[0] << endl;
  cout << "数组中第二个元素的首地址为：" << &arr[1] << endl;

  // 数组是一个常量，不可以进行赋值操作

  return 0;
}