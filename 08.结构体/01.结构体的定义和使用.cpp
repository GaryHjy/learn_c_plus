#include <iostream>
using namespace std;
#include <string>

// 基本概念
// 结构体属于用户自定义数据类型，允许用户存储不同的数据类型

// 结构体的定义和使用
// 语法：struct 结构体名 {结构体成员列表};
// 通过结构体创建变量的方式有三种
// struct 结构体名 变量名
// struct 结构体名 变量名 = { 成员1值，成员2值... }
// 定义结构体时顺便创建变量

// struct创建变量时可以省略

// 1.创建学生数据类型：学生包括（姓名，年龄，分数）
// 自定义类型，一些类型集合组成的一个类型
struct Student 
{
  // 成员列表
  string name; // 姓名
  int age; // 年龄
  int score; // 分数
} s3; // 顺便创建变量

// 2.通过学生类型具体学生


int main() {

  // 1.struct 结构体名 变量名
  struct Student s1;
  s1.name = "张三";
  s1.age = 18;
  s1.score = 88;

  cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 成绩：" << s1.score << endl;

  // 2.struct 结构体名 变量名 = { 成员1值，成员2值... }

  struct Student s2 = { "李四", 20, 90};
  cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 成绩：" << s2.score << endl;

  // 3. 定义结构体时顺便创建变量
  s3.name = "王五";
  s3.age = 22;
  s3.score = 100;

  cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 成绩：" << s3.score << endl;

  return 0;
}