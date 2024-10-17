#include<iostream>
#include<math.h>
#include<cmath>
#include<ctime>

#define MAX 1000


using namespace std;

typedef int DaySo[MAX];

int randNumPo(DaySo a);
int randNumPoAndNe(DaySo a);
void nhapMang(DaySo a, int n);
int demSoLe(DaySo a, int n);
void demVaXuatSoChiaHet3KhongChiaHet4(DaySo a, int n);
int demSoCo3ChuSo(DaySo a, int n); 
int demXTaiVTLe(DaySo a, int n, int x);
int demSoCo3ChuSo(DaySo a, int n);
int demSoNamNgoaiPhanVi(DaySo a, int n, int min, int max);
int demSoChinhPhuong(DaySo a, int n);
void demVaXuatItNhat(DaySo a, int n, int k);
int demSoLanXuatHienTuVT(DaySo a, int n, int x, int vt);





void choiseMenu(DaySo a,int choise, int n){
        int TD, dau;

    switch(choise){
        
        case 1: 
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
            
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
                cin >> dau;
                int phanTu, dem;
                 if (dau == 1) {
                    phanTu = randNumPo(a);
                    
                } else {
                    phanTu = randNumPoAndNe(a);

                }
                dem = demSoLe(a, phanTu);
                cout << "So le trong mang la: " << dem << endl;
            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                cout << "so le trong mang la " << demSoLe(a, n) << endl;
            }


            break;
        case 2:


            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
                cin >> dau;
                int phanTu;
                 if (dau == 1) {
                    phanTu = randNumPo(a);
                    
                } else {
                    randNumPoAndNe(a);
                }
                demVaXuatSoChiaHet3KhongChiaHet4(a, phanTu);
            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                demVaXuatSoChiaHet3KhongChiaHet4(a, n);
            }
            
           
        break;
        
    case 3:
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;

            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong (am nhan 2, duong nhan 1): ";
                cin >> dau;
                
                int phanTu;
                if (dau == 1) {
                    phanTu = randNumPo(a);
                } else {
                    phanTu = randNumPoAndNe(a);
                }
                
                cout << "hay nhap x ma ban muon tim kiem: ";
                int x;
                cin >> x;
                cout << "so phan tu x xuat hien trong mang a tai vi tri le la: " << demXTaiVTLe(a, phanTu, x) << endl;
            } else {
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                
                cout << "hay nhap x ma ban muon tim kiem: ";
                int x;
                cin >> x;
                cout << "so phan tu x xuat hien trong mang a tai vi tri le la: " << demXTaiVTLe(a, n, x) << endl;
            }
            
              
              

            break;
        case 4:
          
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
                cin >> dau;
                int phanTu;
                 if (dau == 1) {
                    phanTu = randNumPo(a);
                    
                } else {
                    randNumPoAndNe(a);
                }
                 cout << "so luong so co 3 chu so trong mang tren la: " << demSoCo3ChuSo(a, phanTu) << endl;
            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                demVaXuatSoChiaHet3KhongChiaHet4(a, n);
            }
            
           
        break;

        case 5:

            int min, max;
            cout << "Hay nhap pham vi cua ban [min ... max]: ";
            cin >> min >> max;
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;

            if (TD == 1) {
                cout << "So ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong (am va duong nhan 2, duy nhat duong nhan 1): ";
                cin >> dau;
                int phanTu;
                
                if (dau == 1) {
                    phanTu = randNumPo(a); // Generate positive numbers only
                } else {
                    phanTu = randNumPoAndNe(a); // Generate both positive and negative numbers
                }
                
                cout << "\nSo phan tu nam ngoai pham vi ban da nhap la: " << demSoNamNgoaiPhanVi(a, phanTu, min, max) << endl;
            } else {
                cout << "Nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n); // User inputs the array elements
                int dem = demSoNamNgoaiPhanVi(a, n, min, max);
                cout << "\nSo phan tu nam ngoai pham vi ban da nhap la: " << dem << endl;
            }
           
        break;
            
        case 6:

            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am nham 2, duong nhan 1): ";
                cin >> dau;
                int phanTu;
                if(dau = 1){
                    phanTu = randNumPo(a);
                }
                else {
                    phanTu = randNumPoAndNe(a);
                }
                cout << "\nso chinh phuong trong mang la: " << demSoChinhPhuong(a, phanTu) << endl;
                
            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                cout << "\nso chinh phuong trong mang la: " << demSoChinhPhuong(a, n) << endl;
            }

            break;  
        case 7:
            cout << "hay nhap so k(so lan xuat hien it nhat cua phan tu): ";
            int k; cin >> k;
            
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am nham 2, duong nhan 1): ";
                cin >> dau;
                int phanTu;
                if(dau = 1){
                    phanTu = randNumPo(a);
                }
                else {
                    phanTu = randNumPoAndNe(a);
                }
                demVaXuatItNhat(a, phanTu, k);
                
            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                demVaXuatItNhat(a, n, k);
            }
            
            break;
        case 8:
            cout << "hay nhap vi tri man muon dem x den cuoi mang: ";
            int vt; cin >> vt;
            cout << "nhap so x ban muon tim kiem: ";
            int x; cin >> x;

            
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am nham 2, duong nhan 1): ";
                cin >> dau;
                int phanTu;
                if(dau = 1){
                    phanTu = randNumPo(a);
                }
                else {
                    phanTu = randNumPoAndNe(a);
                }
                cout << "so lan xuat hien cua " << x << " ke tu vi tri " << vt << "den cuoi mang la " << demSoLanXuatHienTuVT(a, phanTu, x, vt) << endl;
            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                cout << "so lan xuat hien cua " << x << " ke tu vi tri " << vt << "den cuoi mang la " << demSoLanXuatHienTuVT(a, n, x, vt) << endl;
            }
            
            break;


        break;
    }
}


