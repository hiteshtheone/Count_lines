//
//  main.cpp
//  Count_lines
//
//  Created by hambarkh on 22/03/15.
//  Copyright (c) 2015 Akola. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    if (argc != 2) {
        cout << "Provide text filename!! Closing Program." << endl;
        return 0;
    }
    string data;
    ifstream inFile;
    //inFile.open("/Users/hambarkh/Desktop/hitesh/XCode/Count_lines/Count_lines/sample.txt");
    inFile.open(argv[1]);
    unsigned int lCount;
    /*while(!inFile.eof()) {
        
        inFile >> data;
        cout << data << endl;
        lCount++;
    }
     lCount--; //Extra 1 is counted here
     */
    char c;
    while (inFile.get(c)) {
        if (c == '\n') {
            lCount++;
        }
    }
    cout << "No. of lines = " << lCount << endl;
    return 0;
}
