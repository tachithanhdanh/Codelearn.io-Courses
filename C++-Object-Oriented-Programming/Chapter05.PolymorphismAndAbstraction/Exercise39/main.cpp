#include <iostream>

using std::cout;

class Animal {
public:
    virtual void sound() {
        cout << "some sound";
        cout.put('\n');
    }
};

class Dog : public Animal {
    void sound() final override {
        cout << "bow wow\n";
    }
};

class Cat : public Animal {
	void sound() final override {
        cout << "meow meow\n";
    }
};

class Duck : public Animal {
	void sound() final override {
        cout << "quack quack\n";
    }
};

int main() {
	Animal* animals[4];
	animals[0] = new Animal();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Duck();
	for (int i = 0; i < 4; i++) {
		animals[i]->sound();
	}
	return 0;
}