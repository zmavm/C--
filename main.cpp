#include <iostream>
using namespace std;

int main() {
    int i = true;
    while (i){
        int age;
        std::cout << "Enter your age: ";
        std::cin >> age;
        std::cout << "You are " << age << " years old." << std::endl;
    }
}
