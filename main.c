#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

   int type;
   char premiers[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,51,53,57,59,61}; 

   typedef struct{
      int type,
              somme,
              liste_des_nombres[10], 
              int_NULL;
   }ARITHMETIQUE;


   typedef struct{
     int type,
              nmbr_1,
              nmbr_2,
              nmbr_1_moins_2,
              originale_1,
              originale_2,
              originale_3, 
              compteur_1,
              compteur_2,
              compteur_3,
              int_NULL;
   }DENOMBREMENT;


   typedef struct{ 
        float  a,
               b,
               c,
               delta,
               x1,
               x2,
               intNULL;

   }EQN_SEC_DEG;


   typedef struct{
      int quantite,
               intNULL;
   }NOMBRE_PAIR;


   typedef struct{
      int  quantite;
      int int_NULL;
   }NOMBRE_PREMIER;

   
   typedef struct{
       int nmbr,
           int_NULL;
   }VAL_ABS;


   typedef struct{
      int nmbre_1, 
          nmbre_2,
          iteration,
          type,
          int_NULL;
   }table_de_Multiplication;

     ARITHMETIQUE arithmetique;
     DENOMBREMENT denomb;
     EQN_SEC_DEG eqn_sec_deg;
     NOMBRE_PAIR nombre_pair;
     NOMBRE_PREMIER nombre_premier;
     VAL_ABS val_abs;
     table_de_Multiplication table;


    void continuer(int *type){
       printf("\n==============================\n");
                  printf("Est-ce que vous voulez continuer?\n");
                  printf("  Appuyez sur \n    \033[1;32m0\033[0m pour continuer le programme\033[1;32m...\033[0m"); 
                  printf("\n    \033[1;32mn\'importe quuel nombre\033[0m pour terminer le programme\033[1;32m...\033[0m ");

                  scanf("%d",type);

                  (*type==0)? main():printf("\n=============\n\033[1;32mAu revoir!!!\033[0m");
 }



// pour arithmetique......menu_1
void arith_calculeur(char type_de_calcul[], int* quantite){


      switch(arithmetique.type){

            case 1:
      
       do{              
            printf("        Saisir la quantite des nombres qui sera utilisee pour faire %s... Attention!, \033[1;33mau moins...\033[0m deux nombres, \033[1;33mau plus...\033[0mdix.\n\n         NB:pour faire la substraction, faire la somme des nombres avec moins\n       \033[1;33mreponse\033[0m: ", type_de_calcul);

                  scanf("%d", quantite);
     }while(*quantite < 2 || *quantite >10);
  
          
              arithmetique.somme=0;
        for(int i=0; i< *quantite;i++ ){
              printf("        Entrez nombre numero \033[1;33m%d\033[0m :",i+1);
              scanf("%d", &arithmetique.liste_des_nombres[i]);
                arithmetique.somme += arithmetique.liste_des_nombres[i];
              printf("\n");
        }
         printf("          reponse... \033[1;33m%d\033[0m",arithmetique.somme);

           continuer(&arithmetique.int_NULL);

              break;

              case 2 :
              
       do{
            printf("        Saisir la quantite des nombres qui sera utilisee pour faire %s... Attention!, \033[1;33mau moins...\033[0m deux nombres, \033[1;33mau plus...\033[0mdix.\n       \033[1;33mreponse\033[0m: ", type_de_calcul);

                  scanf("%d", quantite);
     }while(*quantite < 2 || *quantite >10);
  
          
              arithmetique.somme=1;
        for(int i=0; i< *quantite;i++ ){
              printf("        Entrez nombre numero \033[1;33m%d\033[0m :",i+1);
              scanf("%d", &arithmetique.liste_des_nombres[i]);
                arithmetique.somme =arithmetique.somme * arithmetique.liste_des_nombres[i];
              printf("\n");
        }
         printf("          reponse... \033[1;33m%d\033[0m",arithmetique.somme);

          continuer(&arithmetique.int_NULL);
               break;

               case 3 :
              
       do{
            printf("        Saisir  \033[1;33mDEUX\033[0m nombres qui sera utilisee pour faire %s... Separez les avec espaces...\n       \033[1;33mreponse\033[0m: ", type_de_calcul);

            scanf("%d%d", &arithmetique.liste_des_nombres[0], &arithmetique.liste_des_nombres[1]);

     }while(arithmetique.liste_des_nombres[1]==0);
  
              printf("\n");
         printf("          reponse... \033[1;33m%d\033[0m",arithmetique.liste_des_nombres[0]/arithmetique.liste_des_nombres[1]);

          continuer(&arithmetique.int_NULL);
               break;
      
       }

}



