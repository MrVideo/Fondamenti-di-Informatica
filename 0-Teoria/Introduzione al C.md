# Introduzione al C
#università/informatica
- - - -
# Indice
* [[/Primo programma in C]]
* [[/Variabili]]
* [[/Input da tastiera]]
* [[/Tipi di dati]]
	* [[/Tipo int]]
	* [[/Tipo float]]
	* [[/Tipo char]]
	* [[/Tipo enum]]
	* [[/Ridefinizione di tipo]]
	* [[/Costanti]]
	* [[/Conversioni di tipo]]
	* [[/Funzione sizeof]]
* [[/Istruzioni condizionali]]
	* [[/If statement]]
	* [[/Vero e falso in C]]
	* [[/Operatori relazionali]]
	* [[/Operatori logici]]
	* [[/Ordine tra gli operatori]]
	* [[/If - else statement]]
	* [[/Statement composti]]
	* [[/Switch statement]]
* 	[[/Cicli]]
	* [[/Ciclo for]] 
	* [[/Ciclo while]]
	* [[/Ciclo do-while]]
	* [[/Istruzioni break e continue]]
* [[/Funzioni in C]]
	* [[/Funzioni senza parametri o ritorno]]
	* [[/Funzioni con parametri]]
	* [[/Funzioni con valori di ritorno]]
	* [[/Dichiarazione di una funzione]]
	* [[/Definizione di una funzione]]
	* [[/Visibilità delle variabili - Scoping]]
	* [[/Vita di una variabile]]
	* [[/Regole di Scoping e funzioni]]
* [[/Dati strutturati in C]]
	* [[/Array]]
		* [[/Lettura e scrittura di un Array]]
		* [[/Range]]
		* [[/Subscript]]
		* [[/Copia e confronto di array]]
		* [[/Array e funzioni]]
	* [[/Stringhe]] 
		* [[/Carattere terminatore]]
		* [[/Copia e confronto di stringhe]]
		* [[/Stringhe e funzioni]]
	* 	[[/Matrici]]
	* 	[[/Struct]]
		* [[/Struct con nome e typedef]]
		* [[/Array di struct]]
		* [[/Assegnamento, confronto e funzioni con struct]]
		* [[/Struct come campi]]
	* [[/Programmazione ricorsiva]]
		* [[/Problemi nell’uso della ricorsione]]
* [[/Puntatori]]
	* [[/Un modello “concettuale” della memoria]]
	*  [[/Variabili e memoria]]
	* [[/Cos’è un puntatore?]]
	* [[/Operatore &]]
	* [[/La funzione scanf]]
	* [[/Dereferenziazione di un puntatore]]
	* [[/Operazioni sui puntatori]]
	* [[/Aritmetica dei puntatori]]
	* [[/Funzione sizeof e dimensioni di memoria]]
	* [[/Puntatori a struct]]
	* [[/Array e puntatori]]
		* [[/Gli array nella memoria centrale]]
		* [[/Usare gli array come puntatori]]
	* 	[[/Funzioni e puntatori]]
		* [[/Puntatori come parametri]]
* [[/Gestione dei file in C]]
	* [[/Memoria di massa e memoria centrale]]
	* [[/File come flussi]]
	* [[/Apertura e chiusura di un file]]
	* [[/Modalità di apertura di un file]]
	* [[/Operazioni di lettura e scrittura]]
		* [[/Lettura e scrittura formattata]]
		* [[/Lettura e scrittura di un carattere]]
		* [[/Lettura e scrittura di stringhe]]
		* [[/Operazione di gestione degli errori]]
		* [[/Lettura e scrittura per blocchi]]
	* [[/Accesso diretto]]
		* [[/Spostare l’indicatore di posizione corrente di un file]]
		* [[/Riavvolgere un file]]
		* [[/Capire dove si trova al momento l’indicatore di posizione]]
* 	[[/File e sistema operativo]]
	* [[/File e programmi in C]]
	* [[/Struttura della tabella dei file aperti]]
* [[/Parametri a riga di comando]]
	* [[/Utilizzare gli argomenti in C]]
* [[/Matrici e puntatori]]
* [[/Matrici e funzioni]]
* [[/Array di puntatori e puntatori ad array]]
* [[/Allocazione dinamica della memoria]]
	* [[/Allocare la memoria]]
	* [[/Allocare ed inizializzare la memoria]]
	* [[/Deallocare la memoria]]
	* [[/Lavorare con una sequenza di elementi]]
* [[/Liste]]
	* [[/Sintassi della lista]] 
	* [[/Operazioni sulle liste]]
* [[/Programmazione modulare]]
	* [[/Linee guida]]
	* [[/Modularizzazione in C]]
* [[/Sistemi operativi]]
	* [[/Architettura del sistema operativo]]
	* [[/Tipi di sistema operativo]]
	* [[/Gestione dei processi nel sistema operativo]]
		* [[/Stato di un processo]]
		* [[/Processi e sistema operativo]]
		* [[/Chiamate al supervisor]]
		* [[/Gestione del quanto di tempo]]
	* [[/Gestione della memoria nel sistema operativo]]
		* [[/Rilocazione]]
		* [[/Paginazione]]
		* [[/Struttura degli indirizzi virtuali]]
		* [[/Struttura degli indirizzi fisici]]
		* [[/Pagine residenti e non]]
	* [[/Gestione delle periferiche]]
* [[/Catena di sviluppo in C]]
* [[/Linguaggio Macchina]]
	* [[/Un modello semplificato di calcolatore]]
- - - -
## Primo programma in C
```c
/* Commento
multilinea */

//Commento singola linea

#include <stdio.h>

int main()
	{
		printf("Hello world\n");
		return 0;
	}
```
* **Librerie**: insiemi di funzioni; possono essere chiamate ed _incluse_ grazie al comando `#include`
* Ogni programma in C deve avere una **funzione principale** `main()` in cui viene eseguito tutto il codice
* La linea `return 0;` _ritorna_ il valore 0, che indica che il programma è stato eseguito correttamente e senza errori
* I **commenti** sono parti di codice che vengono deliberatamente _ignorate_ dal compilatore, perciò possono essere molto utili per etichettare parti del codice e renderne chiaro lo scopo
- - - -
## Variabili
```c
// Programma Room3.c
#include <stdio.h>

int main()
	{
		int lung, larg, area;
		lung = 3;
		larg = 4;
		area = lung * larg;
		printf("La mia stanza è lunga %d metri e larga %d metri\n",lung,larg);
		printf("La mia stanza è grande %d metri quadri\n",area);
		return 0;
	}
```
**Variabile**: spazio nella memoria del calcolatore cui viene assegnato un valore.
In C, la variabile va _dichiarata_: si dice al calcolatore il tipo di variabile e le si assegna un nome.
Nel programma possiamo _assegnare_ un valore ad una variabile attraverso il simbolo `=`. L’assegnazione funziona **da destra verso sinistra**, quindi non ha senso scrivere `3 = lung;` per esempio, perché il compilatore si aspetta il nome di una variabile a sinistra dell’uguale.
Nel caso di questo programma, i valori delle variabili non sono assegnabili dall’utente, a meno che egli non abbia accesso al codice sorgente. Necessitiamo di un _input_ da tastiera.
- - - -
## Input da tastiera
```c
#include <stdio.h>

int main()
	{
		int lung, larg, area;

		scanf("%d",&lung);
		scanf("%d",&larg);

		area = lung * larg;

		printf("La mia stanza è lunga %d metri e larga %d metri\n",lung,larg);
		printf("La mia stanza è grande %d metri quadri\n",area);
		return 0;
	}
```
* I simboli `%d` e simili sono dei **segnaposto** per dei valori. Grazie ad essi si possono specificare anche dei pattern particolari di input nel comando di input così: `scanf("%d, %s, %f",&a,&b,&c);`
* L’operatore `&` indica l’**assegnazione** del valore in input all’indirizzo di memoria della variabile specificata
- - - -
## Tipi di dati
**Tipi di dati Built-In**
* `int`: numeri interi (usa la CPL2)
* `float`: numeri a virgola mobile, singola precisione (usa lo standard IEEE 754)
* `double`: numeri a virgola mobile, doppia precisione (usa lo standard IEEE 754)
* `char`: caratteri (1 byte, 0-255)

### Tipo int
Rappresenta i numeri interi e ne esistono di più tipi:
* `short int` o `short`: numeri interi di piccole dimensioni
* `long int` o `long`: numeri interi di grandi dimensioni
* `unsigned`: intero _senza segno_, ossia solo positivo. Può raggiungere **valori assoluti più grandi** non avendo da rappresentare il segno
Si segue la seguente espressione per definire la differenza fra i tipi di `int`:
`mem(short) <= mem(int) <= mem(long)`
La quantità di memoria lasciata ai vari tipi di `int` dipende da ogni compilatore, ma in genere:
* Sistema 32 bit: 2 byte per `short` e 4 byte per `int` e `long`
* Sistema 64 bit: 2 byte per `short`, 4 byte per `int` ed 8 byte per `long`

Esempi:
```c
int a; // Dichiarazione
a = 0; // Inizializzazione
int b = 0, c = 1; / Dichiarazione ed inizializzazione 

int max = 2147483647; // Massimo valore int
int min = -2147483648; // Minimo valore int

unsigned int big = 4294967295; // Massimo valore unsigned
unsigned int err = -1; // Massimo valore unsigned

short int ooki = 32767; // Massimo valore short int
short int smol = -32768; // Minimo valore short int 

short unsigned int = 65535; // Massimo valore short unsigned 

long int biggus = 4294967295; // Massimo valore big int 
long int smollest = -4294967296; // Minimo valore big int 
```

Tipi di operazioni:
```c
int a,b = 5,c = 3;

a = b + c + 10; // Addizione 
a = (b + 3) * c; // Addizione e moltiplicazione 
a = 4 + b - c; // Addizione e sottrazione 
a = b / c; // Divisione intera 
a = b % c; // Resto della divisione intera 
```

Abbreviazioni:
```c
a += 3; // a = a + 3 
a -= 3; // a = a - 3 
a *= 3; // a = a * 3 
a /= 3; // a = a / 3 

a++; // a = a + 1 
a--; // a = a - 1 
```

Segnaposti:
```c
int i;
unsigned int u;
short s;
unsigned short us;
long l;
unsigned long ul;

scanf("%d",&i); // Intero 
scanf("%u",&u); // Intero unsigned 
scanf("%d",&s); // Short 
scanf("%u",&us); // Short unsigned 
scanf("%ld",&l); // Long 
scanf("%lu",&ul); // Long unsigned 
```

### Tipo float
I due tipi di dati per numeri reali _built-in_ nel linguaggio C sono il `float` ed il `double`, che corrispondono a _single precision_ e _double precision_ nello standard IEEE 754-1985.
La quantità di memoria usata per le variabili dipende dall’architettura del calcolatore usato.
```c
// Floating point 

float f1 = 1.045;
float f2 = .855;
float f3 = 4.5567e3; // Notazione scientifica 
float f4 = 4.53e-2; // Notazione scientifica 

// Double precision 

double d1 = .0005;
double d2 = -4.3e50; // Precisione molto maggiore 
double d3 = 4.2e-78; // Precisione molto maggiore 
```
**Nota**: nell’assegnare delle costanti reali, il C le memorizza come `double`, quindi nel calcolare quella costante con un `float` o nel convertire la costante a `float` verranno persi 16 bit di precisione. Per specificare che una costante è di tipo `float` basta aggiungere una _f_ in fondo al valore: `const PI = 3.14f;`.

Operazioni aritmetiche:
```c
float a,b = 5.3,c = 3.2;

a = b + c + .4; // Addizione
a = b * c; // Moltiplicazione
a = 4 + b - c; // Addizione e sottrazione
a = (b - 0.3) / (c + 0.8); // Divisione, sottrazione ed addizione

float x,y,z;

z = x / y; // Il risultato sarà decimale

int n,m;

z = n / m; // Il risultato sarà intero
```

