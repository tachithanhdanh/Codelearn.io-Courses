#ifndef EXERCISE22_STUDENT_HPP_
#define EXERCISE22_STUDENT_HPP_
#include <string>

class Student {
private:
    int m_id;
    std::string m_name;
    int m_age;
    std::string m_address;
    int m_score;

public:
    Student(
        int id = 0, 
        const std::string& name = "", 
        int age = 0, 
        const std::string& address = "", 
        int score = 0
    );
    void setId(int id);
    void setName(const std::string& name);
    void setAge(int age);
    void setAddress(const std::string& address);
    void setScore(int score);
    int getId() const;
    const std::string& getName() const;
    int getAge() const;
    const std::string& getAddress() const;
    int getScore() const;
};

#endif
