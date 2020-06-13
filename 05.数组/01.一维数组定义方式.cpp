#include <iostream>
using namespace std;

// 数组特点
// 放在一块连续的内存空间中
// 数组中每个元素都是相同的数据类型

int main() {

  // 1. 数据类型 数组名[数组长度]
  int arr[5];
  // 赋值
  // 数组下标从0开始
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  arr[3] = 40;
  arr[4] = 50;

  // 访问
  cout << arr[0] << endl;
  cout << arr[1] << endl;
  cout << arr[2] << endl;
  cout << arr[3] << endl;
  cout << arr[4] << endl;

  // 2. 数据类型 数组名[数组长度] = {值1,值2,...}
  // 如果初始化数据时没有全部填写完，就用0来填补数据
  int arr2[5] = {10,20,30,40,50};

  // 循环方式输出
  for(int i = 0; i < 5; i++) {
    cout << arr2[i] << endl;
  }

  // 3. 数据类型 数组名[] = {值1,值2,...}

  int arr3[] = {10,20,30,40,50,60,70,80,90};

  // 循环方式输出
  for(int i = 0; i < 9; i++) {
    cout << arr3[i] << endl;
  }

  return 0;
}