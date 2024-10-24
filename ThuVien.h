#define MAX 100
#define TAB '\t'

typedef int MaTran[MAX][MAX];

void nhapMaTran(MaTran a, unsigned int n);
void xuatMaTran(MaTran a, unsigned int n);
void taoMaTranNgauNhien(MaTran b, int m, int maxVal, int minVal);
void hoanVi(int& a, int& b);
void chuyenViMaTran(MaTran a, int n);
void tinhHangCuaMaTran(MaTran a, int n);
void congHaiMaTranCungCap(MaTran a, MaTran b, int n, int m);
void truHaiMaTranCungCap(MaTran a, MaTran b, int n, int m);
void nhanMaTranVoiMotSo(MaTran a, int n, int soNhan);
void nhanHaiMaTranCungCap(MaTran a, MaTran b, int n, int m);



void nhapMaTran(MaTran a, unsigned int n)
{
    for (int i = 0; i < n; i++) {
        cout << "hanh thu " << i << endl;
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "]" << "[" << j << "]=";
            cin >> a[i][j];
        }
    }
}


void xuatMaTran(MaTran a, unsigned int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << TAB;
        }
        cout << endl;
    }
}


void hoanVi(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}


void taoMaTranNgauNhien(MaTran b, int m, int maxVal, int minVal){
    srand(time(0));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            b[i][j] = rand() % (maxVal - minVal + 1) + minVal;
        }
    }
}


void chuyenViMaTran(MaTran a, int n)
{
    int up = 0, down = n - 1;
    int left = 0, right = n - 1;
    while(up <= down){
        for(int i = 0; i < n; i++)
            hoanVi(a[up][i], a[down][i]);
        
        for(int i = 0; i < n; i++)
            hoanVi(a[i][left], a[i][right]);

        ++up; --down;
        ++left; --right;
    }
    
}

void tinhHangCuaMaTran(MaTran a, int n){

}

void congHaiMaTranCungCap(MaTran a, MaTran b, int n, int m){
    if(n == m){
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                a[i][j] += b[i][j];
        cout << "ma tran sau khi cong la: \n";
        xuatMaTran(a, n);
    }
    else
        cout << "cap cua ma tran dau tien la " << n << ", cua ma tran thu 2 la: " << m <<". Nen hai ma tran se ko cung cap\n";
}

void truHaiMaTranCungCap(MaTran a, MaTran b, int n, int m){
    if(n == m){
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                a[i][j] -= b[i][j];
        cout << "ma tran sau khi tru la: \n";
        xuatMaTran(a, n);
    }
    else
        cout << "cap cua ma tran dau tien la " << n << ", cua ma tran thu 2 la: " << m <<". Nen hai ma tran se ko cung cap\n";
}

void nhanMaTranVoiMotSo(MaTran a, int n, int soNhan){
    
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                a[i][j] *= soNhan;
        cout << "ma tran sau khi nhan la: \n";
        xuatMaTran(a, n);
    
}

void nhanHaiMaTranCungCap(MaTran a, MaTran b, int n, int m){
    if(n == m){
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                a[i][j] *= b[i][j];
        cout << "ma tran sau khi nhan la: \n";
        xuatMaTran(a, n);
    }
    else
        cout << "cap cua ma tran dau tien la " << n << ", cua ma tran thu 2 la: " << m <<". Nen hai ma tran se ko cung cap\n";
}