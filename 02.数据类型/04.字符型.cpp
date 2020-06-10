#include <iostream>
using namespace std;

// 在显示字符型变量时，用单引号将字符括起来，不要用双引号
// 单引号中只能为一个字符，不能为字符串
// C和C++中字符型变量只占用1个字节
// 字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元

int main() {

  // 1.字符型的创建方式
  char ch = 'a';
  cout << ch << endl;

  // 2.字符型变量所占内存大小
  cout << "char字符型变量所占内存空间：" << sizeof(char) << endl;

  // 3.字符型变量常见错误
  // char ch2 = "b"; // 创建字符型变量时，用单引号，否则会报错
  // char ch2 = 'abcdefg'; // 创建字符型变量时，单引号内只能有一个字符

  // 4.字符型变量对应ASCII编码
  // a -> 97
  // A -> 65
  cout << int(ch) << endl;

  return 0;
}