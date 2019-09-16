#include <iostream>
#include <iomanip>
#include <bitset>


using namespace std;

enum fontStyle {BOLD = 0x01,           // 1  ==  000001
                ITALIC = 0x02,         // 2  ==  000010
                UNDERLINE = 0x04,      // 4  ==  000100
                ALL_CAPS = 0x08,       // 8  ==  000100
                SUBSCRIPT = 0x10,      //16  ==  001000
                SUPERSCRIPT = 0x20,    //32  ==  010000
                STRIKETHROUGH = 0x40}; //64  ==  100000

int main()
{
    cout << right;

    //Create a bitset with the given value to print as binary:
    cout << setw(20) << "BOLD = " << std::bitset<32>(BOLD)  << endl;
    cout << setw(20) << "ITALIC = " << std::bitset<32>(ITALIC)  << endl;


    //current style is both bold and italic
    unsigned int curStyle = BOLD | ITALIC;   //0001 | 0010 = 0011

    cout << setw(20) << "BOLD | ITALIC = " << std::bitset<32>(curStyle)  << endl << endl;

    //OR applies italic... whether or not it is already there
    curStyle = curStyle | ITALIC;            //0011 | 0010 = 0011

    cout << setw(20) << "curStyle | ITALIC = " << std::bitset<32>(curStyle)  << endl << endl;

    //AND tests for a flag
    if(curStyle & BOLD)                      //0011 & 0001 = 0001
        cout << "It is Bold" << endl;
    if(curStyle & ITALIC)                    //0011 & 0010 = 0010
        cout << "It is Italic" << endl;
    if(curStyle & UNDERLINE)                 //0011 & 0100 = 0000
        cout << "It is Underline" << endl;
    cout << endl;

    //AND with NOT remvoes a flag
    curStyle = curStyle & ~BOLD;             //0011 & 1110 = 0010

    cout << setw(20) << " ~BOLD " << std::bitset<32>(~BOLD)  << endl;
    cout << setw(20) << " curStyle & ~BOLD " << std::bitset<32>(curStyle)  << endl << endl;

    //XOR reverses one flag:
    curStyle = curStyle ^ BOLD;              //0010 ^ 0001 = 0011

    cout << setw(20) << " BOLD " << std::bitset<32>(BOLD)  << endl;
    cout << setw(20) << " curStyle ^ BOLD " << std::bitset<32>(curStyle)  << endl << endl;

    //XOR reverses one flag:
    curStyle = curStyle ^ ITALIC;            //0011 ^ 0010 = 0001

    cout << setw(20) << " ITALIC " << std::bitset<32>(ITALIC)  << endl;
    cout << setw(20) << " curStyle ^ ITALIC " << std::bitset<32>(curStyle)  << endl << endl;

    return 0;
}
