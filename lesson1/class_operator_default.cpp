#include <iostream>
#include <string>
#include <string_view>

class Car
{
private:
    std::string m_make;
    std::string m_model;

public:
    Car(std::string make, std::string model)
        
    {
        m_make = make;
        m_model = model;
    }

    friend bool operator== (const Car& c1, const Car& c2);
    friend bool operator!= (const Car& c1, const Car& c2);
};
class Oto: public Car{
    public:
    Oto(std::string make, std::string model): Car(make, model){}
};

bool operator== (const Car& c1, const Car& c2)
{
    return (c1.m_make == c2.m_make &&
            c1.m_model == c2.m_model);
}

bool operator!= (const Car& c1, const Car& c2)
{
    return (c1.m_make != c2.m_make ||
            c1.m_model != c2.m_model);
}

int main()
{
    Car corolla{ "Toyota", "Camry" };
    Car camry{ "Toyota", "Camry" };
    Oto ferrari{"Toyota", "Camry"};
    if (corolla != camry)
        std::cout << "a Corolla and Camry are the same.\n";

    if (corolla != ferrari)
        std::cout << "a Corolla and Camry are not the same.\n";

    return 0;
}
