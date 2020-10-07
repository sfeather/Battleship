#include <ncurses.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

void logo_battleship(WINDOW *ecran)
{
	attron(A_BOLD);
	wattron(ecran, COLOR_PAIR(1));
	mvwprintw(ecran, 3, 22, "%s", "  ..........                                  .';;;.     .;;;,.   .:ccc'                                           .ccc:.               .codl'");
	mvwprintw(ecran, 4, 22, "%s", " 'ONNNNNNXK0kl,                               ,0WWWk.    dWWWX:   :XMMMx.                                          oWMMNc              .kWMMM0,");
	mvwprintw(ecran, 5, 22, "%s", " 'ONNNNNNXK0kl,                               ,0WWWk.    dWWWX:   :XMMMx.                                          oWMMNc              .kWMMM0,");
	mvwprintw(ecran, 6, 22, "%s", " ,KMMMWNXNWMMMNd.                             ,KMMMk.   .dWMMNc   :XMMMx.                                          oWMMNc              .lKWWXx.");
	mvwprintw(ecran, 7, 22, "%s", " ,KMMMK:.':OWMMWo          ..','..   .....   .:XMMMO,....xMMMNl.. :XMMMx.        ..'',,'..            ..','..      oWMMNc  ..','..      .,cc;.    ....   ..','..");
	mvwprintw(ecran, 8, 22, "%s", " ,KMMM0'   lNMMWo       .cx0XNWNNKOolkKKKx. lKXWMMMWXKKKXNMMMWNKO;:XMMMx.    .,oOKXNNWWNXKko;.     .:xKNNWNX0x:.   oWMMWklx0XNWNX0d,    ;0KKKl   c0KK0ocx0XNWNNKOo,");
	mvwprintw(ecran, 9, 22, "%s", " ,KMMMXdclxXMMXo.     .oXWMMWX000KNWWWMMMO' lKXWMMMWXKKKKNMMMWNKO;:XMMMx.   :ONMMNKOOkxkKNMMNO:   .dWMMNKOKNMWO,   oWMMMMWNK00XWMMMXl   cNMMWd   oWMMMWWWX000KWMMMNk,");
	mvwprintw(ecran, 10, 22, "%s", " ,KMMMMMMMMMMW0c.    .xWMMWO:..  .,oKMMMMO.  .:XMMMO,....xWMMNl.. :XMMMx. .lNMMNx;.     .,dNMMNl  '0MMM0:..,c;.    oWMMMNx,. ..dNMMM0'  cNMMWd   oWMMMNx;..  .,dXMMMK;");
	mvwprintw(ecran, 11, 22, "%s", " ,KMMMNOxxk0NMMW0c.  cNMMWx.        ;KMMMO'   ,KMMMk.   .dWMMNc   :XMMMx. ;KMMMNkdddddddddkXMMMK;  cKWMWN0dc'.     oWMMWx.     .OMMMK,  cNMMWd   oWMMWo.        cXMMMk.");
	mvwprintw(ecran, 12, 22, "%s", " ,KMMM0'   .,OWMMNc  oWMMNc         .kMMMO'   ,KMMMk.   .dWMMNc   :XMMMx. cNMMMWNNNNNNNNNNNNNNNK:   .ckXWMMMN0l.   oWMMNl      .kMMMK,  cNMMWd   oWMMX;         '0MMM0'");
	mvwprintw(ecran, 13, 22, "%s", " ,KMMM0'     lWMMWd. cNMMWk.        :KMMMO'   ,KMMMk.   .dWMMNc   :XMMMx. ;KMMMO;................      .;lkNMMWk.  oWMMNl      .xMMMK,  cNMMWd   oWMMWd.        cXMMMx.");
	mvwprintw(ecran, 14, 22, "%s", " ,KMMMKl;;:cxXMMMX:  .dWMMWOc'....,dXMMMMO.   ,KMMMk.   .dWMMNc   :XMMMx. .lNMMNk:...  ..,lo:'.    .ld:.. 'kWMMX;  oWMMNc      .xMMMK,  cNMMWd   oWMMMNk:.....;xNMMM0,");
	mvwprintw(ecran, 15, 22, "%s", " ,KMMMMWWWMMMMMNO;    .c0WMMWNK00XWMWWMMMO'   ,KMMMk.    dMMMNc   :XMMMx.   ;ONMMWXK0OO0XWMMWO;   ,0WMWX00KWMMNd.  oWMMNc      .xMMMK,  cNMMWd   oWMMMWWWNK0KXWMMMXd'");
	mvwprintw(ecran, 16, 22, "%s", " 'xKKKKK0000Oxl,.       .:dOKNNNXKklckKK0d.   'x0KKo.    c00KO;   ,OKK0l     .,lk0XXNNNNXKOd:.    .;dOKNNNNX0d;    c0KKO;      .oKKKx'  ;OKK0c   oWMMWxcx0XNNNX0kl'");
	mvwprintw(ecran, 17, 22, "%s", "                                                                                                                                                 oWMMNc ");
	mvwprintw(ecran, 18, 22, "%s", "                                                                                                                                                 oWMMNc");
	mvwprintw(ecran, 19, 22, "%s", "                                                                                                                                                 lNWWX:");
	mvwprintw(ecran, 20, 22, "%s", "                                                                                                                                                 lNWWX:");
	wattroff(ecran, COLOR_PAIR(1));
	attroff(A_BOLD);
}

void nava(WINDOW *ecran)
{
	attron(A_BOLD);
	wattron(ecran, COLOR_PAIR(1));
	mvwprintw(ecran, 24, 7, "%s", "             ¶¶¶¶¶¶¶¶¶¶¶¶¶");
	mvwprintw(ecran, 25, 7, "%s", "             ¶¶___________¶¶");
	mvwprintw(ecran, 26, 7, "%s", "              ¶____________¶");
	mvwprintw(ecran, 27, 7, "%s", "              ¶_____________¶");
	mvwprintw(ecran, 28, 7, "%s", "               ¶____________¶");
	mvwprintw(ecran, 29, 7, "%s", "               ¶____________¶_¶¶");
	mvwprintw(ecran, 30, 7, "%s", "               ¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶");
	mvwprintw(ecran, 31, 7, "%s", "     ¶¶¶¶¶¶¶¶¶¶¶¶¶¶______________¶");
	mvwprintw(ecran, 32, 7, "%s", "     ¶____________¶¶_____________¶¶____¶");
	mvwprintw(ecran, 33, 7, "%s", "     ¶¶____________¶_____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶");
	mvwprintw(ecran, 34, 7, "%s", "      ¶______¶¶¶¶¶¶¶¶¶¶¶¶¶¶______________¶");
	mvwprintw(ecran, 35, 7, "%s", "      ¶¶_____¶¶___________¶______________¶¶");
	mvwprintw(ecran, 36, 7, "%s", "       ¶______¶____________¶______________¶");
	mvwprintw(ecran, 37, 7, "%s", "       ¶______¶¶___________¶_____________¶¶");
	mvwprintw(ecran, 38, 7, "%s", "       ¶_______¶___________¶_____________¶¶");
	mvwprintw(ecran, 39, 7, "%s", "      ¶¶_______¶___________¶¶____________¶");
	mvwprintw(ecran, 40, 7, "%s", "      ¶¶¶¶¶¶¶¶¶¶¶__________¶¶___________¶¶");
	mvwprintw(ecran, 41, 7, "%s", "           ¶_¶_¶¶________¶¶¶_____¶¶¶¶¶¶¶¶_____¶¶¶");
	mvwprintw(ecran, 42, 7, "%s", "           ¶_¶_¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶¶_______¶¶¶¶¶__¶¶");
	mvwprintw(ecran, 43, 7, "%s", "¶¶¶¶¶¶_____¶_¶______¶¶_¶_______¶_¶¶¶¶¶¶¶¶¶___¶¶¶¶¶");
	mvwprintw(ecran, 44, 7, "%s", "¶¶___¶¶¶¶¶¶¶¶¶______¶¶_¶____¶¶¶¶¶¶¶________¶¶");
	mvwprintw(ecran, 45, 7, "%s", "  ¶¶________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶____¶¶______¶");
	mvwprintw(ecran, 46, 7, "%s", "    ¶____________________________¶¶_¶____¶");
	mvwprintw(ecran, 47, 7, "%s", "     ¶_____¶¶¶_____¶¶_____¶¶¶_____¶¶¶___¶¶");
	mvwprintw(ecran, 48, 7, "%s", "      ¶___¶¶_¶¶___¶¶_¶____¶_¶¶__________¶");
	mvwprintw(ecran, 49, 7, "%s", "      ¶¶____¶¶_____¶¶¶_____¶¶__________¶¶");
	mvwprintw(ecran, 50, 7, "%s", "       ¶¶_____________________________¶¶");
	mvwprintw(ecran, 51, 7, "%s", "        ¶¶___________________________¶¶");
	mvwprintw(ecran, 52, 7, "%s", "         ¶¶________________________¶¶¶");
	mvwprintw(ecran, 53, 7, "%s", "           ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶");

	wattron(ecran, COLOR_PAIR(1));
	attroff(A_BOLD);
}



void logo_you_lost(WINDOW *ecran)
{
	attron(A_BOLD | COLOR_PAIR(5));
	mvwprintw(ecran, 4, 27, " __     __             _           _     _           _     _   _                                       _   _______                             _       ");
	mvwprintw(ecran, 5, 27, " \\ \\   / /            (_)         | |   | |         | |   | | | |                                     | | |__   __|                           (_)      ");
	mvwprintw(ecran, 6, 27, "  \\ \\_/ /__  _   _     _ _   _ ___| |_  | | ___  ___| |_  | |_| |__   ___    __ _  __ _ _ __ ___   ___| |    | |_ __ _   _    __ _  __ _  __ _ _ _ __  ");
	mvwprintw(ecran, 7, 27, "   \\   / _ \\| | | |   | | | | / __| __| | |/ _ \\/ __| __| | __| '_ \\ / _ \\  / _` |/ _` | '_ ` _ \\ / _ \\ |    | | '__| | | |  / _` |/ _` |/ _` | | '_ \\ ");
	mvwprintw(ecran, 8, 27, "    | | (_) | |_| |   | | |_| \\__ \\ |_  | | (_) \\__ \\ |_  | |_| | | |  __/ | (_| | (_| | | | | | |  __/_|    | | |  | |_| | | (_| | (_| | (_| | | | | |");
	mvwprintw(ecran, 9, 27, "    |_|\\___/ \\__,_|   | |\\__,_|___/\\__| |_|\\___/|___/\\__|  \\__|_| |_|\\___|  \\__, |\\__,_|_| |_| |_|\\___(_)    |_|_|   \\__, |  \\__,_|\\__, |\\__,_|_|_| |_|");
	mvwprintw(ecran, 10, 27, "                     _/ |                                                    __/ |                                    __/ |         __/ |              ");
	mvwprintw(ecran, 11, 27, "                    |__/                                                    |___/                                    |___/         |___/               ");
	attroff(A_BOLD | COLOR_PAIR(5));

}