### Tipo char
Viene rappresentato attraverso un solo byte e contiene la codifica numerica di un carattere, ossia un valore numerico nell’intervallo tra 0 e 255 compresi.
```c
char a,b,c = 'q'; // I caratteri si indicano negli apici (')

a = "q"; // Errore: "q" è una stringa
a = '\n'; // Corretto
a = 'ps'; // Errore: sarebbe una stringa, non un carattere

a = 75; // Corretto: sarà inserito il carattere con valore 75
a = 'c' + 1; // Carattere 'd'
a = 'c' - 1; // Carattere 'b'

a = 20; // a = 20
a *= 4; // a = 80
a -= 10; // a = 70 - Corrisponde ad 'F'
```

Lettura e scrittura:
```c
char c;

printf("Inserire un carattere: ");
scanf("%c",&c);

printf("\nIl carattere inserito è %c\n",c);
printf("La sua codifica numerica è %d\n,c);
```

### Tipo enum
Consente di elencare una sequenza di valori simbolici che la variabile può assumere. I valori vengono codificati come interi a partire da zero.
Non è un vero e proprio tipo di dato nuovo perché utilizza interi, ma permette di dare nomi ai vari valori che posso voler assegnare in futuro alla mia variabile.
```c
enum {falso, vero} condizione1, condizione2;

condizione1 = falso;
condizione2 = vero;

printf("condizione1 = %d\n",condizione1); // Stampa 0
printf("condizione2 = %d\n",condizione2); // Stampa 1
```

Esempio:
```c
enum{lun, mar, mer, gio, ven, sab, dom} giorno;

giorno = mar; // Il valore assegnato alla variabile nella memoria del calcolatore sarà 1 (intero)
```

### Ridefinizione di tipo
Crea un alias di un tipo di dato.
Sintassi: `typedef int newName`
Rende più semplice cambiare tipo di variabile in un programma intero, poiché basta cambiare il tipo in `typedef`.

Esempio:
```c
typedef enum{lun,mar,mer,gio,ven,sab,dom} giorno;
giorno oggi;
oggi = gio;

typedef int colore; // Intero perché si usano i codici RAL
colore coloreMacchina;
coloreMacchina = 5;
```

### Costanti
Il loro valore non cambia e non può essere cambiato durante l’esecuzione.
Si definiscono in due modi:
`const type name = value;` oppure `#define name value`.

Esempio:
```c
#include <stdio.h>
#define vero 1 // Specie di definizione di simbolo che viene poi sostituito

int main()
	{
		const int falso = 0; // Variabile con valore che non può essere cambiato
		return 0;
	}
```

### Conversioni di tipo
Il C è un linguaggio con **forte tipizzazione**: bisogna sempre dichiarare il tipo delle variabili. Il C consente di eseguire espressioni ed assegnazioni solo se le variabili coinvolte hanno tipi compatibili.
Nel caso di espressioni aritmetiche, se gli operandi sono di tipo diverso, il tipo inferiore viene convertito temporaneamente ad un tipo superiore per garantire che non vi siano perdite di informazione:
`int < long < unsigned long < float < double`
Se necessario, è possibile effettuare una **conversione esplicita**, detta _cast_: `(tipo) <espressione>`

Esempio:
```c
int x;
float y = x / 5;
float y = ((float) x) / 5; // Cast corretto
```

### Funzione sizeof
Con questa funzione si può trovare la dimensione di memoria allocata ad un tipo di variabile in byte.
Sintassi: `sizeof(type)`
- - - -
## Istruzioni condizionali
Sono istruzioni che servono a _prendere delle scelte_ durante l’esecuzione di un programma ed a cambiare il percorso seguito da esso.

### If statement
Istruzione condizionale base
Sintassi:
```c
if(condition)
	{
		statement;
	}
```
Semantica: lo statement viene eseguito **solo se** la condizione è vera.

### Vero e falso in C
In C non c’è un tipo di dato specifico per rappresentare i concetti di vero e falso. Una condizione assume un valore intero pari a:
* 0 se la condizione è falsa
* 1 se la condizione è vera
In generale, **ogni valore diverso da 0 è considerato vero**.

### Operatori relazionali
Operano su valori numerici e di carattere e possono essere espressioni aritmetiche, variabili o costanti.
```c
>  // Maggiore
<  // Minore
== // Uguale
<= // Miniore o uguale
>= // Maggiore o uguale
!= // Diverso
```

### Operatori logici
Consentono di costruire condizioni complesse a partire da condizioni più semplici e sono quattro:
* AND (Binario)
* OR (Binario)
* NOT (Unario)
* XOR (Binario)
Possono essere definiti in maniera univoca con la **tavola della verità**:
* **Operatori binari**
![](Introduzione%20al%20C/image_2020-09-30_14-07-27.png)
* **Operatore unario NOT**
![](Introduzione%20al%20C/image_2020-09-30_14-07-40.png)
Nel linguaggio C, la sintassi degli operatori logici è:
```c
condition && condition //AND
condition || condition //OR
!condition //NOT
```

### Ordine tra gli operatori
Un’espressione viene valutata nel seguente ordine:
1. Operatori `++` e `--`
2. Operatore `!`
3. Operatori aritmetici
4. Operatori relazionali
5. Operatore `&&`
6. Operatore `||`
È possibile utilizzare le parentesi tonde per specificare la precedenza desiderata.
Non si possono usare altri tipi di parentesi per questo scopo, ma sono consentiti vari livelli di parentesi tonde annidati.

Esempio:
```c
#include <stdio.h>

int main()
	{
		int anni,cc,giovane,altaCC;

		printf("Inserire l'età: ");
		scanf("%d",&anni);
		giovane = (anni <= 20);
		altaCC = (cc>1400);
		if(giovane && altaCC)
			printf("Incremento: 70\%\n");
		if(giovane && !altaCC)
			printf("Incremento: 40\%\n");
		if(!giovane && altaCC)
			printf("Incremento: 10\%\n");
		if(!giovane && !altaCC)
			printf("Incremento: nessuno\n");

		return 0;
	}
```

### If - else statement
Consente di scegliere fra due alternative nel flusso di esecuzione
Sintassi:
```c
if(condition)
	{
		statement; //Esegue questa se condition == vera
	}
else
	{
		statement; //Esegue questa se condition == falsa
	}
```

Esempio concreto:
```c
#include <stdio.h>

int main()
	{
		char c;
		printf("Inserire il carattere maiuscolo: ");
		scanf("\n%c",&c);
		
		if(c>='A' && c <='Z')
			printf("\nLa traduzione è %c\n",c+32);
		else
			printf("\nIl carattere inserito non è maiuscolo\n");

		return 0;
	}
```

### Statement composti
Scrivere un programma che, letti due numeri, individua quello maggiore e quello minore
```c
#include <stdio.h>

int main()
	{
		float max, min, temp;
		printf("\nInserire il primo numero: ");
		scanf("%f",&max);
		printf("\nInserire il secondo numero: ");
		scanf("%f",&min);
		if(max<min)
			{ //Se ci sono più istruzioni, vanno racchiuse nelle graffe
				temp = min;
				min = max;
				max = temp;
			}
		printf("\nmax = %f - min = %f\n",max,min);
		
		return 0;
	}
```

### Switch statement
Serve a scegliere fra varie opzioni simili in modo più veloce.
Sintassi:
```c
switch (expression)
	{
		case expression: // Quanti se ne vogliono
		<code>
		break; // Esce dal blocco switch
		[...]
		default: // Nessuna condizione soddisfatta nei casi 
		<code>
	}
```
- - - -
## Cicli
Servono a ripetere le stesse istruzioni più volte.

### Ciclo for
Sintassi:
```c
for( initialization ; condition ; update )
	{
		statement1;
		statement2;
		statement3;
		[...]
		statementN;
	}
```

### Ciclo while
Sintassi:
```c
while(condition)
	{
		body
	}
```

### Ciclo do-while
Sintassi:
```c
do
	{
		body
	} while (condition)
```

### Istruzioni break e continue
* L’istruzione `break` interrompe l’esecuzione del ciclo
* L’istruzione `continue` passa direttamente all’iterazione seguente
- - - -
## Funzioni in C
### Funzioni senza parametri o ritorno
```c
void func()
	{
		body
	}
```
Richiamo della funzione: `func();`

### Funzioni con parametri
```c
void func(type1 par1, type2 par2) // Parametri formali
	{
		body
	}
```
Richiamo della funzione: `func(val1, val2) // Parametri attuali`
I parametri attuali vengono assegnati ai parametri formali alla chiamata della funzione.

### Funzioni con valori di ritorno
```c
type func(type1 par1, type2 par2)
	{
		body

		return returnValue;
	}
```

### Dichiarazione di una funzione
La dichiarazione del _prototipo_ (o _signature_) di una funzione specifica **nome**, **tipo di valore** e **parametri** della funzione stessa.
`type funcName(parameters);`
Serve ad informare il compilatore che quella funzione sarà usata nel programma.
La dichiarazione del prototipo deve _precedere_ il punto in cui la funzione viene richiamata. Abitualmente, le dichiarazioni vengono posizionate in cima al programma, _prima_ della funzione `main()`.

### Definizione di una funzione
La definizione specifica _sia il prototipo che la sequenza di istruzioni_ contenute nella funzione.
```c
type funcName(parameters)
	{
		body
	}
```
La funzione può essere definita ovunque nel programma. Se la definizione viene definita _prima_ del punto in cui la funzione viene richiamata per la prima volta, la dichiarazione **può essere omessa**.
Per semplicità, si consiglia di utilizzare le dichiarazioni dei prototipi prima della funzione `main()` e definire le suddette funzioni _dopo_ alla funzione `main()`.

### Visibilità delle variabili - Scoping
```c
void f(int p);

float g;

int main()
{
	int a;
	for(a = 0; a < 5; a++)
	{
		int b;
	}
}

void f(int p)
{
	int c;
}
```
**In quali parti del programma sono visibili le variabili g, a, b, c e p?**
Regole di **scoping** in C:
* Ogni area racchiusa fra `{}` costituisce un **blocco**
* Le variabili dichiarate all’interno di un blocco sono dette **locali** e sono visibili solo all’interno di quel blocco
* Le variabili dichiarate all’esterno di tutti i blocchi, ossia dichiarate all’interno del **blocco globale**, sono dette variabili **globali** e sono visibili ovunque all’interno del programma
* Se due variabili sono dichiarate con lo stesso nome ma in blocchi diversi, la regola generale è che la variabile locale **oscura** la variabile globale

### Vita di una variabile
* Le variabili locali vengono _create_ all’atto della loro dichiarazione dentro ad un blocco
* Quando l’esecuzione del blocco è terminata, tutte le variabili locali di quel blocco vengono **distrutte**

Esempio:
```c
if(a != 0)
{
	int x;
	scanf("%d%, &x);
	x = x / a;
} // Qui la variabile x viene distrutta

printf("%d", x); // Errore
```

* Le variabili locali che sono dichiarate con la parola chiave `static` **mantengono il loro valore** tra l’esecuzione di un blocco ed il successivo
* L’inizializzazione di una variabile `static` viene fatta, sempre e comunque, **una volta sola** nel programma.

Esempio:
```c
int ris, i;
for(i = 0; i < 5; i++)
{
	static int s = 0;
	s++;
	ris = s;
}
printf("%d\n", ris); // Stampa i numeri da 1 a 5 correttamente
```

### Regole di Scoping e funzioni
* I parametri formali sono a tutti gli effetti variabili locali di una funzione e perciò seguono le regole già viste
* Le variabili globali sono visibili e **modificabili** all’interno di una funzione
* Questo comporta la possibilità di creare _effetti indesiderati_ difficili da prevedere alla chiamata della funzione
* È opportuno limitare l’uso di variabili globali per evitare problemi inaspettati
* Viceversa, è meglio dichiarare statement `typedef` e funzioni nel blocco globale, per essere poi utilizzabili nell’intero programma
- - - -
## Dati strutturati in C
## Array
Offrono la possibilità di rappresentare in modo compatto una collezione di variabili.
Sintassi: `float vendite[12]`
* L’accesso ad un elemento avviene attraverso il nome dell’array seguito dalla posizione dell’elemento stesso fra parentesi quadre, il **subscript**
* La posizione deve essere intera o compatibile e parte da 0, fino alla dimensione dell’array meno uno
* Ogni singolo elemento dell’array è del tutto analogo ad una variabile di tipo semplice

