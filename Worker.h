#ifndef WORKER_H
#define WORKER_H

#include <string>

class WORKER {
private:
    std::string surname_initials;  // Фамилия и инициалы
    std::string position;          // Название должности
    double salary;                 // Зарплата
    int year_of_employment;        // Год поступления на работу

public:
    // Конструкторы
    WORKER(); // конструктор по умолчанию
    WORKER(const std::string& surname_initials, const std::string& position, double salary, int year);
    // деструктор
    ~WORKER();

    // Методы изменения
    void setSurnameInitials(const std::string& s) { surname_initials = s; }
    void setPosition(const std::string& p) { position = p; }
    void setSalary(double s) { salary = s; }
    void setYearOfEmployment(int y) { year_of_employment = y; }

    // Методы отображения
    void display() const;

    // Метод получения стажа
    int getWorkExperience(int currentYear) const;
};

#endif 