void logo_you_won(WINDOW *ecran)
{
	attron(A_BOLD | COLOR_PAIR(2));
	mvwprintw(ecran, 4, 25, " __     __             _           _                           _   _                                       _    _____                            _       _ ");
	mvwprintw(ecran, 5, 25, " \\ \\   / /            (_)         | |                         | | | |                                     | |  / ____|                          | |     | |");
	mvwprintw(ecran, 6, 25, "  \\ \\_/ /__  _   _     _ _   _ ___| |_  __      _____  _ __   | |_| |__   ___    __ _  __ _ _ __ ___   ___| | | |     ___  _ __   __ _ _ __ __ _| |_ ___| |");
	mvwprintw(ecran, 7, 25, "   \\   / _ \\| | | |   | | | | / __| __| \\ \\ /\\ / / _ \\| '_ \\  | __| '_ \\ / _ \\  / _` |/ _` | '_ ` _ \\ / _ \\ | | |    / _ \\| '_ \\ / _` | '__/ _` | __/ __| |");
	mvwprintw(ecran, 8, 25, "    | | (_) | |_| |   | | |_| \\__ \\ |_   \\ V  V / (_) | | | | | |_| | | |  __/ | (_| | (_| | | | | | |  __/_| | |___| (_) | | | | (_| | | | (_| | |_\\__ \\_|");
	mvwprintw(ecran, 9, 25, "    |_|\\___/ \\__,_|   | |\\__,_|___/\\__|   \\_/\\_/ \\___/|_| |_|  \\__|_| |_|\\___|  \\__, |\\__,_|_| |_| |_|\\___(_)  \\_____\\___/|_| |_|\\__, |_|  \\__,_|\\__|___(_)");
	mvwprintw(ecran, 10, 25, "                     _/ |                                                        __/ |                                            __/ |                    ");
	mvwprintw(ecran, 11, 25, "                    |__/                                                        |___/                                            |___/                     ");
	attroff(A_BOLD | COLOR_PAIR(2));

}

//pentru generare matrice bot
int verificare_0(int a[][12], int *nr, int *i, int *j)
{
	int k;
	if (a[*i + 1][*j] != 0 || a[*i + 1][*j - 1] != 0 || a[*i + 1][*j + 1] != 0 || a[*i - *nr][*j] != 0 || a[*i - *nr][*j - 1] != 0 || a[*i - *nr][*j + 1] != 0)
		return 0;
	for (k = *i; k >= *i - *nr + 1; k--)
		if (a[k][*j - 1] != 0 || a[k][*j + 1] != 0)
			return 0;


	return 1;
}

//pentru generare matrice bot
int verificare_1(int a[][12], int *nr, int *i, int *j)
{
	int k;
	if (a[*i][*j + 1] != 0 || a[*i + 1][*j + 1] != 0 || a[*i - 1][*j + 1] != 0 || a[*i][*j - *nr] != 0 || a[*i - 1][*j - *nr] != 0 || a[*i + 1][*j - *nr] != 0)
		return 0;
	for (k = *j; k >= *j - *nr + 1; k--)
		if (a[*i - 1][k] != 0 || a[*i + 1][k] != 0)
			return 0;


	return 1;
}

//pentru generare matrice bot
void generare_barca_de_nr(int a[][12], int *nr, int *i, int *j, int *varianta)
{
	int k;
	//varianta = rand() % 2; // 0 - verticala sus      1 - orizontala stanga

	if (*varianta == 0)
	{
		*i = rand() % (10 - *nr + 1) + *nr;
		*j = rand() % 10 + 1;

		a[*i][*j] = 1;
		for (k = 1; k < *nr; k++)
			a[*i - k][*j] = 1;
	}


	if (*varianta == 1)
	{
		*i = rand() % 10 + 1;
		*j = rand() % (10 - *nr + 1) + *nr;

		a[*i][*j] = 1;
		for (k = 1; k < *nr; k++)
			a[*i][*j - k] = 1;

	}

}

//pentru generare matrice bot
void copiere(int copie[][12], int a[][12])
{
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
			copie[i][j] = a[i][j];
	}
}

//pentru generare matrice bot
void adaugare_barci(int a[][12])
{
	int varianta, i, j, copie[12][12] = {0}, nr = 4;
	//ADAUGARE BARCA DE 4 ELEMENTE ORIUNDE PE HARTA
	varianta = rand() % 2; // 0 - verticala sus      1 - orizontala stanga
	generare_barca_de_nr(a, &nr, &i, &j, &varianta);
	copiere(copie, a);
	nr--;

	//ADAUGARE 2x BARCA DE 3 ELEMENTE CU CONDITII


	//GENEREZ BARCA DE NR ELEMENTE SI APOI VERIFIC CONDITIILE: CAT TIMP ACESTEA
	//NU SUNT INDEPLINITE (verificare == 0) LE GENEREZ DIN NOU CU AJUTORUL UNEI
	//COPII CARE PASTREAZA MATRICEA INITIALA DACA ACESTE CONDITII NU SUNT
	//SATISFACUTE. IN MOMENTUL IN CARE CONDITIILE SUNT SATISFACUTE, MATRICEA
	//NOASTRA PRIMESTE INFORMATIILE MATRICEI "COPIE".

	varianta = rand() % 2;
	generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	while ((varianta == 0 && verificare_0(copie, &nr, &i, &j) == 0) || (varianta == 1 && verificare_1(copie, &nr, &i, &j) == 0))
	{
		copiere(copie, a);
		varianta = rand() % 2;
		generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	}
	copiere(a, copie);

	varianta = rand() % 2;
	generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	while ((varianta == 0 && verificare_0(copie, &nr, &i, &j) == 0) || (varianta == 1 && verificare_1(copie, &nr, &i, &j) == 0))
	{
		copiere(copie, a);
		varianta = rand() % 2;
		generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	}
	copiere(a, copie);
	nr--;
	//ADAUGARE 3x BARCA DE 2 ELEMENTE CU CONDITII
	varianta = rand() % 2;
	generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	while ((varianta == 0 && verificare_0(copie, &nr, &i, &j) == 0) || (varianta == 1 && verificare_1(copie, &nr, &i, &j) == 0))
	{
		copiere(copie, a);
		varianta = rand() % 2;
		generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	}
	copiere(a, copie);

	varianta = rand() % 2;
	generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	while ((varianta == 0 && verificare_0(copie, &nr, &i, &j) == 0) || (varianta == 1 && verificare_1(copie, &nr, &i, &j) == 0))
	{
		copiere(copie, a);
		varianta = rand() % 2;
		generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	}
	copiere(a, copie);

	varianta = rand() % 2;
	generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	while ((varianta == 0 && verificare_0(copie, &nr, &i, &j) == 0) || (varianta == 1 && verificare_1(copie, &nr, &i, &j) == 0))
	{
		copiere(copie, a);
		varianta = rand() % 2;
		generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	}
	copiere(a, copie);
	nr--;

	//ADAUGARE 4x BARCA DE 1 ELEMENT CU CONDITII
	varianta = rand() % 2;
	generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	while ((varianta == 0 && verificare_0(copie, &nr, &i, &j) == 0) || (varianta == 1 && verificare_1(copie, &nr, &i, &j) == 0))
	{
		copiere(copie, a);
		varianta = rand() % 2;
		generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	}
	copiere(a, copie);
	varianta = rand() % 2;
	generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	while ((varianta == 0 && verificare_0(copie, &nr, &i, &j) == 0) || (varianta == 1 && verificare_1(copie, &nr, &i, &j) == 0))
	{
		copiere(copie, a);
		varianta = rand() % 2;
		generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	}
	copiere(a, copie);
	varianta = rand() % 2;
	generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	while ((varianta == 0 && verificare_0(copie, &nr, &i, &j) == 0) || (varianta == 1 && verificare_1(copie, &nr, &i, &j) == 0))
	{
		copiere(copie, a);
		varianta = rand() % 2;
		generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	}
	copiere(a, copie);
	varianta = rand() % 2;
	generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	while ((varianta == 0 && verificare_0(copie, &nr, &i, &j) == 0) || (varianta == 1 && verificare_1(copie, &nr, &i, &j) == 0))
	{
		copiere(copie, a);
		varianta = rand() % 2;
		generare_barca_de_nr(copie, &nr, &i, &j, &varianta);
	}
	copiere(a, copie);

}

//generare matrice bot
void generare_harta_random(int matrice_bot[][10])
{
	int a[12][12] = {0}, i, j, nr = 0;

	srand(time(0));

	adaugare_barci(a);

	for (i = 1; i <= 10; i++)
		for (j = 1; j <= 10; j++)
			matrice_bot[i-1][j-1] = a[i][j];

	while (nr != 20)
	{
		nr = 0;
		int b[12][12] = {0};
		adaugare_barci(b);

		for (i = 1; i <= 10; i++)
			for (j = 1; j <= 10; j++)
				matrice_bot[i-1][j-1] = b[i][j];

		for (i = 0; i < 10; i++)
			for (j = 0; j < 10; j++)
				if (matrice_bot[i][j] == 1)
					nr++;
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			printf("%d ", matrice_bot[i][j]);
		printf("\n");
	}
}

