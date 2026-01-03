#include "Worker.h"
#include <iostream>

WORKER::WORKER() : surname_initials(""), position(""), salary(0.0), year_of_employment(0) {}

WORKER::WORKER(const std::string& s, const std::string& p, double sal, int y)
    : surname_initials(s), position(p), salary(sal), year_of_employment(y) {}

WORKER::~WORKER() {}

void WORKER::display() const {
    std::cout << "Фамилия и инициалы: " << surname_initials
              << ", Должность: " << position
              << ", Зарплата: " << salary
              << ", Год поступления: " << year_of_employment
              << std::endl;
}

int WORKER::getWorkExperience(int currentYear) const {
    return currentYear - year_of_employment;
} 
