#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Student{
    private:
    int roll_no, age;
    float cgpa;
    string name;
    
    Student() = default;
    Student( string Name, int Roll_no, int Age, float Cgpa) {
         name = Name;
         roll_no = Roll_no;
         age = Age;
         cgpa = Cgpa;
    }
    void display() {

        cout << "Name is : " << name << endl;
        cout << "Roll is : " << roll_no << endl;
        cout << "Age is  : " << age << endl;
        cout << "CGPA is : " << cgpa << endl;
        cout << endl;
    }
};

void findbyRoll(int key, vector<Student>& students_data) {
        for(int i = 0; i<students_data.size(); i++) {
            if(students_data[i].roll_no == key){
                cout << "Student Found!" << endl;
                cout << "Name : " << students_data[i].name << endl;
                cout << "Age : " << students_data[i].age << endl;
                cout << "CGPA : " << students_data[i].cgpa << endl;
                return; 
            }
        }
        cout << "Student Not Found!" << endl;

}

void HighestCGPA (vector<Student>& students_data){
    float HighestCGPA_maxi = students_data[0].cgpa;
    int index = 0;
    for(int i = 0; i<students_data.size(); i++) {
        if(students_data[i].cgpa > HighestCGPA_maxi) {
            HighestCGPA_maxi = students_data[i].cgpa;
            index = i;
        }
    }
    cout << "Highest CGPA" << endl;
    students_data[index].display();
}
void DeleteByRoll(int key, vector<Student>& students_data) {
    
    for(int i = 0; i<students_data.size(); i++) {
        if(key == students_data[i].roll_no) {
            students_data.erase(students_data.begin() + i);
            cout << "Deleted Student Record Successfully!";
            return;
    }
}
cout << "No Student Found";
}
int main()
{
    long long int roll, age, n, choice, deletedkey, findkey;
    float cgpa;
    Student temp;
    vector<Student> students_data;
    string name;
    cout << "------Student Management System-------" << endl << endl;
    cout << "Please Enter your Choice : \n";
    cout << "1. Insert Students\n";
    cout << "2. Delete Student\n";
    cout << "3. Search Student\n";
    cout << "4. Find Topper\n";
    cout << "5. Display Students\n";
    cout << "6. Exit";

    cin >> choice;
    do{
        switch(choice) {
            case 1: 
            cout << "Enter the number of students to insert \n";
            cin >> n;
            cin.ignore();
            for(int i = 0; i<n; i++) {
                getline(cin, name);
                cin >> roll;
                cin >> age;
                cin >> cgpa;


                Student s1(name, roll, age, cgpa);
                students_data.push_back(s1);
            }
            break;

            case 2:

            cout << "Enter the roll number of student to be deleted";
            cin >> deletedkey;
            DeleteByRoll(deletedkey, students_data);
            break;

            case 3:

            cout << "Enter the roll number of student to be searched";
            cin >> findkey;
            findbyRoll(findkey, students_data);
            break;

            case 4:
            HighestCGPA(students_data);
            break;

            case 5: 
            
            for(int i = 0; i<students_data.size(); i++) {
                students_data[i].display();
            }
            break;

            case 6:
            cout << "Exiting ...";
            break;

            default: 
            cout << "Not a valid number";
            break;
        }
    }
    while(choice != 6);
    
}