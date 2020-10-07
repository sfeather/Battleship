Aplicatia va fi rulata intr-un terminal FULL SCREEN (F11).

In ubuntu, rulati comanda sudo apt-get install libncurses5-dev pentru a
descarca biblioteca ncurses.

Pentru a juca, rulati comanda ./battleship harta.txt

Harta jucatorului este luata dintr-un fisier dat ca argument in linia de 
comanda. Daca fisierul nu exista, se va afisa un mesaj corespunzator.
Fisierul va fi de tipul :

.....X....
XXXX......
.......XXX
.X........
....X....X
....X.....
XX..X..XX.
..........
..X....X..
..X.......

unde "X" marcheaza existenta navelor, iar "." marcheaza spatiile libere.

Am inceput task-ul 1 si am creat meniul initial cu 3 optiuni: New Game,
Resume Game si Quit. Pentru aspect, le-am centrat pe acestea in mijlocul
casutei de meniu, ajutandu-ma de dimensiunea meniului si de dimensiunea
sirului de caractere (folosind strlen). Cu ajutorul sagetilor sus/jos
puteti nagiva prin meniu si, in plus, daca avem cursorul pe prima optiune
si apasam sageata sus, ne va duce la ultima optiune (la fel si daca avem
cursorul pe ultima optiune si apasam sageata jos). Ca sa stim mereu unde
se afla cursorul, am folosit efecte precum bold, licarire, highlight si
chiar si caractere "#" in fata si in spatele optiunii pe care ne aflam.
Meniul a fost ulterior colorat in galben.

Am creat logo-ul aplicatiei "Battleship" si o nava sugestiva pentru aceasta
si le-am colorat cu albastru.

Rezultatul primei optiuni, "New Game", este inceperea unei noi runde a jocului
(pentru a ne intoarce la meniul initial este necesara apasarea tastei "q").
Astfel, sunt afisate board-ul jucatorului "Your board", dar si board-ul
computerului "BOT's board" (initial afisat gol). Board-ul jucatorului este 
citit dintr-un fisier, pe cand board-ul computerului este generat aleator,
tinand cont de restrictiile date. Astfel, 1 marcheaza existenta unei nave iar
0 marcheaza o celula goala.
Pentru a naviga prin board-ul BOT-ului ne folosim de sageti (sus, jos, stanga,
dreapta). Un bonus este acela ca daca ne aflam pe randurile marginale si
incercam sa "iesim din harta", cursorul se va repozitiona in partea opusa.
De exemplu, daca suntem pe linia de sus si apasam sageata sus, cursorul se va
duce pe ultimul rand (la fel ca in meniu).
Pentru a alege casuta care va fi lovita, jucatorul trebuie sa apese tasta
ENTER. Daca acesta a nimerit o nava, casuta lovita se va colora in rosu si
va fi tot randul acestuia pentru a-si incerca norocul (pana cand acesta
rateaza). Daca in schimb, acesta a ratat, casuta se va colora in verde si
va fi randul calculatorului. Daca avem cursorul pe un element lovit, acesta
se va colora cu rosu, iar daca il avem pe un element ratat, cursorul se va
colora cu verde. Atunci cand este randul calculatorului, acesta va astepta
2 secunde inainte de a-si incerca norocul. Calculatorul trage in elemente
random din harta noastra: daca elementul este o parte din nava, acesta se
coloreaza cu rosu, iar daca elementul nu este o parte din nava, acesta se va
colora cu verde. Daca elementul ales este o nava, tot calculatorul va urma
(la fel ca la jucator). Jocul se opreste in momentul in care unul din cei doi
nimereste toate navele adversarului. In momentul castigarii/pierderii jocului,
se va afisa o animatie corespunzatoare, urmand ca jucatorul sa apese orice
tasta pentru revenirea la meniul principal.
De fiecare data cand apasam optiunea "New Game" se genereaza o alta harta
complet aleator a BOT-ului.

La inceputul jocului, exista 2 optiuni posibile: randomize map si destroy in
advance. Un alt bonus este afisarea interactiva a acestora in partea de jos a
ecranului.

Prima optiune este activata la apasarea tastei "R" si rearanjeaza navele 
partial distruse si pe cele nelovite, iar pe cele distruse le elimina din joc.
Daca de exemplu, avem o nava de 4 elemente lovita in 2 locuri, dupa alegerea
optiunii randomize map, aceasta va deveni o nava de 2 elemente (la fel cum o 
nava de 3 elemente lovita in 2 locuri, va deveni o nava de 1 element). Navele
sunt rearanjate complet aleator, tinandu-se cont de regulile initiale, iar
toate elementele sunt deblocate pentru a fi nimerite. Aceasta optiune este
valabila doar o data pe parcursul unui nou joc iar atunci cand o folosim,
aceasta va disparea din sectiunea "optiuni ramase" din partea de jos a
ecranului.

A doua optiune, destroy in advance, este activata la apasarea tastei "D" si
este valabila de cate ori dorim pe parcursul unui joc. La activarea acesteia,
10 elemente complet aleatorii (si care nu au mai fost alese) sunt alese atat
de catre jucator, cat si de catre bot (si pe harta jucatorului, dar si pe harta
BOT-ului). Daca alegerea acestei optiuni duce la distrugerea completa a hartii
unui jucator, jocul va fi oprit exact in momentul in care casuta respectiva
(castuta terminarii jocului) este lovita, astfel putand sa vedem grid-urile
finale al jucatorilor. In acest caz, o animatie corespunzatoare va fi afisata
(win/lose).



