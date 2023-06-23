#ifndef AUTHOR_HPP_
#define AUTHOR_HPP_
#include <string>

class Author final {
private:
    std::string name;
    std::string email;

public:
    Author(const std::string& name, const std::string& email)
        : name(name), email(email) {}

    void setName(const std::string& name) {
        this->name = name;
    }

    void setEmail(const std::string& email) {
        this->email = email;
    }

    const std::string& getName() const {
        return this->name;
    }

    const std::string& getEmail() const {
        return this->email;
    }
};

#endif