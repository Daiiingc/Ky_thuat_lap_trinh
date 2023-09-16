#include <bits/stdc++.h>

using namespace std;

string inttoExcel(long long n);

int main()
{   
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    long long n;
    while(inputFile >> n)
    {
        string str = inttoExcel(n);
        outputFile << str << endl;
    }

    return 0;
}

string inttoExcel(long long n)
{
    string str = "";
    while(n != 0)
    {
        long long x = (n-1)%26;
        str = char('A' + x) + str;
        n = (n-1)/26;
    }

    return str;
}