Esempio:
```c
float vendite[12];
float totale = 0;
int i;

for (i = 0; i < 12; i++)
{
	totale = totale + vendite[i];
}

scanf("%f",&vendite[0]);
printf("\nLe vendite di Dicembre sono state: %f", vendite[11]);
printf("\nL'incremento è pari a %f\n", (vendite[1] - vendite[0]) / vendite[0]);
```

È possibile inizializzare un array in fase di dichiarazione così:
`type name[N] = {val1, val2, ... ,valN};`
Si può inizializzare a zero un array numerico nel seguente modo:
`float v[100] = {0};`
In questo caso, il primo elemento di v è 0, e tutti gli altri vengono portati ad un valore di default, che in questo caso è sempre 0.
Nel caso `float v[100] = {4};`, avremo il primo elemento con valore 4, mentre gli altri verranno inizializzati a 0 di default.

### Lettura e scrittura di un Array
* La lettura e la scrittura avviene **un elemento alla volta**
* È molto conveniente usare il **ciclo for** per riempire e leggere gli array
Esempio:
```c
int i;
float prezzo[4];
for(i = 0; i < 4; i++)
{
	scanf("%f", &prezzo[i]);
}
for(i = 0; i < 4; i++)
{
	printf("prezzo[%d] = %f", i, prezzo[i]);
}
```

Esempio:
```c
#include <stdio.h>

int main()
{
	float vendite[6];
	int i, j;

	for(i = 0; i < 6; i++)
	{
		printf("Vendite di %d mese/i fa: ", i + 1);
		scanf("%f", &vendite[i]);
	}
	for(i = 5; i >= 0; i--)
	{
		if(i < 0) printf("%d mesi fa ", i + 1);
		else printf("1 mese fa: ");
		for(j = 1; j < vendite[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
```

### Range
In C è il programmatore a doversi preoccupare di non accedere a elementi dell’array non validi.
```c
float prezzo[4];
prezzo[4] = 42; //Non esiste un elemento 4 dell'array
```

### Subscript
È possibile usare `enum` e `char` come subscript.
Esempio:
```c
typedef enum{gen, feb, mar, apr, mag, giu, lug, ago, set, ott, nov, dic} mese;
float vendite [12];
mese m;

printf("Vendite di Aprile: %f\n", vendite[apr]);
for(m = gen; m <= dic; m++)
{
	scanf("%f", &vendite[m]);
}
```

Esempio:
```c
float freq[26];

printf("La frequenza della lettera f è: %f\n", freq['f' - 'a']);
```

### Copia e confronto di array
La copia fra due array **non può essere fatta** tramite un semplice assegnamento:
```c
int a[5] = {1, 2, 3, 4, 5}, b[5];
b = a; //Errore, non funziona
```

È necessario copiare **un elemento per volta**:
```c
for(i = 0; i < 5; i++)
	b[i] = a[i];
```

Analogamente, non è possibile usare gli operatori di confronto con gli array, ma occorre effettuare il confronto un elemento per volta:
```c
int a[5], b[5], i;
a == b; //Errore di sintassi

for(i = 0; i < 5; i++)
{
	a[i] == b[i]; //Un elemento per volta
}
```

### Array e funzioni
È possibile utilizzare gli array come parametri di una funzione in C, tuttavia:
* Il passaggio dei parametri si basa sull’assegnamento e non è ammissibile effettuare un assegnamento fra array o fra array e variabili scalari
* L’uso degli array come parametri di funzione richiede uno strumento aggiuntivo: **i puntatori**

## Stringhe
Gli array di tipo `char` sono anche detti _stringhe_. Dal momento che sono molto usati, il C mette a disposizione funzioni specifiche per questo tipo di dato.

Esempio:
```c
char nome[10];

nome[0] = 'A';
nome[1] = 'n';
nome[2] = 'n';
nome[3] = 'a';
```

Questo modo di assegnare i caratteri uno ad uno è poco efficiente. Un modo migliore sarebbe:
```c
typedef char stringa[30];
stringa messaggio;
```

In C, le costanti di tipo stringa si rappresentano come una sequenza di caratteri racchiusi tra `" "`. L’inizializzazione può avvenire in fase di dichiarazione:
```c
typedef char stringa[30];
stringa messagio = "prova";
```

La lettura e la scrittura di stringhe è particolarmente semplice:
```c
char nome[30];

printf("Inserisci il tuo nome: ");
scanf("%s", nome); //Per la lettura delle stringhe non bisogna anteporre & al nome della stringa
printf("Ciao %s!\n", nome);
```

Con `%s`, `scanf` legge una stringa fino al primo spazio. Per leggere stringhe che includono uno spazio si utilizza la stringa di formato `%[^\n]`
```c
printf("Inserisci il tuo nome: ");
scanf("%[^\n]", nome);
```

### Carattere terminatore
In C esiste un carattere speciale che indica **la fine di una stringa**: `\0`. Questo carattere ha codice 0 nella tabella ASCII.
Quando la funzione `printf` individua questo carattere speciale, **smette di stampare a video gli elementi della stringa**.
Tutte le funzioni standard di libreria del C gestiscono autonomamente la posizione e l’individuazione del carattere `\0`. Nel caso però io voglia dichiarare ed inizializzare manualmente una stringa carattere per carattere, **devo aggiungere il carattere terminatore** alla fine della stringa.
```c
char msg[30];
msg[0] = 'A';
msg[1] = 'B';
msg[2] = '\0'; //Senza questa inizializzazione, printf stamperebbe anche altri caratteri non prevedibili fino a stampare tutto l'array msg
printf("%s", msg);
```
Spesso si tende ad aggiungere 1 alla dimensione dell’array stringa per lasciare spazio al carattere terminatore.

### Copia e confronto di stringhe
Le stringhe sono comunque array di `char`, perciò hanno le stesse limitazioni discusse per gli array. Tuttavia esistono due funzioni definite nella libreria `string.h` che facilitano le operazioni di copia e confronto.
* Copia: `strcpy(s1, s2); //Copia s2 in s1`
* Confronto: `strcmp(s1, s2); //Ritorna 0 se s1 è uguale a s2`

### Stringhe e funzioni
È possibile utilizzare le stringhe come parametri di funzioni in C, ma poiché i parametri di una funzione si basano sull’assegnazione, servono i **puntatori** per utilizzare le stringhe come parametri.

## Matrici
Le matrici sono strutture dati bidimensionali e vengono rappresentati come _array di array_:
```c
typedef int matrice[N][M];
matrice a;

float b[3][3];
```

Accesso ad un elemento: `b[1][0] = 30;`

La lettura avviene **un elemento alla volta**, come per gli array:
```c
float a[N][M];

for(i = 0; i < N; i++)
{
	for(j = 0; j < M; j++)
	{
		scanf("%f", &a[i][j]);
	}
}
```

La scrittura delle matrici è identica:
```c
float a[N][M];

for(i = 0; i < N; i++)
{
	for(j = 0; j < M; j++)
	{
		printf("%f", &a[i][j]);
	}
}
```

La somma fra matrici funziona in modo analogo:
```c
float a[N][M];
float b[N][M];
float sum[N][M];

for(i = 0; i < N; i++)
{
	for(j = 0; j < M; j++)
	{
		sum[i][j] = a[i][j] + b[i][j];
	}
}
```

Inizializzazione manuale:
```c
int a[2][3] = {{1, 2, 3}, {4, 5, 6}}, b[2][3];
b = a; //Errore di sintassi
```

Analogamente agli array, non si possono utilizzare operatori di confronto con le matrici. I confronti vanno fatti **un elemento alla volta**.

## Struct
Devo rappresentare i libri in una biblioteca, utilizzando delle variabili:
```c
int anno;
int pagine;
char autore[30];
char titolo[100];
```

Se i libri fossero tanti, questo tipo di soluzione non sarebbe praticabile. Inoltre, queste variabili così impostate non sono in alcun modo collegate tra loro.
Il problema si può affrontare usando le `struct`:
```c
struct
{
	int anno; //Campi
	int pagine;
	char autore[30];
	char titolo[100];
} libro1, libro2; //Variabili
```

Rispetto agli array, gli elementi non sono numerati ma hanno un **nome** e **possono essere di tipi diversi**.
Per accedere ad un campo di una struct si usa la sintassi `var.campo`.

Esempio:
```c
struct
{
	int anno; //Campi
	int pagine;
	char autore[30];
	char titolo[100];
} l, l2;

l.anno = 1998; //Accesso al campo "anno" di "l"
```

La lettura di una struct avviene **campo per campo**:
```c
printf("Inserire anno: ");
scanf("%d", &l.anno);
printf("Inserire numero pagine: ");
scanf("%d", &l.pagine);
printf("Inserire autore: ");
scanf("%[^\n]", l.autore);
printf("Inserire titolo: ");
scanf("%[^\n]", l.titolo);
```

### Struct con nome e typedef
Con nome:
```c
struct libro
{
	int anno;
	int pagine;
	char autore[30];
	char titolo[100];
};

struct libro l;
```

Con `typedef`:
```c
typedef struct
{
	int anno;
	int pagine;
	char autore[30];
	char titolo[100];
} libro;

libro l;
```

Solitamente in questo caso si pone la `struct` nel blocco globale per poter creare variabili della `struct` ovunque nel programma.

### Array di struct
È possibile dichiarare un array di struct. In questo modo è possibile gestire una sequenza di elementi ognuno dei quali rappresenta un dato strutturato.

Esempio:
```c
typedef struct
{
	int anno;
	int pagine;
	char autore[30];
	char titolo[100];
} libro;

libro biblioteca[N];
```

Esempio: leggere i dati di una biblioteca e trovare il libro più vecchio.
```c
#include <stdio.h>
#define N 3

typedef struct
{
	int anno;
	int pagine;
	char autore[30];
	char titolo[100];
} libro;

int main()
{
	libro biblioteca[N];
	int i, oldest;

	for(i = 0; i < N; i++)
	{
		scanf("%d", &biblioteca[i].anno);
		scanf("%d", &biblioteca[i].pagine);
		scanf("%[^\n]", biblioteca[i].autore);
		scanf("%[^\n]", biblioteca[i].titolo);
	}
	
	oldest = 0;
	for(i = 1; i < N; i++)
	{
		if(biblioteca[i].anno < biblioteca[oldest].anno)
		{
			vecchio = i;
		}
	}

	printf("Dati libro più vecchio\n");
	printf("Anno: %d\n", biblioteca[oldest].anno);
	printf("Numero pagine: %d\n", biblioteca[oldest].pagine);
	printf("Autore: %s\n", biblioteca[oldest].autore);
	printf("Titolo: %s\n", biblioteca[oldest].titolo);

	return 0;
}
```

### Assegnamento, confronto e funzioni con struct
Il C **permette di effettuare assegnamento fra struct** senza dover considerare un elemento alla volta:
```c
libro l1, l2;
l1 = l2;
```

Non è invece possibile effettuare confronti fra struct ma occorre considerare **un campo per volta**:
```c
if(l1 == l2) //Errore di sintassi
```

Le struct **possono essere usate come parametri e valori di ritorno** delle funzioni senza particolari accorgimenti:
```c
void f(libro l);
```

### Struct come campi
```c
typedef struct
{
	int anno;
	int pagine;
} edizione;

typedef struct
{
	char autore[30];
	char titolo[100];
	char editore[100];
	edizione edizioni[10];
	int edizioni;
} libro;

libro l;
//l.edizioni[0].anno è la sintassi per accedere al campo edizioni e quindi alla struct edizione
```

## Programmazione ricorsiva
La **ricorsione** si ha quando una funzione **richiama se stessa** (ricorsione _diretta_) oppure **un’altra funzione** (ricorsione _indiretta_).
È una tecnica di programmazione molto potente che permette di risolvere in maniera elegante problemi complessi.
Per risolvere un problema con la programmazione ricorsiva sono necessari alcuni elementi:
* **Caso base**: caso _elementare_ del problema che può essere immediatamente risolto
* **Passo ricorsivo**: chiamata ricorsiva per risolvere uno o più problemi più semplici
* **Costruzione della soluzione**: costruzione della soluzione sulla base del risultato delle chiamate ricorsive

