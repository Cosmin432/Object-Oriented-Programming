#pragma once
class movie
{
private:
	char name[256];
	int releaseYear;
	double score;
	int lenght;
	int age;
public:
	void setName(const char *x);
	const char* getName()const;

	void setRelease(int x);
	int getRelease()const;

	void setScore(double x);
	double getScore()const;

	void setLenght(int x);
	int getLenght()const;

	int getAge()const;

};

int compareName(const movie& s1, const movie& s2);
int compareRelease(const movie& s1, const movie& s2);
int compareScore(const movie& s1, const movie& s2);
int compareLenght(const movie& s1, const movie& s2);
int compareAge(const movie& s1, const movie& s2);

