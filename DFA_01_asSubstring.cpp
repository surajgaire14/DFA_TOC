// containing 01 as a substring
#include <iostream>
using namespace std;

int main()
{
    char state = 'A', str[50];
    cout << "enter the string" << endl;
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        switch (state)
        {
        case 'A':
            str[i] == '0' ? state = 'B' : state = 'A';
            break;
        case 'B':
            str[i] == '1' ? state = 'C' : state = 'D';
            break;
        case 'C':
            str[i] == '1' ? state = 'C' : state = 'C';
            break;
        case 'D':
            str[i] == '1' ? state = 'D' : state = 'D';
            break;
        }
    }
    state == 'C' ? cout << "input string accepted as it reached the final state " << state : cout << "input string rejected";
}