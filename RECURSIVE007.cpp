#include <iostream>
#include <string>
using namespace std;

void reverse_String(string &text, int start, int end) {

    if(start >= end)
    {
        return;
    }
    swap(text[start],text[end]);
    reverse_String(text,start+1,end-1);
}

int main(void)
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string text;
        cin >> text;
        reverse_String(text,0,text.size() - 1);
        cout << text << endl;
    }  
}