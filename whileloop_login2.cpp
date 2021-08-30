#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main() {
  int pin, ipin; // bisa make tipe data string atau interger
  pin = 221104;

  cout << "----- Lock Screen Pin -----" << endl;
  cout << "\nMasukan Pin : ";
  cin >> ipin;
  cin.ignore(1, '\n');

  while (ipin != pin) {
    system("cls");
    cout << "Pin Salah ! Masukan Pin Yang Benar\n" << endl;
    cout << "----- Lock Screen Pin -----" << endl;
    cout << "\nMasukan Pin : ";
    cin >> ipin;
  }
  /*
    pada fungsi while ini , syarat nya adalah jika variable [ ipin ] yang nanti akan di beri nilai pada input
    jika dia tidak sama maka akan ada perulangan masukan pin kembali
  */

  if (ipin == pin) {
    system("cls");
    cout << "---------------------------------\n" << endl;
    cout << "Pin Yang Anda Masukan Benar !" << endl;
    cout << "\n---------------------------------" << endl;
  }
  /*
    pada if statement di atas berguna untuk jika variable [ ipin ] samadengan [ pin ] maka akan muncul output pin
    yang di masukan benar
  */

  getch();
  return 0;
}
