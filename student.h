#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <vector>
#include <string>

class student
{
private:
std::string first;
std::string last;
double grade;
std::vector<double> gradeList;

public:
void addGrade(double);
std::string fullName();
double getScore();
void setName(std::string, std::string);


};

#endif
