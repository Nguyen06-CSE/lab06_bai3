

//Khai bao nguyen mau
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int chon, MaTran a, MaTran b, unsigned int& n);
void ChayChuongTrinh();


//Dinh nghia ham
void XuatMenu()
{
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. nhap ma tran vuong cap n ";
	cout << "\n2. Xuat ma tran";
	cout << "\n3. tao mang ngau nhien";
	cout << "\n4. tim ma tran chuyen vi cua ma tran M cho truoc";
    cout << "\n5. tinh hang cua ma tran ";
    cout << "\n6. cong hai ma tran cung cap";
    cout << "\n7. tru hai ma tran cung cap";
    cout << "\n8. nhan ma tran voi mot so";
    cout << "\n9. nhan hai ma tran";
	
	
}

int ChonMenu(int soMenu)
{
	int chon;
	do{
    
		XuatMenu();

		cout << "\nNhap chon[0..." << soMenu << "]=";
		cin >> chon;
        
		if (0 <= chon && chon <= soMenu)
			break;
    
	} while (true);
	return chon;
}



void XuLyMenu(int chon, MaTran a, MaTran b, unsigned int& n)
{
    
    

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

        int minVal, maxVal;
		cout << "nhap VUNG SO ban muon (max min): ";
		cin >> maxVal >> minVal;
		cout << "nhap cap cua ma tran: ";
        cin >> n;
		taoMaTranNgauNhien(b ,n, maxVal, minVal);
        cout << "mang duoc tao ngau nhien la: \n";
		xuatMaTran(b, n);
        
		

		break;
    case 4:

        
        cout << "ma tran truoc khi duoc hoan vi la: \n";
        xuatMaTran(a, n);
        hoanViMaTran(a, n);
        cout << "ma tran sau khi duoc hoan vi la: \n";
        xuatMaTran(a, n);
    case 5:
		break;
	case 6:
		cout << "hai ma tran ban vua tao la: \n";
		xuatMaTran(a, n);
		cout << endl;
		xuatMaTran(b, n);
		cout << endl;
		cout << "6. cong hai ma tran cung cap\n";
		congHaiMaTranCungCap(a, b, n);
		xuatMaTran(a, n);

		break;
	case 7:
		cout << "7. tru hai ma tran cung cap\n";
		cout << "hai ma tran ban vua tao la: \n";
		xuatMaTran(a, n);
		cout << endl;
		xuatMaTran(b, n);
		cout << endl;
		truHaiMaTranCungCap(a, b, n);
		cout << "mang sau ki tru la: \n";
		xuatMaTran(a, n);

		break;
	case 8:
		cout << "8. nhan hai ma tran cung cap \n";
		int soNhan;
		cout << "nhap so nhan ma ban muon: ";
		cin >> soNhan;
		nhanMaTranVoiMotSo(a, n, soNhan);
		xuatMaTran(a, n);
	case 9:
		cout << "9. nhan hai ma tran cung cap\n";
		cout << "hai ma tran ban vua tao la: \n";
		xuatMaTran(a, n);
		cout << endl;
		xuatMaTran(b, n);
		cout << endl;
		nhanHaiMaTranCungCap(a, b, n);
		cout << "mang sau ki nhan la: \n";
		xuatMaTran(a, n);

		break;
    
	
	default:
		break;
	}
	_getch();
}



void ChayChuongTrinh()
{
    
	int soMenu = 9, chon;
    unsigned int n;
    MaTran a, b;
    
	do
	{
		system("cls");
		chon = ChonMenu(soMenu);

		XuLyMenu(chon, a, b, n);

	} while (chon != 0);
}