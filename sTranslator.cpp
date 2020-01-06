#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    cout << "Made by bloodlust#0000 as a form of self-harm." << "\n";
    fstream fileO;
    fileO.open("text.txt", ios::in);
    int count = 0;
    string c;
    char y;
    int count2 = 0;
    vector<string> v1;
    if (fileO.is_open()) {
        cout << "File opened successfully." << "\n";
        while (fileO.eof() != true) {
            fileO.get(y);
            c = y;
            v1.push_back(c);
            count++;
        }
        while (count2 != count) {
            if (v1[count2] == "a") {
                v1[count2] = "fgerdin,";
                count2++;
            }
            else if (v1[count2] == "b") {
                v1[count2] = "bnhjksd,";
                count2++;
            }
            else if (v1[count2] == "c") {
                v1[count2] = "sdfhljn,";
                count2++;
            }
            else if (v1[count2] == "d") {
                v1[count2] = "ksjo;ls,";
            }
            else if (v1[count2] == "e") {
                v1[count2] = "sjkio;p,";
                count2++;
            }
            else if (v1[count2] == "f") {
                v1[count2] = "dsfuhij,";
                count2++;
            }
            else if (v1[count2] == "g") {
                v1[count2] = "sjmko;s,";
                count2++;
            }
            else if (v1[count2] == "h") {
                v1[count2] = "sdjaioq,";
                count2++;
            }
            else if (v1[count2] == "i") {
                v1[count2] = "asjiola,";
                count2++;
            }
            else if (v1[count2] == "j") {
                v1[count2] = "sajuiol,";
                count2++;
            }
            else if (v1[count2] == "k") {
                v1[count2] = "o;klixs,";
                count2++;
            }
            else if (v1[count2] == "l") {
                v1[count2] = "u8pf9ds,";
                count2++;
            }
            else if (v1[count2] == "m") {
                v1[count2] = "fuihos6,";
                count2++;
            }
            else if (v1[count2] == "n") {
                v1[count2] = "gnpjuhy,";
                count2++;
            }
            else if (v1[count2] == "o") {
                v1[count2] = "dsanu9p,";
                count2++;
            }
            else if (v1[count2] == "p") {
                v1[count2] = "fdojnhi,";
                count2++;
            }
            else if (v1[count2] == "q") {
                v1[count2] = "dfsanoi,";
                count2++;
            }
            else if (v1[count2] == "r") {
                v1[count2] = "lijufsa,";
                count2++;
            }
            else if (v1[count2] == "s") {
                v1[count2] = "dsojinm,";
                count2++;
            }
            else if (v1[count2] == "t") {
                v1[count2] = "sdaoihj,";
                count2++;
            }
            else if (v1[count2] == "u") {
                v1[count2] = "ijulmda,";
                count2++;
            }
            else if (v1[count2] == "v") {
                v1[count2] = "xbaiu[j,";
                count2++;
            }
            else if (v1[count2] == "w") {
                v1[count2] = "nupdhio,";
                count2++;
            }
            else if (v1[count2] == "x") {
                v1[count2] = "97ahasf,";
                count2++;
            }
            else if (v1[count2] == "y") {
                v1[count2] = "djsaojh,";
                count2++;
            }
            else if (v1[count2] == "z") {
                v1[count2] = "fhjisao,";
                count2++;
            }
        }
        count2 = 0;
        while (count2 != count) {
            cout << v1[count2];
            count2++;
        }
    } else {
        cout << "Could not open file. Try again.";
    }
}
