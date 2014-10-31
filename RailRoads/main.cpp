//
//  main.cpp
//  RailRoads
//
//  Created by Luis Alberto Lamadrid on 10/31/14.
//  Copyright (c) 2014 Luis Alberto Lamadrid. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    
    // variable declarations
    int size1, size2;
    
    // user input of train sizes
    cin >> size1 >> size2;
    
    while (size2 && size2) {
        
        
        int first_train[size1];
        int second_train[size2];
        
        
        // user input of wagon numbers
        for (int i = 0; i < size1; i++)
            cin >> first_train[i];
        
        for (int i = 0; i < size2; i++)
            cin >> second_train[i];
        
        // printing of arrays
        for (int i = 0; i < size1; i++)
            cout << first_train[i] << " ";
        cout << endl;
        for (int i = 0; i < size2; i++)
            cout << second_train[i] << " ";
        cout << endl;
        
        // user input of train sizes
        cin >> size1 >> size2;
    }

    
    return 0;
}

