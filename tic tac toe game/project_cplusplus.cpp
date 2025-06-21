#include<iostream>
using namespace std;
#include<math.h> 

int main () {
    char arr[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    // naya code, warna teri fielding set kar dunga

    int i = 0, j = 0;
    char num1, num2;
    int count1 = 0, count2 = 0;

    // main condition

    while (i+j<=9) {

        if (i <= 5) {
            cout << "where do u want to place your O?" << endl;
            cin >> num1;

            // check the number

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (arr[i][j] == num1) {
                        arr[i][j] = 'O';
                        break;
                    }
                }
            }
            // print the unpdate 2D array

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }

            // check the condition

            count1 = count1 + arr[i][j];
            cout << "your no of O:" << count1;
            if(count1 %3==0 && count1 != 51) {

                cout << "O won" ;
                return 0;
            }
            cout << endl;

            i++;
        }

        if (j <= 4) {
            cout << "where do u want to place your X?" << endl;
            cin >> num2;

            // check the number

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (arr[i][j] == num2) {
                        arr[i][j] = 'X';
                        break;
                    }
                }
            }
            // print the updated 2D array

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }

            // check the winning condition
            count2 = count2 + arr[i][j];
            cout << "your no of X:" << count2;

            if(count2 % 3 == 0 && count2 != 51) {

                cout << "X won";
                return 0;
            }
            cout << endl;

            j++;
        }
    }

    return 0;  
}