int randNumPo(DaySo a) {
    int dem = 0;
    srand(time(0));
    int n = 0;
    cout << "Hay nhap pham vi SO LUONG chu so ma ban muon (min max): ";
    int minDigits, maxDigits;
    cin >> minDigits >> maxDigits;

    if (minDigits < 0 || maxDigits < 0) {
        cout << "Ban nhap sai pham vi (Pham vi phai > 0)! " << endl;
        return 0;
    } else {
        cout << "Hay nhap so luong so ban muon: ";
        int quantity;
        cin >> quantity;

        cout << "So duoc tao ngau nhien la: \n";
        for (int i = 0; i < quantity; i++) {
            int digitCount = rand() % (maxDigits - minDigits + 1) + minDigits;
            int randomNumber = 0;
            int multiplier = 1;

            for (int j = 0; j < digitCount; j++) {
                if (j == 0) {
                    randomNumber += (rand() % 9 + 1) * multiplier;
                } else {
                    randomNumber += (rand() % 10) * multiplier;
                }
                multiplier *= 10;
            }

            a[i] = randomNumber;
            ++n;
            cout << randomNumber << TAB;
            ++dem;
            if (dem == 15) {
                cout << endl;
                dem = 0;
            }
        }
        cout << endl;
    }
    return n;
}

// Generates an array of random numbers that can be positive or negative
int randNumPoAndNe(DaySo a) {
    int dem = 0;
    srand(time(0));
    int n = 0;
    cout << "ban vua chon so am va duong \n";
    cout << "Hay nhap pham vi SO LUONG chu so ma ban muon (min max): ";
    int minDigits, maxDigits;
    cin >> minDigits >> maxDigits;

    if (minDigits < 0 || maxDigits < 0) {
        cout << "Ban nhap sai pham vi (Pham vi phai > 0)! " << endl;
        return 0;
    } else {
        cout << "Hay nhap so luong so ban muon: ";
        int quantity;
        cin >> quantity;

        cout << "So duoc tao ngau nhien la: \n";
        for (int i = 0; i < quantity; i++) {
            int digitCount = rand() % (maxDigits - minDigits + 1) + minDigits;
            int randomNumber = 0;
            int multiplier = 1;

            for (int j = 0; j < digitCount; j++) {
                if (j == 0) {
                    randomNumber += (rand() % 9 + 1) * multiplier;
                } else {
                    randomNumber += (rand() % 10) * multiplier;
                }
                multiplier *= 10;
            }

            if (rand() % 2 == 0) {
                randomNumber = -randomNumber;
            }

            a[i] = randomNumber;
            ++n;
            cout << randomNumber << TAB;
            ++dem;

            if (dem == 15) {
                cout << endl;
                dem = 0;
            }
        }
        cout << endl;
    }
    return n;
}


void nhapMang(DaySo a, int n){
        
        
        cout << "nguoi dung hay nhap mang \n";
        for(int i = 0; i < n; i++){
            cout << "a[" << i <<"]=";
            cin >> a[i];
            cout << endl;
        }
}


int demSoLe(DaySo a, int n) {
    int dem = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] % 2 != 0) { // Kiểm tra số lẻ
            ++dem;
        }
    }
    return dem;
}


void demVaXuatSoChiaHet3KhongChiaHet4(DaySo a, int n) {
    int dem = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 3 == 0 && a[i] % 4 != 0) {
            ++dem;
            cout << a[i] << TAB;
        }
    }
    cout << endl << "so nhung so chia het cho 3 nhung ko chia het cho 4 la : " << dem;
    cout << endl;
}

int demXTaiVTLe(DaySo a, int n, int x){
    int dem = 0;
    for(int i = 0; i < n; i ++){
        if (a[i] % 2 != 0 && a[i] == x) {
            ++dem;
        }

    }
    return dem;
}





int demSoCo3ChuSo(DaySo a, int n) {
    int dem = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= 100 && a[i] < 1000) {
            ++dem;
        }
    }
    return dem;
}

int demSoNamNgoaiPhanVi(DaySo a, int n, int min, int max) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < min || a[i] > max) {
            ++dem;
        }
    }
    return dem;
}

int demSoChinhPhuong(DaySo a, int n) {
    int dem = 0;
    cout << "cac so chinh phuong la: ";
    for (int i = 0; i < n; ++i) {
        int sqrtValue = sqrt(a[i]);
        if (sqrtValue * sqrtValue == a[i]) {
            cout << a[i] << TAB;
            ++dem;
        }
    }
    return dem;
}

void demVaXuatItNhat(DaySo a, int n, int k){
    int maxVal = 0;
    cout << "phan tu xuat hien voi so lan it nhat " << k << " lan la:\n" ;
    for(int i = 0; i < n; i++){
        int dem = 0;
        for(int j = 0; j < n; j++){
            if(a[i] == a[j]){
                ++dem;
            }
        }
        if(dem > maxVal && dem >= k){
            cout << "so " << a[i];  
            maxVal = dem;
            cout << " voi so lan la " << maxVal << endl;
        }
    }
    cout << endl;
}

int demSoLanXuatHienTuVT(DaySo a, int n, int x, int vt){
    int dem = 0;
    for(int i = vt; i <n; i++){
        if(a[i] == x){
            ++dem;
        }
    }
    return dem;



}



