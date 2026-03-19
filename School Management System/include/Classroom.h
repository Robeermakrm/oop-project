#ifndef CLASSROOM_H
#define CLASSROOM_H


class Classroom
{   private:
    int roomNumber;
    int capacity;
public :
    Classroom()
    {

    }
    Classroom(int roomNumber,int capacity)
    {
        this ->roomNumber=roomNumber;
        this ->capacity=capacity;
    }
    void set_roomNumber(int roomNumber)
    {
        this ->roomNumber=roomNumber;
    }
    void set_capacity(int capacity )
    {
        this ->roomNumber=roomNumber;
    }
    int get_roomNumber()
    {
        return roomNumber;
    }
    int get_capacity()
    {
        return capacity;
    }
    void print()
    {
        cout<<"The roomNumber is :"<<roomNumber<<endl;
        cout<<"The capacity is :"<<capacity<<endl;
    }
    void information()
    {
        cout<<"please enter a room numper : "<<endl;
        cin>>roomNumber;
        cout<<"please enter a capacity : "<<endl;
        cin>>capacity;
    }
};

#endif // CLASSROOM_H
