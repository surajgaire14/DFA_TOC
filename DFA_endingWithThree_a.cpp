// ending with three a's
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
            str[i] == 'a' ? state = 'B' : state = 'A';
            break;
        case 'B':
            str[i] == 'a' ? state = 'C' : state = 'A';
            break;
        case 'C':
            str[i] == 'a' ? state = 'D' : state = 'A';
            break;
        case 'D':
            str[i] == 'a' ? state = 'D' : state = 'A';
            break;
        }
    }
    state == 'D' ? cout << "input string accepted as it reached the final state " << state << endl : cout << "input string rejected" << endl;
}