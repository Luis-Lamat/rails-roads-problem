//
//  main.cpp
//  RailRoads
//
//  Created by Luis Lamadrid - A01191158
//             Pau Escalante - A01191962
//  On 10/31/14.
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
    
    //while any input is not 0
    while (size2 && size2) {
        
        int first_train[size1];
        int second_train[size2];
        int prospect[size1+size2];
        bool a, b;
        
        // user input of wagon numbers for first train
        for (int i = 0; i < size1; i++)
            cin >> first_train[i];
        
        // user input of wagon numbers for second train
        for (int i = 0; i < size2; i++)
            cin >> second_train[i];
        
        //user input of wagon prospect
        for (int i = 0; i < size1+size2; i++)
            cin >> prospect[i];
        
        // declaring matrix
        bool m[size1+1][size2+1];
        
        // filling matrix with false
        for (int i = 0; i <= size1; i++) {
            for (int j = 0; j <= size2; j++) {
                m[i][j] = false;
            }
        }
        
        m[0][0] = true;
        
        //fill first row corresponding to first train
        for (int i = 1; i <= size2; i++){
            //controls columns of first row
            m[0][i] = m[0][i-1] && (second_train[i-1] == prospect[i-1]);
        }
        
        //fill first column corresponding to second train
        for (int i = 1; i <= size1; i++){
            //controls columns of first row
            m[i][0] = m[i-1][0] && (first_train[i-1] == prospect[i-1]);
        }
        
        //solve the matrix
        for (int i = 1; i <= size1; i++){ //controls rows
            for (int j = 1; j <= size2; j++){ //controls columns
                m[i][j] = (first_train[i-1] == prospect[i+j-1] && m[i-1][j]) || (second_train[j-1] == prospect[i+j-1] && m[i][j-1]);
            }
        }
        
        cout << (m[size1][size2]? "possible" : "not possible") << endl;
        
        // user input of train sizes
        cin >> size1 >> size2;
        
    }
    return 0;
}

