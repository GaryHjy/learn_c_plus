#include <iostream>
using namespace std;

int main() {

  // 选择结构 多条件if语句
  // 用户输入分数，如果大于600，视为考入一本大学，在屏幕上输出
  // 大于500，视为考上二本大学
  // 大于400，视为考上三本大学
  // 小于等于400，打印未考上一本大学

  // 1.用户输入分数
  int score = 0;
  cout << "请输入一个分数：" << endl;
  cin >> score;

  // 2.打印用户输入的分数
  cout << "您输入的分数为：" << score << endl;

  // 3.判断
  // > 600 一本
  // > 500 二本
  // > 400 三本
  // 反之，未考上本科
  if(score > 600) {
    cout << "恭喜您考上了一本大学" << endl;
  } else if(score > 500) {
    cout << "恭喜您考上了二本大学" << endl;
  } else if(score > 400) {
    cout << "恭喜您考上了三本大学" << endl;
  } else{
    cout << "未考上本科" << endl;
  }

  return 0;
}