Optiunea "Resume Game" este activa doar daca inainte a fost creat un joc nou.
Daca aceasta optiune va fi selectata inaintea optiunii "New Game", va fi afisat
pe ecran un text sugestiv si veti fi nevoit sa apasati orice tasta pentru a
continua. Daca, insa, inainte de selectarea acestei optiuni ati ales optiunea
"New Game", veti putea continua jocul exact de unde ati ramas. De precizat ca
daca in timpul rundei din "New Game" jucatorul alege optiunea numarul 1
(cea activata la apasarea tastei "R"), in runda "Resume Game" acesta nu o va
mai putea folosi (nu se afla nici in sectiunea interactiva din partea de jos a
ecranului).


Optiunea "Quit" are ca rezultat iesirea din aplicatie.



Implementare:

Pentru inceput, tin sa mentionez ca nu am folosit alocare dinamica datorita
faptului ca toti vectorii si toate matricele folosite au dimensiune fixa.

O sa explic sumar implementarea, codul sursa avand mai multe informatii.

Generare matrice bot:
Exista doua variante de adaugare barci: pe verticala (de la un punct anume
in sus) sau pe orizontala (de la un punct anume spre stanga). Astfel, in
functie de aceasta varianta (care este generata random: 0 sau 1), generez
un punct de pornire. Barcile sunt generate in mijlocul unei matrice de 12 pe 12
(o matrice de 10 pe 10 in mijlocul uneia de 12 pe 12) plina de zerouri.
De exemplu, pentru generarea pe verticala-sus i ia valori random in functie de
lungimea barcii pe care vreau sa o generez (intre nr si 10) iar j ia valori
intre 1 si 10. Pentru orizontala-stanga, i ia valori intre 1 si 10, iar j ia
valori intre nr si 10. Mai apoi este generata barca tinand cont de lungimea
acesteia si de conditiile initiale (conditiile implementate sunt ca barca sa
fie incercuita de zerouri -inclusiv in colturi- ).

Alegere elemente random de catre bot:
Se genereaza i si j random pana cand dau de o pozitie care nu a fost aleasa
(pozitiile alese sunt stocate cu -1 intr-o matrice de 10 pe 10). Atunci cand
gaseste un loc nelovit, verifica matricea jucatorului. Daca aceasta este 1,
coloreaza locul cu rosu, iar daca aceasta este 0, cu verde. Daca matricea 
jucatorului in acea pozitie este 1, programul continua generarea aleatorie pana
cand da de un element cu valoare 0.
Pentru optiunea de resume, am stocat intr-o matrice denumita mpr (matrice
player resume) cu 4 elementele de 1 lovite de catre BOT si cu 3 elementele
de 0 lovite tot de catre acesta.

Randomize map:
Pentru inceput, calculez pozitiile navelor din matricea jucatorului intr-o
matrice astfel: pe liniile i se afla toate pozitiile initiale si finale ale
navelor de lungime i (de exemplu, pe linia 4 coloana 1 se vor afla pozitia
initiala si cea finala ale navei de 4 elemente; pe linia 2 coloana 3 se va
afla pozitia initiala si cea finala a celei de-a 3-a nava de 2 elemente;
si asa mai departe). Pozitiile initiale si finale sunt memorate astfel:
o nava orizontala de 4 elemente este memorata astfel: 7470, unde (7,4)
reprezinta pozitia initiala si (7,0) pozitia finala (de la dreapta la stanga);
o nava verticala de 2 elemente este memorata astfel: 8676, unde (8,6)
reprezinta pozitia initiala si (7,6) pozitia finala (de jos in sus).
Dupa ce cunosc pozitiile navelor, memorez pozitiile nimerite de subprogramul
alegere_element_de_catre_bot. Memorez intr-o matrice cate elemente din fiecare
nava au fost nimerite, daca acestea sunt egale cu numarul de elemente ale
navei, o fac -1. Astfel, refac cu 0 elementele pe care se aflau navele
complet distruse. Daca o nava nu a fost deloc lovita, o repozitionez aleator,
iar daca o nava de m elemente a fost lovita de n ori (dar nu distrusa), o refac
cu 0 si repozitionez o nava de m-n elemente. 

Destroy in advance:
Stochez elementele in care s-a tras deja ale celor 2 playeri in 2 matrici.
Cu ajutorul acestora, trag in 10 elemente (care nu au fost alese inca) atat
din matricea jucatorului, cat si din matricea botului. Pentru a putea vedea
cine a castigat, apelez functia verif_win in interiorul functiei pentru destroy
in advance (dupa fiecare selectie).

Resume:
Pentru resume am memorat elementele deja selectate din cele 2 matrice (fie ca
sunt goale, fie ca sunt cu elemente lovite) si le-am colorat in culorile
specifice. Tin cont daca s-a folosit sau nu optiunea de Randomize map: daca s-a
folosit deja, nu o voi mai putea folosi si ramane valabila doar optiunea de 
destroy in advance (la fel si in sectiunea din josul ecranului). Tin cont si de
punctajul de pana acum al jucatorilor (pentru afisarea win/lose).

Bonusuri:
Drept bonus, am implementat:
- sectiunea interactiva de optiuni valabile din josul paginii care se mentine
atat in "New Game", cat si in "Resume Game";
- sectiunea interactiva din partea de sus a ecranului atat in "New Game", cat
si in "Resume Game", care te anunta daca este randul tau "Gather your strenght!
Now it's your turn!", daca ai nimerit o nava si tot tu urmezi "Great shot! It's
your turn again!", dar si daca ai ratat si urmeaza randul adversarului "Maybe
you will be luckier next time! Now it's BOT's turn!";
- animatiile de win/lose, dar si cele din sectiunea de meniu;
- colorarea specifica a zonelor nimerite/goale (rosu/verde).

Timp de implementare: 70 de ore (cu tot cu documentarea despre biblioteca)









