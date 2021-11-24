#include <iostream>
#include <string>
using namespace std;

class person
{
		int tuoi;
	public:
		void nhap();
		//void xuat();
		friend class ve;
};

class time_
{
		int gio;
		int phut;
	public:
		void nhap();
		void xuat();
		friend class ve;


};
class ve
{
	person x;
	time_ y;
	public:
		void nhap();
	//	void xuat();
	    void check();

};
void person::nhap()
{
	cout<< "Moi quy khach nhap tuoi cua quy khach: ";
	cin >> tuoi;
}
void time_::nhap()
{
	cout << "Moi ban chon thoi diem cat canh chuyen bay, (luu y thoi gian phut la boi cua 15)";
	cin >> gio >> phut;
}
void time_::xuat()
{
	cout << "Thoi diem ban da chon cat canh chuyen bay la" << gio << "h" << phut << "'";
}
void ve::nhap()
{
	x.nhap();
	y.nhap();
}
void ve::check()
{
//4
  	if( x.tuoi < 12) {
            //5
		if(y.gio >= 5 && y.gio <=23  && (y.phut%15==0) && y.phut < 60) {
		    //6
			if( y.gio >=7 && y.gio <=22) {
				cout <<" Ve niem yet";
			}
			//7
			 else  {
				cout << " Ve khuyen mai";
			}
			//8
		} else {
				cout <<"Thoi gian khong hop le";
			}
//9
	} else {
	    //10
		if(y.gio >= 5 && y.gio <=23  && (y.phut%15==0) && y.phut < 60) {
                //11
			if(y.gio <=22) {
				cout <<" Ve niem yet";
			}
        //12
			else  {
				cout << " Ve khuyen mai";
			}

		}
		//13
		else {
				cout <<"Thoi gian khong hop le";
			}
	}
}

int main() {
	ve a;
	a.nhap();
	a.check();
	return 0;

}

