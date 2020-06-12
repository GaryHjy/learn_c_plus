#include <iostream>
using namespace std;

int main() {

  // 水仙花数：就是100~999区间的数字的个位，十位，百位的数字的三次方的和等于它本身就是水仙花数
  // 举例：125
  // 获取个位：125 % 10
  // 获取十位：125 / 10 % 10
  // 获取百位：125 / 100

  int num = 100;

  do {
    int a = 0; // 个位
    int b = 0; // 十位
    int c = 0; // 百位

    a = num % 10;
    b = num / 10 % 10;
    c = num /100;
    if(a*a*a + b*b*b + c*c*c == num) {
      cout << num << endl;
    }
    num++;
  } while (num < 1000);

  return 0;
}