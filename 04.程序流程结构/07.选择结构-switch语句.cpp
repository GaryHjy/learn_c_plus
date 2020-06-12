#include <iostream>
using namespace std;

int main() {

  // switch语句

  // if与switch的区别
  // switch缺点：判断时候只能为整型或者字符型，不可以是一个区间
  // switch优点：结构清晰，执行效率高

  // 给电影打分
  // 10~9 经典
  // 8~7  非常好
  // 6~5  一般
  // 5以下 烂片

  // 1.提示用户打分
  cout << "请给电影进行打分" << endl;

  // 2.用户进行打分
  int score = 0;
  cin >> score;
  cout << "您打的分数为：" << score << endl;

  // 3.根据用户输入的分数来提示用户最后的结果
  switch(score) {
    case 10: 
    case 9: 
      cout << "您认为为经典电影" << endl;
      break;
    case 8: 
    case 7: 
      cout << "您认为电影非常好" << endl;
      break;
    case 6: 
    case 5: 
      cout << "您认为电影一般" << endl;
      break;
    default: 
      cout << "您认为电影为烂片" << endl;
  }

  return 0;
}