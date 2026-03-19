#ifndef SCHOOL_H
#define SCHOOL_H
#include <iostream>

using namespace std;

class School
{
private :
    string schoolName;
    string address;
    string principalName;
    Student students[1000];
    Teacher teachers[50];
    Staff staffMembers[50];
    Course courses[6];
    Classroom classrooms[30];
    int student_conter=0;
    int teacher_conter=0;
    int staff_conter=0;
    int course_conter=0;
    int classroom_conter=0;
public :
    void add_student(Student stud )
    {
        if(student_conter==1000)
        {
            cout<<"The schole is full"<<endl;
        }
        else
        {
            students[student_conter]=stud;
            student_conter++;
        }


    }
    void add_teacher(Teacher teach)
    {
        if (teacher_conter==50)
        {
            cout<<"The teacher is full"<<endl;
        }
        else
        {
            teachers[teacher_conter]=teach;
            teacher_conter++;
        }

    }
    void add_staff(Staff staa)
    {
        if (staff_conter==50)
        {
            cout<<"the staff is full"<<endl;
        }
        else
        {
            staffMembers[staff_conter]=staa;
            staff_conter++;
        }


    }
    void add_cours(Course cour)
    {
        if (course_conter==6)
        {
            cout<<"the course is full"<<endl;
        }
        else
        {
            courses[course_conter]=cour;
            course_conter++;
        }
    }

    void add_Classroom (Classroom clss)
    {
        if(classroom_conter==30)
        {
            cout<<"the classroom is full"<<endl;
        }
        else
        {
            classrooms[classroom_conter]=clss;
            classroom_conter++;
        }

    }
void printAllStudent()
    {
        cout<<"_________________________"<<endl;
        for(int i=0; i<student_conter; i++)
        {
            students[i].print();
         cout<<"_________________________"<<endl;
        }

    }
void printAllTeacher()
    {
        cout<<"_________________________"<<endl;
        for(int i=0; i<teacher_conter; i++)
        {
            teachers[i].print();
        }
        cout<<"_________________________"<<endl;
    }
void printAllStaff()
    {
        cout<<"_________________________"<<endl;
        for(int i=0; i<staff_conter; i++)
        {
            staffMembers[i].print();
        }
        cout<<"_________________________"<<endl;
    }
void printAllClassroom()
    {
        cout<<"_________________________"<<endl;
        for(int i=0; i<classroom_conter; i++)
        {
            classrooms[i].print();
         cout<<"_________________________"<<endl;
        }

    }

void printAllCourse()
    {
        cout<<"_________________________"<<endl;
        for(int i=0; i<course_conter; i++)
        {
            courses[i].print();
        }
        cout<<"_________________________"<<endl;
    }








};

#endif // SCHOOL_H
