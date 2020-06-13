#include <iostream>
using namespace std;

int main() {

  // 二维数组的用途
  // 1.可以查看占用内存的大小
  // 2.可以查看二维数组的首地址

  int arr[2][3] = {
    {1,2,3},
    {2,3,4}
  };

  cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;
  cout << "二维数组第一行占用内存为：" << sizeof(arr[0]) << endl;
  cout << "二维数组第一个元素占用内存为：" << sizeof(arr[0][0]) << endl;

  cout << "二维数组的行数为：" << sizeof(arr) / sizeof(arr[0]) << endl; // 行数 = 二维数组的字节数 / 二维数组第一项的字节数
  cout << "二维数组的列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl; // 行数 = 二维数组第一项的字节数 / 二维数组第一项的第一项的字节数

  cout << "二维数组的首地址：" << arr << endl;
  cout << "二维数组的第一行的首地址：" << arr[0] << endl;
  cout << "二维数组的第一行的首地址：" << arr[1] << endl;
  cout << "二维数组的第一个元素的首地址：" << &arr[0][0] << endl;
  cout << "二维数组的第二个元素的首地址：" << &arr[0][1] << endl;

  return 0;
}