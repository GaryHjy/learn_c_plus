#include <iostream>
using namespace std;
#include <string>

struct student {
  string name;
  int age;
  int score;
};

struct teacher {
  int id; // id
  string name;
  int age;
  struct student stu;
};

int main() {

  // 创建

  teacher t;
  t.id = 1;
  t.name = "老王";
  t.age = 50;
  t.stu.name = "小王";
  t.stu.age = 20;
  t.stu.score = 60;

  cout << "老师姓名：" << t.name << "老师的年龄：" << t.age << "老师的辅导的学生姓名：" << t.stu.name << endl;

  return 0;
}