//SUBPROGRAM PENTRU A CALCULA POZITIILE NAVELOR DIN MATRICI
void calcul_pozitii_nave(int matrice_extinsa[][12], int pozitii_nave[][5])
{
	int i, j, ok, k, nr;
	//CREEZ O MATRICE DE 7 LINII SI 5 COLOANE: POZITII_NAVE
	//Pe linia 1 (pozitii_nave[1][1] .. pozitii_nave[1][4]) - barci de 1 elem
	//Pe linia 2 (pozitii_nave[2][1] .. pozitii_nave[2][3]) - barci de 2 elem
	//Pe linia 3 (pozitii_nave[3][1], pozitii_nave[3][2]) - barci de 3 elem
	//Pe linia 4 (pozitii_nave[4][1]) se afla barca de 4 elemente

	//POZITIE NAVE VERTICALE - DE JOS IN SUS
	for (i = 10; i >= 1; i--)
	{
		for (j = 1; j <= 10; j++)
		{
			if (matrice_extinsa[i][j] == 1)
			{
				ok = 0;
				nr = 1;
				k = i;
				while(ok == 0)
				{
					k--;
					if (matrice_extinsa[k][j] == 1)
					{
						matrice_extinsa[i][j] = 0;
						matrice_extinsa[k][j] = 0;
						nr++;
					}
					else
						ok = 1;
				}

				if (nr == 4)
					pozitii_nave[nr][1] = (i - 1) * 1000 + (j - 1) * 100 + k * 10 + j - 1;
				if (nr == 3)
				{
					if (pozitii_nave[nr][1] != 0)
						pozitii_nave[nr][2] = (i - 1) * 1000 + (j - 1) * 100 + k * 10 + j - 1;
					else
						pozitii_nave[nr][1] = (i - 1) * 1000 + (j - 1) * 100 + k * 10 + j - 1;
				}
				if (nr == 2)
				{
					if (pozitii_nave[nr][1] != 0)
					{
						if (pozitii_nave[nr][2] != 0)
							pozitii_nave[nr][3] = (i - 1) * 1000 + (j - 1) * 100 + k * 10 + j - 1;
						else
							pozitii_nave[nr][2] = (i - 1) * 1000 + (j - 1) * 100 + k * 10 + j - 1;
					}
					else
						pozitii_nave[nr][1] = (i - 1) * 1000 + (j - 1) * 100 + k * 10 + j - 1;
				}

			}
		}
	}

	//POZITIE NAVE ORIZONTALE - DE LA DREAPTA LA STANGA
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >= 1; j --)
		{
			if (matrice_extinsa[i][j] == 1)
			{
				ok = 0;
				nr = 1;
				k = j;
				while(ok == 0)
				{
					k--;
					if (matrice_extinsa[i][k] == 1)
					{
						nr++;
						matrice_extinsa[i][j] = 0;
						matrice_extinsa[i][k] = 0;
					}
					else
						ok = 1;
				}
								
				if (nr == 4)
					pozitii_nave[nr][1] = (i - 1) * 1000 + (j - 1) * 100 + (i - 1) * 10 + k;
				if (nr == 3)
				{
					if (pozitii_nave[nr][1] != 0)
						pozitii_nave[nr][2] = (i - 1) * 1000 + (j - 1) * 100 + (i - 1) * 10 + k;
					else
						pozitii_nave[nr][1] = (i - 1) * 1000 + (j - 1) * 100 + (i - 1) * 10 + k;
				}
				if (nr == 2)
				{
					if (pozitii_nave[nr][1] != 0)
					{
						if (pozitii_nave[nr][2] != 0)
							pozitii_nave[nr][3] = (i - 1) * 1000 + (j - 1) * 100 + (i - 1) * 10 + k;
						else
							pozitii_nave[nr][2] = (i - 1) * 1000 + (j - 1) * 100 + (i - 1) * 10 + k;
					}
					else
						pozitii_nave[nr][1] = (i - 1) * 1000 + (j - 1) * 100 + (i - 1) * 10 + k;
				}
				
			}
		}
	}

	nr = 1;
	//POZITII NAVE DE O CASUTA --- DACA SE AFLA PE LINIA 1 POZITII_NAVE DE ELEMENT ARE DOAR 1 CIFRA ( < 10)
	for (i = 1; i <= 10; i++)
		for (j = 1; j <= 10; j++)
			if (matrice_extinsa[i][j] == 1)
			{
				pozitii_nave[1][nr] = (i - 1) * 10 + j - 1;
				matrice_extinsa[i][j] = 0;
				nr++;
			}
	
}

void afisare_board_player(WINDOW *player_grid, int matrice_jucator[][10])
{
	int i, j, k = 1, l;
	for (i = 0; i < 10; i++)
	{
		l = 1;
		for (j = 0; j < 10; j++)
		{
			wattron(player_grid, A_BOLD);
			mvwprintw(player_grid, k, l, "%d", matrice_jucator[i][j]);
			wattroff(player_grid, A_BOLD);
			l = l + 4;
		}
		k = k + 2;
	}
	wrefresh(player_grid);

}


//IN MOMENTUL CAND GASESC UN ELEMENT IL BAG IN MAT_BOT_CH -- LA INCEPUT E PLINA DE SPATII
void afisare_board_bot(WINDOW *bot_grid, int element, char matrice_bot_ch[][10])
{
	int i, j, k = 1, l;

	for (i = 0; i <= 9; i++)
	{
		l = 1;
		for (j = 0; j <= 9; j++)
		{

				if (element == i * 10 + j)
				{

					if (matrice_bot_ch[i][j] == '1')
					{
						wattron(bot_grid, COLOR_PAIR(7));
						mvwprintw(bot_grid, k, l, "%c", matrice_bot_ch[i][j]);
						wattroff(bot_grid, COLOR_PAIR(7));
					}
			
					if (matrice_bot_ch[i][j] == '0')
					{
						wattron(bot_grid, COLOR_PAIR(8));
						mvwprintw(bot_grid, k, l, "%c", matrice_bot_ch[i][j]);
						wattroff(bot_grid, COLOR_PAIR(8));
					}
			
					if (matrice_bot_ch[i][j] == ' ')
					{	
						wattron(bot_grid, A_BOLD | A_STANDOUT);
						mvwprintw(bot_grid, k, l, "%c", matrice_bot_ch[i][j]);
						wattroff(bot_grid, A_BOLD | A_STANDOUT);
					}
						
				}
				else
				{
					if (matrice_bot_ch[i][j] == '1')
					{
						wattron(bot_grid, A_BOLD | COLOR_PAIR(5));
						mvwprintw(bot_grid, k, l, "%c", matrice_bot_ch[i][j]);
						wattroff(bot_grid, A_BOLD | COLOR_PAIR(5));
					}
					if (matrice_bot_ch[i][j] == '0')
					{
						wattron(bot_grid, A_BOLD | COLOR_PAIR(6));
						mvwprintw(bot_grid, k, l, "%c", matrice_bot_ch[i][j]);
						wattroff(bot_grid, A_BOLD | COLOR_PAIR(6));
					}
					if (matrice_bot_ch[i][j] == ' ')
					{
						wattron(bot_grid, A_BOLD);
						mvwprintw(bot_grid, k, l, " ");
						wattroff(bot_grid, A_BOLD);
					}
				}
			l = l + 4;
		}
		k = k + 2;
	}

	wrefresh(bot_grid);

}

int verif_win(int nr_grid_player, int nr_grid_bot)
{
	if (nr_grid_bot == 20) //YOU WIN
	{
		logo_you_won(stdscr);
		refresh();
		mvwprintw(stdscr, 13, 70, "                                                                                ");
		wattron(stdscr, A_BOLD | A_STANDOUT);
		mvwprintw(stdscr, 18, 71, " CONGRATULATIONS, YOU'RE A WINNER!!! --- PRESS ANY KEY TO CONTINUE ");
		wattroff(stdscr, A_BOLD | A_STANDOUT);
		getch();
		mvwprintw(stdscr, 18, 71, "                                                                   ");
		return 1;
	}

	if (nr_grid_player == 20) //YOU LOSE
	{
		logo_you_lost(stdscr);
		refresh();
		mvwprintw(stdscr, 13, 70, "                                                                                ");
		wattron(stdscr, A_BOLD | A_STANDOUT);
		mvwprintw(stdscr, 18, 71, " I THINK THAT YOU WERE JUST UNLUCKY! --- PRESS ANY KEY TO CONTINUE ");
		wattroff(stdscr, A_BOLD | A_STANDOUT);
		getch();
		mvwprintw(stdscr, 18, 71, "                                                                   ");
		return 1;
	}

	return 0;
}