//pour denombrement...menu_2
 void denombrement(char type_de_calcul[]){
            
              switch(denomb.type){
                  
                  case 1:

                  printf("        Saisir le nombre pour avoir \033[1;34m%s\033[0m...\n       \033[1;34mreponse\033[0m: ", type_de_calcul);

                   scanf("%d",&denomb.nmbr_1);
                    
                     denomb.originale_1 = denomb.nmbr_1;
                     denomb.compteur_1 = denomb.nmbr_1-1;
                    for(int i=denomb.nmbr_1; i >=1; i--){
                       denomb.nmbr_1 *= denomb.compteur_1;

                        if(denomb.compteur_1<= 1){ 
                            denomb.compteur_1=1;
                            }else{ denomb.compteur_1-=1;
                            }                     
                    }
                        printf("       Le factoriel de \033[1;34m%d\033[0m est \033[1;34m%d\033[0m",denomb.originale_1,denomb.nmbr_1);

                        continuer(&denomb.int_NULL);

                   break;
                   
                    case 2: 
                     printf("        Saisir \033[1;34mdeux\033[0m nombre pour avoir \033[1;34m%s\033[0m...\n          \033[1;34mNB\033[0m: Separez les avec espaces\n          \033[1;34mreponse\033[0m: ", type_de_calcul);

                     scanf("%d %d",&denomb.nmbr_1,&denomb.nmbr_2);

                        denomb.originale_1 = denomb.nmbr_1;
                        denomb.compteur_1 = denomb.nmbr_1-1;

                        for(int j_0=denomb.nmbr_1; j_0 >=1; j_0--){
                            denomb.nmbr_1 *=denomb.compteur_1;

                        if(denomb.compteur_1<= 1){ 
                            denomb.compteur_1=1;
                            }else{ denomb.compteur_1-=1;
                            }     
                        }


                        denomb.nmbr_1_moins_2 = denomb.nmbr_1-denomb.nmbr_2;
                        denomb.originale_3 = denomb.nmbr_2;
                        denomb.compteur_3 = denomb.nmbr_1_moins_2-1;

                        for(int j_1=denomb.nmbr_1_moins_2; j_1>=1; j_1--){
                            denomb.nmbr_1_moins_2 *=denomb.compteur_3;

                        if(denomb.compteur_3<= 1){ 
                            denomb.compteur_3=1;
                            }else{ denomb.compteur_3-=1;
                             }     
                        }

                        printf("         L\'Arrangement de \033[1;34m%d\033[0m et \033[1;34m%d\033[0m est \033[1;34m%d\033[0m",denomb.originale_1,denomb.originale_2,denomb.nmbr_1/denomb.nmbr_1_moins_2);

                           continuer(&denomb.int_NULL);
                      
                     break;
                      case 3:
                          printf("        Saisir \033[1;34mdeux\033[0m nombre pour avoir \033[1;34m%s\033[0m...\n          \033[1;34mNB\033[0m: Separez les avec espaces\n          \033[1;34mreponse\033[0m: ", type_de_calcul);

                     scanf("%d%d",&denomb.nmbr_1,&denomb.nmbr_2);

                        denomb.originale_1 = denomb.nmbr_1;
                        denomb.compteur_1 = denomb.nmbr_1-1;

                        for(int k_0=denomb.nmbr_1; k_0 >=1; k_0--){
                            denomb.nmbr_1 *=denomb.compteur_1;

                        if(denomb.compteur_1<= 1){ 
                            denomb.compteur_1=1;
                            }else{ denomb.compteur_1-=1;
                            }     
                        }


                         denomb.originale_2 = denomb.nmbr_2;
                        denomb.compteur_2 = denomb.nmbr_2-1;

                        for(int k_1=denomb.nmbr_2; k_1 >=1; k_1--){
                            denomb.nmbr_1 *=denomb.compteur_1;

                        if(denomb.compteur_1<= 1){ 
                            denomb.compteur_1=1;
                            }else{ denomb.compteur_1-=1;
                            }     
                        }


                        denomb.nmbr_1_moins_2 = denomb.nmbr_1-denomb.nmbr_2;
                        denomb.originale_3 = denomb.nmbr_2;
                        denomb.compteur_3 = denomb.nmbr_1_moins_2-1;

                        for(int k_2=denomb.nmbr_1_moins_2; k_2>=1; k_2--){
                            denomb.nmbr_1_moins_2 *=denomb.compteur_3;

                        if(denomb.compteur_3<= 1){ 
                            denomb.compteur_3=1;
                            }else{ denomb.compteur_3-=1;
                            }     
                        }

                        printf("         L\'Arrangement de \033[1;34m%d\033[0m et \033[1;34m%d\033[0m est \033[1;34m%d\033[0m",denomb.originale_1,denomb.originale_2,denomb.nmbr_1/(denomb.nmbr_1_moins_2*denomb.nmbr_2) );

                              continuer(&denomb.int_NULL);
                       break;
              }

    }



