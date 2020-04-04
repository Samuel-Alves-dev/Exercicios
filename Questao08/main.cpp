#include <iostream>
// #include <bitset>
using namespace std;

int main() {
  // As linhas abaixo fazem a tarefa para o número 0, 1, 2, ...
  // e pode ser repetida para os demais números
  cout << dec << 0 << " | " << oct << 0 << " | " << hex << 0 << "\n";
  cout << dec << 1 << " | " << oct << 1 << " | " << hex << 1 << "\n";
  cout << dec << 2 << " | " << oct << 2 << " | " << hex << 2 << "\n";
  // ... até 15
  // A linha abaixo usa o bitset para imprimir também o número em binário
  // cout << dec << 0 << " | " << oct << 0 << " | " << hex << 0 << " | " << bitset<4>(0) <<"\n";
  // ... até 15
  // Note que será necessário repetir basicamente a mesma linha 16 vezes
  // Isso pode ser reduzido usando um laço, por exemplo, do tipo for
  // for(short i = 0; i < 16; i++) {
  //   // Comando adaptando a linha acima para usar i em vez dos valores fixos de 0 a 15.
  // }
  // Assim, o programa repetitivo de 16 linhas pode ser escrito em 3 linhas
  return 0;
}
