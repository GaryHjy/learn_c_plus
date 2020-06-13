#include <iostream>
using namespace std;

int main() {

  // 1.创建数组
  int arr[5] = { 1,3,2,5,4 };
  for(int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
  }

  // 2.实现逆置
  // 2.1记录起始下标位置
  // 2.2记录结束下标位置
  // 2.3起始下标与结束下标的元素互换
  // 2.4起始位置++，结束位置--
  // 2.5循环执行

  int start = 0;
  int end = sizeof(arr) / sizeof(arr[0]) - 1;
  while (start < end)
  {
    // 记录
    int temp = arr[start];
    arr[start] = arr[end];
    // 赋值
    arr[end] = temp;
    // 下标更新
    start++;
    end--;
  }

  for(int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
  }
  
  return 0;
}