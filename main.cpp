#include <iostream>
#include <string>

void numerowanie(std::string s)
{
    std::string wyjscie;
    int n = 2;
    wyjscie+="1 ";
    for(int i = 0; i < s.length(); i++)
    {
        wyjscie+=s[i];
        if(s[i] == '\n'){
            s.insert(i, std::to_string(n)+" ");
            n++;
        }
    }
}

int main()
{
    std::string buffor;
    std::cin>>buffor;

    return 0;
}