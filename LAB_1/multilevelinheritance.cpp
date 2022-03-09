//multilevelinheritance.cpp
/*Design three classes: Student, Exam and Result. The student class has data members such as roll no, name etc. 
Create a class Exam by inheriting the Student class. 
The Exam class adds data members representing the marks scored in six subjects. 
Derive the Result from class Exam and it has its own members such as total marks. 
Write an interactive program to model this relationship. What type of inheritance this model belongs to?*/
#include <iostream>
#include <iomanip>
using namespace std;


class Student
{
private:
    enum {LEN = 50};
    char name[LEN];
    unsigned long roll_no;
public:
    void getdata()
    {
        cout << "\n Enter the name : " ; cin >> name;
        cout << "\n Enter the roll No. : "; cin >> roll_no;
    }
    void putdata() const
    {
        cout << "\n Name : " << name;
        cout << "\n Roll Number : " << roll_no << endl;

    }
};

//////////////////////////////////////////////////////////////

class Exam : public Student
{
protected:
    long marks[6];
public:
    void getdata()
    {
        Student::getdata();
        for (int i = 0; i < 5; i++)
        {
            cout << "\nEnter the marks: "; cin >> marks[i];
        }
    }
    
    void putdata() const
    {
        Student::putdata();
        for(int i = 0; i < 5; i++)
            cout <<marks[i] << endl;
    }
};
//////////////////////////////////////////////////////////////

class Result : public Exam
{
private:
    unsigned long total = 0;
public:
    void sum()
    {
        
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        cout << total;
    }
    void putdata() const
    {

        Exam::putdata();
        cout << "\n Sum of the Total marks: " ;
    }
};
////////////////////////////////////////////////////////////////////////////////////
int main()
{
    Result r1;
    r1.getdata();
    r1.putdata();
    r1.sum();
    cout << endl;
    return 0;
}