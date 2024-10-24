void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int chon, MaTran a, MaTran b, unsigned int& n, unsigned int& m);
void ChayChuongTrinh();


void XuatMenu()
{
	cout << "\n0. thoat khoi chuong trinh";
	cout << "\n1. nhap ma tran vuong cap n ";
	cout << "\n2. Xuat ma tran";
	cout << "\n3. tao ma tran ngau nhien";
	cout << "\n4. tinh hang cua ma tran ";
	cout << "\n5. tim ma tran chuyen vi";
	cout << "\n6. cong hai ma tran cung cap ";
	cout << "\n7. tru hai ma tran cung cap";
	cout << "\n8. nhan ma tran voi 1 so";
	cout << "\n9. nhan hai ma tran voi nhau";
}

int ChonMenu(int soMenu)
{
	int chon;
	do {

		XuatMenu();

		cout << "\nNhap chon[0..." << soMenu << "]=";
		cin >> chon;

		if (0 <= chon && chon <= soMenu)
			break;

	} while (true);
	return chon;
}



void XuLyMenu(int chon, MaTran a, MaTran b, unsigned int& n, unsigned int& m)
{
	int maxVal, minVal;
	int soNhan;


	switch (chon)
	{
	case 0:

		cout << "\n0. Thoat chuong trinh";

		break;
	case 1:
		cout << "nhap cap cua ma tran: ";
		cin >> n;
		cout << "nhap ma tran \n";
		nhapMaTran(a, n);
		break;
	case 2:
		cout << "\n2. Xuat ma tran\n";
		xuatMaTran(a, n);
		cout << endl;
		break;
	case 3:
		cout << "tao ma tran ngau nhien\n";
		cout << "nhap so be nhat trong mang: ";
		cin >> minVal;
		cout << "nhap so lon nhat trong mang: ";
		cin >> maxVal;
		cout << "nhap cap cua ma tran: ";
		cin >> m;
		taoMaTranNgauNhien(b, m, maxVal, minVal);
		cout << "ma tran ban vua tao ngau nhien la: \n";
		xuatMaTran(b,m);
		break;
	case 4:
		cout << "ma tran truoc khi hoan vi la:\n";
		xuatMaTran(a, n);
		cout << endl;
		chuyenViMaTran( a, n);
		cout << "ma tran sau khi hoan vi la\n";
		xuatMaTran(a, n); 
	break;
	case 5:

		
		break;
	case 6:
		cout << "hai ma tran ban vua tao lan luot la: \n";
		xuatMaTran(a, n);
		cout << endl;
		xuatMaTran(b, m);
		congHaiMaTranCungCap(a, b, n, m);
	break;

	case 7:
		cout << "hai ma tran ban vua tao lan luot la: \n";
		xuatMaTran(a, n);
		cout << endl;
		xuatMaTran(b, m);
		truHaiMaTranCungCap(a, b, n, m);
	break;

	case 8:
		cout << "hai ma tran ban vua tao lan luot la: \n";
		xuatMaTran(a, n);
		cout << endl;
		cout << "nhap so nhan: ";
		cin >> soNhan;
		nhanMaTranVoiMotSo(a, n, soNhan);
	break;

	case 9:
		cout << "hai ma tran ban vua tao lan luot la: \n";
		xuatMaTran(a, n);
		cout << endl;
		xuatMaTran(b, m);
		nhanHaiMaTranCungCap(a, b, n, m);
	break;
	
	
	default:
		break;
	}
	_getch();
}



void ChayChuongTrinh()
{
	int soMenu = 9;
	int chon;
	unsigned int n, m;
	MaTran a, b;
	do
	{
		system("cls");
		chon = ChonMenu(soMenu);

		XuLyMenu(chon, a, b, n, m);

	} while (chon != 0);
}

