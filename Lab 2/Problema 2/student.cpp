#include "student.h"
#include <cstring>


void student::setName(const char *x) {
    strcpy_s(name, x);
}

const char* student::getName()const{
    return name;
}

void student::setMathGrade(float grade) {
    if (grade >= 1 && grade <= 10)
        mathGrade = grade;
}

float student::getMathGrade() const {
    return mathGrade;
}

void student::setEnglishGrade(float grade) {
    if (grade >= 1 && grade <= 10)
        englishGrade = grade;
}

float student::getEnglishGrade() const {
    return englishGrade;
}

void student::setHistoryGrade(float grade) {
    if (grade >= 1 && grade <= 10)
        historyGrade = grade;
}

float student::getHistoryGrade() const {
    return historyGrade;
}

float student::getAverageGrade() const {
    return (mathGrade + englishGrade + historyGrade) / 3.0f;
}
