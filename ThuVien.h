#define MAX 100
#define TAB '\t'

typedef int MaTran[MAX][MAX];

void nhapMaTran(MaTran a, unsigned int n);
void xuatMaTran(MaTran a, unsigned int n);
int tinhTongCacPT(MaTran a, int n);
int tichCuaCacPTChiaHetCho3(MaTran a, int n);
void hoanVi(int a, int b);
void hoanViCot(MaTran a, int n);
void hoanViHang(MaTran a, int n);
void xuatCacGiaTriSongSongVoiDCChinh(MaTran a, int n);
void xuatCacGiaTriSongSongVoiDCPhu(MaTran a, int n);
int tinhTongCacPhanTuNamDuoiDCPhu(MaTran a, int n);
void xuatCacPTNamTrenDuongCheo(MaTran a, int n);


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


int tinhTongCacPT(MaTran a, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
    }
    return sum;
}


int tichCuaCacPTChiaHetCho3(MaTran a, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int kt = a[i][j];
            if (kt % 2 == 0) {
                sum *= a[i][j];
            }
        }
    }
    return sum;
}

void hoanVi(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void hoanViCot(MaTran a, int n)
{
    for (int i = 0; i < n; i++) {
        hoanVi(a[0][i], a[n - 1][i]);
    }
}

void hoanViHang(MaTran a, int n)
{
    for (int i = 0; i < n; i++) {
        hoanVi(a[i][0], a[i][n - 1]);
    }
}



void xuatCacGiaTriSongSongVoiDCChinh(MaTran a, int n)
{
    cout << "cac duong cheo nam tren duong cheo chinh va song song voi tren cheo chinh la:\n";
    for(int d = 1; d < n; d++){
        int i = d, j = 0;
        while (i < n && j < n) {
        cout << a[j][i] << " ";
        i++;
        j++;
        }
    cout << endl;
    }
    cout << "cac duong cheo nam duoi duong cheo chinh va song song voi duong cheo chinh la:\n";
    for(int d = 1; d < n; d++){
        int i = d, j = 0;
        while (i < n && j < n) {
        cout << a[i][j] << " ";
        i++;
        j++;
        }
    cout << endl << endl;
    }
}

void xuatCacGiaTriSongSongVoiDCPhu(MaTran a, int n)
{
    cout << "cac duong cheo nam tren duong cheo phu va song song voi tren cheo phu la:\n";
    for(int d = 0; d < n - 1; d++){
        int i = d, j = 0;
        while (i >= 0 && j <= d) {
        cout << a[i][j] << " ";
        i--;
        j++;
        }
    cout << endl;
    }
    cout << endl;
    cout << "cac duong cheo nam duoi duong cheo phu va song song voi duong cheo phu la:\n";
    for(int d = 1; d < n; d++){
        int i = d;
        int j = n - 1;
        while (i < n && j >= d) {
            cout << a[i][j] << " ";
            i++;
            j--;
    }
    cout << endl;
    }
    cout << endl;
}

int tinhTongCacPhanTuNamDuoiDCPhu(MaTran a, int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        int j = i, d = n - 1;
        while (j < n && d >= i)
        {
            sum+=a[j][d];
            ++j;
            --d;
        }
        
    }
    return sum;
}

void xuatCacPTNamTrenDuongCheo(MaTran a, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j || i + j == n - 1){
                cout << a[i][j] << "    ";
            }
            else
                cout << "    ";
        }
        cout << endl;
    }
}