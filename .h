#include <iostream> 

#include<string> 

using namespace std;



class university

{

private:

    string name; //Name of the university 

    string location; //Location of the university 

    string colleges; //List of colleges affiliated with the university 

    string department; //List of departments within the university 



public:

    void setname()

    {

        cin.ignore();

        getline(cin, name);

    }

    void addlocation()

    {

        cin.ignore();

        getline(cin, location);

    }

    void addcollege() //Adds a new college to the university. 



    {

        cin.ignore();

        getline(cin, colleges);

    }

    void addDepartment() //Adds a new department to the university. 



    {

        cin.ignore();

        getline(cin, department);

    }

    void getColleges() //Returns the list of colleges affiliated with the university. 



    {

        cout << colleges;

    }

    void getDepartments() //Returns the list of departments within the university. 



    {

        cout << department;

    }



};

class user

{

public:

    string username; //Username of the user 

    string role; //: Role of the user  

    string email; //Email address of the user 





};







class student

{

protected:

    int studentid; //Unique identifier for the student 

    string studentname; //Name of the student 

    string CoursesEnrolled; //List of courses the student is enrolled in 

    float grades;//grades for each course 

    int gpa;





public:

    void enrollCourse() //Enrolls the student in a course 

    {

        cout << "ENTER COURSE TO ENROLL STUDENT IN ";

        cin >> CoursesEnrolled;

    }

    void addstudentname()

    {

        cin.ignore();

        getline(cin, studentname);

    }

    void addstudentid()

    {

        cin >> studentid;

    }

    void calculateGPA() // Calculates the student's GPA based on grades 

    {

        gpa = grades / 6;

    }

    void updateGrade(int marks)

    {

        if (marks >= 70) {

            cout << "(A) EXCELLENT";

        }

        else if (marks >= 60) {

            cout << "(B) VERY GOOD";

        }

        else if (marks >= 50) {

            cout << "(C) GOOD";

        }

        else if (marks >= 40) {

            cout << "(D) PASS";

        }

        else if (marks >= 30) {

            cout << "(E) WEAK PASS";

        }

        else {

            cout << "(F) FAIL";

        }

    }



};













class AcademicStaff : public student

{

public:

    int staffid; //Unique identifier for the academic staff member 

    string name; //: Name of the academic staff member 

    string Department; //Department to which the academic staff member belongs 

    string CoursesTaught; //List of courses taught by the academic staff member 

    string course;

    string studentassignment;

    int officehourse;



    void teachCourse()

    {

        cout << "ENTER COURSE FOR THE STAFF ";

        cin >> course;

    }

    void gradeAssignment() //Grades assignments submitted by students. 



    {

        cin >> studentassignment;

    }

    void viewStudentList() //Displays the list of students enrolled in courses taught by the academic staff member. 



    {

        if (CoursesEnrolled == course)

        {

            cout << studentname;

        }

    }



    void scheduleOfficeHours() //Sets office hours for the academic staff member. 



    {

        cin >> officehourse;

    }

};



class course : public student

{

private:

    int coursecode; //Unique code for the course. 

    string coursename; //Name of the course. 

    int credits; //Number of credits assigned to the course. 

    string department;

public:

    void details()

    {

        cin >> coursecode;

        cin >> coursename;

        cin >> department;

        cin >> credits;

    }

    void updateCredits(int c)

    {

        credits = c;

    }

    void viewCourseDetails()

    {

        cout << "course code us : " << coursecode << endl;

        cout << "course name is : " << coursename << endl;

        cout << "course credits is : " << credits << endl;

        cout << "coures deparment : " << department << endl;

    }

    void listEnrolledStudents()

    {

        if (CoursesEnrolled == coursename)

            cout << studentname;

    }



};
