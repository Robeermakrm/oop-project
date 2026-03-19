#include <iostream>
#include <Teacher.h>
#include <Course.h>
#include <Classroom.h>
#include <Exam.h>
#include <Student.h>
#include <Staff.h>
#include <School.h>


using namespace std;
int main()
{
    School sh;
    int n ;
    do
    {
        cout<<"please enter 0 to exait "<<endl;
        cout<<"please enter 1 to add student "<<endl;
        cout<<"please enter 2 to add teacher "<<endl;
        cout<<"please enter 3 to add staff "<<endl;
        cout<<"please enter 4 to add cours  "<<endl;
        cout<<"please enter 5 to add class room "<<endl;
        cout<<"please enter 6 to print all student  "<<endl;
        cout<<"please enter 7 to print all teacher  "<<endl;
        cout<<"please enter 8 to print all staff "<<endl;
        cout<<"please enter 9 to print all corsses "<<endl;
        cout<<"please enter 10 to print all class room "<<endl;
        cin >>n;
     system("cls");
        switch(n)
        {
        case 1:
        {
            Student s;
            s.information();
            sh.add_student(s);
            break;
        }
        case 2:
        {
            Teacher t;
            t.information();
            sh.add_teacher(t);
            break;
        }
        case 3:
        {
            Staff f;
            f.information();
            sh.add_staff(f);
            break;
        }
        case 4:
        {
            Course c;
            c.information();
            sh.add_cours(c);
            break;
        }
        case 5:
        {
            Classroom r;
            r.information();
            sh.add_Classroom(r);
            break;
        }
        case 6:
        {
            sh.printAllStudent();
            system("pause");
            break;
        }
        case 7:
        {
            sh.printAllTeacher();
            system("pause");
            break;
        }
        case 8:
        {
            sh.printAllStaff();
            system("pause");
            break;
        }
        case 9:
        {
            sh.printAllCourse();
            system("pause");
            break;
        }
        case 10:
        {
            sh.printAllClassroom();
            system("pause");
            break;
        }

        }




   } while(n!=0);

}
