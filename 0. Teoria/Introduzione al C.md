# Introduzione al C
#informatica
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
### Tipo float
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

### Tipo char
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

### Tipo enum
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

### Funzione sizeof
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

### Vero e falso in C
In C non c’è un tipo di dato specifico per rappresentare i concetti di vero e falso. Una condizione assume un valore intero pari a:
* 0 se la condizione è falsa
* 1 se la condizione è vera
In generale, **ogni valore diverso da 0 è considerato vero**.

### Operatori relazionali
Operano su valori numerici e di carattere e possono essere espressioni aritmetiche, variabili o costanti.
```
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
```
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

Esempio concreto:
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

### Ciclo for
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

### Ciclo while
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

### Istruzioni break e continue
* L’istruzione `break` interrompe l’esecuzione del ciclo
* L’istruzione `continue` passa direttamente all’iterazione seguente

## Funzioni in C
### Funzioni senza parametri o ritorno
```
void func()
	{
		body
	}
```
Richiamo della funzione:
`func();`

### Funzioni con parametri
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

### Visibilità delle variabili - Scoping
```
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
```
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
```
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

## Dati strutturati in C
## Array
Offrono la possibilità di rappresentare in modo compatto una collezione di variabili.

Sintassi:
`float vendite[12]`

* L’accesso ad un elemento avviene attraverso il nome dell’array seguito dalla posizione dell’elemento stesso fra parentesi quadre, il **subscript**
* La posizione deve essere intera o compatibile e parte da 0, fino alla dimensione dell’array meno uno
* Ogni singolo elemento dell’array è del tutto analogo ad una variabile di tipo semplice

Esempio:
```
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
```
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
```
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
```
float prezzo[4];
prezzo[4] = 42; //Non esiste un elemento 4 dell'array
```

### Subscript
È possibile usare `enum` e `char` come subscript.
Esempio:
```
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
```
float freq[26];

printf("La frequenza della lettera f è: %f\n", freq['f' - 'a']);
```

### Copia e confronto di array
La copia fra due array **non può essere fatta** tramite un semplice assegnamento:
```
int a[5] = {1, 2, 3, 4, 5}, b[5];
b = a; //Errore, non funziona
```
È necessario copiare **un elemento per volta**:
```
for(i = 0; i < 5; i++)
	b[i] = a[i];
```
Analogamente, non è possibile usare gli operatori di confronto con gli array, ma occorre effettuare il confronto un elemento per volta:
```
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
```
char nome[10];

nome[0] = 'A';
nome[1] = 'n';
nome[2] = 'n';
nome[3] = 'a';
```
Questo modo di assegnare i caratteri uno ad uno è poco efficiente. Un modo migliore sarebbe:
```
typedef char stringa[30];
stringa messaggio;
```
In C, le costanti di tipo stringa si rappresentano come una sequenza di caratteri racchiusi tra `" "`. L’inizializzazione può avvenire in fase di dichiarazione:
```
typedef char stringa[30];
stringa messagio = "prova";
```

La lettura e la scrittura di stringhe è particolarmente semplice:
```
char nome[30];

printf("Inserisci il tuo nome: ");
scanf("%s", nome); //Per la lettura delle stringhe non bisogna anteporre & al nome della stringa
printf("Ciao %s!\n", nome);
```
Con `%s`, `scanf` legge una stringa fino al primo spazio. Per leggere stringhe che includono uno spazio si utilizza la stringa di formato `%[^\n]`
```
printf("Inserisci il tuo nome: ");
scanf("%[^\n]", nome);
```

### Carattere terminatore
In C esiste un carattere speciale che indica **la fine di una stringa**: `\0`. Questo carattere ha codice 0 nella tabella ASCII.
Quando la funzione `printf` individua questo carattere speciale, **smette di stampare a video gli elementi della stringa**.
Tutte le funzioni standard di libreria del C gestiscono autonomamente la posizione e l’individuazione del carattere `\0`. Nel caso però io voglia dichiarare ed inizializzare manualmente una stringa carattere per carattere, **devo aggiungere il carattere terminatore** alla fine della stringa.
```
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
```
typedef int matrice[N][M];
matrice a;

float b[3][3];
```
Accesso ad un elemento:
`b[1][0] = 30;`
La lettura avviene **un elemento alla volta**, come per gli array:
```
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
```
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
```
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
```
int a[2][3] = {{1, 2, 3}, {4, 5, 6}}, b[2][3];
b = a; //Errore di sintassi
```
Analogamente agli array, non si possono utilizzare operatori di confronto con le matrici. I confronti vanno fatti **un elemento alla volta**.

## Struct
Devo rappresentare i libri in una biblioteca, utilizzando delle variabili:
```
int anno;
int pagine;
char autore[30];
char titolo[100];
```
Se i libri fossero tanti, questo tipo di soluzione non sarebbe praticabile. Inoltre, queste variabili così impostate non sono in alcun modo collegate tra loro.

Il problema si può affrontare usando le `struct`:
```
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
```
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
```
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
```
struct libro
{
	int anno;
	int pagine;
	char autore[30];
	char titolo[100];
}

struct libro l;
```
Solitamente in questo caso si pone la `struct` nel blocco globale per poter creare variabili della `struct` ovunque nel programma.

Con `typedef`:
```
typedef struct
{
	int anno;
	int pagine;
	char autore[30];
	char titolo[100];
} libro;

libro l;
```

### Array di struct
È possibile dichiarare un array di struct. In questo modo è possibile gestire una sequenza di elementi ognuno dei quali rappresenta un dato strutturato.
Esempio:
```
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
```
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
```
libro l1, l2;
l1 = l2;
```
Non è invece possibile effettuare confronti fra struct ma occorre considerare **un campo per volta**:
```
if(l1 == l2) //Errore di sintassi
```
Le struct **possono essere usate come parametri e valori di ritorno** delle funzioni senza particolari accorgimenti:
```
void f(libro l);
```

### Struct come campi
```
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
```
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
```
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
```
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
```
int factRic(int n)
{
	return n * factRic(n - 1); //Non c'è il caso base
}
```
* Loop infinito (chiamate identiche)
```
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
```
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
```
float var;
float *p;

var = 3.4;
p = &var; //&: “Indirizzo di...” - p “punta a” var
```
`&` è un operatore un’aria e restituisce l’indirizzo di memoria di una variabile qualunque.
### La funzione scanf
La funzione scanf ha come parametri la stringa di controllo e l’**indirizzo della variabile** in cui deve essere memorizzato il valore letto da tastiera.
### Dereferenziazione di un puntatore
Come accedere al **contenuto** della cella di memoria puntata dal puntatore:
```
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
```
float a = 3.4;
float *p1 = NULL, *p2 = NULL; //Non puntano a niente
p1 = &a; //p1 punta ad a ora
p2 = p1; //p2 punta anch’esso ad a
```
* Assegnamento per dereferenziazione:
```
float a = 3.4, b;
float *p1 = NULL, *p2 = NULL;
p1 = &a; //p1 punta ad a
p2 = &b; //p2 punta a b
*p2 = *p1; //b = a;
```
### Aritmetica dei puntatori
Il C consente di effettuare somme e sottrazioni sui puntatori:
```
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