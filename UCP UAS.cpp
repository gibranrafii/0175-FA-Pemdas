#include <iostream>
using namespace std;
class MasukUniversitas {
private:// isi access modifier disini
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
	// isi daftar variable yang dibutuhkan di bawah ini
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk(int Jalur) {
		cout << "Pilih Jalur Masuk:" << endl;
		cout << "1. SNBT" << endl;
		cout << "2. SNBP" << endl;
		cout << "3. Keluar" << endl;
		cout << "Pilih: ";
		cin >> Jalur;
		return;
	}
	virtual void hitungTotalBiaya() {
		totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
	}
	virtual void tampilkanTotalBiaya(){
		cout << "Total: " << hitungTotalBiaya;
	}
	virtual void input() {
		
	}
	// isi disini dengan fungsi virtual yang dibutuhkan
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	void setUangSemesterPertama(int nilai) {
		this->uangSemesterPertama = nilai;
	}
	void setUangBangunan(int nilai) {
		this->uangBangunan;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	float getUangSemesterPertama() {
		return uangSemesterPertama;
	}
	float getUangBangunan() {
		return uangBangunan;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
	void input() {
		getUangPendaftaran;
		getUangSemesterPertama;
		getUangBangunan;
	}
	void hitungTotalBiaya(int pendaftaran, int semester, int bangunan){
		pendaftaran + semester + bangunan;
	}
	void tampilkanTotalBiaya() {
		cout << hitungTotalBiaya;
	}
	// isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas {
	void input() {
		getUangPendaftaran;
		getUangSemesterPertama;
	}
	void hitungTotalBiaya(int pendaftaran, int semester) {
		pendaftaran + semester;
	}
	void tampilkanTotalBiaya() {
		cout << hitungTotalBiaya;
	}
	// isi disini untuk melengkapi class SNBP
};
int main() {
	MasukUniversitas* kelas;
	SNBT snbt;
	SNBP snbp;
	// isi disini untuk fungsi main
} 