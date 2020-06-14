#include <iostream>
using namespace std;

// 结构体指针

// 定义学生结构体

struct Student
{
  string name;
  int age;
  int score;
};

int main() {

  // 1、创建学生结构体变量
  struct Student s = {"张三",18,80};

  // 2、通过指针指向结构体变量
  struct Student *p = &s;

  // 3、通过指针访问结构体变量中的数据
  // 利用->访问结构体变量
  cout << "姓名：" << p->name << " 年龄：" << p->age << " 成绩：" << p->score << endl;

  return 0;
}