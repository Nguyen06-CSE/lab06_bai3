#define MAX 100
#define TAB '\t'

typedef int MaTran [MAX][MAX];


void nhapMaTran(MaTran a, unsigned int& n);
void xuatMaTran(MaTran a, unsigned int& n);
void hoanVi(int& a, int& b);
void hoanViMaTran(MaTran a, int n);


void nhapMaTran(MaTran a, unsigned int& n){
    for(int i = 0; i < n; i++){
        cout << "hanh thu " << i << endl;
        for(int j = 0; j < n; j++){
            cout << "a[" << i << "]" << "[" << j << "]=";
            cin >> a[i][j];
        }
    }
}


void xuatMaTran(MaTran a, unsigned int& n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << TAB;
        }
        cout << endl;
    }
}

void hoanVi(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}


// void hoanViMaTran(MaTran a, int n) {
//     int up = 0, down = n - 1;

//     // Step: Flip rows (vertical swap only)
//     while (up < down) {
//         for (int i = 0; i < n; i++) {
//             hoanVi(a[up][i], a[down][i]);
//         }
//         up++;
//         down--;
//     }
// }

// while (up < down) {
//         for (int i = 0; i < n; i++) {
//             hoanVi(a[up][i], a[down][i]);
//         }
//         up++;
//         down--;
//     }
    
//     for (int i = 0; i < n; i++) {
//         while (left < right) {
//             hoanVi(a[i][left], a[i][right]);
//             left++;
//             right--;
//         }
//     }


//ham nay xe dao hang roi se dao cot cho den khi dao het tat ca cac hang va cot
void hoanViMaTran(MaTran a, int n) {
    int up = 0, down = n - 1;
    int left = 0, right = n - 1;

    while (up < down)
    {
        //dao cot
        for(int i = left; i <= right; i++){
            hoanVi(a[up][i], a[down][i]);
        }
        ++up;
        --down;
        
        //dao hang
        for(int i = up; i <= down; i++){
            hoanVi(a[i][left], a[i][right]);
        }
        ++left;
        --right;
    }
}