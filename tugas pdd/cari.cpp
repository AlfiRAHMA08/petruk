#include <iostream>
#include <cstring>
using namespace std;

const int MATRIX_SIZE = 24; //deklarasi ukuran matriks berupa 24 x 24

void toUpperCase(char* str) { //'RANA' memiliki array sepanjang 4
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]); //tiap karakter dikapitalkan
    }
}

bool searchWord(char* word, char matrix[][MATRIX_SIZE], int wordLen, int startX, int startY, int dx, int dy) {//mengecek scra horixontal //Rana, matrix[24][24],4,0,0,1,0
    for (int k = 0; k < wordLen; k++) {//k<4
        int x = startX + k * dx; //x = 0 + 0 x 1
        int y = startY + k * dy; //y = 0 + 0 x 0
        if (x < 0 || x >= MATRIX_SIZE || y < 0 || y >= MATRIX_SIZE || matrix[x][y] != word[k]) { // x = 0 dan y = 0, dan matrix[0][0] != word[0](R), kondisi dmna matrix [x][y] melebihi matrix[24][24]
            return false; //hasilnya salah
        } //akan mengecek karakter selanjutnya dari Rana
    }
    return true; //kalau matrix[x][y] = word[k] maka ketemu.
}

bool searchInMatrix(char* word, char matrix[][MATRIX_SIZE], int wordLen) { //Rana, matrix[24][24],4
    //fungsi searchword dipakai dalam fungsi searchInMatrix
    for (int i = 0; i < MATRIX_SIZE; i++) { //i<24
        for (int j = 0; j < MATRIX_SIZE; j++) { //j<24
            if (searchWord(word, matrix, wordLen, i, j, 1, 0) || // Horizontal //Rana, matrix[24][24],4,0,0,1,0 //SEMUA UNTUK LOOPING PERTAMA
                searchWord(word, matrix, wordLen, i, j, 0, 1) || // Vertical //Rana, matrix[24][24],4,0,0,0,1
                searchWord(word, matrix, wordLen, i, j, 1, 1) || // Diagonal kanan bawah //Rana, matrix[24][24],4,0,0,1,1
                searchWord(word, matrix, wordLen, i, j, -1, 1)) { // Diagonal kiri atas //Rana, matrix[24][24],4,-1,1
                return true;
            }
        }
    }
    return false;
}

int main() {
    int num;
    cin >> num; //menginput banyak  kata yang ingin dicari, misal: 2
    cin.ignore(); 

    char words[num][25]; //char words[2][25]
    for (int i = 0; i < num; i++) {
        cin.getline(words[i], 25); //cin.getline(words[0],25)--memasukkan kata dan akan dimasukan ke dalam array words[0] (prtama kali)
        toUpperCase(words[i]); //toUpperCase(words[0]) looping untuk mengkapitalkan seluruh karakter dalam words[]
    }

    char matrix[MATRIX_SIZE][MATRIX_SIZE] = { //matrix[24][24]
        "AAFLKHPFSSUFICICLESGNNH",
        "SFVREOMRWLRTTSXOQQNAOAO",
        "QEIAIFXAEIRFVFYSXIMINJI",
        "WSTRLGOCAPBIAFIWIWTUACM",
        "FEYAEAISTPCRLUJKOAKCERS",
        "RVDAKPNDEEHDEMSNCKKFOAH",
        "MRNEDSLCRRIWNRSAAFITMMI",
        "YAAECIEAHYMOTAVHRSSTISB",
        "RJSEWELCCENNIETOHWSGLSE",
        "ATANYYMOIEESNESIOIRELTR",
        "UTENEWEBHMYBETNNRAIEBEN",
        "RCLKUTEAEQJLSGSHTGDSKOA",
        "BHOICATNRRSDDECEHOOLGIT",
        "ENSLUARIRSETALOCOHCTOHE",
        "FZFUDQJYMADOYIWYGLOVESU",
        "TEKALFWONSNAEBMIEJTZNTG",
        "ESWPOSJXEUTUYOZUWAKEZHM",
        "KZUHBPEZEERFLMSNOWBALLH",
        "NSNOWBOARDYTVWYCLEVOHSA",
        "ACOCRQLGZIYCHODRAZZILBI",
        "LBVKKWANZAAQINWOLPWONSL",
        "BFREEZINGRAINSLILGTMELT",
        "HQPYLWHFMNFFUFPSWXNUMMV"
    };

    for (int i = 0; i < num; i++) {//melakukan looping sebanyak jumlah kata yang dicari
        if (searchInMatrix(words[i], matrix, strlen(words[i]))) {//memanggil fungsi searchInMatrix, misal kata Rana maka looping pertama: SearchInMatrix(Rana, isi matrix, 4)
            cout << "Ada" << endl;
        } else {
            cout << "Tidak Ada" << endl;
        }
    }

    return 0;
}