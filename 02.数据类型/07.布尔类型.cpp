#include <iostream>
using namespace std;

int main() {

  // 1.创建bool数据类型
  bool flag = true;
  cout << flag << endl; // 1

  flag = false;
  cout << flag << endl; // 0

  // 2.查看bool类型所占内存空间

  cout << "size of bool =" << sizeof(bool) << endl;


  return 0;
}