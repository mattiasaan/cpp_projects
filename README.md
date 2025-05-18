# Progetti C++

Questa repository contiene diversi programmi scritti in C++ per risolvere vari problemi di programmazione. Ogni programma è progettato per eseguire una specifica funzione, come calcolare somme, ordinare numeri, gestire interazioni con l'utente e altro.

### 🔢 Esercizi Numerici e Cicli
Progetti: 01, 02, 03, 04, 05, 06, 07, 08, 10, 11

### 🧮 Calcolatrici e Conversioni
Progetti: 09, 12, 13, 14

### 🧠 Programmazione ad Oggetti
Progetti: 15, 17, 18, 19, 20

### 📂 Gestione files e Interazioni
Progetti: 16, 19

## Elenco dei Progetti

### Somma di 10 Numeri Inseriti dall'Utente (01)
Scrivi un programma in C++ che:
- Chieda all'utente di inserire **10 numeri interi**.
- Calcoli la **somma totale** dei numeri inseriti.
- Stampi il risultato finale a schermo.

**Requisiti:**
- Utilizzare un ciclo `for` per iterare esattamente 10 volte.
- Usare una variabile accumulatore (`somma`) per tenere traccia della somma parziale.

---

### Stampa dei Numeri Pari (02)
Scrivi un programma in C++ che:
- Chieda all'utente di inserire un numero intero positivo.
- A partire da 2, stampi una sequenza crescente di numeri pari, incrementando di 2 ogni volta.

**Requisiti:**
- Utilizzare un ciclo `while` per generare la sequenza.
- Utilizzare solo operazioni aritmetiche di base.

---

### Ricerca del Numero Massimo tra 10 Valori (03)
Scrivi un programma in C++ che:
- Chieda all'utente di inserire **10 numeri interi**.
- Determini e stampi a schermo il **valore massimo** tra i numeri inseriti.

**Requisiti:**
- Utilizzare un ciclo `for` per leggere esattamente 10 numeri.

---

### Calcolo della Media di 10 Numeri (04)
Scrivi un programma in C++ che:
- Chieda all'utente di inserire **10 numeri interi**.
- Calcoli la **media aritmetica** dei valori inseriti.
- Stampi il risultato della media a schermo come numero con virgola (decimale).

**Requisiti:**
- Utilizzare un ciclo `for` per leggere esattamente 10 numeri.
- Calcolare la media convertendo la somma in `float` prima della divisione.
- Stampare la media risultante.

---

### Calcolo di Massimo, Minimo e Media di 10 Numeri (05)
Scrivi un programma in C++ che:
- Chieda all'utente di inserire **10 numeri interi**.
- Calcoli il **numero massimo** e il **numero minimo** tra i valori inseriti.
- Calcoli la **media** tra il numero massimo e il numero minimo.
- Stampi il risultato finale mostrando il massimo, il minimo e la loro media.

**Requisiti:**
- Utilizzare un ciclo `for` per leggere esattamente 10 numeri.
- Determinare il massimo e il minimo durante la lettura dei numeri.
- Calcolare la media tra il massimo e il minimo.
- Stampare i risultati.

---

### Calcolo della Media e Numero Più Vicino alla Media (06)
Scrivi un programma in C++ che:
- Chieda all'utente di inserire **10 numeri interi**.
- Calcoli la **media** dei numeri inseriti.
- Identifichi il numero più vicino alla media tra quelli inseriti.
- Stampi la **media** e il **numero più vicino alla media**.

**Requisiti:**
- Utilizzare un array di dimensione 10 per memorizzare i numeri.
- Calcolare la media.

---

### Distribuzione dei Biglietti tra Ragazzi (07)
Scrivi un programma in C++ che:
- Chieda all'utente di inserire il **numero di ragazzi** e il **numero di biglietti** disponibili.
- Calcoli quanti **biglietti** ogni ragazzo riceve se i biglietti vengono distribuiti in modo equo.
- Calcoli il **resto** dei biglietti che non possono essere distribuiti (cioè i biglietti che rimangono dopo la divisione equa).
- Stampi il risultato, mostrando il numero di biglietti per ragazzo e il numero di biglietti rimanenti.

**Requisiti:**
- Utilizzare la divisione intera (`/`) per calcolare il numero di biglietti per ragazzo.
- Utilizzare l'operatore (`%`) per calcolare i biglietti rimanenti.

---

