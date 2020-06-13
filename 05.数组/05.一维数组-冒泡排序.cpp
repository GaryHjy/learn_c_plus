#include <iostream>
using namespace std;

int main() {

  // 1.比较相邻的元素。如果第一个比第二个大，就交换他们两个
  // 2.对每一对相邻元素做同样的操作，执行完毕后，找到第一个最大值
  // 3.重复以上的步骤，每次比较次数-1，直到不需要比较

  int arr[9] = { 4,2,8,0,5,7,1,3,9 };
  int arrLength = sizeof(arr) / sizeof(arr[0]);

  cout << "排序前" << endl;

  for(int i = 0; i < 9; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;


  // 开始冒泡
  // 总共排序轮数为 元素个数 - 1
  for(int i = 0; i < arrLength; i++) {

    // 内层循环对比 次数 = 元素个数 - 当前轮数 - 1 
    for(int j = 0; j < arrLength - i - 1; j++) {
      // 如果第一个数比第二个数大，交换两个数位置
      if(arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  cout << "排序后" << endl;
  for(int i = 0; i < 9; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}