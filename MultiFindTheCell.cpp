//
//  MultiFindTheCell.cpp
//  PracticeQuestions3
//
//  Created by Sharmyn Kayani on 18/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//

#include <iostream>
using namespace std;

//void findCell(int arr[3][4], int find) {
//    
//    bool value = false;1
//    for (int row = 0; row < 3 && !value; row++) {
//        for (int column = 0; column < 4 && !value; column++) {
//            if (arr[row][column] == find) {
//                cout << "The row is: " << row << " and the column no is: " << column << endl;
//                value = true;
//                break;
//            }
//            
//        }
//    }
//    
//    if (value == false) {
//        cout << "The number does not exist" << endl;
//    }
//}

void findLastCell(int arr[3][4], int find) {
    int cell1, cell2;
    cell1 = 0;
    cell2 = 0;
    
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 4; column++) {
            if (arr[row][column] == find) {
                if (row != cell1 && column != cell2) {
                    cell1 = row;
                    cell2 = column;
                    cout << "The row is: " << row << " and the column no is: " << column << endl;
                }
            }
        }
    }
}

int main() {
    int arr[3][4];
    srand(time(0));
    
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
        
    
//    findCell(arr, 7);
    findLastCell(arr, 3);
}