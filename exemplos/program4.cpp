#include <iostream>
#include <string>
 
using namespace std;
 
int main(int argc, char *argv[])
{
  for (size_t i = 0; i < 5; i++)
   {
       //cout << "Vetor pontos no index: " << i << " -tem o valor: " << pontos[i] << endl;
   }
    string nomes[] = {"Maria", "Pedro", "Paulo", "Ricardo"};
   for (int i = 0; i < 4; /*i+=2*/i++)
   {
       //cout << "o index na: " <<  i << " tem a string: " << nomes[i] << endl;
   }
   // Define N como uma constante.
   const int N = 10;
 
   // Declara alunos como um vetor de cadeia de caracteres.
   string alunos[1000];
 
   alunos[0] = "Será que amanhã chove?";
   alunos[1] = "Maria Silva";
 
   //cout << "O vetor alunos no index: 1 " << alunos[1] << endl;
 
   double f[5]; // vetor com 4 doubles: f[0], . . ., f[4]
   int m[10];   // vetor com 10 ints: m[0], . . ., m[9]
   f[4] = 2.5;
   m[2] = 4;
   // cout << f[m[2]]; // imprime f[4], que é 2.5
 
   bool teste = true;
   bool teste2;
   int a[] = {10, 11, 12, 13}; // declara e inicializa a[4]
   bool b[] = {false, true};   // declara e inicializa  b[2]
   char c[] = {'c', 'a', 't'}; // declara e inicializa  c[3]
 
   char *p = c;     // p aponta para c[0]
   char *q = &c[0]; // q também  aponta para c[0]
   // cout << c[2] << p[2] << q[2]; //imprime saídas: ttt
 
   double n = 1234;
   std::string nstr = std::to_string(n);
 
   for (size_t i = 0; i < nstr.size(); i++)
   {
       //std::cout << "index: " << i << " valor:" << nstr[i] << endl;
   }
 
 
   std::string nstr2 = argv[2]; // o argv[2] será uma string definida pelo usuário quando executar os programa
 
   for (size_t i = 0; i < nstr2.size(); i++)
   {
       std::cout << "String2 recebeu no index: " << i << " o valor:" << nstr2[i] << endl;
   }  
  
   std::string nstr3 = argv[3]; // o argv[2] será uma string definida pelo usuário quando executar os programa
 
   for (size_t i = 0; i < nstr3.size(); i++)
   {
       std::cout << "String3 recebeu no index: " << i << " o valor:" << nstr3[i] << endl;
   }
 
 
   int verifica = 5;
 
   for (size_t i = 0; i < verifica; i++)
   {
       if (nstr2[i] == nstr3[i])
       {
           cout << "As strings possuem no index: " << i << " o mesmo valor: " << nstr2[i] << endl;
       }
   }
   return 0;
}
