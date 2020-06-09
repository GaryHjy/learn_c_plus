#include <iostream>
using namespace std;

// 标识符命名规则
// 1、标识符不能为关键字
// 2、标识符为字母、数字、下划线构成
// 3、标识符以字母或下划线开头
// 4、标识符是区分大小写的

int main() {

  // 1
  // int int = 18;

  // 2
  int abc = 10;
  int _abc = 20;
  int _123abc_ = 30;

  // 3
  // int 123abc = 40;

  // 4
  // int aaa = 100;
  // cout <<< AAA <<< endl; // AAA与aaa不是同一个名称

  // 建议
  // 变量起名时，最好做到见名知意
  int num1 = 10;
  int num2 = 20;
  int sum = num1 + num2;
  cout << sum << endl;

  return 0;
}