### Gestione Voti Studenti (08)
Scrivi un programma in C++ che permette di:
- Inserire i voti di uno studente.
- Visualizzare i voti inseriti e la loro media.
- Gestire l'interazione tramite un menu con le seguenti opzioni:
   - **Visualizzare i voti**: Mostra i voti dell'utente e la media calcolata.
   - **Inserire i voti**: Permette all'utente di inserire il nome dello studente e 5 voti.
   - **Esci**: Termina l'esecuzione del programma.

**Requisiti:**
- Utilizzare un ciclo per permettere all'utente di scegliere una delle opzioni sopra menzionate.
- La media dei voti deve essere calcolata automaticamente.
- Il programma deve continuare a chiedere all'utente di scegliere un'opzione finché non si seleziona "Esci".

---

### Calcolatrice Scientifica (09)
Scrivi un programma in C++ che permetta all'utente di scegliere e eseguire una delle seguenti operazioni matematiche:
1. **Addizione**
2. **Sottrazione**
3. **Moltiplicazione**
4. **Divisione**
5. **Potenza**
6. **Radice quadrata**
7. **Seno**
8. **Coseno**
9. **Tangente**

**Requisiti:**
- L'utente deve poter scegliere l'operazione desiderata tramite un numero (da 0 a 8).
- Il programma deve chiedere i numeri necessari per l'operazione scelta:
  - Per le operazioni aritmetiche (addizione, sottrazione, moltiplicazione, divisione), il programma richiede due numeri.
  - Per le operazioni di potenza, radice quadrata, seno, coseno e tangente, il programma richiede solo un numero.
  - utilizzare la libreria cmath per i calcoli complessi.
- Il programma deve gestire errori come:
  - Divisione per zero.
  - Radice quadrata di un numero negativo.
- Il risultato di ogni operazione deve essere mostrato a schermo.

---

### Calcolo della Somma di Due Numeri con Funzioni (10)
Scrivi un programma in C++ che:
- Chieda all'utente di inserire due numeri interi.
- Utilizzi una funzione per calcolare la **somma** dei due numeri.
- Visualizzi il risultato della somma.

**Requisiti:**
- Creare una funzione chiamata `somma` che accetti due argomenti e restituisca il risultato della somma.
- Chiedere all'utente di inserire due numeri interi.
- Passare i numeri alla funzione e stampare il risultato.

---

### Ordinamento di Tre Numeri con Funzioni (11)
Scrivi un programma in C++ che:
- Chieda all'utente di inserire tre numeri interi.
- Utilizzi una funzione per ordinare i numeri in ordine crescente.
- Stampi i numeri in ordine crescente.

**Requisiti:**
- Creare una funzione `riordino` che accetti tre numeri interi come parametri e li ordini in ordine crescente.
- Usare una variabile temporanea per scambiare i numeri quando necessario.
- Stampare i numeri ordinati alla fine.

---

### Conversione di un Numero Decimale in Binario (12)
Scrivi un programma in C++ che:
- Permetta all'utente di inserire un numero decimale (parte intera e parte frazionaria).
- Converta la parte intera del numero in **binario**.
- Converta la parte frazionaria (dopo la virgola) del numero in **binario**, limitando la precisione a 6 cifre.
- Stampi il risultato in formato binario separato da una virgola (parte intera a sinistra e parte frazionaria a destra).

**Requisiti:**
- Gestire la conversione della parte intera del numero tramite divisioni successive per 2.
- Gestire la conversione della parte frazionaria del numero tramite moltiplicazioni successive per 2.
- Limitare la parte frazionaria del risultato a 6 cifre binarie.

---

### Convertitore di Numeri: Binario <-> Decimale (13)
Scrivi un programma in C++ che permetta all'utente di:
- Convertire un numero binario in decimale.
- Convertire un numero decimale in binario.

Il programma deve:
- Chiedere all'utente di scegliere una delle seguenti opzioni:
  - Conversione da binario a decimale.
  - Conversione da decimale a binario.
  - Uscire dal programma.

---

### Risolutore di Equazioni di Primo e Secondo Grado (14)
Scrivi un programma in C++ che permetta all'utente di risolvere equazioni di primo grado e secondo grado utilizzando le funzioni e cmath

---

### Generatore di Labirinti (15)
Questo programma in C++ genera un labirinto casuale. Il labirinto è creato utilizzando un algoritmo di ricerca in profondità che inizia da un punto di partenza e crea passaggi, successivamente vengono aggiunti dei vicoli ciechi per aumentare la complessità.

 **Funzionalità**

