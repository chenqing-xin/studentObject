#ifndef Student_H_
#define Student_H_
#include<string>
class Student
{
	private :
		String name;
		int age;
		int GPA;
	public :
		student();
		Student(string n,int a,int G);
		~Student();
		string getName();
		int getAge();
		int getGPA();
}
