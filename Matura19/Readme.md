# Matura z informatyki 2019.
## Zadanie 1. Ulubione liczby 
Małgosia i Jaś lubią liczby. Małgosia lubi liczby nieparzyste, a Jaś lubi liczby parzyste. Każde z dzieci zapisało po kilka spośród swoich ulubionych liczb na jednej wspólnej kartce. Najpierw Małgosia zapisała wszystkie swoje liczby, a potem Jaś dopisał swoje. 
## Zadanie 1.1
Napisz algorytm (w postaci listy kroków, w pseudokodzie lub w wybranym języku programowania), który dla danego ciągu liczb zapisanych przez dzieci znajdzie pierwszą liczbę zapisaną przez Jasia. Zakładamy, że każde z dzieci zapisało co najmniej jedną liczbę. 
 
Przy ocenie będzie brana pod uwagę złożoność czasowa Twojego algorytmu. Maksymalną liczbę punktów uzyskasz za algorytm o złożoności lepszej niż liniowa. 
 
Uwaga: W zapisie algorytmu możesz wykorzystać tylko operacje arytmetyczne (dodawanie, odejmowanie, mnożenie, dzielenie, dzielenie całkowite, reszta z dzielenia), instrukcje porównania, instrukcje sterujące i przypisania do zmiennych lub samodzielnie napisane funkcje, wykorzystujące wyżej wymienione operacje. 

<strong>Specyfikacja:</strong> <br>
Dane: n   – liczba całkowita większa od 1 <br>
A[1..n]  – tablica zawierająca ciąg n liczb zapisanych przez dzieci (najpierw wszystkie liczby nieparzyste, a potem wszystkie liczby parzyste)  <br>
Wynik: w – pierwsza od lewej parzysta liczba w tablicy A <br>
<br>
<strong>Przykład:</strong> <br>
Dane: n = 10 <br>
A[1..n] =	5,99,3,7,111,13,4,24,4,8 <br>
Wynik: w  = 4 <br>
## Rozwiązania (Zadanie1.h):
1. S1 - Wersja iteracyjna o złożoności liniowej O(n) = n
2. S2 - Wersja iteracyjna o złożoności logarytmicznej O(n) = log n
2. S3 - Wersja rekurencyjna o złożoności logarytmicznej O(n) = log n

## Zadanie 4.
W pliku liczby.txt zapisano 500 liczb całkowitych dodatnich po jednej w każdym wierszu. Każda liczba jest z zakresu od 1 do 100 000. Napisz program(-y) dający(-e) odpowiedzi do poniższych zadań. Zapisz uzyskane odpowiedzi w pliku wyniki4.txt, poprzedzając każdą z nich numerem odpowiedniego zadania. 
 
Uwaga: Plik przyklad.txt zawiera przykładowe dane spełniające warunki zadania.  Odpowiedzi dla danych z tego pliku są podane pod treściami zadań. 
## Zadanie 4.1
Podaj, ile z podanych liczb jest potęgami liczby 3 (czyli liczbami postaci 1 = 30, 3 = 31, 9 = 32 itd.).
## Rozwiązanie (Zadanie41.h):
Funkcja isPot3(n) sprawdza czy dana liczba <strong>n</strong> jest potęgą liczby 3 i jeżeli tak zwraca true, w przeciwnym wypadku false.

## Zadanie 4.2
Podaj, w kolejności ich występowania w pliku liczby.txt, wszystkie liczby, które są równe sumie silni swoich cyfr. 
## Rozwiązanie (Zadanie42.h)
Funkcja isSum(n) sprawdza czy liczba jest równa sumie silni swoich cyfr i jeżeli tak zwraca true, w przeciwnym wypadku false.

## Zadanie 4.3
W pliku liczby.txt znajdź najdłuższy ciąg liczb występujących kolejno po sobie i taki, że największy wspólny dzielnik ich wszystkich jest większy od 1 (innymi słowy: istnieje taka liczba całkowita większa od 1, która jest dzielnikiem każdej z tych liczb).  Jako odpowiedź podaj wartość pierwszej liczby w takim ciągu, długość ciągu oraz największą liczbę całkowitą, która jest dzielnikiem każdej liczby w tym ciągu. W pliku z danymi jest tylko jeden taki ciąg o największej długości. 
 
Uwaga: Możesz skorzystać z zależności NWD(a, b, c) = NWD(NWD(a, b), c). 

## Rozwiązanie (Zadanie43.h)
Funkcja findNWD(int t[], int n) wypisuje początek najdłużego zbioru, jego długość i NWD (pod warunkiem, że jest większe od 1) w tablicy t o rozmiarze n.
