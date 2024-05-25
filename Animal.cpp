#include <iostream>
#include <string>

using namespace std;

class Animal{
protected:
    static int num_animales;
    string alimento;
public:
    Animal();
    ~Animal();
    static int obtenerNumAnimales();
    string obtenerAlimento(){
        return alimento;
    }
    void comer(Animal *a){
        cout << "Este animal esta comienndo " + a->alimento << endl;
    }
};

int Animal::num_animales = 0;

Animal::Animal(){
    cout << "Creando animal" << endl;
    num_animales += 1;
}

Animal::~Animal(){
    cout << "Eliminando un animal" << endl;
    num_animales -= 1;
}

int Animal::obtenerNumAnimales(){
    return num_animales;
}

class Herbivoro : public Animal {
public:
    Herbivoro() : Animal(){
        this -> alimento = "plantas";
    }

    void pastar(){
        cout << "Este animal esta pastando" << endl;
    }
};

class Carnivoro : public Animal {
public: 
    Carnivoro() : Animal(){
        this->alimento = "carne";
    }

    void cazar(){
        cout << "Este animal esta cazando" << endl;
    }
};

class Omnivoro : public Carnivoro, public Herbivoro{
public:
    Omnivoro () : Herbivoro() ,Carnivoro(){}
    void comer(){
        cout << "Este animal come lo que sea" << endl;
    }
};

int main(){
    Animal *a = new Animal();
    Herbivoro *h = new Herbivoro();
    Carnivoro *c = new Carnivoro();
    Omnivoro *o = new Omnivoro();

    cout << "Numero de animales: " << Animal::obtenerNumAnimales() << endl;

    h->pastar();
    a->comer(h);
    c->cazar();
    a->comer(c);
    o->comer();

    delete a;
    cout << "Numero de animales: " << Animal::obtenerNumAnimales() << endl;
}