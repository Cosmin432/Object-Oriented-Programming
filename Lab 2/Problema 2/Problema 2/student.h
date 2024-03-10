#pragma once
class student {
private:
    char name[15];
    float mathGrade;
    float englishGrade;
    float historyGrade;

public:

    void setName(const char* name);
    const char* getName() const;

    void setMathGrade(float grade);
    float getMathGrade() const;

    void setEnglishGrade(float grade);
    float getEnglishGrade() const;

    void setHistoryGrade(float grade);
    float getHistoryGrade() const;

    float getAverageGrade() const;
};

int compareByName(const student& s1, const student& s2);
int compareByGradeE(const student& s1, const student& s2);
int compareByGradeH(const student& s1, const student& s2);
int compareByGradeM(const student& s1, const student& s2);
int compareByAverage(const student& s1, const student& s2);


