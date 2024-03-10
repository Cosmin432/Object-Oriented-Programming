#include <iostream>
#include "student.h"
#include "comp.h"

int main() {
    student s1, s2;
    s1.setName("Cosmin");
    s1.setMathGrade(8);
    s1.setEnglishGrade(7);
    s1.setHistoryGrade(9);

    s2.setName("Florin");
    s2.setMathGrade(7);
    s2.setEnglishGrade(6);
    s2.setHistoryGrade(8);

    std::cout << "Student 1 Name: " << s1.getName() << std::endl;
    std::cout << "Student 1 Math Grade: " << s1.getMathGrade() << std::endl;
    std::cout << "Student 1 English Grade: " << s1.getEnglishGrade() << std::endl;
    std::cout << "Student 1 History Grade: " << s1.getHistoryGrade() << std::endl;
    std::cout << "Student 1 Average Grade: " << s1.getAverageGrade() << std::endl;

    std::cout << "Student 2 Name: " << s2.getName() << std::endl;
    std::cout << "Student 2 Math Grade: " << s2.getMathGrade() << std::endl;
    std::cout << "Student 2 English Grade: " << s2.getEnglishGrade() << std::endl;
    std::cout << "Student 2 History Grade: " << s2.getHistoryGrade() << std::endl;
    std::cout << "Student 2 Average Grade: " << s2.getAverageGrade() << std::endl;

    
    std::cout << "Comparison by Name: " << compareByName(s1, s2) << std::endl;
    std::cout << "Comparison by Grades: " << compareByGradeE(s1, s2) << std::endl;
    std::cout << "Comparison by Average: " << compareByAverage(s1, s2) << std::endl;


    return 0;
}
