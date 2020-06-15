#include <iostream>
using namespace std;
#include <string>

struct student {
  string name;
  int age;
  int score;
};

// 将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudents(const student * s) {
  // s->age = 100; // 常量指针无法修改结构体中的变量值
  cout << "姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
};

int main() {

  // 创建结构体变量
  struct student s = {"张三", 15, 70};

  printStudents(&s);

  return 0;
}