#include <ncurses.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,  char** argv[0])
{
    int hours=0, check=0, opt=0;
    float v_hours=0, sb=0, ir=0, ir2=0, ir3=0, inss=0, inss1=0, inss2=0, inss3=0, fgts=0, sl=0;
    char name[100], command[50];   
    do{
        
        opt=0;
        
        strcpy(command, "clear");
        system(command);
        printf("1 – Ler dados");
        printf("\n2 – Calcular Salário Líquido");
        printf("\n3 – Sair");
        printf("\nInforme a opção: ");
        scanf("%d", &opt);

        if(opt==1){  //ler dados
                
            printf("\nNome do funcionário: ");
            gets(name);
            printf("\nHoras trabalhadas: ");
            scanf("%d", &hours);
            printf("\nValor das hora: ");
            scanf("%f", &v_hours);
            check+=1;
            break;
            
        }else if(opt==2){  //Calcular Salário Líquido
                
            if(check==1){
                    
                //salario bruto
                sb=hours*v_hours;
                printf("Salario bruto: %f \n", sb);
                    
                //calculo IR
                if(sb>=1372.82){
                    ir2=(15*sb)/100;
                    printf("IR: %f \n", ir2);
                    ir=ir2;
                }else if(sb>2743.25){
                    ir3=(27.5*sb)/100;
                    printf("IR: %f \n", ir3);
                    ir=ir3;
                }else{
                    printf("IR não aplicável\n");
                }

                //calculo INSS
                if(sb<868.30){
                    inss1=(8*sb)/100;
                    printf("INSS: %f \n", inss1);
                    inss=inss1;
                }else if(sb>=868.30){
                    inss2=(9*sb)/100;
                    printf("INSS: %f \n", inss2);
                    inss=inss2;
                }else if(sb>=1447.15){
                    inss3=(11*sb)/100;
                    printf("INSS: %f \n", inss3);
                    inss=inss3;
                }else{
                    printf("INSS: 318.37 \n");
                    inss=318.37;
                }

                //FGTS
                fgts=(8*sb)/100;
                printf("FGTS: %f \n", fgts);

                //SL
                sl=sb-ir-inss;
                printf("Salário liquido: %f \n", sl);

                
                check=0;
                    
                
            }else{
                printf("DADOS DO FUNCIONÁRIO NÃO INFORMADOS");
            }
        }else if(opt>3||opt<0){
            printf("OPÇÃO INVÁLIDA\n");
        }

    }while(opt!=3);
    return 0;
}
