#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    string text;
    string output;
    bool is_first = true;

    while (getline(cin, text)) {
        for(int i = 0; i < text.length(); i++) {
            if (text[i] == '"') {
                if (is_first) {
                    output = output + "``";
                    is_first = false;
                }
                else {
                    output = output + "''";
                    is_first = true;
                }
            }
            else
                output = output + text[i];
            
        }
        cout << output << endl;
        output = "";
    }    
    return 0;
}