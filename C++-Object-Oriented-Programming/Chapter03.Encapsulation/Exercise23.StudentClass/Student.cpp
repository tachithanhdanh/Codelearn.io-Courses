#include "Student.hpp"

// https://stackoverflow.com/questions/3171540/long-constructor-initialization-lists
Student::Student(
    int id, 
    const std::string& name, 
    int age, 
    const std::string& address, 
    int score
) 
    : m_id(id)
    , m_name(name)
    , m_age(age)
    , m_address(address)
    , m_score(score)
{
    setScore(m_score);
}

void Student::setId(int id) {
    m_id = id;
    return;
}

void Student::setName(const std::string& name) {
    m_name = name;
    return;
}

void Student::setAge(int age) {
    m_age = age;
    return;
}

void Student::setAddress(const std::string& address) {
    m_address = address;
    return;
}

void Student::setScore(int score) {
    m_score = score;
    if (m_score < 0) m_score = 0;
    if (m_score > 10) m_score = 10;
    return;
}

int Student::getId() const {
    return m_id;
}

const std::string& Student::getName() const {
    return m_name;
}

int Student::getAge() const {
    return m_age;
}

const std::string& Student::getAddress() const {
    return m_address;
}

int Student::getScore() const {
    return m_score;
}
