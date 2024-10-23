

//Khai bao nguyen mau
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int chon, MaTran a, unsigned int& n);
void ChayChuongTrinh();


//Dinh nghia ham
void XuatMenu()
{
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. nhap ma tran vuong cap n ";
	cout << "\n2. Xuat ma tran";
	cout << "\n3. tim ma tran chuyen vi cua ma tran M cho truoc";
    cout << "\n4. tinh hang cua ma tran ";
    cout << "\n5. cong hai ma tran cung cap";
    cout << "\n6. tru hai ma tran cung cap";
    cout << "\n7. nhan ma tran voi mot so";
    cout << "\n8. nhan hai ma tran";
	
	
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



void XuLyMenu(int chon, MaTran a, unsigned int& n)
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

        
        cout << "ma tran truoc khi duoc hoan vi la: \n";
        xuatMaTran(a, n);
        hoanViMaTran(a, n);
        cout << "ma tran sau khi duoc hoan vi la: \n";
        xuatMaTran(a, n);
        
		

		break;
    
	
	default:
		break;
	}
	_getch();
}



void ChayChuongTrinh()
{
    
	int soMenu = 8, chon;
    unsigned int n;
    MaTran a;
    
	do
	{
		system("cls");
		chon = ChonMenu(soMenu);

		XuLyMenu(chon, a, n);

	} while (chon != 0);
}