#include<stdio.h>
#include<conio.h>

#define MAX 5
float pila[MAX];
int top;
float num;
 void push()
          {
                 if (top == (MAX-1))
                 {
                         printf ("PILA LLENA\n");
                 }
                 else
                 { printf ("INTRODUSCA ELEMENTO\n\n\n");
                   scanf("%f", &num);
                   top=top+1;
                   pila[top]=num;
                 
                 }
               }
          void pop()
           { 
                   if (top == -1)
                   {
                         printf ("PILA VACIA\n");
                   }
                   else
                   {
                      printf ("ELEMENTO ELIMINADO = %d\n", pila[top]); 
                      top = top-1;
                   }
           }
           void ver()
            { 
                   int i;
                   if (top == -1)
                   {
                         printf ("PILA VACIA\n");
                   }
                   else
                   {
                     for(i = top;i >= 0;i--)
                     {
                          printf ("%f\n", pila[i]); 
                     }
                   }
                    printf ("\n");
            }            


main (){ 
        int opc;
        top = -1;
        do{
         printf ("\n\n\n");
         printf ("1. METER EN LA PILA (PUSH)\n\n");
         printf ("2. SACAR DE LA PILA (POP)\n\n");
         printf ("3. VER LA PILA\n\n");
         printf ("4. SALIR\n");
         printf ("\n $$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
         printf ("  Escoja una opcion \n");
         scanf("%d", &opc);
         printf("\n\n");
         switch (opc){
          case 1 : push();
           break;
          case 2: pop();
           break;
          case 3: ver();
           break;
          case 4:
                return;
           break;       
           }             
         } while (opc != 4);

}
         
