#include <iostream>
using namespace std;

int main() {

  // do...while语句
  // 在屏幕中输出0到9这10个数字

  // do...while与while的区别在于do...while会先执行一次循环语句

  int num = 0;

  do {
    cout << num << endl;
    num++;
  } while(num < 10);

  return 0;
}