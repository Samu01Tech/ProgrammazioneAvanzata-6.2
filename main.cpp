#include <iostream>
using namespace std;

class Persona{
    private: 
        int age;

    public: 
        Persona(int a){
            age = a;
            cout << "Creata Persona" << endl;
        }
};

class Student: public Persona{
    public:
};

int main() {
  cout << "Hello World!\n";
} 