//TODO - DE FACUT CA BOTUL SA TRAGA PE LANGA ELEMENTELE NiMERITE !!
void alegere_element_de_catre_bot(WINDOW *player_grid, int matrice_jucator[][10], int copie_mat_juc[][10], int *nr_grid_player, int elemente_selectate[], int *count_el, int mpr[][10])
{
		int i, j, contor_runda = 0;

		i = rand() % 10;
		j = rand() % 10;
		while (copie_mat_juc[i][j] == -1)
		{
			i = rand() % 10;
			j = rand() % 10;
		}

		copie_mat_juc[i][j] = -1;


		sleep(2);
		if (matrice_jucator[i][j] == 1)
		{
			
			mpr[i][j] = 4;
			*nr_grid_player = *nr_grid_player + 1;
			elemente_selectate[*count_el] = i * 10 + j;
			*count_el = *count_el + 1;
			
			//HIGHLIGHT CU ROSU
			wattron(player_grid, COLOR_PAIR(7));
			mvwprintw(player_grid, i * 2 + 1, j * 4 + 1, " ");
			wattroff(player_grid, COLOR_PAIR(7));

			contor_runda = 1;
			wrefresh(player_grid);

			while (contor_runda == 1)
			{
				i = rand() % 10;
				j = rand() % 10;
				while (copie_mat_juc[i][j] == -1)
				{
					i = rand() % 10;
					j = rand() % 10;
				}

				elemente_selectate[*count_el] = i * 10 + j;
				*count_el = *count_el + 1;

				copie_mat_juc[i][j] = -1;
				wrefresh(player_grid);
				sleep(2);
				if (matrice_jucator[i][j] == 1)
				{
					mpr[i][j] = 4;
					//HIGHLIGHT CU ROSU
					*nr_grid_player = *nr_grid_player + 1;
			
					wattron(player_grid, COLOR_PAIR(7));
					mvwprintw(player_grid, i * 2 + 1, j * 4 + 1, " ");
					wattroff(player_grid, COLOR_PAIR(7));

					wrefresh(player_grid);
					

					contor_runda = 1;
				}
				if (matrice_jucator[i][j] == 0)
				{
					mpr[i][j] = 3;
					//HIGHLIGHT CU VERDE
					wattron(player_grid, COLOR_PAIR(8));
					mvwprintw(player_grid, i * 2 + 1, j * 4 + 1, " ");
					wattroff(player_grid, COLOR_PAIR(8));
					contor_runda = 0;
				}
		
				wrefresh(player_grid);


			}
		}

		if (matrice_jucator[i][j] == 0)
		{
			mpr[i][j] = 3;
			//HIGHLIGHT CU VERDE
			wattron(player_grid, COLOR_PAIR(8));
			mvwprintw(player_grid, i * 2 + 1, j * 4 + 1, " ");
			wattroff(player_grid, COLOR_PAIR(8));
		}

		wrefresh(player_grid);

}


void afisare_meniu(WINDOW *meniu, char **optiuni_meniu, int optiune_curenta)
{
	char sir_nou[100];
	int i, j = 2;
	wattron(meniu, COLOR_PAIR(2));
	box(meniu, 0, 0);
	for (i = 1; i <= 3; i++)
	{
		if (optiune_curenta == i)
		{
			sir_nou[0]='\0';
			wattron(meniu, A_STANDOUT | A_BLINK | A_BOLD);
			strcat(sir_nou, "# ");
			strcat(sir_nou, optiuni_meniu[i-1]);
			strcat(sir_nou, " #");
			mvwprintw(meniu, j, (59 - strlen(optiuni_meniu[i - 1])) / 2, "%s", sir_nou);
			wattroff(meniu, A_STANDOUT | A_BLINK | A_BOLD);
		}
		else
			mvwprintw(meniu, j, (53 - strlen(optiuni_meniu[i - 1])) / 2, "     %s     ", optiuni_meniu[i - 1]);
		j = j + 4;
	}
	wrefresh(meniu);
	wattroff(meniu, COLOR_PAIR(2));
}

void functionalitate_keypad(int *c, int *element_curent)
{
	if (*c == KEY_RIGHT)
	{
		if ((*element_curent - 9) % 10 == 0)
			*element_curent = *element_curent - 9;
		else
			*element_curent = *element_curent + 1;
	}
	if (*c == KEY_LEFT)
	{
		if (*element_curent % 10 == 0)
			*element_curent = *element_curent + 9;
		else
			*element_curent = *element_curent - 1;;
	}
	if (*c == KEY_DOWN)
	{
		if ((*element_curent - *element_curent % 10) / 10 == 9)
			*element_curent = *element_curent % 10;
		else
			*element_curent = *element_curent + 10;
	}
	if (*c == KEY_UP)
	{
		if ((*element_curent - *element_curent % 10) / 10 == 0)
			*element_curent = 90 + *element_curent;
		else
			*element_curent = *element_curent - 10;
	}

}


void nave_nimerite(int matrice[][10], int pozitii_nave[][5], int nimerit[][5], int *i, int *j)
{
	//Stochez navele nimerite intr-o matrice: nimerit[7][5].
	//Daca, de exemplu, nava cu numarul 4 este nimerita in totalitate,
	//pe linia 4, coloana 1 se va afla elementul -1. Daca aceasta a fost
	//lovita de 2 ori, se va afla elementul 2. Daca a 2-a barca de 3 elemente
	//a fost distrusa, pe linia 3, coloana 2 se va afla elementul -1. 

	int k, l, nr, el1, el2, el3, el4, ok; // 1 -- verticala    0 -- orizontala
	for (k = 1; k <= 4; k++)
		for (l = 1; l <= 4; l++)
		{
			nr = pozitii_nave[k][l];
			el1 = nr / 1000;
			el2 = (nr / 100) % 10;
			el3 = (nr / 10) % 10;
			el4 = nr % 10 ;

			if (el1 == el3)
				ok = 0;
			if (el2 == el4)
				ok = 1; 


			if (matrice[*i][*j] == 1 && nr < 10 && el4 == *j && nr != 0)
				nimerit[k][l] = -1;


			if (matrice[*i][*j] == 1 && nr >= 10 && nr < 100 && el4 == *j && nr / 10 == *i && nr != 0)
				nimerit[k][l] = -1;


			if (matrice[*i][*j] == 1 && nr >= 100 && nr < 1000 && *i == el3 && (*j == el2 || *j == el4))
			{
				nimerit[k][l]++;
					if (nimerit[k][l] == k)
						nimerit[k][l] = -1;
			}

			if (matrice[*i][*j] == 1 && nr >= 100 && nr < 1000 && *i == el3 && *j < el2 && *j > el4)
			{
				nimerit[k][l]++;
					if (nimerit[k][l] == k)
						nimerit[k][l] = -1;
			}

			if (matrice[*i][*j] == 1 && nr >= 1000)
			{
			
				if (ok == 0 && *j < el2 && *j > el4 && *i == el1 && *i == el3)
				{
					nimerit[k][l]++;
					if (nimerit[k][l] == k)
						nimerit[k][l] = -1;
				}
				if (ok == 0 && (*j == el2 || *j == el4) && *i == el1 && *i == el3)
				{
					nimerit[k][l]++;
					if (nimerit[k][l] == k)
						nimerit[k][l] = -1;
				}
				if (ok == 1 && *i > el3 && *i < el1 && *j == el2 && *j == el4)
				{
					nimerit[k][l]++;
					if (nimerit[k][l] == k)
						nimerit[k][l] = -1;
				}
				if (ok == 1 && (*i == el3 || *i == el1) && *j == el2 && *j == el4)
				{
					nimerit[k][l]++;
					if (nimerit[k][l] == k)
						nimerit[k][l] = -1;
				}

			}
		}


	matrice[*i][*j] = 0;
}