1. **Inizializzazione del Labirinto**: Il labirinto è inizializzato come una griglia di caratteri `#` (pareti).
2. **Generazione del Labirinto**: Partendo da un punto iniziale, l'algoritmo crea dei passaggi (`.`) utilizzando un algoritmo di ricerca in profondità.
3. **Aggiunta di Vicoli Ciechi**: Dopo la generazione dei passaggi principali, vengono creati dei vicoli ciechi (zone del labirinto che non portano a nessuna parte).
4. **Stampa del Labirinto**: Alla fine, il labirinto generato viene stampato a schermo.

 **Algoritmi Utilizzati**

- L'algoritmo di generazione del labirinto utilizza la ricerca in profondità (DFS). Si parte da un punto e si esplorano tutte le direzioni in modo casuale.
- Vengono creati vicoli ciechi, ossia passaggi che non conducono a nessuna parte del labirinto, per complicare la navigazione.

---

### Quiz a Scelta Multipla (16)
Questo programma permette di eseguire un test a scelta multipla, dove le domande e le risposte vengono lette da due file esterni (`domande.txt` e `risposte.txt`). Il programma è progettato per essere interattivo, consentendo all'utente di rispondere alle domande e visualizzare il punteggio finale. Al termine, il resoconto del test viene salvato in un file di testo e può essere visualizzato dall'utente.

 **Funzionalità**

1. **Caricamento Domande e Risposte**: Le domande e le risposte vengono lette da due file di testo separati.
2. **Test a Scelta Multipla**: L'utente risponde a 10 domande a scelta multipla. Ogni domanda ha 4 opzioni di risposta, e l'utente deve scegliere la risposta corretta.
3. **Punteggio**: Alla fine del test, viene mostrato il punteggio finale (numero di risposte corrette su 10) e il resoconto del test viene salvato in un file chiamato `resoconto.txt`.
4. **Visualizzazione del Resoconto**: Alla fine del test, il resoconto può essere visualizzato in un editor di testo, a seconda del sistema operativo (Linux o Windows).

 **Dettagli Tecnici**

Il programma carica i dati (domande e risposte) da due file di testo chiamati `domande.txt` e `risposte.txt`.

- **domande.txt**: Un file di testo che contiene le domande del quiz.
- **risposte.txt**: Un file di testo che contiene le risposte. Ogni domanda ha 4 risposte, e le risposte per ogni domanda sono concatenate in un unico file.

 **Funzionamento del Quiz**

1. **Inizio del Test**: L'utente inserisce il proprio nome, cognome e classe. Questi dati vengono salvati nel resoconto.
2. **Esame delle Domande**: Le domande vengono mostrate in ordine casuale e l'utente risponde con una delle opzioni (`a`, `b`, `c`, `d`).
3. **Punteggio**: Ogni risposta corretta incrementa il punteggio. Alla fine del test, il punteggio viene salvato nel file di resoconto.
4. **Resoconto Finale**: Alla fine del test, l'utente può visualizzare il resoconto con il punteggio finale.

**Sistema Operativo Supportato**

Il programma è compatibile con Linux e Windows. A seconda del sistema operativo, il resoconto finale viene aperto con il programma di editing del testo appropriato:

- **Linux**: Usa `gedit`.
- **Windows**: Usa il comando `start` per aprire il file con il programma predefinito.

**Come Funziona**

1. **Funzione `initRandom`**: Inizializza il generatore di numeri casuali usando l'orario corrente come seme.
2. **Funzione `leggiFile`**: Legge il contenuto di un file e restituisce le righe in un vettore di stringhe.
3. **Funzione `poniDomanda`**: Mostra una domanda e le risposte possibili, quindi confronta la risposta dell'utente con la risposta corretta.
4. **Funzione `visualizzaResoconto`**: Permette all'utente di visualizzare il resoconto in un editor di testo in base al sistema operativo.
5. **Funzione `eseguiTest`**: Esegue il test, ponendo le domande all'utente e calcolando il punteggio finale.
6. **Funzione `inizioTest`**: Raccoglie le informazioni dell'utente (nome, cognome, classe) e avvia il test.

---

### Gestione di una Scheda Studente (17)
Scrivi un programma in C++ che:

- Richieda all’utente di inserire il **nome**, la **matricola** (intero) e la **media** (decimale) di uno studente.
- Utilizzi una **classe** chiamata `studente` per rappresentare queste informazioni.
- La classe deve contenere tre **variabili private**: `nome`, `matricola`, e `media`, e un **costruttore** che le inizializzi.
- La classe deve inoltre avere un **metodo pubblico** `stampaScheda()` che stampi le informazioni dello studente in un’unica riga.

 **Requisiti:**

- Utilizzare **incapsulamento** (variabili private e metodi pubblici).
- Il programma deve gestire l’input da tastiera e l’output a schermo.
- La stampa deve avvenire tramite un metodo della classe.

---

