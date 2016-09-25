#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc,char* argv[])
{
    char frase[128], opc = 's', senha, opc2, comp;
    int i=0, enc, chave;
    while(opc == 's' || opc == 'S')
    {
              printf("Digite uma senha para a decriptacao: ");
              scanf("%s", &senha);
              system("cls");
              printf("entre com a chave (0-25): ");
              scanf("%d", &chave);
              while((chave>25) || (chave<0))
              {
                 printf("digite um numero valido: ");
                 scanf("%d", &chave);  
              }
              system("cls");
              printf("Digite a mensagem que deseja encriptar\n");
              scanf(" %[^\n]s",&frase);
              system("cls");
              printf("Frase encriptada com sucesso: \n\n");
              for(i=0;i<strlen(frase);i++)
              {
                        enc = frase[i]+ chave;
                        printf("%c",(char)enc);
              }
              printf("\n\n");
              printf("Deseja decriptar esta mensagem ? (S/N): ");
              scanf("%s", &opc2);
              if(opc2 == 's' || opc2 == 'S')
              {
                  printf("Digite a senha de decriptacao: ");
                  scanf("%s", &comp);
                  if(strcmp("senha","comp")==1)
                      printf("%s\n\n", frase);
                  else
                      printf("Senha invalida\n\n");               
              }   
              
              printf("Deseja encriptar outra mensagem ? (S/N): ");
              scanf("%s", &opc);
              system("cls");
    }
    system("pause");
    return 0;
}
