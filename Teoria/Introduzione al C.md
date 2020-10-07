# Introduzione al C
#informatica
- - - -
## Primo programma in C
```
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

## Variabili
```
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
**Variabile**: spazio nella memoria del calcolatore cui viene assegnato un valore

In C, la variabile va _dichiarata_: si dice al calcolatore il tipo di variabile e le si assegna un nome.

Nel programma possiamo _assegnare_ un valore ad una variabile attraverso il simbolo `=`. L’assegnazione funziona **da destra verso sinistra**, quindi non ha senso scrivere `3 = lung;` per esempio, perché il compilatore si aspetta il nome di una variabile a sinistra dell’uguale.

Nel caso di questo programma, i valori delle variabili non sono assegnabili dall’utente, a meno che egli non abbia accesso al codice sorgente. Necessitiamo di un _input_ da tastiera.

## Input da tastiera
```
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

## Tipi di dati
**Tipi di dati Built-In**
* `int`: numeri interi (usa la CPL2)
* `float`: numeri a virgola mobile, singola precisione (usa lo standard IEEE 754)
* `double`: numeri a virgola mobile, doppia precisione (usa lo standard IEEE 754)
* `char`: caratteri (1 byte, 0-255)

### Tipo `int`
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
```
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
```
int a,b = 5,c = 3;

a = b + c + 10; // Addizione 
a = (b + 3) * c; // Addizione e moltiplicazione 
a = 4 + b - c; // Addizione e sottrazione 
a = b / c; // Divisione intera 
a = b % c; // Resto della divisione intera 
```

Abbreviazioni:
```
a += 3; // a = a + 3 
a -= 3; // a = a - 3 
a *= 3; // a = a * 3 
a /= 3; // a = a / 3 

a++; // a = a + 1 
a--; // a = a - 1 
```

Segnaposti:
```
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
- - - -
### Tipo `float`
I due tipi di dati per numeri reali _built-in_ nel linguaggio C sono il `float` ed il `double`, che corrispondono a _single precision_ e _double precision_ nello standard IEEE 754-1985.
La quantità di memoria usata per le variabili dipende dall’architettura del calcolatore usato.

```
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
```
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

Forma compatta:
```

```

### Tipo `char`
Viene rappresentato attraverso un solo byte e contiene la codifica numerica di un carattere, ossia un valore numerico nell’intervallo tra 0 e 255 compresi.

```
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
```
char c;

printf("Inserire un carattere: ");
scanf("%c",&c);

printf("\nIl carattere inserito è %c\n",c);
printf("La sua codifica numerica è %d\n,c);
```

### Tipo `enum`
Consente di elencare una sequenza di valori simbolici che la variabile può assumere. I valori vengono codificati come interi a partire da zero.

Non è un vero e proprio tipo di dato nuovo perché utilizza interi, ma permette di dare nomi ai vari valori che posso voler assegnare in futuro alla mia variabile.

```
enum {falso, vero} condizione1, condizione2;

condizione1 = falso;
condizione2 = vero;

printf("condizione1 = %d\n",condizione1); // Stampa 0
printf("condizione2 = %d\n",condizione2); // Stampa 1
```

Esempio:
```
enum{lun, mar, mer, gio, ven, sab, dom} giorno;

giorno = mar; // Il valore assegnato alla variabile nella memoria del calcolatore sarà 1 (intero)
```

### Ridefinizione di tipo
Crea un alias di un tipo di dato.
Sintassi: `typedef int newName`
Rende più semplice cambiare tipo di variabile in un programma intero, poiché basta cambiare il tipo in `typedef`.

Esempio:
```
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
```
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
```
int x;
float y = x / 5;
float y = ((float) x) / 5; // Cast corretto
```

### Funzione `sizeof`
Con questa funzione si può trovare la dimensione di memoria allocata ad un tipo di variabile in byte.

Sintassi: `sizeof(type)`
- - - -
## Istruzioni condizionali
Sono istruzioni che servono a _prendere delle scelte_ durante l’esecuzione di un programma ed a cambiare il percorso seguito da esso.

### If statement
Istruzione condizionale base
Sintassi:
```
if(condition)
	{
		statement;
	}
```
Semantica: lo statement viene eseguito **solo se** la condizione è vera.

#### Vero e falso in C
In C non c’è un tipo di dato specifico per rappresentare i concetti di vero e falso. Una condizione assume un valore intero pari a:
* 0 se la condizione è falsa
* 1 se la condizione è vera
In generale, **ogni valore diverso da 0 è considerato vero**.

#### Operatori relazionali
Operano su valori numerici e di carattere e possono essere espressioni aritmetiche, variabili o costanti.
```
>  // Maggiore
<  // Minore
== // Uguale
<= // Miniore o uguale
>= // Maggiore o uguale
!= // Diverso
```

### #Operatori logici
Consentono di costruire condizioni complesse a partire da condizioni più semplici e sono quattro:
* AND (Binario)
* OR (Binario)
* NOT (Unario)
* XOR (Binario)
Possono essere definiti in maniera univoca con la **tavola della verità**:
* **Operatori binari**
![](Introduzione%20al%20C/image_2020-09-30_14-07-27%202.png)
* **Operatore unario NOT**
![](Introduzione%20al%20C/image_2020-09-30_14-07-40%202.png)

Nel linguaggio C, la sintassi degli operatori logici è:
```
condition && condition //AND
condition || condition //OR
!condition //NOT
```

#### Ordine tra gli operatori
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
```
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
```
if(condition)
	{
		statement; //Esegue questa se condition == vera
	}
else
	{
		statement; //Esegue questa se condition == falsa
	}
```

### Esempio concreto
```
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

```
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
```
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

## Cicli
Servono a ripetere le stesse istruzioni più volte.

### Ciclo `for`
Sintassi:
```
for( initialization ; condition ; update )
	{
		statement1;
		statement2;
		statement3;
		[...]
		statementN;
	}
```

### Ciclo `while`
Sintassi:
```
while(condition)
	{
		body
	}
```

### Ciclo do-while
Sintassi:
```
do
	{
		body
	} while (condition)
```

### Istruzioni `break` e `continue`
* L’istruzione `break` interrompe l’esecuzione del ciclo
* L’istruzione `continue` passa direttamente all’iterazione seguente

## Funzioni in C
### Funzioni senza parametri o ritorno:
```
void func()
	{
		body
	}
```
Richiamo della funzione:
`func();`

### Funzioni con parametri:
```
void func(type1 par1, type2 par2) // Parametri formali
	{
		body
	}
```
Richiamo della funzione:
`func(val1, val2) // Parametri attuali`
I parametri attuali vengono assegnati ai parametri formali alla chiamata della funzione.

### Funzioni con valori di ritorno
```
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
```
type funcName(parameters)
	{
		body
	}
```
La funzione può essere definita ovunque nel programma. Se la definizione viene definita _prima_ del punto in cui la funzione viene richiamata per la prima volta, la dichiarazione **può essere omessa**.
Per semplicità, si consiglia di utilizzare le dichiarazioni dei prototipi prima della funzione `main()` e definire le suddette funzioni _dopo_ alla funzione `main()`.