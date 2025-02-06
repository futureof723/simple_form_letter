#include <iostream>
#include <string>

int main() {
    std::cout << "This drill is to write a program that produces a simple form letter based on user input." << std::endl;

    std::string first_name, friend_name;
    char friend_sex = 0;
    int age = 0;

    std::cout << "\nPlease enter your first name: " << std::endl;
    std::getline(std::cin, first_name);

    std::cout << "\nHello, " << first_name << std::endl;

    std::cout << "\nEnter the name of the person you want to write to: " << std::endl;
    std::getline(std::cin, first_name);

    std::cout << "\nDear " << first_name << "," << std::endl;
    std::cout << "\nHow are you? I am fine. I miss you." << std::endl;
    std::cout << "I am writing to tell you that my motorcycle was stolen and I am sad." << std::endl;
    std::cout << "I worked hard saving up the money for the motorcycle and it was stolen at night"
                 " while I was sleeping" << std::endl;
    std::cout << "I wish you well. Hopefully one day I will have a motorcycle again." << std::endl;

    std::cout << "\nPlease enter the name of another friend. " << std::endl;
    std::getline(std::cin, friend_name);

    std::cout << "\nDear " << first_name << "," << std::endl;
    std::cout << "\nHow are you? I am fine. I miss you." << std::endl;
    std::cout << "I am writing to tell you that my motorcycle was stolen and I am sad." << std::endl;
    std::cout << "I worked hard saving up the money for the motorcycle and it was stolen at"
                 " night while I was sleeping" << std::endl;
    std::cout << "I wish you well. Hopefully one day I will have a motorcycle again." << std::endl;
    std::cout << "\nHave you talked to " << friend_name << " lately?" << std::endl;

    std::cout << "\nPlease enter m if the friend is male and f if the friend is female." << std::endl;
    std::cin >> friend_sex;

    if (friend_sex == 'm') {
        std::cout << "If you see " << friend_name << " will you please tell him to call me?" << std::endl;
    } else if (friend_sex == 'f') {
        std::cout << "If you see " <<  friend_name << " will you please tell her to call me?" << std::endl;
    } else {
        std::cout << "Big fat error." << std::endl;
    }

    std::cout << "\nPlease enter the age of the recipient." << std::endl;
    std::cin >> age;

    std::cout << "\nI hear you just had a birthday and you are " << age << " years old." << std::endl;

    if (age < 12) {
        std::cout << "Next year you will be " << ++age << " years old" << std::endl;
    }

    if (age == 17) {
        std::cout << "Next year you will be able to vote." << std::endl;
    }

    if (age > 70) {
        std::cout << "I hope you are enjoying retirement." << std::endl;
    }

    if (age < 0 || age > 110) {
        std::cout << "\nHow can you be less than 0 or greater than 110 years old?" << std::endl;
    }

    std::cout << "\nYours sincerely," << std::endl;
    std::cout << "Tyler" << std::endl;

    return 0;
}