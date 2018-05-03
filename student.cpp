#include "student.h"
#include <string>
#include <vector>


void student::setName(std::string one, std::string two)
{
  first=one;
  last=two;
}

std::string student::fullName()
{
  std::string name="";

  name.append(first);
  name.append(" ");
  name.append(last);
  return name;

}

void student::addGrade(double grade)
{
  gradeList.push_back(grade);
}

double student::getScore()
{
  double score=0.0;
  for(int i=0; i<gradeList.size(); i++)
  {
    score= score+gradeList[i]; 
  }
  if(gradeList.size()>0)
  {
   score=score/gradeList.size();
  }
  return score;

}
