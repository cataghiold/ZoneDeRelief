# ZoneDeRelief
Cerință:
Se dă o imagine cu zone de relief de formă dreptunghiulară având dimensiunile MxN. În imagine sunt notate cu etichete (numere pozitive) diferitele tipuri de zone (ex. 1=pășune, 2=pădure, 3=apa/lac 4=teren arabil, etc).

Eticheta 0 reprezintă zone (în general) de delimitare care nu reprezintă importanță.

În imagine sunt mai multe suprafețe compacte de formă dreptunghiulară, având tipuri de zone diferite și dimensiuni diverse.

Să se scrie un program care citește de la tastatură dimensiunile imaginii M, N, iar apoi matricea M linii de câte N valori întregi pozitive reprezentând etichetele.

Restricții și precizări:
Știm că în imagine pot fi maxim 25 de zone, însă etichetele pot fi orice număr natural pozitiv (int).

Dacă există mai multe răspunsuri similare, se va afișa primul în ordinea de parcurgere stânga-dreapta, sus-jos.

Două suprafețe de același tip și dimensiuni diferite nu se pot atinge.

Să se afișeze care este tipul de zonă cu cele mai multe suprafețe compacte (dreptunghiuri) și câte suprafețe sunt din acest tip.

Date de intrare:
Pe pe prima linie dimensiunile matricei separate prin spațiu: M N

Pe următoarele M linii câte N valori întregi pozitive reprezentând etichetele.

Date de ieșire:
Tipul de zonă cu cele mai multe suprafețe compacte (dreptunghiuri) și câte suprafețe sunt din acest tip.

Exemplu:

Date de intrare:

14 7

0 0 1 1 1 0 0

0 0 1 1 1 0 0

10 0 0 0 0 21 0

10 0 11 11 0 21 0

10 0 11 11 0 0 0

2 2 2 2 0 0 0

2 2 2 2 0 0 2

2 2 2 2 0 10 0

0 0 0 0 0 10 0

11 11 11 0 2 2 0

3 3 1 1 1 1 0

3 3 1 1 1 1 0

3 3 1 1 1 1 0

3 3 1 1 1 1 0

Date de ieșire:

2 3
