#include <iostream>
#include <string.h>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

public:
    void print()
    {
        cout << "Date = " << day << endl;
        cout << "Month = " << month << endl;
        cout << "Year = " << year << endl;
    }
};

class Course : public Date
{
    char coursename[80];
    int duration;

public:
    Course(char coursename[80], int duration, int day, int month, int year)
        : Date(day, month, year)
    {
        strcpy(this->coursename, coursename);
        this->duration = duration;
    }

public:
    void print()
    {
        cout << "Course name = " << coursename << endl;
        cout << "Duration = " << duration << endl;
    }
};

class Student : public Course
{

private:
    char studentname[50];
    char fathername[50];
    char address[50];
    char mobile[10];

public:
    Student(char studentname[50], char fathername[50], char address[50], char mobile[10], char coursename[80], int duration, int day, int month, int year)
        : Course(coursename, duration, day, month, year)
    {
        strcpy(this->studentname, studentname);
        strcpy(this->fathername, fathername);
        strcpy(this->address, address);
        strcpy(this->mobile, mobile);
    }

public:
    void print()
    {
        cout << "Student Name = " << studentname << endl;
        cout << "Father Name = " << fathername << endl;
        cout << "Address = " << address << endl;
        cout << "Mobile No.. = " << mobile << endl;
    }
};

class Admishion : public Student
{
    int admissionnumber;

public:
    Admishion(int admissionnumber, char studentname[50], char fathername[50], char address[50], char mobile[10], char coursename[80], int duration, int day, int month, int year)
        : Student(studentname, fathername, address, mobile, coursename, duration, day, month, year)
    {
        this->admissionnumber = admissionnumber;
    }

public:
    void printall()
    {
        cout << "Admission No. " << admissionnumber << endl;
    }
};

int main()
{
    int a, b, c, d, e, f;
    char p[80], q[80], r[80], s[80], t[80];
    fflush(stdin);
    cout << "Enter Course Name :" << endl;
    cin.getline(p, 8);
    fflush(stdin);
    cout << "Duration of Course :" << endl;
    cin >> d;
    cout << "enter birth - day , month , year";
    cin >> a >> b >> c;
    cout << "Enter Admission Number :";
    cin >> e;
    fflush(stdin);
    cout << "Enter Student Name :";
    cin.getline(q, 80);
    fflush(stdin);
    cout << "Enter Father Name :";
    cin.getline(r, 80);
    fflush(stdin);
    cout << "Enter address :";
    cin.getline(s, 80);
    fflush(stdin);

    cout << "Enter Mobile Number :";
    cin.getline(t, 80);
    fflush(stdin);

    Date d1(a, b, c);
    Course c1(p, d, a, b, c);
    Student s1(q, r, s, t, p, d, a, b, c);
    Admishion a1(e, q, r, s, t, p, d, a, b, c);
    a1.printall();
    s1.print();
    d1.print();
    c1.print();

    return 0;
}