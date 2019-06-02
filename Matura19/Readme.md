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
## Rozwiązania:
1. S1 - Wersja iteracyjna o złożoności liniowej O(n) = n
2. S2 - Wersja iteracyjna o złożoności logarytmicznej O(n) = log n
2. S3 - Wersja rekurencyjna o złożoności logarytmicznej O(n) = log n
