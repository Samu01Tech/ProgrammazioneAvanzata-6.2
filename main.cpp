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
        Student(int x): Persona(x){
            cout << "Creato Studente (Specifico)" << endl;
        }
};

class Faculty: public Persona{
    public: 
        Faculty(int x): Persona(x){
            cout << "Creato Faculty (Specifico)" << endl;
        }
};

class Ta: public Student, public Faculty{
    public: 
        Ta(int x1, int x2): Faculty(x1), Student(x2){
            cout << "Creato Ta (Specifico)" << endl;
        }
};

int main() {
    //Student s(12);
    //Faculty f(99);
    Ta ta(99, 12);
    return 0;
} 