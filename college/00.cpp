// 2023-08-21
#include <iostream>

class Student {
    int age;
    int marks;

public:
    int getAge() { // getters
        return this->age;
    }

    void setAge(int age) {
        if (age > 16)
            this->age = age;
        else 
            std::cout << "You are Under-Age" << std::endl;
    }
};

int main() {
    Student s1;
    std::cout << s1.getAge() << std::endl;
    s1.setAge(20);
    std::cout << s1.getAge() << std::endl;
}
