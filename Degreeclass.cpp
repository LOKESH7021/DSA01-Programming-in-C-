#include <iostream>

class Degree {
public:
    void getDegree() {
        std::cout << "I got a Degree" << std::endl;
    }
};

class Undergraduate : public Degree {
public:
    void getDegree() {
        std::cout << "I am an Undergraduate" << std::endl;
    }
};

class Postgraduate : public Degree {
public:
    void getDegree() {
        std::cout << "I am a Postgraduate" << std::endl;
    }
};

int main() {
    Degree degree;
    Undergraduate undergrad;
    Postgraduate postgrad;

    degree.getDegree();
    undergrad.getDegree();
    postgrad.getDegree();

    return 0;
}
