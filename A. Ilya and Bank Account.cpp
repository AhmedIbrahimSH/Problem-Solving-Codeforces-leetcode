#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{

    string number_As_String , original_string;
    cin >> number_As_String;
    int original_number = stoi(number_As_String); // changing from string to integar
    original_string = number_As_String; // to keep the original value of the string
    number_As_String.erase(number_As_String.end() -1 );
    string last_removed = number_As_String;
    original_string.erase(original_string.end()-2);
    string beforelast_removed = original_string;
    int last_number_removed = stoi(last_removed);
    int beforelast_number_removed = stoi(beforelast_removed);
    if(original_number > last_number_removed && original_number > beforelast_number_removed)
        cout << original_number;
    else if(original_number < last_number_removed && last_number_removed > beforelast_number_removed)
        cout << last_number_removed;
    else
        cout << beforelast_number_removed;

    return 0;
}
