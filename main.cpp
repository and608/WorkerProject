#include <iostream>
#include <vector>
#include "Worker.h"

int main() {
    int n;
    std::cout << "Введите количество работников: ";
    std::cin >> n;

    std::vector<WORKER> workers;
    workers.reserve(n);

    // Ввод данных
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::string p;
        double sal;
        int y;

        std::cout << "Работник #" << i + 1 << ":\n";

        std::cin.ignore(); // очищение буфера
        std::cout << "Фамилия и инициалы: ";
        std::getline(std::cin, s);
        std::cout << "Должность: ";
        std::getline(std::cin, p);
        std::cout << "Зарплата: ";
        std::cin >> sal;
        std::cout << "Год поступления на работу: ";
        std::cin >> y;

        workers.emplace_back(s, p, sal, y);
    }

    int currentYear;
    std::cout << "Введите текущий год: ";
    std::cin >> currentYear;

    int experienceThreshold;
    std::cout << "Введите стаж, превышающий который выводить фамилии: ";
    std::cin >> experienceThreshold;

    bool found = false;

    std::cout << "Работники со стажем более " << experienceThreshold << " лет:\n";

    for (const auto& worker : workers) {
        if (worker.getWorkExperience(currentYear) > experienceThreshold) {
            std::cout << worker.surname_initials << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "Таких работников нет.\n";
    }

    return 0;
}