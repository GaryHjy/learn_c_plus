#include <iostream>
using namespace std;

int main() {

  // 三只小猪称体重，判断哪只小猪最重

  // 1.创建三只小猪的体重变量
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;

  // 2.让用户输入三只小猪的重量
  cout << "请输入小猪A的体重:" << endl;
  cin >> num1;
  cout << "请输入小猪B的体重:" << endl;
  cin >> num2;
  cout << "请输入小猪C的体重:" << endl;
  cin >> num3;

  cout << "小猪A的体重为：" << num1 << endl;
  cout << "小猪B的体重为：" << num2 << endl;
  cout << "小猪C的体重为：" << num3 << endl;

  // 3.判断哪只最重
  if(num1 > num2) { // A > B
    if(num1 > num3) {
      cout << "小猪A最重" << endl;
    } else {
      cout << "小猪C最重" << endl;
    }
  } else { // A < B
    if(num2 > num3) {
      cout << "小猪B最重" << endl;
    } else {
      cout << "小猪C最重" << endl;
    }
  }


  return 0;
}