void randomize_map(int matrice[][10], int elemente_selectate[], int matrice_jucator_refacuta[][10])
{
	int nr_max = 20, i, j, k, p1, p2;
	int count, matrice_buna[10][10], matrice_jucator[12][12] = {0}, pozitii_nave[7][5] = {0}, nimerit[7][5] = {0}, copie_poz[7][5] = {0};

	for (i = 1; i <= 10; i++)
		for (j = 1; j <= 10; j++)
		{
			matrice_jucator[i][j] = matrice[i - 1][j - 1];
			matrice_buna[i - 1][j - 1] = matrice[i - 1][j - 1];
			matrice_jucator_refacuta[i - 1][j - 1] = matrice[i - 1][j - 1];
		}

	//matrice_jucator devine nula
	calcul_pozitii_nave(matrice_jucator, pozitii_nave); 

	for (i = 0; i < 7; i++)
		for (j = 0; j < 5; j++)
			copie_poz[i][j] = pozitii_nave[i][j];

	//TREBUIE SA STOCHEZ INTR-UN VECTOR DE 20 DE ELEMENTE TOATE
	//ELEMENTELE DIN NAVE CARE AU FOST NIMERITE!!!
	for (i = 0; i < 20; i++)
	{
		if (elemente_selectate[i] != -1 && matrice[elemente_selectate[i] / 10][elemente_selectate[i] % 10] == 1)
		{
			if (elemente_selectate[i] >= 10)
			{
				p1 = elemente_selectate[i] / 10;
				p2 = elemente_selectate[i] % 10;
				nave_nimerite(matrice_buna, pozitii_nave, nimerit, &p1, &p2);
			}

			else
			{
				p1 = 0;
				p2 = elemente_selectate[i];
				nave_nimerite(matrice_buna, pozitii_nave, nimerit, &p1, &p2);
			}
		}
	}

	k = 4;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= k; j++)
			{
				if (nimerit[i][j] == -1)
				{
					nr_max = nr_max - i;
					int el1, el2, el3, el4;
					el1 = copie_poz[i][j] / 1000;
					el2 = (copie_poz[i][j] / 100) % 10;
					el3 = (copie_poz[i][j] / 10) % 10;
					el4 = copie_poz[i][j] % 10;
					if (copie_poz[i][j] >= 1000)
					{
						if (el1 == el3)
							for (count = el4; count <= el2; count++)
								matrice_jucator_refacuta[el1][count] = 0;

						if (el2 == el4)
							for (count = el3; count <= el1; count++)
								matrice_jucator_refacuta[count][el2] = 0;

					}

					if (copie_poz[i][j] < 1000 && copie_poz[i][j] >= 100)
					{
						for (count = el4; count <= el2; count++)
							matrice_jucator_refacuta[0][count] = 0;
					}

					if (copie_poz[i][j] < 100)
						matrice_jucator_refacuta[el3][el4] = 0;
					

				}
				else
				{
					int el1, el2, el3, el4;
					el1 = copie_poz[i][j] / 1000;
					el2 = (copie_poz[i][j] / 100) % 10;
					el3 = (copie_poz[i][j] / 10) % 10;
					el4 = copie_poz[i][j] % 10;

					if (nimerit[i][j] == 0) //barca nu a fost deloc lovita
					{
						int nr_de_unu = 0;
						//trebuie sa fac elementele matricii 0 si sa o
						//repozitionez pe oricare elemente astfel incat
						//sa respecte regulile.
						//i = lungimea navei

						//fac elementele matricii = 0
			
						if (copie_poz[i][j] >= 1000)
						{
							if (el1 == el3)
							{
								for (count = el4; count <= el2; count++)
									matrice_jucator_refacuta[el1][count] = 0;
							}
							if (el2 == el4)
								for (count = el3; count <= el1; count++)
									matrice_jucator_refacuta[count][el2] = 0;

						}

						if (copie_poz[i][j] < 1000 && copie_poz[i][j] >= 100)
							for (count = el4; count <= el2; count++)
								matrice_jucator_refacuta[0][count] = 0;

						if (copie_poz[i][j] < 100)
							matrice_jucator_refacuta[el3][el4] = 0;
						
						//repozitionez nava in functie de numarul de elemente i
						int varianta = rand() % 2, m, n, copie[12][12] = {0}, matrice_jucator_refacuta_12[12][12] = {0};

						//copiere matrice jucator refacuta in matrice jucator refacuta de 12
						for (m = 1; m <= 10; m++)
							for (n = 1; n <= 10; n++)
								matrice_jucator_refacuta_12[m][n] = matrice_jucator_refacuta[m - 1][n - 1];

						//repozitionare!  ---- i = lungimea navei
						copiere(copie, matrice_jucator_refacuta_12);
						generare_barca_de_nr(copie, &i, &m, &n, &varianta);
						while ((varianta == 0 && verificare_0(copie, &i, &m, &n) == 0) || (varianta == 1 && verificare_1(copie, &i, &m, &n) == 0))
						{
							copiere(copie, matrice_jucator_refacuta_12);
							varianta = rand() % 2;
							generare_barca_de_nr(copie, &i, &m, &n, &varianta);
						}
						for (m = 1; m <= 10; m++)
							for (n = 1; n <= 10; n++)
								if (copie[m][n] == 1)
									nr_de_unu++;


						while (nr_de_unu != nr_max)
						{
							nr_de_unu = 0;
							copiere(copie, matrice_jucator_refacuta_12);
							varianta = rand() % 2;
							generare_barca_de_nr(copie, &i, &m, &n, &varianta);
							while ((varianta == 0 && verificare_0(copie, &i, &m, &n) == 0) || (varianta == 1 && verificare_1(copie, &i, &m, &n) == 0))
							{
								copiere(copie, matrice_jucator_refacuta_12);
								varianta = rand() % 2;
								generare_barca_de_nr(copie, &i, &m, &n, &varianta);
							}

							for (m = 1; m <= 10; m++)
							{
								for (n = 1; n <= 10; n++)
								{
									if (copie[m][n] == 1)
									{
										nr_de_unu++;
									}
								}
							}

						}
						copiere(matrice_jucator_refacuta_12, copie);


						//copiere matrice jucator refacuta de 12
						//in matrice jucator refacuta
						for (m = 1; m <= 10; m++)
							for (n = 1; n <= 10; n++)
								matrice_jucator_refacuta[m - 1][n - 1] = matrice_jucator_refacuta_12[m][n];

					}

					//DACA O BARCA DE 4 A FOST LOVITA DE 2 ORI,
					//ACEASTA DEVINE BARCA DE 2 !!!
					else
					{
						int nr_elem, nr_de_unu = 0;

						//nr_elem = numarul nou de elemente al navei
						nr_elem = i - nimerit[i][j]; 
						nr_max = nr_max - (i - nr_elem);

						//orice ar fi, fac barcile 0
						if (copie_poz[i][j] >= 1000)
						{
							if (el1 == el3)
							{
								for (count = el4; count <= el2; count++)
									matrice_jucator_refacuta[el1][count] = 0;
							}
							if (el2 == el4)
								for (count = el3; count <= el1; count++)
									matrice_jucator_refacuta[count][el2] = 0;

						}

						if (copie_poz[i][j] < 1000 && copie_poz[i][j] >= 100)
							for (count = el4; count <= el2; count++)
								matrice_jucator_refacuta[0][count] = 0;

						if (copie_poz[i][j] < 100)
							matrice_jucator_refacuta[el3][el4] = 0;


						//repozitionez nava in functie de numarul de elemente nr_elem
						int varianta = rand() % 2, m, n, copie[12][12] = {0}, matrice_jucator_refacuta_12[12][12] = {0};

						//copiere matrice jucator refacuta in matrice jucator refacuta de 12
						for (m = 1; m <= 10; m++)
							for (n = 1; n <= 10; n++)
								matrice_jucator_refacuta_12[m][n] = matrice_jucator_refacuta[m - 1][n - 1];

						//repozitionare!  ---- i = lungimea navei
						copiere(copie, matrice_jucator_refacuta_12);
						generare_barca_de_nr(copie, &nr_elem, &m, &n, &varianta);
						while ((varianta == 0 && verificare_0(copie, &nr_elem, &m, &n) == 0) || (varianta == 1 && verificare_1(copie, &nr_elem, &m, &n) == 0))
						{
							copiere(copie, matrice_jucator_refacuta_12);
							varianta = rand() % 2;
							generare_barca_de_nr(copie, &nr_elem, &m, &n, &varianta);
						}
						for (m = 1; m <= 10; m++)
							for (n = 1; n <= 10; n++)
								if (copie[m][n] == 1)
									nr_de_unu++;


						while (nr_de_unu != nr_max)
						{
							nr_de_unu = 0;
							copiere(copie, matrice_jucator_refacuta_12);
							varianta = rand() % 2;
							generare_barca_de_nr(copie, &nr_elem, &m, &n, &varianta);
							while ((varianta == 0 && verificare_0(copie, &nr_elem, &m, &n) == 0) || (varianta == 1 && verificare_1(copie, &nr_elem, &m, &n) == 0))
							{
								copiere(copie, matrice_jucator_refacuta_12);
								varianta = rand() % 2;
								generare_barca_de_nr(copie, &nr_elem, &m, &n, &varianta);
							}

							for (m = 1; m <= 10; m++)
							{
								for (n = 1; n <= 10; n++)
								{
									if (copie[m][n] == 1)
									{
										nr_de_unu++;
									}
								}
							}

						}
						copiere(matrice_jucator_refacuta_12, copie);


						//copiere matrice jucator refacuta de 12 in matrice jucator refacuta
						for (m = 1; m <= 10; m++)
							for (n = 1; n <= 10; n++)
								matrice_jucator_refacuta[m - 1][n - 1] = matrice_jucator_refacuta_12[m][n];



					}

				}
			}
		k--;
	}
}

//in mat_bg_bot sunt stocate elementele in care deja s-a tras cu 2
//in copie_mat_juc sunt stocate elementele in care deja s-a tras cu -1
int destroy_in_adv(WINDOW *bot_grid, WINDOW *player_grid, int copie_mat_juc[][10], int mat_bg_bot[][10], int matrice_jucator[][10], int matrice_bot[][10], char matrice_bot_ch[][10], int *nr_grid_bot, int *nr_grid_player, int *ok, int *element_curent, int elemente_selectate[], int *count_el, int mpr[][10])
{
	int i, j, count;

	//distrugere 10 elemente din fiecare matrice(in total 20 de elemente)
	for (count = 0; count < 10; count++)
	{
		//distrugere elemente din matrice_bot
		i = rand() % 10;
		j = rand() % 10;
		while (mat_bg_bot[i][j] == 2)
		{
			i = rand() % 10;
			j = rand() % 10;
		}
		mat_bg_bot[i][j] = 2;
		if (matrice_bot[i][j] == 1)
		{
			*nr_grid_bot = *nr_grid_bot + 1;
			matrice_bot_ch[i][j] = '1';
		}
		else
			matrice_bot_ch[i][j] = '0';
		afisare_board_bot(bot_grid, *element_curent, matrice_bot_ch);

		wrefresh(bot_grid);
		if (verif_win(*nr_grid_player, *nr_grid_bot) == 1)
		{
			*ok = 1;
			return 1;
		}

		//distrugere elemente din matrice_jucator
		wrefresh(player_grid);
		i = rand() % 10;
		j = rand() % 10;
		while (copie_mat_juc[i][j] == -1)
		{
			i = rand() % 10;
			j = rand() % 10;
		}

		copie_mat_juc[i][j] = -1;
		if (matrice_jucator[i][j] == 1)
		{
			mpr[i][j] = 4;
			elemente_selectate[*count_el] = i * 10 + j;
			*count_el = *count_el + 1;

			*nr_grid_player = *nr_grid_player + 1;
			//colorare cu rosu
			wattron(player_grid, COLOR_PAIR(7));
			mvwprintw(player_grid, i * 2 + 1, j * 4 + 1, " ");
			wattroff(player_grid, COLOR_PAIR(7));
		}

		if (matrice_jucator[i][j] == 0)
		{
			mpr[i][j] = 3;
			//colorare cu verde
			wattron(player_grid, COLOR_PAIR(8));
			mvwprintw(player_grid, i * 2 + 1, j * 4 + 1, " ");
			wattroff(player_grid, COLOR_PAIR(8));
		}
		wrefresh(player_grid);
		if (verif_win(*nr_grid_player, *nr_grid_bot) == 1)
		{
			*ok = 1;
			return 1;
		}
	}


	return 0;
}

