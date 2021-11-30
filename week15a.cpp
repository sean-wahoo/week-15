// Sean Reichel
// CIS 1202 501
// November 30 2021

#include <iostream>

using namespace std;

char character(char, int);
class invalidCharacterException
{
};
class invalidRangeException
{
};

char character(char start, int offset)
{
    try
    {
        if (start <= 90 && start >= 65)
        {
            int out = start + offset;
            if (out <= 90 && out >= 65)
                return static_cast<char>(out);
            else
                throw invalidRangeException();
        }
        if (start <= 122 && start >= 97)
        {
            int out = start + offset;
            if (out <= 122 && out >= 97)
                return static_cast<char>(out);
            else
                throw invalidRangeException();
        }
        else
            throw invalidCharacterException();
    }
    catch (invalidRangeException)
    {
        cout << "Character ends up out of range!" << endl;
    }
    catch (invalidCharacterException)
    {
        cout << "Given character is not valid!" << endl;
    }
    // this throws a warning because there is technically nothing being returned in all cases but it never
    // actually gets here because of the exceptions.
}

int main()
{
    char c;
    int i;
    cout << "Input a character:\n-> ";
    cin >> c;
    cout << "Input a number:\n-> ";
    cin >> i;
    cout << character(c, i) << endl;
}