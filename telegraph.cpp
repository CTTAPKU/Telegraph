#include <iostream>
#include <stdlib.h>
#include <string>
#include <windows.h>

using namespace std;

void encode(){//Функція кодування 
    string text;
    string encode = "";
    cout << "Enter what you want to encode: ";
    getline(cin, text);
    for (int i = 0; i < text.length(); i++)//Кодування введенного слова
    {
        switch (text[i])
        {
        case 'A':
        case 'a':
            encode += ".- ";
            break;

        case 'B':
        case 'b':
            encode += "-... ";
            break;

        case 'C':
        case 'c':
            encode += "-.-. ";
            break;

        case 'D':
        case 'd':
            encode += "-.. ";
            break;

        case 'E':
        case 'e':
            encode += ". ";
            break;

        case 'F':
        case 'f':
            encode += "..-. ";
            break;

        case 'G':
        case 'g':
            encode += "--. ";
            break;

        case 'H':
        case 'h':
            encode += ".... ";
            break;

        case 'I':
        case 'i':
            encode += ".. ";
            break;

        case 'J':
        case 'j':
            encode += ".--- ";
            break;

        case 'K':
        case 'k':
            encode += "-.- ";
            break;

        case 'L':
        case 'l':
            encode += ".--.. ";
            break;

        case 'M':
        case 'm':
            encode += "-- ";
            break;

        case 'N':
        case 'n':
            encode += "-. ";
            break;

        case 'O':
        case 'o':
            encode += "--- ";
            break;

        case 'P':
        case 'p':
            encode += ".--. ";
            break;

        case 'Q':
        case 'q':
            encode += "--.- ";
            break;

        case 'R':
        case 'r':
            encode += ".-. ";
            break;
            
        case 'S':
        case 's':
            encode += "... ";
            break;

        case 'T':
        case 't':
            encode += "- ";
            break;

        case 'U':
        case 'u':
            encode += "..- ";
            break;

        case 'V':
        case 'v':
            encode += "...- ";
            break;

        case 'W':
        case 'w':
            encode += ".-- ";
            break;

        case 'X':
        case 'x':
            encode += "-..- ";
            break;

        case 'Y':
        case 'y':
            encode += "-.-- ";
            break;

        case 'Z':
        case 'z':
            encode += "--.. ";
            break;
        case '1':
            encode += ".---- ";
            break;

        case '2':
            encode += "..--- ";
            break;

        case '3':
            encode += "...-- ";
            break;

        case '4':
            encode += "....- ";
            break;

        case '5':
            encode += "..... ";
            break;

        case '6':
            encode += "-.... ";
            break;

        case '7':
            encode += "--... ";
            break;

        case '8':
            encode += "---.. ";
            break;

        case '9':
            encode += "----. ";
            break;

        case '0':
            encode += "----- ";
            break;
        default:
            break;
        }
    }
    
    cout << "Code Morse: " << encode << endl;//Вивід закодованого слова
    for (int i = 0; i < encode.length(); i++)//Звуковий вивід закодованого слова 
    {
      if (encode[i] == '.')
      {
        Beep(600, 250);
      }
      if (encode[i] == '-')
      {
        Beep(600, 600);
      }
    }
}

void decode(){//Функція розкодування
    string text;
    string transition;
    string decode = "";
    cout << "Enter the code you want to decode: ";
    getline(cin, text);
    for (int i = 0; i < text.length(); i++)//Розкодування введеного коду
    {
      if(text[i] != ' ' && i != (text.length() - 1)){
        transition += text[i];
      }
      else
      {
        if (text[i] != ' '){
        transition += text[i];}
        if (transition == ".-"){
          decode += "A";
        }
        else if (transition == "-..."){
          decode += "B";
        }
        else if (transition == "-.-."){
          decode += "C";
        }
        else if (transition == "-.."){
         decode += "D"; 
        }
        else if (transition == "."){
          decode += "E";
        }
        else if (transition == "..-."){
          decode += "F";
        }
        else if (transition == "--."){
         decode += "G"; 
        }else if (transition == "...."){
          decode += "H";
        }
        else if (transition == ".."){
          decode += "I";
        }
        else if (transition == ".---"){
         decode += "J"; 
        }else if (transition == "-.-"){
          decode += "K";
        }
        else if (transition == ".--.."){
          decode += "L";
        }
        else if (transition == "--"){
         decode += "M";
        }
         else if (transition == "-."){
          decode += "N";
        }
        else if (transition == "---"){
          decode += "O";
        }
        else if (transition == ".--."){
         decode += "P"; 
        }
        else if (transition == "--.-"){
         decode += "Q"; 
        }else if (transition == ".-."){
          decode += "R";
        }
        else if (transition == "..."){
          decode += "S";
        }
        else if (transition == "-"){
         decode += "T"; 
        }else if (transition == "..-"){
          decode += "U";
        }
        else if (transition == "...-"){
          decode += "V";
        }
        else if (transition == ".--"){
         decode += "W";
        }
         else if (transition == "-..-"){
          decode += "X";
        }
        else if (transition == "-.--"){
          decode += "Y";
        }
        else if (transition == "--.."){
         decode += "Z"; 
        }
        else if (transition == ".----")
        {
          decode += "1";
        }
        else if (transition == "..---")
        {
          decode += "2";
        }
        else if (transition == "...--")
        {
          decode += "3";
        }
        else if (transition == "....-")
        {
          decode += "4";
        }
        else if (transition == ".....")
        {
          decode += "5";
        }
        else if (transition == "-....")
        {
          decode += "6";
        }
        else if (transition == "--...")
        {
          decode += "7";
        }
        else if (transition == "---..")
        {
          decode += "8";
        }
        else if (transition == "----.")
        {
          decode += "9";
        }
        else if (transition == "-----")
        {
          decode += "0";
        }
        transition = "";
      }
    }
    cout << "Decoded code: " << decode << endl;//Вивід розкодованого слова
}

int main() {
    int num;
    string text;
    while(true){
        system("cls");//Очищення консолі
        cout << "1. Encode" << endl << "2. Decode" << endl << "3. Exit" << endl << "Select an action: ";//Вивід меню
        scanf("%d", &num);//Вибір пункту меню
        getline(cin, text);
        switch (num)
        {
        case 1:
            encode();//Кодування
            break;
        case 2:
            decode();//Розкодування
            break;
        case 3:
            exit(0);//Вихід з програми
            break;
        default: 
        cout << "ERROR\n";
            break;
        }
        system("pause");
    }
}