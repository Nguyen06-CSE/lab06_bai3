void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int chon, MaTran a, unsigned int& n);
void ChayChuongTrinh();


void XuatMenu()
{
	cout << "\n0. thoat khoi chuong trinh";
	cout << "\n1. nhap ma tran vuong cap n ";
	cout << "\n2. Xuat ma tran";
	cout << "\n3. tinh tong cac phan tu cua ma tran";
	cout << "\n4. tich cua cac phan tu chia het cho 3";
	cout << "\n5. hoan vi hai cot cua ma tran va in";
	cout << "\n6. hoan vi hai dong cua ma tran va in";
	cout << "\n7. xuat cac gia tri cua duong cheo song song voi duong cheo chinh";
	cout << "\n8. xuat cac gia tri cua duong cheo song song voi duong cheo phu";
	cout << "\n9. tinh tong cac phan tu nam ben trai duong cheo phu";
	cout << "\n10. xuat cac phan tu thuoc duong cheo chinh va duong cheo phu";

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
		cout << "ma tran ban vua nhap la \n";
		xuatMaTran(a, n);
		cout << endl << "tong cac phan tu cua ma tran la: " << tinhTongCacPT(a, n) << endl;
		break;
	case 4:
		cout << "ma tran ban vua nhap la \n";
		xuatMaTran(a, n);
		cout << endl << "tich cac phan tu chia het cho 3 la: " << tichCuaCacPTChiaHetCho3(a, n) << endl;
		break;
	case 5:
		cout << "ma tran ban vua nhap la \n";
		xuatMaTran(a, n);
		cout << endl << "hoan vi hai cot cua ma tran la: \n";
		hoanViCot(a, n);
		xuatMaTran(a, n);
		break;
	case 6:
		cout << "ma tran ban vua nhap la \n";
		xuatMaTran(a, n);
		cout << endl << "hoan vi hai hang cua ma tran la: \n";
		hoanViHang(a, n);
		xuatMaTran(a, n);
		break;
	case 7:
		cout << "ma tran ban vua nhap la \n";
		xuatMaTran(a, n);
		cout << endl << "cac gia tri cua cac PT song song voi duong cheo chinh la: \n";
		xuatCacGiaTriSongSongVoiDCChinh(a, n);
		xuatMaTran(a, n);
		break;
	case 8:
		cout << "ma tran ban vua nhap la \n";
		xuatMaTran(a, n);
		cout << endl << "cac gia tri cua cac PT song song voi duong cheo chinh la: \n";
		xuatCacGiaTriSongSongVoiDCPhu(a, n);
		xuatMaTran(a, n);
		break;
	case 9:
		cout << "ma tran ban vua nhap la \n";
		xuatMaTran(a, n);
		cout << endl << "tong cac phan tu nam duoi duong cheo phu la: \n" << tinhTongCacPhanTuNamDuoiDCPhu(a, n);
		break;
	case 10:
		cout << "ma tran ban vua nhap la \n";
		xuatMaTran(a, n);
		cout << endl << "cac phan tu thuoc duong cheo la\n";
		
		xuatCacPTNamTrenDuongCheo( a, n);
		break;
	default:
		break;
	}
	_getch();
}



void ChayChuongTrinh()
{
	int soMenu = 10;
	int chon;
	unsigned int n;
	MaTran a;
	do
	{
		system("cls");
		chon = ChonMenu(soMenu);

		XuLyMenu(chon, a, n);

	} while (chon != 0);
}

