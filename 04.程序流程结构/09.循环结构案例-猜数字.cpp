#include <iostream>
using namespace std;
#include <ctime>

int main() {

  // 添加随机数种子，作用利用当前时间生成随机数，防止每次随机数都一样
  srand((unsigned int)time(NULL));

  // 1.系统生成随机数
  int num = rand() % 100 + 1;

  // 2.玩家进行猜测
  int val = 0;

  // 3.判断玩家的猜测
  cout << "请输入随机数" << endl;
  while(1) {
    cin >> val;
    if(val > num) {
      cout << "猜测过大" << endl;
    } else if(val < num) {
      cout << "猜测过小" << endl;
    } else {
      cout << "恭喜您猜对了！" << endl;
      break;
    }
  }
  

  // 猜对，退出游戏
  // 猜错，提示猜的结果，过大或过小，重新返回第二步


  return 0;
}