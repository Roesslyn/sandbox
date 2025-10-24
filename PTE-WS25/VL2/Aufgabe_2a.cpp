#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    cout << "Groesse von char: " << sizeof(char) << " Byte, " << sizeof(char)*8 << " Bit" << endl;
    cout << "Groesse von int: " << sizeof(int) << " Byte, " << sizeof(int)*8 << " Bit" << endl;
    cout << "Groesse von unsigned int: " << sizeof(unsigned int) << " Byte, " << sizeof(unsigned int)*8 << " Bit" << endl;
    cout << "Wertebereich von char: " << CHAR_MIN << " bis " << CHAR_MAX << endl;
    cout << "Wertebereich von int: " << INT_MIN << " bis " << INT_MAX << endl;
    cout << "Wertebereich von unsigned int: 0 " << "bis " << UINT_MAX << endl;
    system("pause");
    return 0;
}