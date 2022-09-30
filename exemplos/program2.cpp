#include <iostream>
#include <string>
 
using namespace std;
 
int main(int argc, char *argv[])
{
   cout << " o primeiro argumento útil é: "  << atoi(argv[1]) << endl;
   cout << " o segundo argumento útil é: "  << atoi(argv[2]) << endl;
   cout << " A soma é: "  << atoi(argv[1])+atoi(argv[2]) << endl;
   return 0;
}
