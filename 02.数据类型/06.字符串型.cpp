#include <iostream>
using namespace std;
#include <string>

// 1. C风格字符串 char 变量名[] = "字符串值"
// 2. C++风格字符串 string 变量名 = "字符串值"

int main() {

  // C风格字符串
  // 注意事项:1.char 字符串名 []
  //         2.等号后面要用双引号包含起来字符串
  char str[] = "hello word";

  cout << str << endl;

  // C++风格字符串
  // 需要包含一个头文件 #include <string>
  string str2 = "hello word";

  cout << str2 << endl;


  return 0;
}