Esempio: **Calcolo del fattoriale**
* **Definizione**: `f(n) = n! = n * (n - 1) * (n - 2) * … * 3 * 2 * 1`
* **Passo ricorsivo**: `f(n) = n * f(n - 1)`
* **Caso base**: `f(0) = 1`
* **Risoluzione**:
```c
int factRic(int n)
{
	if(n == 0)
		return 1; //Caso base
	else
		return n * factRic(n - 1); //Passo ricorsivo
}
```

Esempio: **Sequenza di Fibonacci**
È una sequenza di numeri interi in cui ogni numero si ottiene sommando i due precedenti nella sequenza. I primi due numeri sono per definizione 1.
* **Caso base**: `f1 = 1`, `f2 = 1`
* **Passo ricorsivo**: `fn = fn-1 + fn-2`
* **Risoluzione**:
```c
int fiboRic(int n)
{
	if(n == 1 || n == 2)
		return 1;
	else
		return fiboRic(n - 2) + fiboRic(n - 1);
}
```

Esempio: **Massimo Comune Divisore**
Algoritmo di Euclide:
* **Caso base**: se `m = n`, `MCD(m, n) = m`
* **Caso ricorsivo**: se `m > n`, `MCD(m, n) = MCD(m - n, n)`
* **Caso ricorsivo**: se `m < n`, `MCD(m, n) = MCD(m, n - m)`
* **Risoluzione**:
```c
int MCDEuclidRic(int m, int n)
{
	if(m == n)
		return m;
	else if (m > n)
		return MCDEuclidRic(m - n, n);
	else
		return MCDEuclidRic(m, n - m);
}
```

### Problemi nell’uso della ricorsione
1. Errori nella ricorsione
Deve essere presente un caso base _sempre raggiungibile_.

Esempi:
* Loop infinito (argomento decrescente)
```c
int factRic(int n)
{
	return n * factRic(n - 1); //Non c'è il caso base
}
```

* Loop infinito (chiamate identiche)
```c
int factRic(int n)
{
	if(n == 0)
		return 1;
	else return factRic(n); //Manca il passo ricorsivo
}
```

2. Uso della memoria
La programmazione ricorsiva comporta spesso un uso inefficiente della memoria per la gestione degli spazi di lavoro delle chiamate generate. In alcuni casi viene comunque preferita ad altri approcci per la sua eleganza e semplicità. In altri casi, si può ricorrere ad implementazioni iterative.

* **Esempio**: funzione iterativa che calcola il numero n di Fibonacci:
```c
int fibList(int n)
{
	int f1 = 1, f2 = 1, tmp, i;
	for(i = 3; i <= n; i++)
	{
		tmp = f2;
		f2 = f1 + f2;
		f1 = tmp;
	}
	return f2;
}
```

- - - -
## Puntatori
Sono uno strumento che serve a gestire la memoria del calcolatore in maniera più approfondita. Per comprenderli bisogna capire meglio come funzioni la memoria di un calcolatore.

### Un modello “concettuale” della memoria
La memoria può essere rappresentata da una tabella con tante righe, le **celle di memoria**, di dimensione 8 bit, ognuna delle quali ha un **indirizzo** che la identifica, anch’esso rappresentato con dei bit.
Quando il calcolatore deve scrivere sulla memoria, dovrà scegliere un indirizzo di memoria in cui scrivere e poi memorizzare l’indirizzo per tornare a leggere quella cella.
Si possono fare delle stime su quanta memoria possa servire ad un programma. Se in ogni cella abbiamo un byte ed ho a disposizione 32 bit per rappresentare un indirizzo, allora abbiamo 2^32 byte di memoria a disposizione (circa 4 Gigabyte).
Non si può effettuare una scelta di quanti bit utilizzare computer per computer poiché è necessario che il programma che creo **funzioni a prescindere dal calcolatore**. Perciò la quantità di bit si sceglie a livello di **sistema operativo**: lo standard precedente era 32 bit, ora 64 bit.

### Variabili e memoria
Nella memoria entra tutto ciò che riguarda il nostro programma, in particolare le **variabili**. Non è compito nostro inserire una variabile nella memoria, noi ci limitiamo a darle un nome. Sono il compilatore ed il sistema operativo che decidono dove porre una variabile nella memoria. Con i puntatori, noi non possiamo scegliere l’indirizzo delle variabili ma potremo usare l’indirizzo di una variabile per **accedervi**.
Una cella di memoria ha dimensione 8 bit, ma esistono variabili, come abbiamo visto, che occupano più di 8 bit, come un float (che ne occupa 32). Il compilatore allora sceglie un indirizzo di memoria di partenza e riserverà **tutti gli indirizzi sequenziali necessari** ad ospitare quella variabile.

### Cos’è un puntatore?
Un puntatore è un tipo di dato che viene usato in C per dichiarare una variabile che deve contenere un **indirizzo di cella di memoria**.
In gergo, si dice che la variabile _punta_ alla cella di memoria, il cui indirizzo è contenuto nella variabile puntatore.
Quando viene dichiarata una variabile puntatore, è necessario anche specificare il tipo di dato contenuto nelle celle di memoria che verranno _puntate_ alla variabile.
Sintassi: `type *name;`

### Operatore &
Come si assegna un indirizzo di memoria di una variabile ad un puntatore?
```c
float var;
float *p;

var = 3.4;
p = &var; //&: “Indirizzo di...” - p “punta a” var
```
`&` è un operatore unario e restituisce l’indirizzo di memoria di una variabile qualunque.

### La funzione scanf
La funzione scanf ha come parametri la stringa di controllo e l’**indirizzo della variabile** in cui deve essere memorizzato il valore letto da tastiera.

### Dereferenziazione di un puntatore
Come accedere al **contenuto** della cella di memoria puntata dal puntatore:
```c
float var1, var2;
float *p;

var1 = 3.4;
p = &var1;
var2 = *p; //p: indirizzo - *p: contenuto all’indirizzo p
*p = 5.1; //Modifico il contenuto di var1
```

### Operazioni sui puntatori
* Inizializzazione: `float *p = NULL;`
* Assegnamento fra puntatori:
```c
float a = 3.4;
float *p1 = NULL, *p2 = NULL; //Non puntano a niente
p1 = &a; //p1 punta ad a ora
p2 = p1; //p2 punta anch’esso ad a
```
* Assegnamento per dereferenziazione:
```c
float a = 3.4, b;
float *p1 = NULL, *p2 = NULL;
p1 = &a; //p1 punta ad a
p2 = &b; //p2 punta a b
*p2 = *p1; //b = a;
```

### Aritmetica dei puntatori
Il C consente di effettuare somme e sottrazioni sui puntatori:
```c
float *p;
float a;
p = &a;

*(p + 1) = 4.5; //p + 1 != x + 1

/* p + 1 = x + (1 * dim),
dove dim è la dimensione in memoria del tipo associato al puntatore. Poiché p è un puntatore float, allora: dim = 4, perciò:
p + 1 = x + 4 */

p = p + 2; //x + 8
```

Sintassi: `puntatore = puntatore + x`

Semantica:
* Incrementa o decremento l’indirizzo contenuti nel puntatore di x **posizioni**
* La dimensione di ogni posizione dipende dal tipo di puntatore

### Funzione sizeof e dimensioni di memoria
Sintassi: `sizeof(arg)`

Se `arg` è:
* Un **tipo di dato**: ritorna la quantità di memoria in byte necessaria per rappresentare un valore di quel tipo
* Una **variabile scalare**: ritorna la quantità di memoria in byte occupata da quella variabile
* Un **array**: ritorna la quantità di memoria in byte occupata dall’intero array

### Puntatori a struct
L’espressione `(*p).campo` ha la stessa funzione dell’espressione `p->campo`

Esempio:
```c
typedef struct
{
	float x, y;
} punto;

punto p1, p2, *pp = NULL;

p1.x = 4.5;

pp = &p1;

(*pp).x = 3.2; //Equivale a scrivere p1.x = 3.2;
pp->x = 3.2; //Equivale alla scrittura sopra

/*
(p1.x = 3.2;) == ((*pp).x = 3.2;) == (pp->x = 3.2;)
*/
```
- - - -
## Array e puntatori
### Gli array nella memoria centrale
Un array viene memorizzato come un _blocco contiguo_ a partire da un indirizzo di partenza: l’**indirizzo base**. Il nome della variabile array (senza le parentesi quadre per la posizione) equivale all’indirizzo di partenza, ossia l’indirizzo del primo elemento dell’array.

Esempio:
```c
float a[3] = {1.0, 2.1, 3.2}

float p = a; //Indirizzo base dell’array a in p
/*
(p = a) == (p = &a[0])
*/
```

### Usare gli array come puntatori
È possibile accedere ad un array attraverso i puntatori:
```c
float a[5];
int i;

for(i = 0; i < 5; i++)
{
	scanf(“%f”, a + i);
}
```

Più in generale, se `a` è una variabile di tipo array, l’espressione `a[i]` è uguale all’espressione `*(a+i)`.

**Dimensione ed offset di un array**:
```c
float a[5];
float *p = &a[3];

printf(“dimensione a: %lu\n”, sizeof(a) / sizeof(float)); //Stampa 5
printf(“posizione p: %lu\n”, p - a); //Stampa 3
```

Abbiamo già visto scrivere `a` all’interno di un’istruzione: significa scrivere un indirizzo di memoria: l’indirizzo base dell’array `a`. Tuttavia `a` e `p` **non sono la stessa cosa**: `a` è un valore puntatore **costante**. Si può assegnare un valore a `p` perché è una **variabile**, ma non posso fare ciò con `a`. Posso scrivere `a` al posto di `p` in tutte le istruzioni che **non modificano** il valore di `p`, ma che lo utilizzano soltanto.
Ecco perché:
* Non è possibile usare l’operatore `=` per copiare il contenuto di un array o una stringa
* Non si usa `&` per leggere una stringa: il nome della variabile è già il suo indirizzo
* Non si può usare l’operatore `==` per confrontare due array o due stringhe
- - - -
## Funzioni e puntatori
### Puntatori come parametri
In C, i parametri di una funzione possono essere dei puntatori:
```c
void fun(float *a)
{
	a++;
}

int main()
{
	float f = 3.4, *p;
	p = &f;

	fun(p);

	return 0;
}
```

Risultato: `p` continua a puntare ad `f`, mentre `a` punta a `f + 1`, ma poiché quando la funzione `fun(float *a)` termina, la variabile puntatore `*a` viene eliminata, le variabili `p` ed `f` non hanno nessuna modifica.

**Attenzione**:
```c
void fun(float *a)
{
	*a = 0;
}

int main()
{
	float f = 3.4, *p;
	p = &f;
	
	fun(p);
	
	return 0;
}
```

In questo caso, la dereferenziazione fa sì che la variabile a cui punta `p` diventi 0.
Ecco perché si parla, un po’ impropriamente, di passaggio di indirizzo e per valore:
```c
void fun(float *a)
{
	*a = 0;
}

int main()
{
	float f = 3.4;
	
	fun(&f); //Posso solo cambiare il valore di f, non il suo indirizzo
	
	return 0;
}
```

In C, ci sono diverse notazioni che si possono usare per dichiarare un parametro di tipo array:
* `void f(float a[DIM]);`
* `void f(float a[]);`
* `void f(float *a);`
La differenza è solo estetica: tutte e tre le varianti sono funzionalmente equivalenti.
Esempio:
```c
/* Si può anche scrivere:
int sum(int vettore[], int n)
int sum(int vettore[5], int n) (il subscript viene ignorato)
Entrambe vengono tradotte nella forma sottostante
*/

int sum(int *v, int n)
{
	int somma = 0, i;

	for(i = 0; i < n; i++)
		somma += vettore[i]; //vettore[i] == *(vettore + i)
	
	return somma;
}

int main()
{
	int a[5] = {0, 1, 2, 3, 4}, somma;

	somma = sum(a, 5)
}
```
- - - -
## Gestione dei file in C
### Memoria di massa e memoria centrale
La memoria di massa è un dispositivo di memorizzazione generalmente presente in un calcolatore. Si differenzia dalla memoria centrale per dimensioni, costo, persistenza e prestazioni. I **file** sono lo strumento che consente di memorizzare delle informazioni nella memoria di massa del calcolatore.