//menu 3...en main()...

//menu 3...en main()...

//menu 3...en main()...

//menu 6...en main()...



// pour la table de multiplication...menu_7
        void generer(){
              
            do{    
            printf("====================================== \n Bienvenue sur \033[1;31mLA TABLE DE MULTIPLICATION\033[0m...\n");
            printf("======================================\n\n");
            printf("Saisir le nombre de la table a laquelle on va commencer\n");
            printf("Et ensuite saisir le nombre de la table a laquelle on va terminer\n\n");


            printf("  \033[1;31mreponse\033[0m : ");

            

            scanf("%d%d",&table.nmbre_1,&table.nmbre_2);


            table.iteration = 0;
            for(int i= table.nmbre_1; i <= table.nmbre_1 + (table.nmbre_2- table.nmbre_1); i++ ){

            printf("    Voici la table de multiplication de %d\n\n", table.nmbre_1+ table.iteration);
                for(int j = 0; j<=12;j++){
                    printf("        %d * %d = \033[1;31m%d\033[0m\n", table.nmbre_1+ table.iteration,
                                                                j,
                                                                (table.nmbre_1+ table.iteration) * j );
                }
                table.iteration += 1;
                }
            }while( table.nmbre_1 > table.nmbre_2);
                         table.nmbre_1 = 0;
                         table.nmbre_2 = 0;
                         table.iteration=0;
                         table.type /*=0*/;

                  continuer(&table.int_NULL);
        }
    


