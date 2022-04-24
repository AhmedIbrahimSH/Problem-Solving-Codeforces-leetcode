#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{


    string first_string,second_string;

    int sizeofString;

    cin >> first_string;
    cin >> second_string;
    sizeofString = first_string.length(); // TO KNOW THE SIZE OF THE STRING
    char String_1[sizeofString+1],String_2[sizeofString+1]; // TO LATER COMPARE THE CHARACTERS WHATEVER THEIR CASES UPPER / LOWER

    strcpy(String_1, first_string.c_str()); // Copying the 2 string into characters array to be able to use the tolower method
    strcpy(String_2, second_string.c_str());
    if(sizeofString != second_string.size())
        cout << "error"; // checking the length if the string if it more than a 100 characters
    else{
        for(int i = 0; i < sizeofString ; i++){
            if(tolower(String_1[i]) > tolower(String_2[i])){
                cout << "1";
                break;
            }
            else if(tolower(String_1[i]) < tolower(String_2[i])){
                cout << "-1";
                break;
        }
            else if(tolower(String_1[i]) == tolower(String_2[i])){
                if(i == sizeofString-1){
                   cout <<  "0" ;
                    break;
                }
                else{
                   continue;
        }}}
    }


    return 0;
}