int functionalitate_joc(WINDOW *player_grid, WINDOW *bot_grid, int *ok, int matrice_bot[][10], int matrice_jucator[][10], int mat_bg_bot[][10], int pozitii_nave_bot[][5], int pozitii_nave_player[][5], int mpr[][10], int mnj[][10], char matrice_bot_ch2[][10], char matrice_bot_ch[][10], int mnb[][10], int *nr_grid_bot, int *nr_grid_player, int elemente_selectate[], int copie_mat_juc[][10], int *count_el, int *ok_randomize)
{
	keypad(bot_grid, TRUE);
	int c, element_curent = 0, element_ales = -1, i, j, contor_runda;
	int f_matrice_jucator[10][10];

	//mat_bg_bot va fi folosita pentru a stoca elementele in care deja s-a tras
	//pentru a calcula nr_grid_bot (cand toate elementele de 1 au fost alese),
	//jucatorul castiga.


	for (i = 0; i < 10; i++)
			for (j = 0; j < 10; j++)
			{
				f_matrice_jucator[i][j] = matrice_jucator[i][j];
				mat_bg_bot[i][j] = 0;
				matrice_bot_ch[i][j] = ' ';
				copie_mat_juc[i][j] = matrice_jucator[i][j];
				mnj[i][j] = matrice_jucator[i][j];
				mnb[i][j] = matrice_bot[i][j];
			}


	afisare_board_bot(bot_grid, element_curent, matrice_bot_ch);
	while(1)
	{
		if (verif_win(*nr_grid_player, *nr_grid_bot) == 1)
		{
			*ok = 1;
			return 1;
		}

		c = wgetch(bot_grid);
		refresh();


		if (c == 114 && *ok_randomize == 0) //randomize
		{
			*ok_randomize = 1;
			int mat_goala[10][10] = {0};

			randomize_map(f_matrice_jucator, elemente_selectate, mat_goala);
			//matricea goala contine elementele noi ale jocului
			
			for (i = 0; i < 10; i++)
				for (j = 0; j < 10; j++)
				{
					f_matrice_jucator[i][j] = mat_goala[i][j];
					copie_mat_juc[i][j] = f_matrice_jucator[i][j];
					mpr[i][j] = 0;
					mnj[i][j] = mat_goala[i][j];
				}


			mvwprintw(stdscr, 50, 81, "                                        ");
			mvwprintw(stdscr, 50, 18, "                                           ");
			mvwprintw(stdscr, 53, 79, "                                             ");
			wattron(stdscr, COLOR_PAIR(3) | A_BOLD);
			mvwprintw(stdscr, 50, 18, "Now, you only have one option remaining:");
			mvwprintw(stdscr, 50, 79, "Press D for the \"Destroy in advance\" option");
			wattroff(stdscr, COLOR_PAIR(3) | A_BOLD);
			refresh();
			afisare_board_player(player_grid, f_matrice_jucator);
			wrefresh(player_grid);
		}

		if (c == 100)
		{
			//ATENTIE -- DACA PRIN OPTIUNEA DESTROY IN ADVANCE REUSITI SA
			//CASTIGATI JOCUL, GRAFICA SE OPRESTE IN MOMENTUL IN CARE
			//ULTIMUL HIT (HITUL CASTIGATOR) ESTE TRAS ! 
			if (destroy_in_adv(bot_grid, player_grid, copie_mat_juc, mat_bg_bot, f_matrice_jucator, matrice_bot, matrice_bot_ch, nr_grid_bot, nr_grid_player, ok, &element_curent, elemente_selectate, count_el, mpr) == 1)
				return 1;
			wrefresh(bot_grid);
			wrefresh(player_grid);
		}

		if (c == 113)
		{
			for (i = 0; i < 10; i++)
				for (j = 0; j < 10; j++)
					matrice_bot_ch2[i][j] = matrice_bot_ch[i][j];
			*ok = 1;
			return 1;
		}
		if (c == 10)
		{
			//VERIFICARE WIN
			if (verif_win(*nr_grid_player, *nr_grid_bot) == 1)
			{
				*ok = 1;
				return 1;
			}

			element_ales = element_curent;

			if (matrice_bot[element_ales / 10][element_ales % 10] == 1)
			{
				if (mat_bg_bot[element_ales / 10][element_ales % 10] != 2)
					*nr_grid_bot = *nr_grid_bot + 1;
				matrice_bot_ch[element_ales / 10][element_ales % 10] = '1';
				mat_bg_bot[element_ales / 10][element_ales % 10] = 2;
				contor_runda = 1;
			}

			if (matrice_bot[element_ales / 10][element_ales % 10] == 0)
			{
				if (mat_bg_bot[element_ales / 10][element_ales % 10] != 2)
				{
					matrice_bot_ch[element_ales / 10][element_ales % 10] = '0';
					mat_bg_bot[element_ales / 10][element_ales % 10] = 2;
					contor_runda = 0;
				}
				else
				{
					contor_runda = 1;
				}
			}

			afisare_board_bot(bot_grid, element_curent, matrice_bot_ch);

			while (contor_runda == 1)
			{
				wattron(stdscr, A_BOLD);
				mvwprintw(stdscr, 13, 77, "           Great shot! It's your turn again!           ");
				wattroff(stdscr, A_BOLD);
				refresh();
				//VERIFICARE WIN
				if (verif_win(*nr_grid_player, *nr_grid_bot) == 1)
				{
					*ok = 1;
					return 1;
				}

				c = wgetch(bot_grid);


				if (c == KEY_UP || c == KEY_DOWN || c == KEY_LEFT || c == KEY_RIGHT)
					functionalitate_keypad(&c, &element_curent);

				afisare_board_bot(bot_grid, element_curent, matrice_bot_ch);

				if (c == 114 && *ok_randomize == 0) //randomize
				{
					*ok_randomize = 1;
					int mat_goala[10][10] = {0};


					randomize_map(f_matrice_jucator, elemente_selectate, mat_goala);
					
					for (i = 0; i < 10; i++)
						for (j = 0; j < 10; j++)
						{
							f_matrice_jucator[i][j] = mat_goala[i][j];
							copie_mat_juc[i][j] = f_matrice_jucator[i][j];
							mpr[i][j] = 0;
							mnj[i][j] = mat_goala[i][j];
						}
					
					mvwprintw(stdscr, 50, 81, "                                        ");
					mvwprintw(stdscr, 50, 18, "                                           ");
					mvwprintw(stdscr, 53, 79, "                                             ");
					wattron(stdscr, COLOR_PAIR(3) | A_BOLD);
					mvwprintw(stdscr, 50, 18, "Now you only have one option remaining:");
					mvwprintw(stdscr, 50, 79, "Press D for the \"Destroy in advance\" option");
					wattroff(stdscr, COLOR_PAIR(3) | A_BOLD);
					refresh();
					afisare_board_player(player_grid, f_matrice_jucator);
					wrefresh(player_grid);
				}

				if (c == 100)
				{
					//ATENTIE -- DACA PRIN OPTIUNEA DESTROY IN ADVANCE REUSITI SA CASTIGATI JOCUL, GRAFICA SE OPRESTE IN MOMENTUL IN CARE
					//ULTIMUL HIT (HITUL CASTIGATOR) ESTE TRAS ! 
					if (destroy_in_adv(bot_grid, player_grid, copie_mat_juc, mat_bg_bot, f_matrice_jucator, matrice_bot, matrice_bot_ch, nr_grid_bot, nr_grid_player, ok, &element_curent, elemente_selectate, count_el, mpr) == 1)
					{
						for (i = 0; i < 10; i++)
							for (j = 0; j < 10; j++)
								matrice_bot_ch2[i][j] = matrice_bot_ch[i][j];
						return 1;
					}
					wrefresh(bot_grid);
					wrefresh(player_grid);
				}

				if (c == 10)
				{
					element_ales = element_curent;
					if (matrice_bot[element_ales / 10][element_ales % 10] == 1)
					{
						if (mat_bg_bot[element_ales / 10][element_ales % 10] != 2)
							*nr_grid_bot = *nr_grid_bot + 1;
						matrice_bot_ch[element_ales / 10][element_ales % 10] = '1';
						mat_bg_bot[element_ales / 10][element_ales % 10] = 2;
						contor_runda = 1;
					}

					if (matrice_bot[element_ales / 10][element_ales % 10] == 0)
					{
						if (mat_bg_bot[element_ales / 10][element_ales % 10] != 2)
						{
							matrice_bot_ch[element_ales / 10][element_ales % 10] = '0';
							mat_bg_bot[element_ales / 10][element_ales % 10] = 2;
							contor_runda = 0;
						}
						else
						{
							contor_runda = 1;
						}
					}

					afisare_board_bot(bot_grid, element_curent, matrice_bot_ch);
				}

				if (c == 113)
				{
					for (i = 0; i < 10; i++)
						for (j = 0; j < 10; j++)
							matrice_bot_ch2[i][j] = matrice_bot_ch[i][j];
					*ok = 1;
					return 1;
				}

			}
			//TEXT BOT'S TURN
			wattron(stdscr, A_BOLD);
			mvwprintw(stdscr, 13, 77, "Maybe you will be luckier next time! Now it's BOT's turn!");
			refresh();

			afisare_board_bot(bot_grid, element_curent, matrice_bot_ch);

			alegere_element_de_catre_bot(player_grid, f_matrice_jucator, copie_mat_juc, nr_grid_player, elemente_selectate, count_el, mpr);


			if (verif_win(*nr_grid_player, *nr_grid_bot) == 1)
			{
				*ok = 1;
				return 1;
			}

			//TEXT YOUR TURN
			mvwprintw(stdscr, 13, 77, "         Gather your strenght! Now it's your turn!         ");
			wattroff(stdscr, A_BOLD);
			refresh();
		}
		functionalitate_keypad(&c, &element_curent);
		afisare_board_bot(bot_grid, element_curent, matrice_bot_ch);

		for (i = 0; i < 10; i++)
			for (j = 0; j < 10; j++)
				matrice_bot_ch2[i][j] = matrice_bot_ch[i][j];


	}


}

