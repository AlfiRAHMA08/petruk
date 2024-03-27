#include<iostream>
using namespace std;

class Mahasiswa{
	private:
		string nama;
		
	public:
		void setNama(string nama){
			this->nama = nama;
		}
		string getName(){
			return nama;
		}
};

int main(){
	Mahasiswa Mhs;
	
	Mhs.setNama("Alfi");
	cout<<Mhs.getName();
}

