#include <iostream>
using namespace std;

void replace_to_one(int* string, int str_len) {
    cout << "replace to one! \n";
    for (int i = 0; i < str_len; i++) {
        string[i] = 1;
    }
}

void replace_to_zero(int* string, int str_len) {
    cout << "replace to zero! \n";
    for (int i = 0; i < str_len; i++) {
        string[i] = 0;
    }
}

int check_string(int* string, int str_len){
    bool symmetry = true;
    for (int i = 0; i < str_len; i++) {
        if (string[i] != string[str_len]-i) {
            symmetry = false;
        }
    }
    return symmetry;
}


int main(){
    int n, m;
    cout << "string: "; cin >> n;
    cout << "column: "; cin >> m;
    int** arr = new int* [n];
    
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "enter el: "; cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (check_string(arr[i], n)) {
            replace_to_one(arr[i], m);
        } else {
            replace_to_zero(arr[i], m);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    
}


//3.Задана матрица размером NxM. Получить массив B, присвоив его k-му элементу значение 1, если k-я строка матрицы симметрична, и значение 0 − в противном случае.