//SEAMANA CU FUNCTIA functionalitate_joc
int functionalitate_resume(WINDOW *p_g_r, WINDOW *b_g_r, int *ok, char matrice_bot_ch2[][10], int matrice_bot_noua[][10], int mat_bg_bot[][10], char matrice_bot_ch[][10], int *nr_grid_bot, int *nr_grid_player, int elemente_selectate[], int copie_mat_juc[][10], int *count_el, int mpr[][10], int matrice_jucator[][10], int *ok_randomize)
{
	keypad(b_g_r, TRUE);
	int c, element_curent = 0, i, j, element_ales, f_matrice_jucator[10][10];
	int contor_runda;


	if (*ok_randomize == 1)
	{
		mvwprintw(stdscr, 50, 81, "                                        ");
		mvwprintw(stdscr, 50, 18, "                                           ");
		mvwprintw(stdscr, 53, 79, "                                             ");
		wattron(stdscr, COLOR_PAIR(3) | A_BOLD);
		mvwprintw(stdscr, 50, 18, "Now you only have one option remaining:");
		mvwprintw(stdscr, 50, 79, "Press D for the \"Destroy in advance\" option");
		wattroff(stdscr, COLOR_PAIR(3) | A_BOLD);
		refresh();

	}

	for (i = 0; i < 10; i++)
			for (j = 0; j < 10; j++)
				f_matrice_jucator[i][j] = matrice_jucator[i][j];
			
	while(1)
	{
		afisare_board_bot(b_g_r, element_curent, matrice_bot_ch2);
		wrefresh(b_g_r);

		if (verif_win(*nr_grid_player, *nr_grid_bot) == 1)
		{
			*ok = 1;
			return 1;
		}


		c = wgetch(b_g_r);
		refresh();
		if (c == 113)
		{
			*ok = 1;
			return 1;
		}

		if (c == 114 && *ok_randomize == 0) //randomize
		{
			*ok_randomize = 1;

			int mat_goala[10][10] = {0};
			randomize_map(f_matrice_jucator, elemente_selectate, mat_goala);
		
			for (i = 0; i < 10; i++)
				for (j = 0; j < 10; j++)
				{
					f_matrice_jucator[i][j] = mat_goala[i][j];
					copie_mat_juc[i][j] = f_matrice_jucator[i][j];
				}
				
			mvwprintw(stdscr, 50, 81, "                                        ");
			mvwprintw(stdscr, 50, 18, "                                           ");
			mvwprintw(stdscr, 53, 79, "                                             ");
			wattron(stdscr, COLOR_PAIR(3) | A_BOLD);
			mvwprintw(stdscr, 50, 18, "Now you only have one option remaining:");
			mvwprintw(stdscr, 50, 79, "Press D for the \"Destroy in advance\" option");
			wattroff(stdscr, COLOR_PAIR(3) | A_BOLD);
			refresh();
			afisare_board_player(p_g_r, f_matrice_jucator);
			wrefresh(p_g_r);
		}

		if (c == 100)
		{
			//ATENTIE -- DACA PRIN OPTIUNEA DESTROY IN ADVANCE REUSITI SA
			//CASTIGATI JOCUL, GRAFICA SE OPRESTE IN MOMENTUL IN CARE
			//ULTIMUL HIT (HITUL CASTIGATOR) ESTE TRAS ! 
			if (destroy_in_adv(b_g_r, p_g_r, copie_mat_juc, mat_bg_bot, f_matrice_jucator, matrice_bot_noua, matrice_bot_ch2, nr_grid_bot, nr_grid_player, ok, &element_curent, elemente_selectate, count_el, mpr) == 1)
			{
				for (i = 0; i < 10; i++)
					for (j = 0; j < 10; j++)
						matrice_bot_ch2[i][j] = matrice_bot_ch[i][j];
				return 1;
			}
			wrefresh(b_g_r);
			wrefresh(p_g_r);
			refresh();
		}


		if (c == 10)
		{
			element_ales = element_curent;

			if (matrice_bot_noua[element_ales / 10][element_ales % 10] == 1)
			{
				if (mat_bg_bot[element_ales / 10][element_ales % 10] != 2)
					*nr_grid_bot = *nr_grid_bot + 1;
				matrice_bot_ch2[element_ales / 10][element_ales % 10] = '1';
				mat_bg_bot[element_ales / 10][element_ales % 10] = 2;
				contor_runda = 1;
			}

			if (matrice_bot_noua[element_ales / 10][element_ales % 10] == 0)
			{
				if (mat_bg_bot[element_ales / 10][element_ales % 10] != 2)
				{
					matrice_bot_ch2[element_ales / 10][element_ales % 10] = '0';
					mat_bg_bot[element_ales / 10][element_ales % 10] = 2;
					contor_runda = 0;
				}
				else
				{
					contor_runda = 1;
				}
			}

			afisare_board_bot(b_g_r, element_ales, matrice_bot_ch2);
			wrefresh(b_g_r);
			if (verif_win(*nr_grid_player, *nr_grid_bot) == 1)
			{
				*ok = 1;
				return 1;
			}

			while (contor_runda == 1)
			{
				wattron(stdscr, A_BOLD);
				mvwprintw(stdscr, 13, 77, "           Great shot! It's your turn again!           ");
				wattroff(stdscr, A_BOLD);
				refresh();
				//VERIFICARE WIN
				if (verif_win(*nr_grid_player, *nr_grid_bot) == 1)
				{
					*ok = 1;
					return 1;
				}

				c = wgetch(b_g_r);


				if (c == KEY_UP || c == KEY_DOWN || c == KEY_LEFT || c == KEY_RIGHT)
					functionalitate_keypad(&c, &element_curent);

				afisare_board_bot(b_g_r, element_curent, matrice_bot_ch2);

				if (c == 114 && *ok_randomize == 0) //randomize
				{
					*ok_randomize = 1;
					int mat_goala[10][10] = {0};


					randomize_map(f_matrice_jucator, elemente_selectate, mat_goala);
					
					for (i = 0; i < 10; i++)
						for (j = 0; j < 10; j++)
						{
							f_matrice_jucator[i][j] = mat_goala[i][j];
							copie_mat_juc[i][j] = f_matrice_jucator[i][j];
						}
					
					mvwprintw(stdscr, 50, 81, "                                        ");
					mvwprintw(stdscr, 50, 18, "                                           ");
					mvwprintw(stdscr, 53, 79, "                                             ");
					wattron(stdscr, COLOR_PAIR(3) | A_BOLD);
					mvwprintw(stdscr, 50, 18, "Now you only have one option remaining:");
					mvwprintw(stdscr, 50, 79, "Press D for the \"Destroy in advance\" option");
					wattroff(stdscr, COLOR_PAIR(3) | A_BOLD);
					refresh();
					afisare_board_player(p_g_r, f_matrice_jucator);
					wrefresh(p_g_r);
				}

				if (c == 100)
				{
					//ATENTIE -- DACA PRIN OPTIUNEA DESTROY IN ADVANCE REUSITI
					//SA CASTIGATI JOCUL, GRAFICA SE OPRESTE IN MOMENTUL IN 
					//CARE ULTIMUL HIT (HITUL CASTIGATOR) ESTE TRAS ! 
					if (destroy_in_adv(b_g_r, p_g_r, copie_mat_juc, mat_bg_bot, f_matrice_jucator, matrice_bot_noua, matrice_bot_ch2, nr_grid_bot, nr_grid_player, ok, &element_curent, elemente_selectate, count_el, mpr) == 1)
					{
						for (i = 0; i < 10; i++)
							for (j = 0; j < 10; j++)
								matrice_bot_ch2[i][j] = matrice_bot_ch[i][j];
						return 1;
					}
					wrefresh(b_g_r);
					wrefresh(p_g_r);
					refresh();
				}

				if (c == 10)
				{
					element_ales = element_curent;
					if (matrice_bot_noua[element_ales / 10][element_ales % 10] == 1)
					{
						if (mat_bg_bot[element_ales / 10][element_ales % 10] != 2)
							*nr_grid_bot = *nr_grid_bot + 1;
						matrice_bot_ch2[element_ales / 10][element_ales % 10] = '1';
						mat_bg_bot[element_ales / 10][element_ales % 10] = 2;
						contor_runda = 1;
					}

					if (matrice_bot_noua[element_ales / 10][element_ales % 10] == 0)
					{
						if (mat_bg_bot[element_ales / 10][element_ales % 10] != 2)
						{
							matrice_bot_ch2[element_ales / 10][element_ales % 10] = '0';
							mat_bg_bot[element_ales / 10][element_ales % 10] = 2;
							contor_runda = 0;
						}
						else
						{
							contor_runda = 1;
						}
					}

					afisare_board_bot(b_g_r, element_curent, matrice_bot_ch2);
				}

				if (c == 113)
				{
					for (i = 0; i < 10; i++)
						for (j = 0; j < 10; j++)
							matrice_bot_ch2[i][j] = matrice_bot_ch[i][j];
					*ok = 1;
					return 1;
				}

			}

			wattron(stdscr, A_BOLD);
			mvwprintw(stdscr, 13, 77, "Maybe you will be luckier next time! Now it's BOT's turn!");
			refresh();

			alegere_element_de_catre_bot(p_g_r, f_matrice_jucator, copie_mat_juc, nr_grid_player, elemente_selectate, count_el, mpr);

			if (verif_win(*nr_grid_player, *nr_grid_bot) == 1)
			{
				*ok = 1;
				return 1;
			}

			//TEXT YOUR TURN
			mvwprintw(stdscr, 13, 77, "         Gather your strenght! Now it's your turn!         ");
			wattroff(stdscr, A_BOLD);
			refresh();
		}

		functionalitate_keypad(&c, &element_curent);
		afisare_board_bot(b_g_r, element_curent, matrice_bot_ch2);
		wrefresh(b_g_r);
	}

}

