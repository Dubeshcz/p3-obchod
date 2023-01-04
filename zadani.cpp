#include <iostream> //pro input a output
#include <fstream> //vypis uctenky do souboru
#include <windows.h> //pro sleep
#include <unistd.h> //pro pro práci s os
#include <stdlib.h> //pro práci s datama
#include <time.h> //pro random number
#include <string> //abych mohl pouzit string, tedy text
using namespace std; //abych nemusel psat std::

int main() {
    int random; //Promìnná na proklik z košíku
    int rohlik = 0; //Poèet položky
    int rohlikcena = 3; // Cena položky
    int rohlikprice = 0; //Poèet položky*cena položky
    int chleba = 0; //Stejné to je u všeho
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
    SetConsoleTitle("Potraviny u Hrocha"); //Název konzole
    ofstream Uctenka("uctenka.txt"); //Vytvoøení textového dokumentu
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
    switch(menuvolba) { //Switch na rozøazení do kategorií
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
        switch(potravinyvolba) { //Rozøadník v kategorii potraviny
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
            rohlikprice = rohlik * rohlikcena; //Matematika, vysvìtleno nahoøe pøi vypsání promìnných a to se opakuje všude stejnì
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
            cout << "Rohlik | " << rohlik << "ks | " << rohlikprice << " Kc \n"; //Zobrazování položek v košíku
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
        cenacelkem = rohlikprice+chlebaprice+horalkaprice+vodaprice+kofolaprice+redbullprice+stulprice+zidleprice+skrinprice;  //Matematika celkové ceny
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
                int kupon; //Na tuto promìnnou se klade otázka jestli zákazník má s levový kupón
                string sleva; //Do tohoto stringu se zapisuje slevový kód
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
                    stulprice = stulprice * 0.85; //Matika na odèítání 15%
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
                int vratit=0; //Promìnná pro vracení
                cout << "Zakaznik ma zaplatit " << suma << "Kc\nKolik zakaznik zaplatil?\n";
                cin >> platit;  //Vložení promìnné kolik zákazník zaplatil
                vratit = platit-suma;
                cout << "Zakaznikovi je treba vratit " << vratit << "Kc\nPro pokracovani stisknete 1\n"; //Øádek pro vypsání kolik mám zákazníkovi vrátit
                cin >> random;
                system("CLS");
                cout << "Probiha tisk uctenky";
                //UCTENKA
                    int fik;
                    srand (time(NULL));
                    fik = rand() % 9999 + 1111; //fik = random s rozpìtím od 9999 do 1111 aby to mìlo ty 4 digity

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
                if(rohlik >= 1) { //stejnì jak u košíku
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
                jednaku = rand() % 1000 + 1; //Generátor pro 1 ku 1000 na nákup zdarma
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
                if(cenacelkem >= 10000){ //Pokud celková cena je vìtší jak 10K tak to vypíše do úètenky že vyhrál lednici
                    Uctenka << "Vyhral jste lednici, ukazte uctenku u vydeje zobzi\n";
                    Uctenka << "--------------------" << "\n";

                }
                Uctenka << "Pokladna: " << pokladna << "\n"; //Vypsání èísla pokladny
                if(prodejna == 1) { //If na jaké prodejnì se to nachází
                    Uctenka << "Prodejna: Suchdol\n";
                }
                if(prodejna == 2) {
                    Uctenka << "Prodejna: Dejvice\n";
                }
                if(pokladni == 1) { //If na pokladního
                    Uctenka << "Pokladni: Pepa\n";
                }
                if(pokladni == 2) {
                    Uctenka << "Pokladni: Veronika\n";
                }
                if(pokladni == 3) {
                    Uctenka << "Pokladni: Hammond\n";
                }
                if(sleva == "ILOVEPROGRAMOVANI") { //Vypsání slevy na nábytek
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
                if(pin == 1234) { //Platba kartou takže otázka na PIN
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
                        Uctenka << "--------------------" << "\n"; //Jedinný rozdíl a to že se neukazuje kolik èlovìk zaplatil a kolik má vrátit
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
