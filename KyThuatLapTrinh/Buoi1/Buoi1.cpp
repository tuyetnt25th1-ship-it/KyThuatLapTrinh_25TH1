#include <iostream>
#include <vector>
using namespace std;
struct SinhVien {
	string hoten;
	int tuoi;
	bool gioitinh;
	string diachi;

};

int main() {
	SinhVien b;
	b.hoten = "Nguyen Thi Ngoc Tuyet";
	b.tuoi = 19;
	b.gioitinh = true;
	b.diachi = "Tay Ninh";

	SinhVien c;
	c.hoten = "Nguyen Tuong Van";
	c.tuoi = 19;
	c.gioitinh = true;
	c.diachi = "Dong Thap";

	SinhVien d;
	d.hoten = "Nguyen Thi Kim Pho";
	d.tuoi = 19;
	d.gioitinh = true;
	d.diachi = "Long An";

	SinhVien e;
	e.hoten = "Nguyen Gia Han";
	e.tuoi = 20;
	e.gioitinh = true;
	e.diachi = "Dong Nai";


	
	//SinhVien ds[50];
	vector <SinhVien> mang;
	mang.push_back(b);
	mang.push_back(c);
	mang.push_back(d);
	mang.push_back(e);
	for (int i = 0; i < mang.size(); i++) {
		cout << "SinhVien" << (i + 1) << endl;
		cout << "\t+ Ho ten:" << mang[i].hoten << endl;
		cout << "\t+ Tuoi: " << mang[i].tuoi << endl;
		cout << "\t+ Dia chi: " << mang[i].diachi << endl;
		cout << "\t+ Gioi tinh: " << mang[i].gioitinh << endl;
	}


	/*int a = 5;
	int* p = &a;
	a += 6;
	a = *p + 2;
	cout << *p;*/




	/*vector <float> diemthi;
	diemthi.push_back(5.5);
	diemthi.push_back(4);
	diemthi.push_back(6);
	diemthi.pop_back();
	for (int i = 0; i < diemthi.size(); i++) {
		cout << diemthi[i] << endl;
	}*/
}
