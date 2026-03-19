#ifndef COURSE_H
#define COURSE_H


class Course
{
private :
    string courseCode;
    string courseName;
    string teacherName;
public :
    Course()
    {

    }
    Course(string courseCode,string courseName, string teacherName)
    {
        this ->courseCode=courseCode;
        this ->courseName=courseName;
        this ->teacherName=teacherName;
    }
    void set_courseCode(string courseCode)
    {
        this ->courseCode=courseCode;
    }
    void set_courseName(string courseName)
    {
        this ->courseName=courseName;
    }
    void set_teacherName(string teacherName)
    {
        this ->teacherName=teacherName;
    }
    string get_courseCode()
    {
        return courseCode;
    }
    string get_courseName()
    {
        return courseName;
    }
    string get_teacherName()
    {
        return teacherName;
    }
    void print()
    {
        cout<<"The courseCode is : "<<courseCode<<endl;
        cout<<"The courseName is : "<<courseName<<endl;
        cout<<"The teacherName is : "<<teacherName<<endl;

    }
    void information()
    {
        cout<<"pleas enter a cours code : "<<endl;
        cin>>courseCode;
        cout<<"pleas enter a cours name : "<<endl;
        cin>>courseName;
        cout<<"pleas enter a teacher name : "<<endl;
        cin>>teacherName;
    }
};

#endif // COURSE_H
