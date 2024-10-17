#include<iostream>
#include<math.h>
#include<conio.h>


using namespace std;

#include"printMenu.h"
#include"menu.h"


int main(){
    DaySo a;
    char stop;
    do{
        system("cls");
        print();
        int n, choise;
        cout << "nguoi dung hay chon chuc nang(1-8): ";
        cin >> choise;
        if(choise == 0){
            break;
        }
        
        choiseMenu(a, choise, n );
        _getch();


    }while(true);
    return 0;
}