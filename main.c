#include <stdio.h>

void print_menu();
int gioca_partita();

int main(){
    
    char scelta = {'\0'};
    do{
       print_menu();
       
       scanf("\n%c", &scelta);
        if(scelta == 'B')
        {
            printf("Grazie per aver giocato, alla prossima\n");
            return 0;
        }
        if (scelta !='A'& scelta!= 'B')
        {
        printf("Scelta non valida riprova\n");
        }
       while(scelta == 'A')
        {
            gioca_partita();
            print_menu();
            scanf ("\n%c", &scelta);
        }
    }while(scelta !='A'& scelta!= 'B');
        
return 0;
}



void print_menu(){
    
    printf("Menu iniziale:\n");
    printf("A >> Nuova partita\nB >> Esci dal gioco\n");
    printf("Fai la tua scelta:");
    
}


int gioca_partita(){
    
    int punteggio=0;
    char risposta1, risposta2;
    int lunghezzaNome;
    
    printf("Inserisci la lunghezza del tuo nome (da quante lettere è composto):\n");
    scanf("%d", &lunghezzaNome);
    char nome[lunghezzaNome];
    printf("Inserisci il tuo nome:\n");
    scanf("%s", nome);
  do{
       printf("Domanda numero 1:\n");
       printf("Quale tra le seguenti è una memoria volatile??:\n");
       printf("A >> RAM\nB >> DVD\nC >> CD\n");
       printf("Inserire la risposta:");
       scanf("\n%c", &risposta1);
    
    
      if(risposta1=='A'){
        punteggio++;
       }
      if(risposta1!='A'& risposta1!='B' & risposta1!='C'){
          printf("Risposta non valida riprova\n");
      }
    }while (risposta1!='A'& risposta1!='B' & risposta1!='C');
 do{
      printf("Domanda numero 2:\n");
      printf("Quanti tipi di kernel esistono??:\n");
      printf("A >> 3\nB >> 2\nC >> 1\n");
      printf("Inserire la risposta:");
      scanf("\n%c", &risposta2);
      if(risposta2=='A'){
        punteggio++;
      }
      if(risposta2!='A'& risposta2!='B' & risposta2!='C'){
          printf("Risposta non valida riprova\n");
      }
    }while(risposta2!='A'& risposta2!='B' & risposta2!='C');
    
    printf("Partita conclusa, punteggio totalizzato da %s:%d\n", nome, punteggio);
    
    return 0;
}

