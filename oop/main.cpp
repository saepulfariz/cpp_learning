#include <iostream>
 
using namespace std;
 
// buat class Laptop
class Laptop {
 
  // buat 3 data member untuk class Laptop
  string pemilik;
  string merk;
  double ukuranLayar;
 
  // buat 2 member function untuk class Laptop
  string hidupkanLaptop() {
    return "Hidupkan Laptop";
  }
 
  string matikanLaptop() {
    return "Matikan Laptop";
  }
};
 
int main()
{
  // buat objek dari class Laptop (instansiasi)
  Laptop laptopAndi;
  Laptop laptopAnto;
  // kode program
  // kode program
  return 0;
}