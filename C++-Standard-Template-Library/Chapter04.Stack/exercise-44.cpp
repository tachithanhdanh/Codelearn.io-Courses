#include <string>
#include <cstdlib>
#include <stack>
#include <iostream>

std::string decodeString(std::string s) {
    std::stack<std::string> expression;
    std::stack<int> mul;
    std::string cur;
    std::string next_top;
    int times = 0;
    int size = static_cast<int>(s.size());
    for (int i = 0; i < size; ++i) {
        // std::cout << "cur = " << s[i] << '\n';
        if (std::isdigit(s[i])) {
            times = 0;
            while (i < size && std::isdigit(s[i])) {
                times = times * 10 + (s[i] - '0');
                ++i;
            }
            mul.push(times);
            --i;
        } else if (s[i] == ']') {
            times = mul.top();
            mul.pop();
            next_top.clear();
            while (expression.top() != "[") {
                cur = expression.top();
                expression.pop();
                next_top = cur + next_top;
            }
            expression.pop();
            cur = next_top;
            for (int j = 1; j < times; ++j) {
                next_top += cur;
            }
            expression.push(next_top);
        } else {
            cur = s[i];
            expression.push(cur);
        }
    }
    return expression.top();
}

int main(void) {
    std::string test;
    std::cin >> test;
    std::cout << decodeString(test);
}