int new_game(int matrice_jucator[][10], int mat_bg_bot[][10], int mpr[][10], int mnj[][10], char matrice_bot_ch2[][10], char matrice_bot_ch[][10], int mnb[][10], int *nr_grid_bot, int *nr_grid_player, int elemente_selectate[], int copie_mat_juc[][10], int *count_el, int *ok_randomize)
{

	int matrice_bot[10][10], matrice_bot_extinsa[12][12] = {0}, matrice_jucator_extinsa[12][12] = {0}, pozitii_nave_bot[7][5] = {0}, pozitii_nave_player[7][5] = {0};
	int i, j;
	*nr_grid_bot = 0;
	*nr_grid_player = 0;

	//generare matrice bot - astfel, de fiecare data cand apas "New Game"
	//calculatorul imi va genera o noua matrice a bot-ului
	generare_harta_random(matrice_bot);

	//de fiecare data cand apas new_game, harta jucatorului va fi cea din fisier
	//(chiar daca apas inainte optiunea randomize_map)

	//preluare elemente pentru matrice_bot_extinsa din matrice_bot
	//preluare elemente pentru matrice_jucator_extinsa din matrice_jucator
	for (i = 1; i <= 10; i++)
		for (j = 1; j <= 10; j++)
		{
			matrice_bot_extinsa[i][j] = matrice_bot[i - 1][j - 1];
			matrice_jucator_extinsa[i][j] = matrice_bot[i - 1][j - 1];
		}


	//calculare pozitii nave --  (mat devin nule)
	calcul_pozitii_nave(matrice_bot_extinsa, pozitii_nave_bot);
	calcul_pozitii_nave(matrice_jucator_extinsa, pozitii_nave_player);
	
	WINDOW *new_game_window = newwin(58, 211, 0, 0);
	WINDOW *player_grid = newwin(21, 40, 26, 40);
	WINDOW *bot_grid = newwin(21, 40, 26, 120);
	int ok = 0;

	initscr();
	clear();
	cbreak();
	noecho();

	wattron(stdscr, COLOR_PAIR(3));
	wattron(stdscr, A_BOLD);
	mvwprintw(stdscr, 24, 55, "Your board");
	mvwprintw(stdscr, 24, 135, "BOT's board");
	mvwprintw(stdscr, 50, 18, "You have the following 2 options available:");
	mvwprintw(stdscr, 50, 81, "Press R for the \"Randomize map\" option");
	mvwprintw(stdscr, 53, 79, "Press D for the \"Destroy in advance\" option");
	wattroff(stdscr, A_BOLD);
	wattroff(stdscr, COLOR_PAIR(3));



	refresh();
	keypad(new_game_window, TRUE);
	box(player_grid, 0, 0);
	box(bot_grid, 0, 0);
	refresh();
	wrefresh(bot_grid);
	afisare_board_player(player_grid, matrice_jucator);
	functionalitate_joc(player_grid, bot_grid, &ok, matrice_bot, matrice_jucator, mat_bg_bot, pozitii_nave_bot, pozitii_nave_player, mpr, mnj, matrice_bot_ch2, matrice_bot_ch, mnb, nr_grid_bot, nr_grid_player, elemente_selectate, copie_mat_juc, count_el, ok_randomize);
	if (ok == 1)
	{
		delwin(new_game_window);
		delwin(player_grid);
		delwin(bot_grid);
		return 1;
	}

	return 0;
}

void colorare_r(WINDOW *p_g_r, int mpr[][10])
{
	int i, j;
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			if (mpr[i][j] == 4)
			{
				//colorare cu rosu
				wattron(p_g_r, COLOR_PAIR(7));
				mvwprintw(p_g_r, i * 2 + 1, j * 4 + 1, " ");
				wattroff(p_g_r, COLOR_PAIR(7));
			}
			if (mpr[i][j] == 3)
			{
				//colorare cu verde
				wattron(p_g_r, COLOR_PAIR(8));
				mvwprintw(p_g_r, i * 2 + 1, j * 4 + 1, " ");
				wattroff(p_g_r, COLOR_PAIR(8));
			}

		}


}


int resume_game(int matrice_jucator[][10], int mpr[][10], char matrice_bot_ch2[][10], int mat_bg_bot[][10], char matrice_bot_ch[][10], int mnb[][10], int *nr_grid_bot, int *nr_grid_player, int elemente_selectate[], int copie_mat_juc[][10], int *count_el, int *ok_randomize)
{
	int matrice_bot_noua[10][10] = {0}, i, j;

	//construiesc o matrice cu elementele ramase
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			if (matrice_bot_ch2[i][j] == ' ')
				matrice_bot_noua[i][j] = mnb[i][j];



	//p_g_r = player_grid_resume ; b_g_r = bot_grid_resume
	WINDOW *resume_game_window = newwin(58, 211, 0, 0);
	WINDOW *p_g_r = newwin(21, 40, 26, 40);
	WINDOW *b_g_r = newwin(21, 40, 26, 120);

	int ok = 0;

	initscr();
	clear();
	cbreak();
	noecho();

	wattron(stdscr, COLOR_PAIR(3));
	wattron(stdscr, A_BOLD);
	mvwprintw(stdscr, 24, 55, "Your board");
	mvwprintw(stdscr, 24, 135, "BOT's board");
	mvwprintw(stdscr, 50, 18, "You have the following 2 options available:");
	mvwprintw(stdscr, 50, 81, "Press R for the \"Randomize map\" option");
	mvwprintw(stdscr, 53, 79, "Press D for the \"Destroy in advance\" option");
	wattroff(stdscr, A_BOLD);
	wattroff(stdscr, COLOR_PAIR(3));


	afisare_board_player(p_g_r, matrice_jucator);
	colorare_r(p_g_r, mpr);
	
	refresh();
	box(p_g_r, 0, 0);
	box(b_g_r, 0, 0);
	wrefresh(p_g_r);
	wrefresh(b_g_r);
	functionalitate_resume(p_g_r, b_g_r, &ok, matrice_bot_ch2, matrice_bot_noua, mat_bg_bot, matrice_bot_ch, nr_grid_bot, nr_grid_player, elemente_selectate, copie_mat_juc, count_el, mpr, matrice_jucator, ok_randomize);
	if (ok == 1)
	{
		delwin(resume_game_window);
		delwin(p_g_r);
		delwin(b_g_r);
		return 1;
	}
	refresh();

	keypad(resume_game_window, TRUE);
	return 1;
}


int functionalitate_meniu(WINDOW *meniu, char **optiuni_meniu, int matrice_jucator[][10])
{
	int caracter, optiune_curenta = 1, optiune_aleasa = 0, ok = 0;
	int mpr[10][10] = {0}, mnj[10][10] = {0}, mnb[10][10] = {0}, count_el;
	int mat_bg_bot[10][10] = {0}, nr_grid_player, nr_grid_bot, i, j;
	char matrice_bot_ch2[10][10], matrice_bot_ch[10][10];
	int elemente_selectate[20] = {-1}, copie_mat_juc[10][10], ok_randomize = 0;
	afisare_meniu(meniu, optiuni_meniu, optiune_curenta);
	while(1)
	{
		logo_battleship(stdscr);
		nava(stdscr);
		refresh();
		caracter = wgetch(meniu);
		if (caracter == 10)
			optiune_aleasa = optiune_curenta;

		if (caracter == KEY_DOWN)
		{
			if (optiune_curenta != 3)
				optiune_curenta++;
			else
				optiune_curenta = 1;
		}
		if (caracter == KEY_UP)
		{
			if (optiune_curenta != 1)
				optiune_curenta--;
			else
				optiune_curenta = 3;
		}
		if (optiune_aleasa == 1) //new game
		{
			optiune_aleasa = 0;
			ok = 1;
			for (i = 0; i < 10; i++)
				for (j = 0; j < 10; j++)
				{
					mnb[i][j] = 0;
					mnj[i][j] = 0;
					mpr[i][j] = 0;
					mat_bg_bot[i][j] =0;
					matrice_bot_ch2[10][10] = ' ';
					copie_mat_juc[i][j] = 0;
				}
			ok_randomize = 0;
			count_el = 0;
			for (i = 0; i <= 19; i++)
				elemente_selectate[i] = -1;
			new_game(matrice_jucator, mat_bg_bot, mpr, mnj, matrice_bot_ch2, matrice_bot_ch, mnb, &nr_grid_bot, &nr_grid_player, elemente_selectate, copie_mat_juc, &count_el, &ok_randomize);
			clear();
			afisare_meniu(meniu, optiuni_meniu, optiune_curenta);
			refresh();
		}

		if (optiune_aleasa == 2)
		{
			optiune_aleasa = 0;
			if (ok == 1) //resume_game
			{
				resume_game(mnj, mpr, matrice_bot_ch2, mat_bg_bot, matrice_bot_ch, mnb, &nr_grid_bot, &nr_grid_player, elemente_selectate, copie_mat_juc, &count_el, &ok_randomize);
				clear();
				afisare_meniu(meniu, optiuni_meniu, optiune_curenta);
				refresh();
			}
			if (ok == 0)
			{
					attron(A_BOLD | A_STANDOUT);
					wattron(stdscr, COLOR_PAIR(1));
					mvwprintw(stdscr, 45, 73, "You haven't started a game yet\t\tPress any key to continue");
					attroff(A_BOLD | A_STANDOUT);
					wattroff(stdscr, COLOR_PAIR(1));
					getch();
					mvwprintw(stdscr, 45, 73, "                                                                                   ");
					
			}
		}
		if (optiune_aleasa == 3) //quit
			return 1;
		afisare_meniu(meniu, optiuni_meniu, optiune_curenta);
	}
	delwin(meniu);
}

void citire_matrice_jucator(FILE *f, int matrice_jucator[][10])
{
	int i, j;
	char c;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 11; j++)
		{
			c = fgetc(f);
			if (c == 46)
				matrice_jucator[i-1][j-1] = 0;
			if (c == 88)
				matrice_jucator[i-1][j-1] = 1;
		}
	}

}


int main(int argc, char *argv[])
{
	char *optiuni_meniu[] = {"New Game", "Resume Game", "Quit"};
	int matrice_jucator[10][10];

	FILE *fisier_matrice_jucator;
	fisier_matrice_jucator = fopen(argv[1], "r");
	if (fisier_matrice_jucator == 0)
	{
		puts("Eroare la deschidere fisier \n");
		return 1;
	}

	citire_matrice_jucator(fisier_matrice_jucator, matrice_jucator);

	initscr();
	clear();
	cbreak();
	noecho();
	curs_set(FALSE);

	start_color();
	init_color(COLOR_BLUE, 0, 0, 77);
	init_color(COLOR_BLACK, 180, 30, 150);
	init_color(COLOR_GREEN, 0, 255, 0);
	

	init_pair(1, COLOR_BLUE, COLOR_BLACK);
	init_pair(2, COLOR_YELLOW, COLOR_BLACK);
	init_pair(3, COLOR_CYAN, COLOR_BLACK);
	init_pair(4, COLOR_BLUE, COLOR_BLUE);
	init_pair(5, COLOR_RED, COLOR_BLACK);
	init_pair(6, COLOR_GREEN, COLOR_BLACK);
	init_pair(7, COLOR_RED, COLOR_RED);
	init_pair(8, COLOR_GREEN, COLOR_GREEN);

	
	WINDOW *meniu = newwin(13, 61, 27, 75);
	keypad(meniu, TRUE);
	logo_battleship(stdscr);
	nava(stdscr);
	refresh();
	functionalitate_meniu(meniu, optiuni_meniu, matrice_jucator);

	endwin();

	return 1;
}