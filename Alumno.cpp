#include <iostream>
#include <string>
class Amigo {
public:
 Amigo(std::string nombre, int edad, std::string telefono)
{
 this->nombre = nombre;
 this->edad = edad;
 this->telefono = telefono;
 }
 void introduce() {
 std::cout << "Hola, me llamo " << nombre << " y tengo" << edad << " años." << std::endl;
 }
 void telefono_local() {
 std::cout << "Mi telefono es " << telefono << "." <<std::endl;
 }
private:
 std::string nombre;
 int edad;
 std::string telefono;
};
int main() {
 Amigo my_amigo("Zadkiel", 21,
"33 25146368");
 my_amigo.introduce();
 my_amigo.telefono_local();
 return 0;
}