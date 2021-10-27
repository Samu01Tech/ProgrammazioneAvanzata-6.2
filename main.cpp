#include <iostream>
using namespace std;

class Persona{
    private: 
        int age;

    public: 
        Persona(){//necessario a causa del virtual
            cout << "Creata Persona Vuota" << endl;
        }
        Persona(int a){
            age = a;
            cout << "Creata Persona" << endl;
        }
};

class Student: virtual public Persona{//evita la doppia invocazione
    public:
        Student(int x): Persona(x){
            cout << "Creato Studente (Specifico)" << endl;
        }
};

class Faculty: virtual public Persona{//evita la doppia invocazione
    public: 
        Faculty(int x): Persona(x){
            cout << "Creato Faculty (Specifico)" << endl;
        }
};

class Ta: public Student, public Faculty{
    public: 
        Ta(int x1, int x2): Faculty(x1), Student(x2), Persona(x1){//va chiamato il costruttore Persona manualmente
            cout << "Creato Ta (Specifico)" << endl;
        }
};

int main() {
    //Student s(12);
    //Faculty f(99);
    Ta ta(99, 12);
    return 0;
} 