int main(void){

     system("clear");
     printf("\033[1;32mHello!\033[0m \n  Bienvenue sur \033[1;32mMini CALCULATRICE\033[0m...\n");
            printf("======================================\n\n");
            printf("Parcourez les fonctionnalitee de votre choix...\n");
            printf("    \033[1;32m1\033[0m : Calculs Arithmetiques\n");
            printf("    \033[1;32m2\033[0m : Denombrement\n");
            printf("    \033[1;32m3\033[0m : Equation de second degre\n");
            printf("    \033[1;32m4\033[0m : Nombres pairs\n");
            printf("    \033[1;32m5\033[0m : Nombres premiers\n");
            printf("    \033[1;32m6\033[0m : Valeur absolue d\'une nombre\n");
            printf("    \033[1;32m7\033[0m : Table de multiplication\n");
            printf("      \033[1;32mreponse :\033[0m ");

            scanf("%d",&type);
              (type == 1 || type == 2 || type == 3 || type == 4 || type == 5 || type == 6 || type == 7 )?true:main();

            switch(type){
                case 1:   
     
            printf("====================================== \n  Bienvenue sur \033[1;33mLes Calculs Arithmetiques\033[0m...\n");
            printf("============================================\n\n");
            printf("    Choissez quel type de calcul vous voulez\n\n");
            printf("    ========\n");
            printf("        \033[1;33m1\033[0m : Addition ou Soustraction\n");
            printf("        \033[1;33m2\033[0m : Multiplication\n");
            printf("        \033[1;33m3\033[0m : Division\n");
            printf("       \033[1;33mreponse :\033[0m ");

            scanf("%d", &arithmetique.type);   
             (arithmetique.type ==1 || arithmetique.type == 2 || arithmetique.type == 3)? true:main();

            switch(arithmetique.type){
                  case 1 :
                   arith_calculeur("L'Addition", &arithmetique.int_NULL);
                   break;
                    case 2 :
                     arith_calculeur("La Multiplication", &arithmetique.int_NULL);
                     break;
                      case 3:
                      arith_calculeur("La Division", &arithmetique.int_NULL);
                       break;
            }     
                  break;



                   case 2:
                    printf("====================================== \n  Bienvenue sur \033[1;34mDenombrement\033[0m...\n");
                    printf("======================================\n\n");
                            printf("    Choissez quel type de calcul vous voulez\n\n");
                            printf("    ========\n");
                            printf("        \033[1;34m1\033[0m : Factoriel d\'un nombre\n");
                            printf("        \033[1;34m2\033[0m : Arrangement Anp\n");
                            printf("        \033[1;34m3\033[0m : Combinaison Cnp\n");
                            printf("       \033[1;34mreponse :\033[0m ");

                            scanf("%d", &denomb.type);   
                            (denomb.type ==1 || denomb.type == 2 || denomb.type == 3)? true:main();

             switch(denomb.type){
                  case 1 :
                   denombrement("factoriel");
                   break;
                    case 2 :
                     denombrement("Arrangement Anp");
                     break;
                      case 3:
                        denombrement("Combinaison Cnp");
                       break;
            }
                    break;



                     case 3:

    do{
     printf("====================================== \n  Bienvenue sur \033[1;36mEquation de Second Degre\033[0m...\n");
     printf("======================================\n");
      printf("    Merci de saisir \033[1;36mles coefficients(3)\033[0m de l\'equation pour afficher les solutions...\n");
      printf("        \033[1;36mNB\033[0m: Separez les avec l\'espace...\n");
       printf("          \033[1;36mreponse :\033[0m ");
                      
                               scanf("%d%d%d",&eqn_sec_deg.a,&eqn_sec_deg.b,&eqn_sec_deg.c);
 }while( eqn_sec_deg.a == 0 );
          
          eqn_sec_deg.delta = eqn_sec_deg.b*eqn_sec_deg.b - (4*eqn_sec_deg.a*eqn_sec_deg.c);

          if(eqn_sec_deg.delta>0){
          eqn_sec_deg.x1 = (-eqn_sec_deg.b + sqrt( eqn_sec_deg.delta ) )/(2*eqn_sec_deg.a) ;
          eqn_sec_deg.x2 = (-eqn_sec_deg.b - sqrt( eqn_sec_deg.delta ) )/(2*eqn_sec_deg.a) ;
             printf("            L\'equation a \033[1;36mdeux solutions\033[0m...\n              Premiere solutiion: \033[1;36m%d\033[0m.\n              Deuxieme Solution : \033[1;36m%d\033[0m.", eqn_sec_deg.x1,eqn_sec_deg.x2);
          }
          else if(eqn_sec_deg.delta==0){
              eqn_sec_deg.x1 = (-eqn_sec_deg.b + sqrt( eqn_sec_deg.delta ) )/(2*eqn_sec_deg.a);
                  printf("            La seul solution pour \033[1;36mcette equation\033[0m est \033[1;36m%d\033[0m",eqn_sec_deg.x1);
          }else{
               printf("            Il n y\'a pas de solution pour \033[1;36mcette equation\033[0m");
          }
                continuer(&eqn_sec_deg.intNULL);
                      break;


                      
                       case 4:
                do{
                    printf("====================================== \n  Bienvenue sur \033[1;35mNombres Pairs...\033[0m...\n");
                    printf("======================================\n\n");
                            printf("    Saisir \033[1;35mle nombre/quantite\033[1;0m des nombres paires vous voulez... \n");
                    printf("       \033[1;35mreponse :\033[0m "); 
                            scanf("%d", &nombre_pair.quantite); 


                            for(int nmbr=0; nmbr<nombre_pair.quantite; nmbr++){
                                 printf("          Nombre pair numero %d : \033[1;35m%d\033[0m \n", nmbr+1,nmbr*2);
                            };
                             
                            }while(nombre_pair.quantite < 1);
                              continuer(&nombre_pair.intNULL);
                        break;



                         case 5:
               do{
                    printf("====================================== \n  Bienvenue sur \033[1;35mNombres Premiers...\033[0m...\n");
                    printf("======================================\n\n");
                            printf("    Saisir \033[1;35mle nombre/quantite\033[1;0m des nombres premiers que vous voulez... \n        \033[1;35mNB\033[0m: pour efficacite et exactitude...la limite \033[1;35mc\'est vignt\033[0m...\n");
                    printf("           \033[1;35mreponse :\033[0m "); 
                            scanf("%d", &nombre_premier.quantite); 
                             }while(nombre_premier.quantite >20 || nombre_premier.quantite < 1);


                            for(int i=0; i<nombre_premier.quantite; i++){   
            
                              printf("            Nombre premier numero %d : \033[1;35m%d\033[0m \n",i+1,premiers[i]);
                            };
                              continuer(&nombre_premier.int_NULL);
                          break;



                           case 6:
                              printf("====================================== \n  Bienvenue sur Calculatrice \033[1;36mValeur Absolue\033[0m...\n");
                    printf("======================================\n");
                            printf("    Saisir un nombre pour trouver \033[1;36mla valeur absolue\033[0m...\n");
                    printf("       \033[1;36mreponse :\033[0m "); 

                        scanf("%d", &val_abs.nmbr); 
                    printf("          La valeur absolue de \033[1;36m%d\033[0m est \033[1;36m%d\033[0m",val_abs.nmbr,val_abs.nmbr<0? val_abs.nmbr*-1:val_abs.nmbr);

                    continuer(&val_abs.int_NULL);
                            break;



                             case 7:
                              generer();
                               break;
 
            } 

    return 0;
}
