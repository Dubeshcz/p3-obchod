#include <iostream>
#include <fstream>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

int main() {
    int random; //Prom�nn� na proklik z ko��ku
    int rohlik = 0; //Po�et polo�ky
    int rohlikcena = 3; // Cena polo�ky
    int rohlikprice = 0; //Po�et polo�ky*cena polo�ky
    int chleba = 0; //Stejn� to je u v�eho
    int chlebacena = 35;
    int chlebaprice = 0;
    int horalka = 0;
    int horalkacena = 10;
    int horalkaprice = 0;
    int voda = 0;
    int vodacena = 17;
    int vodaprice = 0;
    int kofola = 0;
    int kofolacena = 35;
    int kofolaprice = 0;
    int redbull = 0;
    int redbullcena = 30;
    int redbullprice = 0;
    int stul = 0;
    int stulcena = 1500;
    int stulprice = 0;
    int zidle = 0;
    int zidlecena = 2000;
    int zidleprice = 0;
    int skrin = 0;
    int skrincena = 5000;
    int skrinprice = 0;
    SetConsoleTitle("Potraviny u Hrocha"); //N�zev konzole
    ofstream Uctenka("uctenka.txt"); //Vytvo�en� textov�ho dokumentu
    mainmenu:
    system("CLS");
    cout << "Potraviny u Hrocha" << "\n";
    cout << "--------------------" << "\n";
    cout << "Vitejte v potravinach u Hrocha, jak vas muzeme obslouzit?" << "\n";
    cout << "--------------------" << "\n";
    cout << "1) Potraviny" << "\n";
    cout << "2) Napoje" << "\n";
    cout << "3) Nabytek" << "\n";
    cout << "4) Kosik" << "\n";
    cout << "5) Platba" << "\n";
    cout << "6) Exit" << "\n";
    cout << "--------------------" << "\n";
    int menuvolba;
    cin >> menuvolba;
    switch(menuvolba) { //Switch na roz�azen� do kategori�
    case 1: {
        menupotraviny:
        system("CLS");
        cout << "Potraviny u Hrocha" << "\n";
        cout << "--------------------" << "\n";
        cout << "Kategorie potravin" << "\n";
        cout << "--------------------" << "\n";
        cout << "1) Rohlik - 3kc" << "\n";
        cout << "2) Chleb - 35kc" << "\n";
        cout << "3) Horalka - 10kc" << "\n";
        cout << "4) Zpet" << "\n";
        cout << "--------------------" << "\n";
        int potravinyvolba;
        cin >> potravinyvolba;
        switch(potravinyvolba) { //Roz�adn�k v kategorii potraviny
        case 1:{ //ROHLIK
            system("CLS");
            cout << "Potraviny u Hrocha" << "\n";
            cout << "--------------------" << "\n";
            cout << "Rohlik" << "\n";
            if(rohlik > 0) {
			cout << "Jiz mate " << rohlik << " rohliku v kosiku\n";
			}
            cout << "--------------------" << "\n";
            cout << "Kolik rohliku chcete?" << "\n";
            cin >> rohlik;
            rohlikprice = rohlik * rohlikcena; //Matematika, vysv�tleno naho�e p�i vyps�n� prom�nn�ch a to se opakuje v�ude stejn�
            cout << "Vybral jste si " << rohlik << " rohliku za celkem " << rohlikprice << "Kc \n";
            Sleep(1500);
            goto menupotraviny;
        break;}

        case 2: {
            system("CLS");
            cout << "Potraviny u Hrocha" << "\n";
            cout << "--------------------" << "\n";
            cout << "Chleba" << "\n";
            if(chleba > 0) {
			cout << "Jiz mate " << chleba << " chlebu v kosiku\n";
			}
            cout << "--------------------" << "\n";
            cout << "Kolik chlebu chcete?" << "\n";
            cin >> chleba;
            chlebaprice = chleba * chlebacena;
            cout << "Vybral jste si " << chleba << " bochniku chleba za celkem " << chlebaprice << "Kc \n";
            Sleep(1500);
            goto menupotraviny;
        break;}

        case 3: {
            system("CLS");
            cout << "Potraviny u Hrocha" << "\n";
            cout << "--------------------" << "\n";
            cout << "Horalka" << "\n";
            if(horalka > 0) {
			cout << "Jiz mate " << horalka << " horalek v kosiku\n";
			}
            cout << "--------------------" << "\n";
            cout << "Kolik horalek chcete?" << "\n";
            cin >> horalka;
            horalkaprice = horalka * horalkacena;
            cout << "Vybral jste si " << horalka << " horalek za celkem " << horalkaprice << "Kc \n";
            Sleep(1500);
            goto menupotraviny;
        break;}

        case 4: {
            goto mainmenu;
        break;}
        }
    break;}
    case 2: {
        menunapoje:
        system("CLS");
        cout << "Potraviny u Hrocha" << "\n";
        cout << "--------------------" << "\n";
        cout << "Kategorie napoje" << "\n";
        cout << "--------------------" << "\n";
        cout << "1) Voda - 17kc" << "\n";
        cout << "2) Kofola - 35kc" << "\n";
        cout << "3) Red Bull - 30kc" << "\n";
        cout << "4) Zpet" << "\n";
        cout << "--------------------" << "\n";
        int napojevolba;
        cin >> napojevolba;
        switch(napojevolba) {
            case 1:{
            system("CLS");
            cout << "Potraviny u Hrocha" << "\n";
            cout << "--------------------" << "\n";
            cout << "Voda" << "\n";
            if(voda > 0) {
			cout << "Jiz mate " << voda << " vod v kosiku\n";
			}
            cout << "--------------------" << "\n";
            cout << "Kolik vodek chcete?" << "\n";
            cin >> voda;
            vodaprice = voda * vodacena;
            cout << "Vybral jste si " << voda << " vod za celkem " << vodaprice << "Kc \n";
            Sleep(1500);
            goto menunapoje;
        break;}

        case 2: {
            system("CLS");
            cout << "Potraviny u Hrocha" << "\n";
            cout << "--------------------" << "\n";
            cout << "Kofola" << "\n";
            if(kofola > 0) {
			cout << "Jiz mate " << kofola << " kofol v kosiku\n";
			}
            cout << "--------------------" << "\n";
            cout << "Kolik Kofol chcete?" << "\n";
            cin >> kofola;
            kofolaprice = kofola * kofolacena;
            cout << "Vybral jste si " << kofola << " kofol za celkem " << kofolaprice << "Kc \n";
            Sleep(1500);
            goto menunapoje;
        break;}

        case 3: {
            system("CLS");
            cout << "Potraviny u Hrocha" << "\n";
            cout << "--------------------" << "\n";
            cout << "Red Bull" << "\n";
            if(redbull > 0) {
			cout << "Jiz mate " << redbull << " Red Bullu v kosiku\n";
			}
            cout << "--------------------" << "\n";
            cout << "Kolik Red Bullu chcete?" << "\n";
            cin >> redbull;
            redbullprice = redbull * redbullcena;
            cout << "Vybral jste si " << redbull << " Red Bullu za celkem " << redbullprice << "Kc \n";
            Sleep(1500);
            goto menunapoje;
        break;}

        case 4: {
            goto mainmenu;
        break;}
        }
    break;}

    case 3: {
        menunabytek:
        system("CLS");
        cout << "Potraviny u Hrocha" << "\n";
        cout << "--------------------" << "\n";
        cout << "Kategorie nabytek" << "\n";
        cout << "Sleva 15% na nabytek s kodem `ILOVEPROGRAMOVANI`" << "\n";
        cout << "--------------------" << "\n";
        cout << "1) Stul - 1500kc" << "\n";
        cout << "2) Zidle - 2000kc" << "\n";
        cout << "3) Skrin - 5000kc" << "\n";
        cout << "4) Zpet" << "\n";
        cout << "--------------------" << "\n";
        int nabytekvolba;
        cin >> nabytekvolba;
        switch(nabytekvolba) {
            case 1:{
            system("CLS");
            cout << "Potraviny u Hrocha" << "\n";
            cout << "--------------------" << "\n";
            cout << "Stul" << "\n";
            if(stul > 0) {
			cout << "Jiz mate " << stul << " stolu v kosiku\n";
			}
            cout << "--------------------" << "\n";
            cout << "Kolik stolu chcete?" << "\n";
            cin >> stul;
            stulprice = stul * stulcena;
            cout << "Vybral jste si " << stul << " stolu za celkem " << stulprice << "Kc \n";
            Sleep(1500);
            goto menunabytek;
        break;}

        case 2:{
            system("CLS");
            cout << "Potraviny u Hrocha" << "\n";
            cout << "--------------------" << "\n";
            cout << "Zidle" << "\n";
            if(stul > 0) {
			cout << "Jiz mate " << zidle << " zidli v kosiku\n";
			}
            cout << "--------------------" << "\n";
            cout << "Kolik zidli chcete?" << "\n";
            cin >> zidle;
            zidleprice = zidle * zidlecena;
            cout << "Vybral jste si " << zidle << " zidli za celkem " << zidleprice << "Kc \n";
            Sleep(1500);
            goto menunabytek;
        break;}

        case 3:{
            system("CLS");
            cout << "Potraviny u Hrocha" << "\n";
            cout << "--------------------" << "\n";
            cout << "Skrin" << "\n";
            if(skrin > 0) {
			cout << "Jiz mate " << skrin << " skrini v kosiku\n";
			}
            cout << "--------------------" << "\n";
            cout << "Kolik skrini chcete?" << "\n";
            cin >> skrin;
            skrinprice = skrin * skrincena;
            cout << "Vybral jste si " << skrin << " skrini za celkem " << skrinprice << "Kc \n";
            Sleep(1500);
            goto menunabytek;
        break;}

        case 4: {
            goto mainmenu;
        break;}

        }
    break;}

    case 4: {
        system("CLS");
        cout << "Potraviny u Hrocha" << "\n";
        cout << "--------------------" << "\n";
        cout << "Kosik" << "\n";
        cout << "--------------------" << "\n";
        if(rohlik >= 1) {
            cout << "Rohlik | " << rohlik << "ks | " << rohlikprice << " Kc \n"; //Zobrazov�n� polo�ek v ko��ku
        }
        if(chleba >= 1) {
            cout << "Chleb | " << chleba << "ks | " << chlebaprice << " Kc \n";
        }
        if(horalka >= 1) {
            cout << "Horalka | " << horalka << "ks | " << horalkaprice << " Kc \n";
        }
        if(voda >= 1) {
            cout << "Voda | " << voda << "ks | " << vodaprice << " Kc \n";
        }
        if(kofola >= 1) {
            cout << "Kofola | " << kofola << "ks | " << kofolaprice << " Kc \n";
        }
        if(redbull >= 1) {
            cout << "Red Bull | " << redbull << "ks | " << redbullprice << " Kc \n";
        }
        if(stul >= 1) {
            cout << "Stul | " << stul << "ks | " << stulprice << " Kc \n";
        }
        if(zidle >= 1) {
            cout << "Zidle | " << zidle << "ks | " << zidleprice << " Kc \n";
        }
        if(skrin >= 1) {
            cout << "Skrin | " << skrin << "ks | " << skrinprice << " Kc \n";
        }
        int cenacelkem;
        cenacelkem = rohlikprice+chlebaprice+horalkaprice+vodaprice+kofolaprice+redbullprice+stulprice+zidleprice+skrinprice;  //Matematika celkov� ceny
        if(cenacelkem > 0){
        cout << "--------------------" << "\n";
        cout << "Cena celkem: " << cenacelkem << "Kc s DPH\n";
        cout << cenacelkem*0.79 << "Kc bez DPH\n"; //Matika na cenu bez DPH
        }else {
        cout << "0 \n";
        cout << "--------------------" << "\n";
        cout << "Nemate zadne polozky v kosiku \n";}
        cout << "Pokud chcete pokracovat, stisknete 1\n";
        cin >> random; //Proklik
        goto mainmenu;
    break;}

    case 5: {
        platbamenu:
        system("CLS");
        int volbaplatba;
        cout << "Potraviny u Hrocha" << "\n";
        cout << "--------------------" << "\n";
        cout << "Zvolte platebni metodu" << "\n";
        cout << "--------------------" << "\n";
        cout << "1) Hotove" << "\n";
        cout << "2) Kartou" << "\n";
        cout << "3) Zpet" << "\n";
        cout << "--------------------" << "\n";
        cin >> volbaplatba;
        switch(volbaplatba) { //Volba platebni metody
            case 1: {
                system("CLS");
                int kupon; //Na tuto prom�nnou se klade ot�zka jestli z�kazn�k m� s levov� kup�n
                string sleva; //Do tohoto stringu se zapisuje slevov� k�d
                cout << "Potraviny u Hrocha" << "\n";
                cout << "--------------------" << "\n";
                cout << "Mate slevovy kupon?" << "\n";
                cout << "--------------------" << "\n";
                cout << "1) Ano" << "\n";
                cout << "2) Ne" << "\n";
                cout << "--------------------" << "\n";
                cin >> kupon;
                if(kupon == 1){
                system("CLS");
                cout << "Zadejte slevovy kupon:" << "\n";
                cin >> sleva;}
                if(sleva == "ILOVEPROGRAMOVANI") {
                    stulprice = stulprice * 0.85; //Matika na od��t�n� 15%
                    zidleprice = zidleprice * 0.85;
                    skrinprice = skrinprice * 0.85;
                    cout << "Sleva 15% na nabytek byla aktivovana\n";
                    Sleep(1500);
                    system("CLS");
                }
                system("CLS");
                int platit=0;
                int suma=0;
                suma = rohlikprice+chlebaprice+horalkaprice+vodaprice+kofolaprice+redbullprice+stulprice+zidleprice+skrinprice;
                int vratit=0; //Prom�nn� pro vracen�
                cout << "Zakaznik ma zaplatit " << suma << "Kc\nKolik zakaznik zaplatil?\n";
                cin >> platit;  //Vlo�en� prom�nn� kolik z�kazn�k zaplatil
                vratit = platit-suma;
                cout << "Zakaznikovi je treba vratit " << vratit << "Kc\nPro pokracovani stisknete 1\n"; //��dek pro vyps�n� kolik m�m z�kazn�kovi vr�tit
                cin >> random;
                system("CLS");
                cout << "Probiha tisk uctenky";
                //UCTENKA
                    int fik;
                    srand (time(NULL));
                    fik = rand() % 9999 + 1111; //fik = random s rozp�t�m od 9999 do 1111 aby to m�lo ty 4 digity

                    int pokladna;
                    srand (time(NULL));
                    pokladna = rand() % 6 + 1;

                    int prodejna;
                    srand (time(NULL));
                    prodejna = rand() % 2 + 1;

                    int pokladni;
                    srand (time(NULL));
                    pokladni = rand() % 3 + 1;

                    int pkn;
                    srand (time(NULL));
                    pkn = rand() % 999999 + 111111;
                Uctenka << "Potraviny u Hrocha" << "\n"
                << "--------------------" << "\n"
                << "Uctenka" << "\n"
                << "--------------------" << "\n";
                if(rohlik >= 1) { //stejn� jak u ko��ku
                    Uctenka << "Rohlik | " << rohlik << "ks | " << rohlikprice << " Kc \n";
                }
                if(chleba >= 1) {
                    Uctenka << "Chleb | " << chleba << "ks | " << chlebaprice << " Kc \n";
                }
                if(horalka >= 1) {
                    Uctenka << "Horalka | " << horalka << "ks | " << horalkaprice << " Kc \n";
                }
                if(voda >= 1) {
                    Uctenka << "Voda | " << voda << "ks | " << vodaprice << " Kc \n";
                }
                if(kofola >= 1) {
                    Uctenka << "Kofola | " << kofola << "ks | " << kofolaprice << " Kc \n";
                }
                if(redbull >= 1) {
                    Uctenka << "Red Bull | " << redbull << "ks | " << redbullprice << " Kc \n";
                }
                if(stul >= 1) {
                    Uctenka << "Stul | " << stul << "ks | " << stulprice << " Kc \n";
                }
                if(zidle >= 1) {
                    Uctenka << "Zidle | " << zidle << "ks | " << zidleprice << " Kc \n";
                }
                if(skrin >= 1) {
                    Uctenka << "Skrin | " << skrin << "ks | " << skrinprice << " Kc \n";
                }
                int cenacelkem;
                int jednaku;
                srand (time(NULL));
                jednaku = rand() % 1000 + 1; //Gener�tor pro 1 ku 1000 na n�kup zdarma
                if(jednaku == 500){
                    cenacelkem =0;
                }else{
                cenacelkem = rohlikprice+chlebaprice+horalkaprice+vodaprice+kofolaprice+redbullprice+stulprice+zidleprice+skrinprice;}
                Uctenka << "--------------------" << "\n";
                Uctenka << "Cena celkem: " << cenacelkem << "Kc s DPH\n";
                Uctenka << cenacelkem*0.79 << "Kc bez DPH\n";
                Uctenka << "--------------------" << "\n";
                Uctenka << "Placeno " << platit << "Kc\n";
                Uctenka << "Vraceno " << vratit <<"Kc\n";
                Uctenka << "--------------------" << "\n";
                Uctenka << "FIK: " << fik << "\n";
                Uctenka << "PKN: " << pkn << "\n";
                Uctenka << "--------------------" << "\n";
                if(cenacelkem >= 10000){ //Pokud celkov� cena je v�t�� jak 10K tak to vyp�e do ��tenky �e vyhr�l lednici
                    Uctenka << "Vyhral jste lednici, ukazte uctenku u vydeje zobzi\n";
                    Uctenka << "--------------------" << "\n";

                }
                Uctenka << "Pokladna: " << pokladna << "\n"; //Vyps�n� ��sla pokladny
                if(prodejna == 1) { //If na jak� prodejn� se to nach�z�
                    Uctenka << "Prodejna: Suchdol\n";
                }
                if(prodejna == 2) {
                    Uctenka << "Prodejna: Dejvice\n";
                }
                if(pokladni == 1) { //If na pokladn�ho
                    Uctenka << "Pokladni: Pepa\n";
                }
                if(pokladni == 2) {
                    Uctenka << "Pokladni: Veronika\n";
                }
                if(pokladni == 3) {
                    Uctenka << "Pokladni: Hammond\n";
                }
                if(sleva == "ILOVEPROGRAMOVANI") { //Vyps�n� slevy na n�bytek
                Uctenka << "--------------------" << "\n";
                Uctenka << "Sleva na nabytek 15% byla uplatnena" << "\n";
                }
                Uctenka.close();
                Sleep(1500);
            break;}

            case 2: {
                int pin;
                system("CLS");
                int kupon;
                string sleva;
                cout << "Potraviny u Hrocha" << "\n";
                cout << "--------------------" << "\n";
                cout << "Mate slevovy kupon?" << "\n";
                cout << "--------------------" << "\n";
                cout << "1) Ano" << "\n";
                cout << "2) Ne" << "\n";
                cout << "--------------------" << "\n";
                cin >> kupon;
                if(kupon == 1){
                system("CLS");
                cout << "Zadejte slevovy kupon:" << "\n";
                cin >> sleva;}
                if(sleva == "ILOVEPROGRAMOVANI") {
                    stulprice = stulprice * 0.85;
                    zidleprice = zidleprice * 0.85;
                    skrinprice = skrinprice * 0.85;
                    cout << "Sleva 15% na nabytek byla aktivovana\n";
                    Sleep(1500);
                    system("CLS");
                }
                system("CLS");
                cout << "Potraviny u Hrocha" << "\n";
                cout << "--------------------" << "\n";
                cout << "Zadejte pin" << "\n";
                cout << "--------------------" << "\n";
                cin >> pin;
                if(pin == 1234) { //Platba kartou tak�e ot�zka na PIN
                        cout << "Platba probehla\nProbiha tisk uctenky";
                        Uctenka << "Potraviny u Hrocha" << "\n";
                        //Uctenka  (stejnej postup jako u te nahore)
                                int fik;
                            srand (time(NULL));
                            fik = rand() % 9999 + 1111;

                            int pokladna;
                            srand (time(NULL));
                            pokladna = rand() % 6 + 1;

                            int prodejna;
                            srand (time(NULL));
                            prodejna = rand() % 2 + 1;

                            int pokladni;
                            srand (time(NULL));
                            pokladni = rand() % 3 + 1;

                            int pkn;
                            srand (time(NULL));
                            pkn = rand() % 999999 + 111111;
                        Uctenka << "--------------------" << "\n";
                        Uctenka << "Uctenka" << "\n";
                        Uctenka << "--------------------" << "\n";
                        if(rohlik >= 1) {
                            Uctenka << "Rohlik | " << rohlik << "ks | " << rohlikprice << " Kc \n";
                        }
                        if(chleba >= 1) {
                            Uctenka << "Chleb | " << chleba << "ks | " << chlebaprice << " Kc \n";
                        }
                        if(horalka >= 1) {
                            Uctenka << "Horalka | " << horalka << "ks | " << horalkaprice << " Kc \n";
                        }
                        if(voda >= 1) {
                            Uctenka << "Voda | " << voda << "ks | " << vodaprice << " Kc \n";
                        }
                        if(kofola >= 1) {
                            Uctenka << "Kofola | " << kofola << "ks | " << kofolaprice << " Kc \n";
                        }
                        if(redbull >= 1) {
                            Uctenka << "Red Bull | " << redbull << "ks | " << redbullprice << " Kc \n";
                        }
                        if(stul >= 1) {
                            Uctenka << "Stul | " << stul << "ks | " << stulprice << " Kc \n";
                        }
                        if(zidle >= 1) {
                            Uctenka << "Zidle | " << zidle << "ks | " << zidleprice << " Kc \n";
                        }
                        if(skrin >= 1) {
                            Uctenka << "Skrin | " << skrin << "ks | " << skrinprice << " Kc \n";
                        }
                        int cenacelkem;
                        int jednaku;
                        srand (time(NULL));
                        jednaku = rand() % 1000 + 1;
                        if(jednaku == 500){
                            cenacelkem =0;
                        }else{
                        cenacelkem = rohlikprice+chlebaprice+horalkaprice+vodaprice+kofolaprice+redbullprice+stulprice+zidleprice+skrinprice;}
                        Uctenka << "--------------------" << "\n";
                        Uctenka << "Cena celkem: " << cenacelkem << "Kc s DPH\n";
                        Uctenka << cenacelkem*0.79 << "Kc bez DPH\n";
                        Uctenka << "--------------------" << "\n"; //Jedinn� rozd�l a to �e se neukazuje kolik �lov�k zaplatil a kolik m� vr�tit
                        Uctenka << "Zaplaceno kartou\n";
                        Uctenka << "--------------------" << "\n";
                        Uctenka << "FIK: " << fik << "\n";
                        Uctenka << "PKN: " << pkn << "\n";
                        Uctenka << "--------------------" << "\n";
                        if(cenacelkem >= 10000){
                            Uctenka << "Vyhral jste lednici, ukazte uctenku u vydeje zobzi\n";
                            Uctenka << "--------------------" << "\n";

                        }
                        Uctenka << "Pokladna: " << pokladna << "\n";
                        if(prodejna == 1) {
                            Uctenka << "Prodejna: Suchdol\n";
                        }
                        if(prodejna == 2) {
                            Uctenka << "Prodejna: Dejvice\n";
                        }
                        if(pokladni == 1) {
                            Uctenka << "Pokladni: Pepa\n";
                        }
                        if(pokladni == 2) {
                            Uctenka << "Pokladni: Veronika\n";
                        }
                        if(pokladni == 3) {
                            Uctenka << "Pokladni: Hammond\n";
                        }
                        if(sleva == "ILOVEPROGRAMOVANI") {
                        Uctenka << "--------------------" << "\n";
                        Uctenka << "Sleva na nabytek 15% byla uplatnena" << "\n";
                        }
                        Uctenka.close();
                        Sleep(1500);
                }else{
                    cout << "Platba neprobehla\n";
                    Sleep(1500);
                    goto platbamenu;
                }
            break;}

            case 3: {
                goto mainmenu;
            break;}
        }
    break;}

    case 6: //EXIT
        return 0;
    break;
    }
}