### File come flussi
Un flusso (_stream_) di dati è un meccanismo i cui principali usi sono:
* Lo scambio di dati con le periferiche
* **Lettura e scrittura** dei dati memorizzati sul disco fisso
In C i file sono quindi rappresentati come flussi e vengono fornite diverse funzionalità nella libreria `stdio.h` per la loro gestione:
* Il flusso di informazione può essere testuale (flusso di caratteri) o binario (flusso di byte)
* Consente di avere file ad _accesso sequenziale_ e ad _accesso diretto_ (o _casuale_)

### Apertura e chiusura di un file
Per poter utilizzare un file in un programma C è prima necessario _aprirlo_:
```c
FILE *file = fopen(filename, mode)
```

* `filename` è il nome del file da aprire, incluso il path
* `mode` è una stringa che serve a specificare come verrà utilizzato il file
* La funzione ritorna un puntatore di tipo `FILE`, una particolare struttura dati che consente di tenere traccia dell’ultima posizione letta e scritta nel file, del suo stato, ecc. Se l’operazione non ha successo, viene ritornato il valore `NULL`.

#### Modalità di apertura di un file
* `r`: Apre un file testuale in lettura
* `w`: Crea un file testuale in scrittura
* `a`: Apre o crea un file testuale e si posiziona alla fine del file
* `rb`: Apre un file binario in lettura
* `wb`: Crea un file binario in lettura
* `ab`: Apre o crea un file binario e si posiziona alla fine del file
* `r+`: Apre un file testuale in lettura e scrittura
* `w+`: Crea un file testuale in lettura e scrittura
* `rb+`: Apre un file binario in lettura e scrittura
* `wb+`: Crea un file binario in lettura e scrittura

Una volta utilizzato un file in un programma, è necessario chiuderlo:
```c
int fclose(FILE *fp)
```

`fp` è il puntatore al file da chiudere.

La funzione ritorna 0 se l’operazione viene eseguita correttamente, altrimenti restituisce un valore speciale `EOF` definito in `stdio.h`, che viene generalmente utilizzato come carattere terminatore di un file.

### Operazioni di lettura e scrittura
Le operazioni di lettura e scrittura possono essere effettuate in quattro modi diversi:
* Precisando il formato dei dati in ingresso ed in uscita
* Accedendo ai dati carattere per carattere
* Linea per linea
* Blocco per blocco
Generalmente si adotta l’accesso linea per linea nel caso di flussi di testo e l’accesso carattere per carattere o blocco per blocco in presenza di flussi binari.

#### Lettura e scrittura formattata
Le funzioni `fprintf` e `fscanf` consentono operazioni formattate analoghe a quelle di `scanf` e `printf`. Restituiscono il numero degli elementi effettivamente letti o stampati o restituiscono un numero negativo in caso di errore.

Sintassi:
```c
int fprintf(fp, ctrl_str, ...)
int fscanf(fp, ctrl_str, ...)
```

`fp` è il puntatore al file dal quale leggere o dove scrivere, gli argomenti successivi sono analoghi a quelli usati con `printf` e `scanf`.

#### Lettura e scrittura di un carattere
* Lettura: `int fgetc(FILE *fp)`
	* Riceve come argomento il file da cui leggere
	* Restituisce il codice del carattere letto o `EOF` in caso di errore
* Scrittura: `int fputc(int c, FILE *fp)`
	* Riceve come argomenti il codice del carattere da scrivere ed il file su cui scrivere
	* Restituisce il codice del carattere scritto o `EOF` in caso di errore

#### Lettura e scrittura di stringhe
* Lettura: `char *fgets (char *s, int n, FILE *fp)`
	* Legge dal file puntato da `fp` fino a n - 1 caratteri (si interrompe nel caso raggiunga prima il carattere `\n` o la fine del file) e mette i caratteri letti nella stringa s (aggiungendo il carattere terminatore `\0`)
	* La funzione restituisce l’indirizzo di `s` se ha successo o `NULL` in caso di errore
* Scrittura: `int fputs (char *s, FILE *fp)`
	* Scrive nel file puntato da `fp` il contenuto della stringa `s` (fino a raggiungere il carattere terminatore `\0`);
	* restituisce 0 in caso l’operazione abbia avuto successo

#### Operazione di gestione degli errori
* `int ferror(FILE *fp)`
	* Controlla se è stato commesso un errore nella precedente operazione di lettura o scrittura
	* Restituisce 0 se nessun errore è stato commesso, un valore diverso da 0 in caso contrario
* `int feof(FILE *fp)`
	* Controlla se è stata raggiunta la fine del file nella precedente operazione di lettura o scrittura
	* Restituisce 0 se la condizione di fine file non è stata raggiunga, un valore diverso da 0 in caso contrario

#### Lettura e scrittura per blocchi
* Lettura: `int fread(ptr, dim, num, FILE *fp)`
	* Legge al più `num * dim` byte di dati binari o testuali dal file cui fa riferimento `fp` e li memorizza nel vettore identificato da `ptr` (la lettura termina prima se viene raggiunta la fine del file o si verifica un errore)
	* La funzione ritorna il numero di elementi effettivamente letti
* Scrittura: `int fwrite(ptr, dim, num, FILE *fp)` 
	* Scrive `num * dim` byte di dati binari o testuali sul file cui fa riferimento `fp` prelevandoli dal vettore identificato da `ptr`
	* La funzione ritorna il numero di elementi effettivamente scritti

Esempio:
```c
typedef struct
{
	float x, y;
} punto;

int carica(FILE *fp, punto p[])
{
	int n = 0;
	while(!feof(fp))
	{
		it(fread(&p[n], sizeof(punto), 1, fp) == 1)
			n++;
		else
			break;
	}
	return n;
}
```

### Accesso diretto
#### Spostare l’indicatore di posizione corrente di un file
`int fseek(FILE *fp, long offset, int refpoint)`
Lo spostamento `offset` (in byte) può essere positivo o negativo e si riferisce a `refpoint`.
`refpoint` può assumere tre diversi valori:
1. `SEEK_SET`: indica l’**inizio** del file
2. `SEEK_CUR`: indica la **posizione corrente**
3. `SEEK_END`: indica la **fine** del file
La funzione `fseek` restituisce zero se l’operazione ha avuto successo

#### Riavvolgere un file
`rewind(FILE *fp)`
Questa funzione equivale a `fseek(*fp, 0, SEEK_SET)`. È un’operazione talmente comune che è stata creata una funzione apposita per efficienza.

#### Capire dove si trova al momento l’indicatore di posizione
`long ftell(FILE *fp)`
Restituisce il valore corrente dell’indicatore di posizione, pari al numero di byte dall’inizio del file per un file binario, ad un valore dipendente dal sistema per i file testuali.
- - - -
## File e sistema operativo
### File e programmi in C
Per utilizzare un file in C è necessario prima aprire un flusso di comunicazione per associare il programma al file. Il sistema operativo tiene traccia di tutti i file aperti da ogni programma nella **tabella dei file aperti**.

Per ogni file aperto, si tiene traccia di:
* Modalità di utilizzo del file
* Posizione corrente sul file
* Indicatore di errore
* Indicatore _end of file_

Una volta finito di utilizzare un file in un programma, è possibile chiuderlo.
Per ogni programma, il sistema operativo tiene aggiornata una tabella dei file aperti. I puntatori `FILE` restituiti dalla `fopen` sono riferimenti alla tabella dei file aperti.

**Tre flussi standard vengono automaticamente aperti** quando inizia l’esecuzione di un programma:
* `stdin`: input del terminale (tastiera)
* `stdout`: output del terminale
* `stderr`: errori del terminale
Le istruzioni `printf` e `scanf` utilizzano questi flussi standard.
La funzione `printf` è quindi equivalente alla funzione `fprintf(stdout, ...);`. Similmente, `scanf` equivale a `fscanf(stdin, ...)`.

### Struttura della tabella dei file aperti
![](Introduzione%20al%20C/Immagine%202020-11-04%20140430.png)
- - - -
## Parametri a riga di comando
Il compilatore `gcc` si lancia con il comando `gcc source.c -o executablename`.
Dato che `gcc` è il nome dell’eseguibile, possiamo dedurre che `source.c -o executablename` sono **argomenti** che vengono forniti in input al programma `gcc`.
In C, per creare un eseguibile a cui sia possibile passare argomenti, è necessario modificare il prototipo del `main`:
```c
int main(int argc, char *argv[])
```
* `argc` contiene il numero di argomenti con cui il programma viene lanciato, incluso il nome del programma
* `*argv[]` è un array di stringhe che contiene tutti gli argomenti con cui il programma viene lanciato (`argv[0]` è il nome completo dell’eseguibile lanciato con eventuale percorso)

### Utilizzare gli argomenti in C
```c
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	for(i = 0; i < argc; i++)
		printf("arg%d: %s\n", i, argv[i]);

	return 0;
}
```
## Matrici e puntatori
Le matrici vengono memorizzate come un _blocco contiguo_ a partire da un indirizzo base, riga dopo riga. Il nome della variabile matrice è l’indirizzo base della matrice.
In questo caso, la posizione successiva `M + 1` **non indica** il secondo elemento della matrice, ma la **seconda riga**. Perciò lo spostamento dell’indirizzo dipende dal **numero di colonne** della matrice.

Esempio:
`float M[5][4];`
* M **non è** un puntatore `float *`
	* `float *p = M; //Errore`
