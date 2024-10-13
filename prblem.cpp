#include <iostream>
#include <string>
#include <vector>

// Base class
class Student {
public:
    int id;
    int role;
    std::string name;
};

// Derived class for Class Nine
class ClassNine : public Student {
public:
    ClassNine() {
        // Initialize array of objects for Class Nine using initializer list
        students = {
            {1, 10, "John"},
            {2, 12, "Alice"},
            {3, 13, "Bob"}
        };
    }

    // Function to get student by role number
    Student getStudentByRole(int roleNumber) {
        for (const auto& student : students) {
            if (student.role == roleNumber) {
                return student;
            }
        }
        // Return a default-constructed Student object if not found
        return Student();
    }

private:
    std::vector<Student> students;
};

// Derived class for Class Ten
class ClassTen : public Student {
public:
    ClassTen() {
        // Initialize array of objects for Class Ten using initializer list
        students = {
            {4, 10, "Charlie"},
            {5, 12, "Diana"},
            {6, 13, "Eva"}
        };
    }

    // Function to get student by role number
    Student getStudentByRole(int roleNumber) {
        for (const auto& student : students) {
            if (student.role == roleNumber) {
                return student;
            }
        }
        // Return a default-constructed Student object if not found
        return Student();
    }

private:
    std::vector<Student> students;
};

// Main class
int main() {
    int classNumber;
    std::cout << "Enter class number = ";
    std::cin >> classNumber;

    // Check class number and instantiate the appropriate class
    if (classNumber == 9) {
        ClassNine classNine;
        int roleNumber;
        std::cout << "Enter role number: ";
        std::cin >> roleNumber;

        // Get and print the student information
        Student student = classNine.getStudentByRole(roleNumber);
        if (student.id != 0) {
            std::cout << "Student Found - ID: " << student.id << ", Name: " << student.name << std::endl;
        } else {
            std::cout << "Student not found!" << std::endl;
        }
    } else if (classNumber == 10) {
        ClassTen classTen;
        int roleNumber;
        std::cout << "Enter role number: ";
        std::cin >> roleNumber;

        // Get and print the student information
        Student student = classTen.getStudentByRole(roleNumber);
        if (student.id != 0) {
            std::cout << "Student Found - ID: " << student.id << ", Name: " << student.name << std::endl;
        } else {
            std::cout << "Student not found!" << std::endl;
        }
    } else {
        std::cout << "Class not found!" << std::endl;
    }

    return 0;
}