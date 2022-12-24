//
//  main.cpp
//  Document analyzer
//
//  Created by Tomi Perillus on 09.12.2022.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

using namespace std;


void getfilewords(string path) {
    map<string, int> duplicates;
    int i = 0;
    string word[500];
    vector<string> Words;
    ifstream fv;
    fv.open(path);
    if(!fv)
        cout << "File can not be found";
    else {
        for(i = 0; i < 500; i++) {
            while(fv >> word[i]) {
                //cout << word[i] << endl; // Iga sõna
                
                
                //-------Pooleli osa--------
                
                //if (word[i] != Words.back()) //-Kas sõna on juba vectoris
                    //duplicates.insert_or_assign(word[i], +1 );
                //else{
                    
                //}
                
                    // Kas word[i] on juba duplicates mapis
                    // Kui word[i] ei ole mapis --> Lisa word[i]  duplicates mapi  int 1 ga
                    // Kui on, siis lisa int =+1 to map
                //---------------------------
                
                
                Words.push_back(word[i]);
            }
        }
        cout << "Word count: " << Words.size() << endl;
    }
    for (auto const& [key, val] : duplicates)
    {
        cout << key        // string (key)
                  << ':'
                  << val        // string's value
                  << endl;
    }
}
    


    // /Users/Tomi/Documents/test.txt

int check_file_validity(string path) {
    {
        ifstream file(path);
      
        if(!file) {
            cout<< "file was not found ";
          return false;
    } else {
        
        return true;
    }
    }}

int main(int argc, const char * argv[]) {
    string path;
    cout << "Please input the path to your text file\n";
    cin >> path;
    if(check_file_validity(path)){
        getfilewords(path);
    }
    return 0;
}