### Simulazione di un Conto Bancario (18)
Scrivi un programma in C++ che simuli un semplice conto bancario. Il programma deve:

- Chiedere all’utente il **nome dell’intestatario** e il **saldo iniziale**.
- Utilizzare una **classe** chiamata `ContoBancario` con:
  - Variabili **private**: `saldo` (double) e `intestatario` (string).
  - Un **costruttore** che inizializzi le due variabili.
  - Un metodo `deposita()` che chieda all’utente un importo e lo **aggiunga** al saldo.
  - Un metodo `preleva()` che chieda un importo e lo **sottragga** dal saldo.
  - Un metodo `visualizzaSaldo()` che mostri il saldo attuale dell’intestatario.

il programma deve permettere all’utente di scegliere continuamente tra:
- **prelevare**
- **depositare**
- **saldo** (per visualizzare il saldo attuale)
- **esci** (per uscire dal programma)

 **Requisiti:**
- Utilizzare **classi e metodi** per gestire il conto.
- Implementare un **ciclo** che consenta all’utente di eseguire più operazioni fino a quando sceglie di uscire.

---

### Conto Bancario con Salvataggio su File (19)
Scrivi un programma in C++ che simuli un conto bancario con **persistenza dei dati** su file. Il programma deve:

- Tentare di **caricare** da file (`conto.txt`) il nome dell’intestatario e il saldo.
  - Se il file non esiste, deve chiedere all’utente di inserire i dati iniziali e salvarli su file.
- Utilizzare una **classe** chiamata `ContoBancario` con:
  - Variabili **private**: `saldo` (double) e `intestatario` (string).
  - Un **costruttore** che inizializzi le variabili.
  - Un metodo `deposita()` che chieda un importo, lo aggiunga al saldo e **salvi** il nuovo saldo su file.
  - Un metodo `preleva()` che chieda un importo, lo sottragga dal saldo (se sufficiente) e **salvi** il nuovo saldo su file.
  - Un metodo `visualizzaSaldo()` che mostri a schermo il saldo attuale.
  - Un metodo `salvaFile()` che salvi i dati su un file di testo.
  - Un metodo **statico** `caricaDaFile()` che legga i dati da file e restituisca un oggetto `ContoBancario`.

il programma deve permettere all’utente di scegliere continuamente tra:
- **prelevare**
- **depositare**
- **saldo** (per visualizzare il saldo attuale)
- **esci** (per terminare il programma)

 **Requisiti:**
- Utilizzare **classi**, **metodi statici**, e **file I/O** (`ifstream`, `ofstream`).
- Garantire che i dati vengano **salvati e ripristinati** tra diverse esecuzioni del programma.
- Verificare che il saldo sia sufficiente prima di un prelievo.
- Utilizzare `getline()` per leggere stringhe da file.

---

### Gestione Assenze Studente con Interazione Docente (20)  
Scrivi un programma in C++ che simuli la gestione delle assenze di uno studente tramite l’interazione con più docenti. Il programma deve:

- Creare uno **studente** con un nome fornito dall’utente e inizialmente con zero assenze.
- Creare un array di tre **docenti** con nomi fissi ("Rossi", "Bianchi", "Verdi").
- Permettere all’utente di selezionare un docente e poi scegliere una tra le seguenti operazioni:
  - **Aggiungi assenze**: aumentare il numero di assenze dello studente di un certo numero indicato dall’utente.
  - **Rimuovi assenze**: diminuire il numero di assenze dello studente di un certo numero, senza mai scendere sotto zero.
  - **Leggi assenze**: mostrare a schermo il numero attuale di assenze dello studente.
- Ripetere le scelte fino a quando l’utente decide di uscire.

Il programma deve utilizzare due **classi**:

- `Studente` con:
  - Variabili **private**: `nome` (string) e `assenze` (int).
  - Un **costruttore** che inizializzi il nome e imposti le assenze a zero.
  - Metodi per aggiungere, rimuovere e leggere le assenze.
  - Metodo per restituire il nome dello studente.

- `Docente` con:
  - Variabile **privata** `nome` (string).
  - Un **costruttore** che inizializzi il nome.
  - Metodi per aumentare, diminuire e leggere le assenze di uno studente (passato per riferimento).
  - Metodo per restituire il nome del docente.

**Requisiti:**  
- Utilizzare il passaggio per riferimento (`Studente &`) nei metodi della classe `Docente` che modificano lo studente.  
- Assicurarsi che le assenze non scendano mai sotto zero.  
- Gestire in modo appropriato eventuali input non validi dall’utente.  
- Fornire un’interfaccia testuale semplice per selezionare docenti e operazioni.
