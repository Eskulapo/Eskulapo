#include <iostream>
#include <string>

// nasza funkcja do numerowania, nic nie zwraca ale przyjmuje stringa s
void numerowanie(std::string s)
{
    // string na tekst wyjsciowy
    std::string wyjscie;
    // zaczynamy liczyc od 2
    int n = 2;
    // na poczatek dajemy "1 "
    wyjscie += "1 ";
    // iterujemy przez dlugosc stringa
    for (int i = 0; i < s.length(); i++)
    {
        // dodajemy stringa[i] do wyjscia
        wyjscie += s[i];
        // sprawdzamy czy znak to newline i czy cos po nim jest
        if (s[i] == '\n' && i + 1 < s.length())
        {
            // dodajemy n + " " do wyjscia (czyli numerujemy nie puste linijki)
            wyjscie += std::to_string(n) + " ";
            // dodajemy +1 do licznika
            n++;
        }
    }
    // I wypisujemy efekt
    std::cout << wyjscie << std::endl;
}

// nasz lekser, analogicznie do numerowania
void lekser(std::string s)
{
    // string na tekst wyjsciowy
    std::string wyjscie;

    // iterujemy przez stringa s
    for (int i = 0; i < s.length(); i++)
    {
        //kopiujemy litere do wyjscia
        wyjscie += s[i];
        //sprawdzamy czy nasz znak to kropka lub przecinek
        if (s[i] == '.' || s[i] == ',')
        {
            // oraz czy nie stoi po nim spacja (o ile cokolwiek stoi)
            if (i < s.length() - 1 && s[i + 1] != ' ')
            {
                //dodajemy spacje
                wyjscie+= ' ';
            }
        }
    }
    std::cout<<wyjscie<<std::endl;
}

int main()
{
    // tworzymy bufor oraz wejscie (zlaczone)
    std::string buffor, input;
    do
    {
        // pobieramy teksts funkcja getline (ktora w przeciwienstwie do zwyklego cin pobiera tez spacje)
        std::getline(std::cin, buffor);
        // sprawdzamy czy bufor nie jest pusty
        if (buffor.empty())
        {
            // jesli tak to wychodzimy z petli
            break;
        }
        // dodajemy do tekstu wejsciowego bufor oraz newline
        input += buffor + "\n";
    } while (true);
    // wywolujemy funkcje
    numerowanie(input);
    lekser(input);
    return 0;
}