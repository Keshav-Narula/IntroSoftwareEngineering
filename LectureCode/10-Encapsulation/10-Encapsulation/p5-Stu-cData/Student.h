#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
  public:
    Student(string="000000000", string="Hey you!", string="basket-weaving", float=0.0f);
    ~Student();
    string getName() const;
    void setName(string n);
    void print() const;

  private:
    const string number;
    string name;
    string majorPgm;
    float  gpa;
};

#endif
