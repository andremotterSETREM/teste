#include <iostream>
#include <string>
using namespace std;

bool checkRepeatedLetters(char word, string repeatedLetters)
{

    // esse if eu busquei na internet, link -> https://thispointer.com/c-check-if-string-contains-a-character/
    if (repeatedLetters.find(word) != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char *argv[])
{
    string word = argv[1], repeatedLetters, mostRepeatedLetter;
    int counter, maxRepetitions = 0;
    __debug;
    if (argc == 2)
    {

        cout << "---------------------------------" << endl;
        cout << "A palavra inserida foi: " << word << endl;
        cout << "---------------------------------" << endl;

        for (size_t i = 0; i < word.size(); i++)
        {
            counter = 0;
            for (size_t j = 0; j < word.size(); j++)
            {
                if (word[i] == word[j])
                {
                    counter += 1;
                }
            }
            if (counter >= 2)
            {
                // verifica se a letra repetida já não foi impressa na tela
                if (!checkRepeatedLetters(word[i], repeatedLetters))
                {

                    for (size_t j = 0; j < counter - 1; j++)
                    {
                        cout << "Caractere repetido " << word[i] << endl;
                    }

                    repeatedLetters += word[i];
                }
            }
            else
            {
                cout << "Caractere " << word[i] << " foi encontrada 1 vez. " << endl;
            }
            if (maxRepetitions < counter)
            {
                maxRepetitions = counter;
                mostRepeatedLetter = word[i];
            }
        }
        cout << "---------------------------------------------------------------------------------------------" << endl;
        cout << "O caractere que mais se repetiu foi: " << mostRepeatedLetter << " com um total de " << maxRepetitions << " ocorrências " << endl;
        cout << "---------------------------------------------------------------------------------------------" << endl;
    }
    else
    {
        cout << "---------------------------" << endl;
        cout << "Informe apenas uma palavra! " << endl;
        cout << "----------------------------" << endl;
    }
    return EXIT_SUCCESS;
}