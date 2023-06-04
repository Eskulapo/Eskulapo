#include <iostream>
#include <string>

void numerowanie(std::string s)
{
    std::string wyjscie;
    int n = 2;
    wyjscie += "1 ";
    //std::cout << s.length();
    for (int i = 0; i < s.length(); i++)
    {
        wyjscie += s[i];
        if (s[i] == '\n')
        {
            s.insert(i, std::to_string(n) + " ");
            n++;
        }
    }
    std::cout<<wyjscie<<std::endl;
}

int main()
{
    std::string buffor, input;
    do{
        std::getline(std::cin, buffor);
        input+=buffor;
        input+='\n';
    }
    while(!buffor.empty());
    //std::cout<<buffor;
    numerowanie(input);

    return 0;
}