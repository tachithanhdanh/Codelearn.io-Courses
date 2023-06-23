#ifndef BOOK_HPP_
#define BOOK_HPP_
#include "Author.hpp"
#include <vector>
#include <string>

class Book final {
private:
    std::string name;
    std::vector<Author> authors;
    double price;

public:
    Book(const std::string& name, const std::vector<Author>& authors, double price)
        : name(name), authors(authors), price(price) {}

    void setName(const std::string& name) {
        this->name = name;
    }

    void setPrice(double price) {
        this->price = price;
    }

    const std::string& getName() const {
        return this->name;
    }

    double getPrice() const {
        return this->price;
    }

    const std::string& getAuthorNames() const {
        if (authors.empty()) {
            return "";
        }

        std::string ret = authors.front().getName();
        for (int i = 1; i < authors.size(); ++i) {
            ret += ", " + authors[i].getName();
        }

        return ret;
    }
};

#endif