# PPO - podstawy programowania obiektowego

Te repozytorium zawiera moje propozycje rozwiązania zadanej w instrukcji refaktoryzacji kodu
na chwilę obecną te rozwiązania **nie zostały** skonsultowane z prowadzącym więc mogą być błędne

## Odnośnie operatora new - zadanie 8e i 8f
Kiedy już napiszemy nasz wspaniały program i spróbujemy go uruchomić w debuggerze keila może się okazać że debugger się "zawiesza" już w pliku Startup.s

Jest to spowodowane dwoma rzeczami:
1. używamy operatora **new** więc pamięć próbuje być włożona na stertę
2. rozmiar sterty w pliku Startup.s który został dostarczony jest ustawiony na 0

***Możliwe rozwiązanie:***
- otworzyć plik Startup.s i znaleźć linijkę:
```
Heap_Size       EQU     0x00000000
```
- po **EQU** zamiast zer wpisać wartość jaką nam zajmą rzeczy na stercie (np. 0x000000FF)
- skompilować ponownie projekt

## *Ostrzeżenie: przy kopiowaniu folderu po ponownym otwarciu projektu lepiej zamknąć wszystkie pliki .h w keilu i otworzyć na nowo, dzięki temu unikniemy sytuacji, że zmodyfikujemy plik tam gdzie nie chcemy*
