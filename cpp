#include "project.h"
#include <iostream>
using namespace std;
void menu()

{

    cout << " **MENU** " << endl;

    cout << "CHOOSE FROM LIST   \n1-UNIVERSITY  \n2-USER  \n3-STUDENT  \n4-AcademicStaff  \n5-COURSE " << endl;

}
void menuChoice(int choice) {


    if (choice == 1)

    {

        university u1;

        cout << "ENTER UNIVERSITY NAME " << endl;

        u1.setname();

        cout << "ENTER UNIVERSITY LOCATION " << endl;

        u1.addlocation();

        cout << "ENTER UNIVERSITY COLLEGES " << endl;

        u1.addcollege();

        cout << "ENTER UNIVERSITY DEPATMENT " << endl;

        u1.addDepartment();

    }

    else if (choice == 2)

    {



        user uz1;

        cout << "ENTER USERNAME " << endl;

        cin >> uz1.username;

        cout << "ENTER USER ROLE " << endl;

        cin >> uz1.role;

        cout << "ENTER USER EMAIL " << endl;

        cin >> uz1.email;

    }

    else if (choice == 3)

    {

        student s1;

        int studentMarks;

        cout << "ENTER STUDENT ID " << endl;

        s1.addstudentid();

        cout << "ENTER STUDENT NAME " << endl;

        s1.addstudentname();

        s1.enrollCourse();

        cout << "ENTER STUDENT GRADES FOR GPA " << endl;

        cout << "enter the studentMarks" << endl;

        cin >> studentMarks;

        s1.updateGrade(studentMarks);
        s1.calculateGPA();

    }



    else if (choice == 4)

    {

        AcademicStaff a1;

        int x;

        cout << "ENTER STAFF ID " << endl; ;

        cin >> a1.staffid;

        cout << "ENTER STAFF NAME " << endl;

        cin >> a1.name;

        cout << "ENTER STAFF DEPARTMENT " << endl;

        cin >> a1.Department;

        cout << "ENTER STAFF TOTAL COURSES TAUGHT" << endl;

        cin >> x;

        cout << "ENTER STAFF COURSES TAUGHT " << endl;

        for (int i = 0; i < x; i++)

        {

            cin >> a1.CoursesTaught;

        }

        a1.teachCourse();

        cout << "ENTER OFFICE HOURSE " << endl;

        a1.scheduleOfficeHours();

    }







    else if (choice == 5)

    {

        course c1;

        cout << "ENTER COURSE CODE , NAME , DEPARTMENT , CREDITS " << endl;

        c1.details();



        c1.viewCourseDetails();

        c1.listEnrolledStudents();

    }



    else

    {

        cout << "ENTER CORRECT NUMBER";

    }


}
void again() {
    int bol = 1;
    cout << "if you want to rerun the program please enter 1  " << endl;
}


int main() {

    for (int bol = 1; bol == 1;) {
        int choice;
        menu();
        cin >> choice;
        menuChoice(choice);
        again();
        cin >> bol;

        if (bol != 1) {
            cout << "the program has ended" << endl;
        }
    }

}

