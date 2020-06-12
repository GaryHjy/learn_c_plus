#include <iostream>
using namespace std;

int main() {

  // 逻辑运算符 非
  int a = 10;
  
  // 在C++中 除了0都为真
  cout << !a << endl; // 0

  cout << !!a << endl; // 1 负负得正

  return 0;
}