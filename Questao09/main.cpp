#include <iostream>
using namespace std;
// Crie uma variável do tipo unsigned short
// Use cout para mostrar uma mensagem pedindo o número inteiro
// Use cin para ler o número inteiro para a variável N criada
// Note que nessa questão, é necessário usar if ... else, cujo
// uso poderá ter sido absorvido nas questões anteriores
// Verifique se o número lido é maior ou igual à maior potência de 2
// suportada por um inteiro do tipo short, i.e., 2^15 (o 16o bit é de sinal)
// Se for, imprima 1 e subtraia a potência em questão do número lido
// senão, imprima 0
// Repita os mesmos comandos para a próxima potência, i.e., 2^14
// Repita para todas as potências até 2^0
int main() {
  // O código abaixo soluciona o problema para a potência 2^15
  // Note 2^15 pode ser facilmente escrito como (1 << 15)
  // if( N >= (1 << 15) ) {
  //   cout << 1;
  //   N = N - (1 << 15);
  // } else {
  //   cout << 0;
  // }
  // O código acima precisa ser "repetido" 16 vezes.
  // O código abaixo utiliza um laço for para fazer o mesmo trabalho de forma compacta
  // for(short p = 15; p >= 0; p--) {
  //   if( N >= (1 << p) ) {
  //     cout << 1;
  //     N = N - (1 << p);
  //   } else {
  //     cout << 0;
  //   }
  // }
  cout << "Hello world!" << endl;
  return 0;
}
