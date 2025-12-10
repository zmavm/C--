#include <iostream>
using namespace std;

int main() {
    int i = true;
    while (i){
        int age;
        std::cout << "Enter your age: ";
        std::cin >> age;
        if (age > 0) {
            std::cout << "You are " << age << " years old." << std::endl;
            continue;
        }
        else {
            std::cout << "ERROR" << std::endl;
        }
        return 0;
    }
}
