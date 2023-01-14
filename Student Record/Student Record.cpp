#include <iostream>
#include <vector>

// Student structure to store student information
struct Student {
    int id = 0;
    std::string name;
    std::string email;
    std::string phone;
};

// Vector to store student records
std::vector<Student> students;

// Function to add a student record
void add_student() {
    Student new_student;

    std::cout << "Enter student ID: ";
    std::cin >> new_student.id;

    std::cout << "Enter student name: ";
    std::cin >> new_student.name;

    std::cout << "Enter student email: ";
    std::cin >> new_student.email;

    std::cout << "Enter student phone number: ";
    std::cin >> new_student.phone;

    students.push_back(new_student);
    std::cout << "Student added to database!" << std::endl;
}

// Function to delete a student record
void delete_student() {
    int id;
    std::cout << "Enter student ID: ";
    std::cin >> id;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            students.erase(students.begin() + i);
            std::cout << "Student deleted from database!" << std::endl;
            return;
        }
    }

    std::cout << "Student not found in database!" << std::endl;
}

// Function to update a student record
void update_student() {
    int id;
    std::cout << "Enter student ID: ";
    std::cin >> id;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            std::cout << "Enter new student name: ";
            std::cin >> students[i].name;

            std::cout << "Enter new student email: ";
            std::cin >> students[i].email;

            std::cout << "Enter new student phone number: ";
            std::cin >> students[i].phone;

            std::cout << "Student record updated!" << std::endl;
            return;
        }
    }

    std::cout << "Student not found in database!" << std::endl;
}

void search_student() {
    int id;
    std::cout << "Enter student ID: ";
    std::cin >> id;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            std::cout << "ID: " << students[i].id << std::endl;
            std::cout << "Name: " << students[i].name << std::endl;
            std::cout << "Email: " << students[i].email << std::endl;
            std::cout << "Phone: " << students[i].phone << std::endl;
            return;
        }
    }

    std::cout << "Student not found in database!" << std::endl;
}

void view_students() {
    if (students.empty()) {
        std::cout << "No students found in database!" << std::endl;
        return;
    }

    for (int i = 0; i < students.size(); i++) {
        std::cout << "ID: " << students[i].id << std::endl;
        std::cout << "Name: " << students[i].name << std::endl;
        std::cout << "Email: " << students[i].email << std::endl;
        std::cout << "Phone: " << students[i].phone << std::endl;
        std::cout << std::endl;
    }
}

int main() {
    while (true) {
        std::cout << "1. Add student" << std::endl;
        std::cout << "2. Delete student" << std::endl;
        std::cout << "3. Update student" << std::endl;
        std::cout << "4. Search student" << std::endl;
        std::cout << "5. View all students" << std::endl;
        std::cout << "6. Quit" << std::endl;

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            add_student();
        }
        else if (choice == 2) {
            delete_student();
        }
        else if (choice == 3) {
            update_student();
        }
        else if (choice == 4) {
            search_student();
        }
        else if (choice == 5) {
            view_students();
        }
        else if (choice == 6) {
            break;
        }
        else {
            std::cout << "Invalid choice!" << std::endl;
        }
    }

    return 0;
}

