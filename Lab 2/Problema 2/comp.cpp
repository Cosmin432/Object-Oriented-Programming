#include "comp.h"
#include <cstring>
#include "student.h"

int compareByName(const student& s1, const student& s2)
{
	
	return std::strcmp(s1.getName(), s2.getName());
}
int compareByAverage(const student& s1, const student& s2)
{
	float avg1 = s1.getAverageGrade();
	float avg2 = s2.getAverageGrade();
	if (avg1 == avg2)
		return 0;
	else if (avg1 > avg2)
		return 1;
	else
		return -1;
}


int compareByGradeE(const student& s1, const student& s2)
{
	float E1 = s1.getEnglishGrade();
	float E2 = s2.getEnglishGrade();
	if (E1 == E2)
		return 0;
	else if (E1 > E2)
		return 1;
	else
		return -1;
}
int compareByGradeH(const student& s1, const student& s2)
{
	float E1 = s1.getHistoryGrade();
	float E2 = s2.getHistoryGrade();
	if (E1 == E2)
		return 0;
	else if (E1 > E2)
		return 1;
	else
		return -1;
}
int compareByGradeM(const student& s1, const student& s2)
{
	float E1 = s1.getMathGrade();
	float E2 = s2.getMathGrade();
	if (E1 == E2)
		return 0;
	else if (E1 > E2)
		return 1;
	else
		return -1;
}