* M è un **puntatore ad un array** di 4 float: `float (*)[4]` (4 è la dimensione di colonna della matrice
	* `float *p[4] = M; //Punta alla prima riga di M`
* È comunque possibile puntare ad un singolo elemento di M
	* `float *p = &M[i][j]; //Punta all’elemento M[i][j]`
* Le operazioni di aritmetica sui puntatori hanno un effetto diverso a seconda di come è dichiarato il puntatore:
```c
float *p1 = &M[0][0];
float (*p2)[4] = M;
```
	* 	`p1 + i` è l’indirizzo dell’i-esimo elemento di M (letta per righe)
	* `p2 + i` denota l’indirizzo di partenza dell’i-esima riga di M
	* `p1 + i` equivale a `&M[0][0] + i`
	* `p2 + i` equivale a `M + i`

È possibile accedere ad una attrice attraverso gli indirizzi:
```c
float M[5][3];
for(i = 0; i < 5; i++)
	for(j = 0, j < 3; j++)
		scanf(“%f”, &M[0][0] + i * 3 + j);
```

Più in generale, se M è una matrice di r righe e c colonne:
`M[i][j]` = `*(&M[0][0] + i * c + j`

Calcolare indice di riga e colonna di una matrice:
```c
floatM[r][c]; //r e c costanti
float *p = &M[rr][cc]; //Puntatore ad un elemento

int i = (p - &M[0][0]) / c; //Calcola l’indice di riga
int j = (p - &M[0][0]) % c; //Calcola l’indice di colonna
```

## Matrici e funzioni
Come per gli array, ci sono tre notazioni equivalenti per dichiarare un parametro formale di tipo matrice:
```c
void f(float a[R][C]);
void f(float a[][C]);
void f(float (*a)[C]);
```
È sempre necessario specificare il **numero di colonne**, senza il quale l’aritmetica degli indirizzi non potrebbe essere applicata correttamente.

## Array di puntatori e puntatori ad array
Un puntatore ad un array è sostanzialmente una matrice
`float (*p)[3];`
Un array di puntatori è più flessibile e permette di creare una matrice con righe di dimensioni diverse
`float *p[3];`

## Allocazione dinamica della memoria
In C dobbiamo dichiarare una variabile ogni volta che abbiamo bisogno di riservare uno spazio nella memoria di un calcolatore per ospitare dati. Tuttavia, a volta sarebbe comodo avere uno strumento _flessibile_ della dichiarazione di una variabile per _creare_ questo spazio della memoria:

### Allocare la memoria
In C è possibile _allocare_ uno spazio di memoria tramite la funzione `malloc` contenuta nella libreria `stdlib`:
`type *p = malloc (size);`
* `size` è la quantità in byte di memoria da allocare ed è generalmente espressa come `n * sizeof(type)`
* La funzione riserva uno spazio di memoria delle dimensioni richieste e ne restituisce l’indirizzo
	* Nel caso non sia possibile riservare uno spazio di memoria con le caratteristiche richieste, la funzione ritorna `NULL`

Esempio:
`float *v = malloc(5 * sizeof(float)); //Alloca 5 float`

`malloc` e funzioni:
```c
int *array_vuoto(int n)
{
	int *a = 
```

### Allocare ed inizializzare la memoria
Un’altra funzione din C che consente di alloccare la memoria è la `calloc` contenuta nella libreria `stdlib`:
`type *p = calloc(n, size);`
* `n` è il numero di elementi da allocare
* `size` è la quantità in byte di ciascun elemento da allocare, in genere espressa come `sizeof(type)`
* La funzione riserva uno spazio di memoria delle dimensioni richieste, inizializza tutti i bit della memoria allocata a 0 e ne restituisce l’indirizzo
* Nel caso non sia possibile riservare uno spazio di memoria con le caratteristiche richieste, la funzione ritorna `NULL`

Esempi:
`float *v = calloc(5, sizeof(float)); //Alloca 5 float`

```c
int *array_vuoto2(int n)
{
	return calloc(n, sizeof(int));
}

int main()
{
	...
	int *v = array_vuoto(10);
	...
}
```

### Deallocare la memoria
In C è possibile _deallocare_ uno spazio di memoria con la funzione `free` contenuta nella libreria `stdlib`:
`free(address)`
La funzione riceve come parametro in ingresso l’indirizzo di uno spazio di memoria **precedentemente allocato** e **lo libera**.

Esempio:
```c
...
float *v = calloc(500, sizeof(float));
...
free(v);
```

### Lavorare con una sequenza di elementi
Leggiamo una sequenza di interi terminata da uno zero:
```c
int v[N], i;
scanf(“%d”, &v[0]);
for(i = 1; i < N && v[i - 1] != 0; i++)
	scanf(“%d”, &v[i]);
```
**Come scelgo N?**
* N troppo grande: spreco memoria
* N troppo piccolo: non riesco a memorizzare un’intera sequenza
Soluzione: **Lista**
- - - -
## Liste
Una lista è una struttura dati che consente di rappresentare una sequenza di elementi:
* di lunghezza variabile (non definita a priori)
* che permette di inserire e rimuovere elementi _dinamicamente_
La lista viene implementata attraverso una sequenza di _nodi_, ciascuno dei quali contiene:
* un elemento della sequenza che si vuole rappresentare
* un puntatore al nodo successivo
L’accesso alla lista avviene tramite un puntatore `head` che punta al primo nodo della lista.
Il puntatore dell’ultimo nodo conterrà il valore `NULL` per indicare che non ci sono elementi successivi (nel caso la lista sia vuota, sarà `head` a contenere `NULL`)

### Sintassi della lista
```c
struct nodo
{
	int el;
	struct nodo *next;
};

struct nodo *head = NULL;

//oppure

typedef struct nodo *lista;
lista head;
```

### Operazioni sulle liste
1. Calcolare la lunghezza di una lista
2. Ricerca di un elemento
3. Inserimento di un elemento in testa, in coda
4. Rimuovi un elemento in testa o in coda
5. Rimuovi un elemento specifico

```c
#include "liste.h"

int lunghezza(lista l)
{
    if(l == NULL)
        return 0;
    else
        return 1 + lunghezza(l -> next);
}

lista ricerca(lista l, data el)
{
    if(l == NULL || l -> el == el)
        return l;
    else
        return ricerca(l -> next, el);
}

lista inserisci_testa(lista l, data el)
{
    struct nodo *temp = malloc(sizeof(struct nodo));
    temp -> el = el;
    temp -> next = l;
    return temp;
}

lista inserisci_coda(lista l, data el)
{
    if(l == NULL)
        return inserisci_testa(l, el);
    else
    {
        l -> next = inserisci_coda(l -> next, el);
        return l;
    }
}

lista rimuovi_testa(lista l)
{
    if(l != NULL)
    {
        lista temp = l;
        l = l -> next;
        free(temp);
    }

    return l;
}

lista rimuovi_coda(lista l)
{
    if(l != NULL)
    {
        if(l -> next == NULL)
            return rimuovi_testa(l);
        else
        {
            l -> next = rimuovi_coda(l -> next);
            return l;
        }
    }
    else
        return NULL;
}

lista rimuovi(lista l, data el)
{
    if(l == NULL)
        return l;
    if(l -> el == el)
        return rimuovi_testa(l);
    else
    {
        l -> next = rimuovi(l -> next, el);
        return l;
    }
}

void stampa(lista l)
{
    if(l == NULL)
        printf("END\n");
    else
    {
        printf("%d -> ", l -> el);
        stampa(l -> next);
    }
}
```

Riassumendo:
* Strutture dati dinamiche realizzate mediante puntatori
* Liste: primo e fondamentale (ma non unico) esempio di struttura dinamica
* Una prima valutazione dell’efficienza della struttura dinamica lista rispetto all’array:
	1. Si evita lo spreco di memoria ed il rischio di overflow
	2. A prezzo di un lieve aumento di occupazione di memoria dovuto ai puntatori
	3. Da un punto di vista del tempo necessario all’esecuzione degli algoritmi: pro e contro (inserire in testa meglio, inserire in coda peggio...)
- - - -
## Programmazione modulare
Un sistema software è costituito da un insieme di moduli e da relazioni tra questi. Ogni modulo è costituito da un’**interfaccia** e da un’**implementazione**:
* L’interfaccia è l’insieme di tutti e soli i suoi elementi che devono essere conosciuti da chi usa il modulo per farne un uso appropriato
* L’implementazione è l’insieme dei meccanismi che permettono di **realizzare** le funzionalità del modulo

### Linee guida
* Information hiding
	* Meno informazioni sono note all’utilizzatore di un modulo, meno vincoli sussistono per l’implementazione
	* Tuttavia l’interfaccia deve contenere tutte le informazioni necessarie per utilizzare il modulo, per evitare che l’utente sia costretto ad esaminare l’implementazione
* Alta coesione
	* È bene che variabili, procedure ed altri elementi spesso utilizzati congiuntamente siano raggruppati nello stesso modulo dando ad ogni modulo un alto livello di coesione interna
* Basso accoppiamento
	* Elementi che raramente interagiscono tra loro possono essere 

### Modularizzazione in C
In C, si utilizzano gli _header file_ `.h` per definire le interfacce, principalmente per:
* dichiarazione di tipo e variabili
* dichiarazione di funzione
Le implementazioni vengono invece incluse in corrispondenti
- - - -
## Sistemi operativi
Il sistema operativo è un software importante poiché ha lo scopo di nascondere agli utenti ed ai programmatori tutto ciò che ha a che fare con la gestione dell’hardware presente nel calcolatore.

### Architettura del sistema operativo
Il sistema operativo è tipicamente organizzato a _strati_:
1. Programmi utente
2. Interprete comandi
3. File system
4. **Gestione delle periferiche**
5. **Gestione della memoria**
6. **Gestione dei processi**
7. Macchina fisica
Gestione dei **processi**, della **memoria** e delle **periferiche** sono _indispensabili_ per il funzionamento del sistema operativo: ne costituiscono il **kernel** (_nucleo_).

### Tipi di sistema operativo
Esistono diversi tipi di sistema operativo, ma in generale si possono dividere in:
* **Monoutente e monoprogrammato**
	* Esecuzione di un solo programma alla volta
	* Utilizzato da un solo utente per volta
	* Esempio: DOS, prime versioni di iOS (iPhoneOS)
* **Monoutente e multiprogrammato**
	* Esecuzione di più programmi alla volta (_multitasking_)
	* Utilizzato da un solo utente per volta
	* Esempio: Windows 95
* **Multiutente e multiprogrammato**
	* Multitasking
	* Più utenti per volta
	* Esempi: Linux, UNIX, sistemi operativi moderni
Non possono esistere sistemi operativi multiutente e monoprogrammati poiché essere multiutente significa poter gestire istanze multiple di uno stesso programma.

## Gestione dei processi nel sistema operativo
Un processo _non è_ esattamente un programma: un programma è del codice che è stato compilato o interpretato che svolge una certa funzione. Nel momento dell’esecuzione del programma, _l’istanza del programma in esecuzione in quel momento_ è detta **processo** e si distingue poiché si può avere in esecuzione sulla propria macchina _più processi dello stesso programma_, che lavorano con dati diversi e si trovano in stati diversi. Un processo può essere:
* Del codice eseguibile
* Dei dati del programma
* Delle informazioni sul funzionamento del programma (il suo _stato_).
Il sistema operativo deve essere in grado di gestire l’esecuzione dei processi dei programmi utente. Deve poter distribuire le risorse del sistema ai vari processi equamente ed evitare conflitti e perciò ad ogni programma viene affidata una **macchina virtuale** realizzata dal sistema operativo che ne consente l’esecuzione come se la CPU del calcolatore fosse interamente dedicata a quel processo.
Il modo in cui le risorse vengono gestite dal sistema operativo cambia a seconda della risorsa:
* Alcune sono **indivisibili**, come i dispositivi di I/O, di rete, CPU
* Alcune sono **divisibili**, come la RAM o l’Hard Disk

### Processi e sistema operativo
Anche il sistema operativo è implementato tramite processi. Il sistema operativo garantisce che i conflitti tra i processi siano controllati e gestiti correttamente, e perciò viene eseguito in modalità privilegiata (_kernel mode_ o _supervisor_), così da poter controllare gli altri processi eseguiti in modalità user.

### Chiamate al supervisor
I processi utente per eseguire operazioni privilegiate invocano il supervisor tramite chiamate di sistema.
Perché usare la modalità privilegiata?
* **Le operazioni di I/O sono operazioni riservate**
	* Un processo non deve poter andare a _scrivere messaggi_ su un terminale non associato allo stesso processo
	* Un processo non deve poter _leggere_ caratteri immessi da un terminale non associato allo stesso processo
* **Un processo non deve poter sconfinare al di fuori di uno spazio di memoria**
	* Per _non accedere allo spazio di memoria associato ad un altro processo_, modificando codice e dati di quest’ultimo
	* Per _non occupare tutta la memoria disponibile nel sistema_, bloccandolo e rendendolo inutilizzabile ad altri processi
* La condivisione di risorse dev’essere tale da cautelare i dati di ogni utente

### Stato di un processo
Lo stato del processo può essere distinto fra stato **interno** ed **esterno**.

Lo stato _interno_ indica:
* La prossima istruzione del programma che deve essere eseguita
* I valori delle variabili e dei registri utilizzati dal processo

Lo stato _esterno_ indica:
* Se il processo è in attesa di un evento (lettura dal disco, inserimento di dati da tastiera…)
* Se il processo è in esecuzione
* Se il processo è pronto all’esecuzione e quindi attende di accedere alla CPU

Gli stati di un processo possono essere:
1. **In esecuzione**: processo assegnato al processore ed eseguito
2. **Pronto**: il processo può essere eseguito se il gestore dei processi lo decide
3. **In attesa**: il processo attende il verificarsi di un evento esterno per andare in stato di _pronto_

### Workflow per l’esecuzione di un processo
1. Due processi appena creati sono messi in stato di _pronto_.
2. Il kernel decide quale processo pronto mettere in esecuzione.
3. Il kernel assegna il processore al processo selezionato per un quanto di tempo.
	* Coda dei processi pronti
	* Round-robin
	* Priorità dei processi
4. Il processo in esecuzione passa in stato di _attesa_ poiché ha richiesto operazioni di I-O (_interruzione interna_). Questo corrisponde all’esecuzione dell’istruzione _chiamata a supervisore_ (**SuperVisor Call** o **SVC**).
5. Il processore è ora libero ed il secondo processo può essere eseguito. Il primo processo ha un _cambiamento di contesto_ ed il suo _contesto_ viene salvato nel suo _descrittore di processo_.
6. Quando l’operazione di I-O si conclude per il primo processo, viene generata un’**interruzione esterna** dal _gestore delle interruzioni_.
7. Il processo in esecuzione viene interrotto ed il primo processo può essere di nuovo in _pronto_. Il kernel può ora decidere quale processo eseguire.

_Pre-emption_: quando il quanto di tempo è scaduto, il kernel interrompe il processo in esecuzione. Così si cerca di garantire un uso equo della CPU a tutti i processi.

### Gestione del quanto di tempo
Il quanto di tempo è gestito da una particolare interruzione, generata dall’orologio di sistema.
* Con una frequenza definita, l’orologio di sistema genera un’interruzione. La routine di risposta relativa incrementa una variabile opportuna che contiene il tempo di esecuzione del processo corrente
	* Se il quanto di tempo non è scaduto, la routine termina. Se non ci sono interruzioni annidate, il processo prosegue nell’esecuzione.
	* Se invece il quanto è scaduto, viene invocata una particolare funzione del kernel, la **preempt**, che cambia lo stato del processo da _in esecuzione_ a _pronto_, salva il contesto del processo ed attiva una particolare funzione del kernel, la **change**, che esegue una commutazione di contesto e manda in esecuzione un processo 

## Gestione della memoria nel sistema operativo
La gestione concorrente di molti programmi applicativi comporta la presenza di molti programmi nella RAM. Il sistema operativo offre ad ogni programma la visione di una **memoria virtuale**, che può avere **dimensioni maggiori di quella fisica**.
Per gestire la memoria virtuale, il sistema operativo dispone di diversi meccanismi:
* **Rilocazione**
* **Paginazione**
* **Segmentazione**

### Modello di memoria
![](Introduzione%20al%20C/DC539A37-E3BF-4692-8077-BD9675A48912.png)
* Il modello di memoria di un calcolatore è lineare
* La memoria è una sequenza di celle numerate da 0 ad un valore massimo M
* Il numero che identifica ogni cella è detto _indirizzo_
* La dimensione della cella dipende dal tipo di calcolatore (per noi è 8 bit, ossia un byte)

### Spazio di indirizzamento
Lo spazio di indirizzamento è il numero massimo di indirizzi possibili della memoria e dipende dalla lunghezza in bit degli indirizzi: se gli indirizzi sono lunghi N bit, lo spazio di indirizzamento sarà di `2^N` celle.
Tutte le celle devono essere indirizzabili (cioè tutte le celle devono avere un indirizzo), perciò la dimensione della memoria è _minore o uguale_ allo spazio di indirizzamento.
Generalmente, le dimensioni della memoria sono espresse in:
* KB (Kilobyte) = `2^10` byte
* MB (Megabyte) = `2^20` byte
* GB (Gigabyte) = `2^30` byte

### Memoria virtuale e fisica
* Gli indirizzi **contenuti in un programma eseguibile** sono indirizzi _virtuali_ e fanno riferimento alla _memoria virtuale_.
* La memoria **effettivamente presente nel calcolatore** è la _memoria fisica_ ed i suoi indirizzi sono detti indirizzi _fisici_. La memoria fisica **può essere insufficiente** a contenere la memoria virtuale di tutti i processi.
* La **rilocazione dinamica** è uno dei meccanismi di trasformazione tra indirizzi virtuali e fisici.
![](Introduzione%20al%20C/3DEDE6A4-984B-4E07-ADA3-17B9873410BD.png)
La memoria virtuale e quella fisica non coincidono per i seguenti motivi:
1. Nella memoria fisica risiedono _contemporaneamente_ sistema operativo e processi
2. Conviene mantenere nella memoria fisica u_na sola copia_ di parti di programmi che sono _uguali in diversi processi_ (_memoria condivisa_)

Per evitare la _frammentazione_ della memoria (ossia la presenza di spazi vuoti inutilizzabili), è utile allocare i programmi **suddividendoli in pezzi**.
![](Introduzione%20al%20C/7E1B3927-04B9-4A20-A5AE-7BF05AD29582.png)

### Rilocazione
 Il programma non ha accesso alla memoria fisica ma solo alla memoria virtuale, che appare al programma della dimensione totale della memoria installata nel sistema (o anche maggiore). Il programma può riempire la memoria virtuale a partire dall’indirizzo 0. Attraverso la _rilocazione_, dopo aver calcolato con la compilazione quanta memoria sarà usata, il kernel trova una sezione di memoria fisica libera di quella quantità e segna l’indirizzo iniziale di questa porzione nel _registro base_. Ogni volta che il programma prova ad accedere all’indirizzo 0, il kernel lo _reindirizzerà_ al vero indirizzo attraverso la somma di un offset.
Questo approccio causa un problema di frammentazione, risolvibile con la paginazione, ossia la divisione della memoria in parti più piccole.

### Paginazione
**Si rinuncia ad avere una zona contigua** della memoria fisica **per ciascun processo**.
La memoria virtuale del programma viene **suddivisa in porzioni** (_pagine virtuali_) di **lunghezza fissa** (potenze di 2).
La memoria fisica viene divisa in pagine fisiche della _stessa dimensione_.
Le pagine virtuali di un programma vengono caricate in altrettante pagine fisiche, non necessariamente contigue.
![](Introduzione%20al%20C/44E465C2-EF50-4D5E-90EC-B6F6F1E6EDF0.png)

### Struttura degli indirizzi virtuali e fisici
Un indirizzo virtuale è costituito da un **numero di pagina virtuale** (_NVP_) e da uno _spiazzamento_ (**offset**) all’interno della pagina.
![](Introduzione%20al%20C/2BA3AEC4-BAA7-4AEC-A94D-63737998878D.png)
Un indirizzo fisico ha la **stessa struttura** di un indirizzo virtuale.
![](Introduzione%20al%20C/8B500941-F106-42CE-86AB-8D63CF802148.png)
Passando da un indirizzo virtuale ad uno fisico, l’unica parte che viene _tradotta_ è il **numero di pagina virtuale**, poiché pagine virtuali e fisiche hanno la _stessa dimensione_. Il meccanismo più semplice per la traduzione delle pagine virtuali è la **tabella delle pagine**, che associa ad ogni pagina virtuale la corrispondente pagina fisica. Questa tabella viene memorizzata nella **MMU** (_Memory Management Unit_), una memoria associativa molto veloce e di dimensioni ridotte. Le memorie associative permettono di _cercare un oggetto in più righe della tabella_, per velocizzare il processo di traduzione.
Poiché la tabella delle pagine sarebbe diversa per ogni processo, per non doverla ricostruire ogni volta che si cambia programma, la tabella contiene anche _una colonna con l’ID del processo in esecuzione_.
![](Introduzione%20al%20C/44E44B24-8DEC-4E02-8D33-4606231E3D9B.png)

Esempio:
* Spazio di indirizzamento virtuale
	* Indirizzi da 32 bit ⇒ `2^32` indirizzi
* Dimensione di pagina
	* 4000 parole (o celle) ⇒ `2^12` byte (1 cella = 1 byte)
* Numero di pagine dello spazio di indirizzamento virtuale
	* `2^32 / 2^12 = 2^20` pagine
* Spazio di indirizzamento fisico
	* 4000000 di parole (o celle) ⇒ `2^22` indirizzi
* Numero di pagine dello spazio di indirizzamento fisico
	* `2^22 / 2^12 = 2^10` pagine
![](Introduzione%20al%20C/BEF14891-1541-43D3-BAA8-80B5E3BA6213.png)

### Tabella delle pagine
La tabella delle pagine è il meccanismo più semplice per la traduzione da virtuale e fisico.
![](Introduzione%20al%20C/3C412A4F-F1D3-4F71-942F-B28CEBA51EC5.png)

### Memory Management Unit
Per accelerare la traduzione da NPV a NPF si ricorre alla **MMU**, una _memoria associativa_ dalle dimensioni ridotte che contiene solo le informazioni sulle pagine più utilizzate.
Dato che gli NPV e gli NPF si riferiscono alle pagine di un processo, ogni volta che il processo in esecuzione cambia la MMU dovrebbe essere riscritta. Per evitare ciò si aggiunge una _colonna_ che dice **a quale processo appartengono le pagine** ed un _registro_ che dice **qual è il processo attualmente in esecuzione**.

### Pagine residenti e non
Durante l’esecuzione di un programma, **solo un certo numero delle sue pagine virtuali è caricato** in altrettante pagine fisiche. Tali pagine sono dette **residenti**.
Ad ogni accesso alla memoria _si controlla_ che _l’indirizzo virtuale_ corrisponda ad una **pagina residente**, altrimenti si produce un **interrupt di segnalazione** di errore detto _page fault_. Il processo viene allora **sospeso** in attesa che la pagina richiesta venga caricata in memoria, eventualmente scaricando su disco una pagina già residente per liberare lo spazio necessario.
Su Windows, il file dove vengono salvate le pagine residenti si chiama _file di paging_. Nei sistemi Linux, si ha una partizione dedicata chiamata _swap_.

## Gestione del file system
Il sistema operativo si occupa di **gestire i file** sulla memoria di massa:
* Creare un file
* Dare un nome al file
* Collocare il file in un opportuno spazio nella memoria di massa
* Accedere al file in lettura e scrittura
La gestione dei file è _indipendente_ dalle caratteristiche fisiche della memoria di massa (HDD, SSD, NVMe).
I file vengono inclusi all’interno di _directory_ (o _cataloghi_). Esse hanno una organizzazione tipicamente ad albero, anche se alcuni sistemi operativi permettono una struttura a grafo.
![](Introduzione%20al%20C/9FAA7E1C-73B0-4638-866B-2492CDBA39ED.png)

### Organizzazione dei file
A ciascun utente è normalmente associata una directory specifica, detta _home directory_.
Il livello di _protezione_ di un file indica quali operazioni possono essere eseguite da ciascun utente.
Ciascun file ha un _pathname_ (o _nome completo_), che include l’intero cammino dalla radice dell’albero.
Il _contesto_ di un utente all’interno del file system è la directory in cui correntemente si trova.

## Gestione delle periferiche
Sono meccanismi software a cui è affidato il compito di **trasferire dati da e verso le periferiche**. Consentono ai programmi applicativi di _leggere_ o _scrivere_ i dati con primitive di alto livello che _nascondono la struttura fisica delle periferiche_.
Si distingue generalmente fra:
* **Driver fisici**
	* Vengono utilizzati dal gestore delle interruzioni per il trasferimento dei dati
* **Driver logici**
	* Fanno parte del sistema operativo e forniscono una gerarchia di memorie

## Gestione dell’interfaccia utente
Il sistema operativo fornisce un _interprete_ dei comandi inseriti dall’utente attraverso la tastiera o il mouse.
L’interfaccia utente può essere:
* Testuale
	* DOS
* Grafica
	* Windows
	* macOS
	* Molte distro di Linux
Consente l’inserimento di diversi comandi:
* Esecuzione di programmi applicativi
* Operazioni sulle periferiche
* Configurazione dei servizi del sistema operativo
* Operazioni sul file system
	* Creazione
	* Rimozione
	* Copia
	* Ricerca
- - - -
## Catena di sviluppo in C
Il C è un linguaggio **compilato**.
Si possono individuare cinque passi per passare dalla definizione di un algoritmo ad un programma in esecuzione che lo implementa:
![](Introduzione%20al%20C/453EE735-82A8-4C13-A505-3612423FDFD8.png)

1. **Scrittura**
	* Il programma, costituito da una sequenza di caratteri, viene **composto e modificato** usando un qualsiasi editor di testo
	* Otteniamo così un **codice sorgente** memorizzato in memoria di massa in un file di testo (come `xyz.c`)
2. **Traduzione**
	* Il compilatore si occupa della **traduzione** dal linguaggio di alto livello al **linguaggio macchina**
	* Durante questa fase si riconoscono i simboli, le parole ed i costrutti del linguaggio
		*  Eventuali messaggi diagnostici segnalano errori di sintassi
	* Viene generato il codice macchina in forma **binaria**: a partire dal codice sorgente si genera il **codice oggetto** in un file binario
3. **Collegamento** o _Linking_
	* Il collegatore (_linker_) deve collegare fra loro il file oggetto ed **altre librerie utilizzate**
	* Si rendono **globalmente coerenti** i riferimenti agli indirizzi dei vari elementi collegati
	* Si genera un **programma eseguibile**, un file binario che contiene il codice macchina del programma eseguibile completo, di nome `xyz.exe` (per l’eseguibile Windows)
	* Messaggi di errore possono essere dovuti ad errori nel citare i nomi delle funzionalità di librerie esterne da collegare
	* Il programma sarà effettivamente eseguibile solo dopo che il contenuto del file sarà stato **caricato nella memoria di lavoro** del calcolatore (RAM)
4. **Caricamento** o _Loading_
	* Il caricatore (_loader_) individua una porzione libera della memoria di lavoro e vi copia il contenuto del programma eseguibile
		* Eventuali messaggi rivolti all’utente possono segnalare che **non c’è abbastanza memoria**
5. **Esecuzione**
	* Per eseguire il programma occorre fornire in ingresso i dati richiesti ed in uscita riceveremo i risultati
	* Durante l’esecuzione possono verificarsi degli errori, detti _errori di run-time_, quali:
		* Calcoli con risultati errati (ad esempio un _overflow_)
		* Calcoli impossibili (divisione per zero, logaritmo di un numero negativo, radice quadrata di un numero negativo…)
		* Errori nella concezione dell’algoritmo (l’algoritmo non risolve il problema dato)
	* Tutti gli esempi citati si riferiscono ai cosiddetti _errori semantici_

- - - -
## Linguaggio Macchina
Il linguaggio macchina è un linguaggio di **basso livello** che viene progettato _attorno_ al calcolatore:
* Richiede di conoscere esattamente la struttura del calcolatore (la sua _architettura_)
* È _specifico_ per ogni calcolatore (in genere per ogni _famiglia_ di calcolatori)
* Permette di sfruttare al meglio le risorse fisiche della macchina

### Un modello semplificato di calcolatore
![](Introduzione%20al%20C/Schermata%202020-11-25%20alle%2014.55.46.png)

### Quali istruzioni mi servono?
#### Istruzioni I/O
* `READ`: legge un dato dal nastro di lettura e lo salva nell’accumulatore
* `WRITE`: prende un dato dall’accumulatore e lo scrive sul nastro di scrittura

#### Gestione della memoria
* `LOAD x`: carica il dato all’indirizzo `x` dalla memoria
* `STORE x`: salva il dato all’indirizzo `x` della memoria

#### Operazioni aritmetiche
* `ADD x`: somma il contenuto della cella di memoria all’indirizzo `x` all’accumulatore 
* `SUB x`: sottrae il contenuto della cella di memoria all’indirizzo `x` all’accumulatore
* `MULT x`: moltiplica il contenuto della cella di memoria all’indirizzo `x` all’accumulatore
* `DIV x`: divide il contenuto della cella di memoria all’indirizzo `x` all’accumulatore
Il primo operando dell’operazione è quello contenuto nell’accumulatore, il secondo è quello specificato nel comando attraverso l’indirizzo di memoria

#### Controllo di flusso
* `BR x`: salta direttamente all’istruzione x
* `BEQ x`: salta all’istruzione x se il valore dell’accumulatore è uguale a zero
* `BNE x`: salta all’istruzione x se il valore dell’accumulatore è diverso da zero
* `BL x`: salta all’istruzione x se il valore dell’accumulatore è minore di 0
* `BLE x`: salta all’istruzione x se il valore dell’accumulatore è minore o uguale a 0
* `BG x`: salta all’istruzione x se il valore dell’accumulatore è maggiore o maggiore di 0
* `BGE x`: salta all’istruzione x se il valore dell’accumulatore è maggiore o uguale a 0
* `END`: termina il programma

### Come traduciamo un semplice programma?
In C:
```c
scanf(“%d”, &x);
scanf(“%d”, &y);
printf(“%d”, x + y);
```

In linguaggio macchina:
```
1. READ [Primo numero nell'accumulatore]
2. STORE 101 [Primo numero nella cella 101]
3. READ [Secondo numero nell'accumulatore]
4. ADD 101 [Somma l'accumulatore alla cella 101]
5. WRITE [Scrive il contenuto nell'accumulatore]
6. END
```

### Indirizzamento
Tutte le istruzioni che interagiscono con la memoria possono sfruttare differenti approcci per accedere allo spazio di memorizzazione:
* Indirizzamento _diretto_
* Indirizzamento _indiretto_
* Indirizzamento _esplicito_
Se assumiamo la generica istruzione `ISTR` otteniamo:
* Indirizzamento **diretto**: `ISTR 13` - carico _direttamente dalla cella 13_ della memoria
* Indirizzamento **indiretto**: `ISTR@ 11` - carico il valore della cella all’indirizzo memorizzato _nella cella di memoria numero 11_
* Indirizzamento **esplicito**: `ISTR=14` - carico _direttamente_ il valore 14

**Esempio**: sommatoria di N numeri
In C:
```c
scanf(“%d”, &n);
s = 0;
for(i = 0; i < n; i++)
{
	scanf(“%d”, &x)	
	s = s + x;
}
printf(“%d”, s);
```

In linguaggio macchina:
```
01. READ
02. STORE 101 [1, 2 => scanf("%d", &n)]
03. LOAD= 0
04. STORE 102 [3, 4 => s = 0]
05. LOAD 101
06. BEQ 13 [Salta se n = 0]
07. SUB= 1
08. STORE 101 [7, 8 => n = n - 1
09. READ [scanf("%d", &x)]
10. ADD 102
11. STORE 102 [10, 11 => s = s + x]
12. BR 5
13. LOAD 102
14. WRITE [printf("%d", s)]
15. END
```

**Esempio**: invertire una sequenza
In C:
```c
n = 0;
do
{
	scanf("%d", &x[n]);
	n++;
} while(x[n - 1] != 0);

for(i = n - 2; i >= 0; i--)
	printf("%d", x[i]);
```

* **Come organizzare la memoria?**
	* Mi serve una cella per memorizzare il contatore degli elementi letti
	* Ciascun elemento verrà memorizzato all’indirizzo successivo a quello usato per il numero precedente
* **Come posso memorizzare gli elementi della sequenza in un indirizzo sempre diverso?**
	* Uso l’indirizzamento **indiretto**
	* Avrò bisogno di una cella di memoria che contenga l’indirizzo da utilizzare per l’elemento _corrente_
* **Una possibile soluzione**
	* Indirizzo contatore elementi: 101
	* Indirizzo elemento corrente: 102
	* Indirizzi elementi: da 103 in poi

In linguaggio macchina:
```
01. LOAD= 0
02. STORE 101
03. LOAD= 103
04. STORE 102
05. READ
06. BEQ 15
07. STORE@ 102
08. LOAD 102
09. ADD= 1
10. STORE 102
11. LOAD 101
12. ADD= 1
13. STORE 101
14. BR 5
15. LOAD 101
16. BEQ 25
17. SUB= 1
18. STORE 101
19. LOAD 102
20. SUB= 1
21. STORE 102
22. LOAD@ 102
23. WRITE
14. BR 15
25. END
```

## Gestione della memoria con sottoprogrammi
### Gestione a pila o stack
![](Introduzione%20al%20C/Foto%2030%20nov%202020,%20093527.jpg)
Un **record di attivazione** è una parte di memoria che serve al corretto funzionamento di una funzione e della sua terminazione.
Il **record di attivazione** (_RA_) contiene:
* Parametri attuali
* Variabili locali
* Indirizzo di ritorno (_RetAdd_)
* (Valore precedente dello) stack pointer (_SP_)
![](Introduzione%20al%20C/4D9CA6BA-2D82-486F-BCB8-3BF689CD9F64.png)

#### Funzionamento della chiamata
* **Codice del chiamante**
* Riserva memoria per il risultato (se previsto)
* Assegna valore ai parametri attuali
* Assegna l’indirizzo di ritorno
* Assegna il link dinamico
* Aggiorna l’indirizzo di base del nuovo record di attivazione
* Assegna il nuovo valore allo stack pointer
* Salta alla prima istruzione del chiamato
* **Codice del chiamato**

#### Il ritorno
* **Codice del chiamato**
* Riporta il valore dello stack pointer al valore precedente
* Riporta il valore dell’indirizzo di base al valore precedente
* Salta all’indirizzo di ritorno

## Ma il linguaggio macchina non dovrebbe essere binario?
### Linguaggio assemblativo e linguaggio macchina
Quello visto finora è un _linguaggio assemblativo_ (_assembly_), un linguaggio macchina _simbolico_ per facilitare la lettura e scrittura dei programmi. La sua traduzione in linguaggio macchina (operata da un programma chiamato _assembler_) è molto semplice. Le regole di traduzione richiedono tuttavia **diverse scelte progettuali**:
* Ad ogni tipo di istruzione viene associato un **codice operativo binario**
* Viene definita la **dimensione massima degli operandi** (che dipende, tra le altre cose, dalla dimensione massima della memoria indirizzabile)
* Viene quindi definita la **dimensione finale** che occuperà la traduzione di ogni possibile istruzione

## Costruiamo il nostro linguaggio macchina
### Codice operativo delle istruzioni
![](Introduzione%20al%20C/Foto%2030%20nov%202020,%20100143.jpg)

### Dimensione operandi ed istruzioni
Per semplicità, ipotizziamo che la memoria indirizzabile nel nostro sistema sia `2^10` celle (o parole). Sempre per semplicità, ipotizziamo che anche le costanti numeriche nei programmi siano comprese tra 0 e 1023. Tutti gli operandi sono quindi rappresentabili con 10 bit. Il codice operativo richiede 5 bit. Le istruzioni richiedono 15 bit, ma noi ne useremo 16 (1 bit di _padding_).
![](Introduzione%20al%20C/BB995665-587C-4D73-8F8C-3FF4393E93B7.png)
- - - -
## Introduzione all’architettura del calcolatore e catena di programmazione in C
### La macchina di Von Neumann
![](Introduzione%20al%20C/IMG_9F6FA1B3CC58-1.jpeg)

### La memoria centrale
![](Introduzione%20al%20C/86B38B11-99D6-4E26-9874-1A009A569086.png)

### L’unità di elaborazione (CPU)
![](Introduzione%20al%20C/5ECC0CE6-6F6E-48D1-9924-411B3AA902E0.png)
* **Clock**: gestisce la frequenza di operazione del processore
* **Registro di stato**: registra delle flag che indicano certi eventi
	* Bit di carry
	* Z
	* S
	* V
* **Unità aritmetico-logica**: parte della CPU che gestisce le operazioni aritmetiche e logiche
* **Registro dati**: parola letta o da scrivere in memoria
* **Registro di istruzione corrente**: contiene l’istruzione che stiamo eseguendo al momento
* **Registro interruzioni**: gestisce le interruzioni delle periferiche
* **Registro contatore di programma**: indirizzo della prossima istruzione da eseguire

### Bus di sistema
Tutta la CPU è collegata al Bus di sistema, ma non tutti i componenti della CPU sono connessi direttamente al Bus esterno. Le comunicazioni avvengono secondo un sistema _Master / Slave_.
Esistono Bus per diversi scopi:
* Bus dati
* Bus indirizzi
* Bus controlli
![](Introduzione%20al%20C/60EFD431-941C-4082-88B9-FE5A113778BE.png)

### Interfacce periferiche
Contengono le seguenti componenti:
* Peripheral Data Register (PDR)
* Peripheral Command Register (PCR)
* Peripheral State Register (PSR)
![](Introduzione%20al%20C/CF0E1CB9-FD19-4B98-80A7-74E78CAF76E8.png)

Esempio:
Supponiamo di dover eseguire un’istruzione che carica il contenuto della cella di memoria all’indirizzo 123 nel registro R1
`0100000111101101 LOAD 123, R1`
![](Introduzione%20al%20C/048E48E5-5126-4ECC-BF37-413C821B52A5.png)
* **Fase di fetch istruzione**: la CPU carica dalla memoria centrale la prossima istruzione da eseguire
![](Introduzione%20al%20C/2D76A97B-C360-4197-BAF3-BEF3A63C2750.png)
* **Fase di interpretazione istruzione**: comprendere l’istruzione presente nel registro
![](Introduzione%20al%20C/39949166-7852-4DB9-89C2-B9CAFCDD3ED7.png)
* **Fase di esecuzione istruzione**: eseguire l’istruzione _decodificata_ precedentemente
![](Introduzione%20al%20C/38F90CFE-7C6F-4CC9-BA2D-847724D7EF02.png)

### Lettura e scrittura di un dato in memoria centrale
**Lettura**:
![](Introduzione%20al%20C/37B528B2-5176-4915-90FC-44655F32FD58.png)
**Scrittura**:
![](Introduzione%20al%20C/E5B63D01-57D8-48BF-8A5B-EB9DD28F1264.png)