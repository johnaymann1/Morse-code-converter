//FCAI -Programming 1 - 2022 - Assignment 2
//Program name : Morse_code_converter.cpp
//Program discription: Transfer english to morse code or vise versa (1 space between each letter and 3 spaces between each word)
//Last modification date: 14/3/2022
//John Ayman Naim Aziz  -  20210107  -  group A
#include <iostream>
#include <string>
#include <list>
using namespace std;
string eng_to_morse(string english){//This function takes english text and coverts it to morse code

int len= english.length();
for(int i=0;i<len;i++){
switch(english[i]){
case 'a': case 'A':
    cout<<".- ";
    break;

case 'b': case 'B':
    cout<<"-... ";
    break;

case 'c': case 'C':
    cout<<"-.-. ";
    break;

case 'd': case 'D':
    cout<<"-.. ";
    break;

case 'e': case 'E':
    cout<<". ";
    break;

case 'f': case 'F':
    cout<<"..-. ";
    break;

case 'g': case 'G':
    cout<<"--. ";
    break;

case 'h': case 'H':
    cout<<".... ";
    break;
case 'i': case 'I':
    cout<<".. ";
    break;

case 'j': case 'J':
    cout<<".--- ";
    break;

case 'k': case 'K':
    cout<<"-.- ";
    break;

case 'l': case 'L':
    cout<<".-.. ";
    break;

case 'm': case 'M':
    cout<<"-- ";

case 'n': case 'N':
    cout<< "-. ";
    break;

case 'o': case 'O':
    cout<< "--- ";
    break;

case 'p': case 'P':
    cout<< ".--. ";
    break;

case 'q': case 'Q':
    cout<<"--.- ";
    break;

case 'r': case 'R':
    cout<<".-. ";
    break;

case 's': case 'S':
    cout<<"... ";
    break;

case 't': case 'T':
    cout<<"- ";
    break;

case 'u': case 'U':
    cout<<"..- ";
    break;

case 'v': case 'V':
    cout<<"...- ";
    break;

case 'w': case 'W':
    cout<<".-- ";
    break;

case 'x': case 'X':
    cout<<"-..- ";
    break;

case 'y': case 'Y':
    cout<<"-.-- ";
    break;

case 'z': case 'Z':
    cout<<"--.. ";
    break;

case '0':
    cout<<"----- ";
    break;

case '1':
    cout<<".---- ";
    break;

case '2':
    cout<<"..--- ";
    break;

case '3':
    cout<<"...-- ";
    break;

case '4':
    cout<<"....- ";
    break;

case '5':
    cout<<"..... ";
    break;

case '6':
    cout<<"-.... ";
    break;

case '7':
    cout<<"--... ";
    break;

case '8':
    cout<<"---.. ";
    break;

case '9':
    cout<<"----. ";
    break;

case '.':
    cout<<".-.-.- ";
    break;

case ',':
    cout<<"--..-- ";
    break;

case '?':
    cout<<"..--.. ";
    break;

case ' ':
    cout<<"  ";
    break;

}
}
}

string morse_to_char(string morse){//This function takes morse CHAR and coverts it to english CHAR
if(morse == ".-")
{return "a";}
else if(morse == "-...")
{return "b";}
else if(morse == "-.-.")
{return "c";}
else if(morse == "-..")
{return "d";}
else if(morse == ".")
{return "e";}
else if(morse == "..-.")
{return "f";}
else if(morse == "--.")
{return "g";}
else if(morse == "....")
{return "h";}
else if(morse == "..")
{return "i";}
else if(morse == ".---")
{return "j";}
else if(morse == "-.-")
{return "k";}
else if(morse == ".-..")
{return "l";}
else if(morse == "--")
{return "m";}
else if(morse == "-.")
{return "n";}
else if(morse == "---")
{return "o";}
else if(morse == ".--.")
{return "p";}
else if(morse == "--.-")
{return "q";}
else if(morse == ".-.")
{return "r";}
else if(morse == "...")
{return "s";}
else if(morse == "-")
{return "t";}
else if(morse == "..-")
{return "u";}
else if(morse == "...-")
{return "v";}
else if(morse == ".--")
{return "w";}
else if(morse == "-..-")
{return "x";}
else if(morse == "-.--")
{return "y";}
else if(morse == "--..")
{return "z";}
else if(morse == ".----")
{return "1";}
else if(morse == "..---")
{return "2";}
else if(morse == "...--")
{return "3";}
else if(morse == "....-")
{return "4";}
else if(morse == ".....")
{return "5";}
else if(morse == "-....")
{return "6";}
else if(morse == "--...")
{return "7";}
else if(morse == "---..")
{return "8";}
else if(morse == "----.")
{return "9";}
else if(morse == ".-.-.-")
{return ".";}
else if(morse == "--..--")
{return ",";}
else if(morse == "..--..")
{return "?";}
else if(morse == "   ")
{return " ";}
}


string morse_to_english(string str){// This function takes morse code and converts it to english text
string word = "";
list <string>  list1{};
list<string>::iterator l_iter;
for (auto x : str){
if (x == ' '){
    list1.push_back(word);
    word = "";
}
else{
    word = word + x;
}
    }
    for(string x : list1){
        cout<< morse_to_char(x);
    }


}

int main(){
cout<<"Hello ! \n";
cout<<"*If you want to change from English to Morse code enter 1 \n";
cout<<"*If you want to change from Morse code to English enter 2 \n";
int n;
string word;
cin>>n;
while(n!=1 && n!=2){
    cout<<"please enter a valid number"<<endl;
    cin>>n;

}
switch(n){
case 1:
    cout<<"Please enter the engish word: ";
    cin.get();
    getline(cin,word);
    cout<<endl<<"Morse code: ";
    eng_to_morse(word);
case 2:
    cout<<"Please enter the morse code: ";
    cin.get();
    getline(cin,word);
    cout<<"English text: ";
    morse_to_english(word+" ");
}
}

