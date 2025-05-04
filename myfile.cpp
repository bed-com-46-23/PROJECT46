#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
using namespace std;

int calvowels(const string& str);
int wordscount(const string& str);
string reverse (const string& str);
string CapSecLetter(const string& str);

int main() {
   ifstream sourcefile("example.txt");
   if (sourcefile.is_open()) {
        cout<<"this is the advanced computer programming. "<<endl;
       
   }
    string filedata((istreambuf_iterator<char>(sourcefile)),
    (istreambuf_iterator<char>()));
        sourcefile.close();
        ofstream destinationfile("destination.txt");
        if(!destinationfile.is_open()){
            cout<<"failed to open the destination file"<<endl;
            return 1;
        }
        destinationfile << filedata;
        destinationfile.close();

        //calculate the output of the words
        int countw = wordscount(filedata);
        cout<<"numberofwords: "<<countw<<endl;

        //calculate the output of the vowel
        int calvowel = calvowels(filedata);
        cout<<"number of vowels: "<<calvowel<<endl;

        //reverse the file and the output
        string reversedfile = reverse(filedata);
        cout<<"reversed statement: "<< reversedfile<<endl;

        //capitalizing the second letter of each word
        string capitalizedfile = CapSecLetter(filedata);
        cout<<"statement with the second letter of each word capitalized: "<<capitalizedfile<<endl;

        return 0;
    }

    int calvowels(const string& str) {
        int calvowel = 0;
        for (char c : str) {
            switch (tolower(c)) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                calvowel++; break;
            }
        }
        return calvowel;
    }
    
    int wordscount(const string& str) {
        int countw = 0;
        bool inword = false;
        for ( char c : str ){
            if (isspace(c)) {
                inword = false;
            }
            else if (!inword) {
                countw++;
                inword = true;
            }
        }
        return countw;
    }
    string reverse (const string& str) {
        string reversedstring = str;
        int left = 0;
        int right = str.length() - 1;

        while (left < right) {
            swap(reversedstring[left], reversedstring[right]);
            left++;
            right--;
        }
        return reversedstring;
    }
    //function for capitalizing the second letter of each word
    string CapSecLetter(const string& str) {
        string result = str;
        bool inword = false;
        for (int i=0; i<str.length(); i++) {
            inword = false;
        
         if(!inword) {
            inword = true;
            if (i+1<str.length()) {
                result[i+1] = toupper(result[i+1]);
            }
        }
    }
    return result;
}