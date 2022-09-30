#include <map>
#include <iostream>
#include <string>

// map usei para associar número a um nome; pesquisei doc\internet.
using namespace std;

int main()
{
    string palavra;
    cout << "Digite uma palavra: \n";
    cin >> palavra;
    map<char, int> contarletras;
    int maior = 0;
    char letraM;
    for (unsigned int i = 0; i < palavra.size(); i++)

        contarletras[palavra[i]]++;

    for (map<char, int>::iterator it = contarletras.begin(); it != contarletras.end(); ++it)
    {
        if (it->second > 1)
        {
            std::cout << "letra: " << it->first << " obteve: " << it->second << " repetições" << endl;
        }

        else
        {
            std::cout << "letra: " << it->first << " aparece apenas " << it->second << " vez" << endl;
        }
        if (it->second > maior)
        {
            maior = it->second;
            cout << maior << endl;
            letraM = it->first;
        }
    }
    cout << "letra: " << letraM << " repetiu " << maior << endl;
    return EXIT_SUCCESS;
}