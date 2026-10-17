# Roguelike from Scratches — "Old Tower"

Prosta, konsolowa gra roguelike napisana od podstaw w **C++** jako projekt akademicki.
Celem było samodzielne zbudowanie logiki gry — bez gotowego silnika ani frameworka do tworzenia gier. Projekt korzysta z biblioteki standardowej C++ oraz systemowych funkcji obsługi terminala.

## Rozgrywka

![Rzeczywisty zapis rozgrywki w terminalu](docs/images/gameplay.gif)

*GIF przedstawia uruchomioną grę, przejście przez pokój startowy i eksplorację kolejnego pomieszczenia. Osobny zrzut poniżej pokazuje walkę turową.*

## Co zostało zaimplementowane

- Losowana liczba i wielkość pomieszczeń oraz przechodzenie między pokojami i piętrami.
- Gracz, przeciwnicy i bossowie z własnymi statystykami.
- Walka turowa: zwykły atak, umiejętności i zużywanie many.
- Ekwipunek, podnoszenie przedmiotów, sklep i zakupy za złoto.
- Punkty doświadczenia, poziomy postaci, zdrowie, mana, obrażenia i pancerz.
- Konsolowa reprezentacja mapy oraz obsługa wejścia z klawiatury.
- Interaktywny tryb testowy do sprawdzania map, przedmiotów, przeciwników i walki.

## Zrzuty ekranu

### Ekran tytułowy

![Ekran tytułowy Old Tower](docs/images/title.png)

### Eksploracja

![Pokój z przeciwnikami i przedmiotami](docs/images/dungeon.png)

### Walka turowa

![Wybór akcji podczas walki](docs/images/combat.png)

Zrzuty pochodzą z działającej wersji konsolowej. Wygląd znaków może zależeć od czcionki i ustawień terminala.

## Uruchomienie

Wymagania: kompilator z obsługą **C++17** oraz terminal UTF-8. Gra ma implementacje obsługi konsoli dla Windows i systemów uniksowych.

### Linux / macOS z GCC lub Clang

W katalogu projektu:

```bash
g++ -std=c++17 -O2 -pthread *.cpp -o old-tower
./old-tower
```

### Windows z MinGW-w64

```powershell
g++ -std=c++17 -O2 *.cpp -o old-tower.exe
.\old-tower.exe
```

Weryfikację kompilacji i materiały do README wykonano na Linuksie. Wersja Windows korzysta z WinAPI i funkcji konsolowych MinGW.

## Sterowanie

| Klawisz | Działanie |
| --- | --- |
| `W`, `A`, `S`, `D` | Ruch postaci |
| `E` | Podniesienie przedmiotu lub interakcja |
| `R` | Rozpoczęcie walki z pobliskim przeciwnikiem |
| `Q` | Zakończenie bieżącej rozgrywki |
| `1`, `2`, ... | Wybór opcji menu, akcji lub umiejętności |

## Organizacja kodu

| Element | Odpowiedzialność |
| --- | --- |
| `Game` | Pętla gry, wejście, zmiana pokoju i piętra |
| `Map` | Mapa, pokoje, drzwi, obiekty i przeciwnicy |
| `Player`, `Istota`, `Potwor` | Postacie i ich zachowanie |
| `CharacterStats`, `Skills`, `Ekwipunek` | Statystyki, umiejętności i przedmioty |
| `Walka`, `Shop` | Walka i zakupy |
| `Platform`, `ConsoleBuffer` | Obsługa terminala dla różnych systemów |
| `Testy` | Interaktywne scenariusze testowe |

## Cel edukacyjny

Projekt pozwolił przećwiczyć programowanie obiektowe, podział kodu na moduły, zarządzanie stanem rozgrywki, generowanie pomieszczeń oraz samodzielną implementację mechanik. To projekt edukacyjny prezentujący proces budowania prostej gry od podstaw.

**Autor: Dominik Zaręba.**
