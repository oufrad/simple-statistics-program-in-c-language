#include<stdio.h>
#include<stdlib.h>
#include<math.h>



/****************************************   **les fonctions et procédures pour saisir afficher les élement de tableau statisique*******************************/



// le MENU/
int Menu()
{
   int choix;
    printf("\t\t********************************************************************\n");
    printf("\t\t*************************** Menu ***********************************\n");
    printf("\t\t********************************************************************\n");
    printf("\t\t**\t1:  pour Saisir les element de Xi                         **\n");
    printf("\t\t**\t2:  pour Afficher les element de Xi                       **\n");
    printf("\t\t**\t3:  pour Saisir les element de Ni                         **\n");
    printf("\t\t**\t4:  pour Afficher les element de Ni                       **\n"); 
    printf("\t\t**\t5:  pour afficher l'effectif cumulées croissant           **\n");
    printf("\t\t**\t6:  pour afficher l'effectif cumulees decroissantes       **\n");
    printf("\t\t**\t7:  pour afficher le frequences                           **\n");
    printf("\t\t**\t8:  pour afficher le frequences cumulees croissantes      **\n");
    printf("\t\t**\t9:  pour afficher le frequences cumulees decroissantes    **\n");
    printf("\t\t**\t10: pour calculer la mediane de cette serie statistique   **\n");
    printf("\t\t**\t11: pour calculer la moyenne de cette serie statistique   **\n");
    printf("\t\t**\t12: pour calculer la varience de cette serie statistique  **\n");
    printf("\t\t**\t13: pour calculer l'ecart type de cette serie statistique **\n");
    printf("\t\t**\t0   pour quitter le programme                             **\n");
    printf("\t\t********************************************************************\n");
    printf("\t\t********************************************************************\n");
    printf("donnez votre choix:");
    scanf("%d",&choix);
    return choix;
}

// procédure pour saisir un tableau des variables de série statistique (1 variable quantitative)



void saisirXi(int T[], int n)
{
 int i;

for( i=0;i<n;i++)

 {
     printf("entrez la valeur de X%d\n",i+1);

     scanf("%d",&T[i]);
     printf("\a");
     printf("\n");
 }


}


//procédure pour mise en ordre les valeurs de tableau

void ordre(int T[],int n)
{
    int i,j,w;

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(T[i]>T[j])
            {
                w=T[j];
                T[j]=T[i];
                T[i]=w;
            }
        }
    }
    printf("\n");
}


//procédure pour afficher les valeurs *Xi*

 void afficherXi(int T[],int n)
 {
     int i;
    for( i=0;i<n;i++)
     printf ("\t X%d : %d\n\n",i+1,T[i]);

     printf("\n");
     printf("\a");
     printf("\n");
 }


// procédure pour saisir un tableau d'éffectifs de série statistique

void saisirNi(int T[], int n)
{
 int i;

 for( i=0;i<n;i++)
 {
     printf("\nentrez l'effectif de X%d\n",i+1);

     scanf("%d",&T[i]);
     printf("\a");
     printf("\n");
 }
}





 //procédure pour afficher les valeurs *Ni*

 void afficherNi(int T[],int n)
 {
     int i;
    for( i=0;i<n;i++)
     printf ("\tN%d: %d",i+1,T[i]) ;
     printf("\a");
     printf("\n");
 }



 //procuédure pour calculer l'éffectif cumulée croissant /* ECC */

 void PECC(int T1[],int T2[],int n)
 {


 int i;

 T1[0]=T2[0];

   for(i=1;i<n;i++)
   {
    T1[i]=T1[i-1]+T2[i];
   }
}



 //procédure pour afficher les valeurs * ECC *

 void afficherECC(int T[],int n)
 {
     int i;
    for( i=0;i<n;i++)
     printf ("\t ECC%d : \t%d\n\n",i+1,T[i]);

     printf("\n");
     printf("\a");
     printf("\n");
 }
 //procédure pour calcule et afficher le valeurs *ECD *
  
void PECD(int ECD[],int Ni[],int n,int N)
{
	int i;
	ECD[0]=N;
	for(i=1;i<n;i++);
	{
		ECD[i]=ECD[i-1]-Ni[i-1];
	}
	
}
 void afficherECD(int ECD[],int n)
 {
     int i;
    for( i=0;i<n;i++)
	  printf ("\tECD%d : \t%d\n",i+1,ECD[i]);
     printf("\n");
     printf("\a");
     printf("\n");
}

  //procuédure pour calculer les fréquence * Fi *

  void frequence(float T1[],int T2[],int n,int s)
  {
      int i;


      for (i=0;i<n;i++)
        {
        T1[i]=(T2[i]/s);
        }

  }



  //procédure pour afficher les valeurs des * Fi *

 void afficherFi(float T[],int n)
 {
     int i;
    for( i=0;i<n;i++)
     printf ("\t %.3f \n\n",i+1,T[i]);

     printf("\n");
     printf("\a");
     printf("\n");
 }



  //procuédure pour calculer les fréquences cumulée croissant /* FCC */

 void PFCC (float FCC[],float Fi[],int n)
 {


 int i;

 FCC[0]=Fi[0];

   for(i=1;i<n;i++)
   {
    FCC[i]=FCC[i-1]+Fi[i];
   }
}



//procédure pour afficher les valeurs * FCC *

 void AfficherFCC(float FCC[],int n)
 {
     int i;
    for( i=0;i<n;i++)
     printf ("\t %d\n\n",i+1,FCC);

     printf("\n");
     printf("\a");
     printf("\n");
 }





 //procuédure pour calculer les fréquences cumulée décroissant /* FCD */

 void PFCD(float FCD[],float Fi[],int n,int N)
 {


 int i;

 FCD[0]=N;

   for(i=1;i<n;i++)
   {
    FCD[i]=FCD[i-1]-Fi[i-1];
   }
}
 void AfficherFCD(float FCD[],int n)
 {
     int i;
    for( i=0;i<n;i++)
     printf ("\t  %d\n\n",i+1,FCD);

     printf("\n");
     printf("\a");
     printf("\n");
 }

/**************************************************************************************************************************************************************/

/***************************************FONCTIONS ET PROCEDURE POUR CALCULER LES PARAMETRES DE POSITION/DESPERSION DE SERIE STATISTIQUE************************/

/*************************************************************************************************************************************************************/
 
 //fonction pour calculer l'éffectif total *N*

 int efftotal(int T[],int n)
 {
     int N=0,i;
     for (i=0;i<n;i++)
        N+=T[i];

        return N;

 }

 //fonction pour calculer la moyenne  *moy*

 float moyenne(int Xi[],int Ni[],int n)
 {

     int N=efftotal(Ni,n);
     int i,s=0;

     for (i=0;i<n;i++)
     {
       s += Xi[i]*Ni[i];
     }
     return s/N;
 }

  //fonction pour calculer la varience  * Vx *

  float var(int Xi[],int Ni[],int n)
 {

     int N=efftotal(Ni,n);
     int i,s=0;
     float m;
     m=moyenne(Xi,Ni,n);
     for (i=0;i<n;i++)
     {
       s += (Xi[i]*Xi[i])*Ni[i];
     }
     return ((s/N)-(m*m));
 }
 //fonction pour calculer l'écart type  * ET *

float ecartype(float Vx)
 {

     return sqrt(Vx);;
 }


// procédure/fonction pour calculer la médianne  * Me *


int dtrmna(int N)
{
    float a;
    if(N%2==0)
       a = N/2;
    else
        a = (N+1)/2;

    return a;
}

int dtrmnb(int ECC[],int n,float a)
{
    int b,i,T[100];
    b=0;
    for(i=0;i<n;i++)
     {
      if(ECC[i]>a)
       T[i]=ECC[i]-a;

      }
      for (i=1;i<n;i++)
       if(T[i]<T[i-1]) b=i;
  return b;
}

int dtrmnMe(int Xi[],int b)
{
    int Me;

    Me=Xi[b];

    return Me;


}
/**************************************************************************************************************************************************************/

/*******************************************************************PROGRAMME PRANCIPALE***********************************************************************/

/*************************************************************************************************************************************************************/
main()
 {
 	 int n,Xi[100],Ni[100],ECC[100],b,Me,N,ECD[100];
  float Fi[100],FCC[100],FCD[100],a,c,moy,Vx,ET;
    N=efftotal(Ni,n);
    int choix;
    do {
     choix=Menu();
     switch (choix)
    {
           case 1: 
                   printf("entrez le nombre des element de Xi:");
                   scanf("%d",&n);
                   printf("\t##########~~~~~~~SAISIR DES *~Xi~*~~~~~~~~~#########");
				   printf("\n");
				   saisirXi(Xi,n);
                   ordre(Xi,n);
                   break;
           case 2:
           	      printf("\t##########~~~~~~~AFFICHAGE  DES *~Xi~*~~~~~~~~~#########");
				  printf("\n");
				  printf("les element de Xi est : \n");
                  afficherXi(Xi,n);
                  break;
           case 3:  
                  printf("\t##########~~~~~~~SAISIR DES *~Ni~*~~~~~~~~~#########");
                  printf("\n");
				  saisirNi(Ni,n);
                  printf("\a");
                  break;
            case 4:
            	  printf("\t##########~~~~~~~AFFICHAGE DES *~Ni~*~~~~~~~~~#########");
                  printf("\n");
				  printf("\n\t\t~~~~~~##L'EFFECTIF##~~~~~~\n");
                  afficherNi(Ni,n);
                  printf("\n");
                  break;

           case 5:
           	      printf(" ##########~~~~~~~~~~**l'effectif cumulées croissant est : **~~~~~~~~~~~~########## \n ");
                  PECC(ECC,Ni,n);
                  printf("\n");
				  afficherECC(ECC,n);
                  break;
           case 6:
           	     printf("##########~~~~~~~~l'effectif cumulees decroissantes est : ~~~~~~~~~~##########\n");
                 PECD(ECD,Ni,n,N);
                 printf("\n");
				 afficherECD(ECD,n);
                 break;
           case 7:
           	      printf(" ###############~~~~~~~~~~~~les frequences est : ~~~~~~~~~~~~############\n");
                  frequence(Fi,Ni,n,N);
                  printf("\n");
				  afficherFi(Fi,n);
                  break;
           case 8:
           	      printf("###############~~~~~~~~~~~~les frequences cumulees croissantes  est :  ~~~~~~~~~~~~############\n");
           	      PFCC(FCC,Fi,n);
           	      printf("\n");
				  AfficherFCC(FCC,n);
           case 9:
           	      printf("###############~~~~~~~~~~~~les frequences cumulees decroissantes  est :  ~~~~~~~~~~~~############\n");
           	      PFCD(FCD,Fi,n,N);
           	      printf("\n");
				  AfficherFCD(FCD,n);
           case 10:
                  a=dtrmna(N);
                  b=dtrmnb(ECC,n,a);
                  Me=dtrmnMe(Xi,b);
                  
	              printf("###############~~~~~~~~~~~~la mediane de cette serie statistique est:  ~~~~~~~~~~~~############\t%d\n\a",Me);
                  printf("\n");
				  break;
           case 11:
                  moy=moyenne(Xi,Ni,n);
                  printf("###############~~~~~~~~~~~~La moyenne de cette serie est :  ~~~~~~~~~~~~############%.2f\n",moy);
                  printf("\n");
				  break;
           case 12:
                  Vx=var(Xi,Ni,n);
                  printf("###############~~~~~~~~~~~~La varience de cette serie est :  ~~~~~~~~~~~~############%.2f\n",Vx);
                  printf("\n");
				  break;
           case 13: 
                 ET=ecartype(Vx);
                 printf("###############~~~~~~~~~~~~le ecart type de cette serie statistique est :  ~~~~~~~~~~~~############%d ",ET);
                 printf("\n");
                 break;
    }
     }while (choix!=0);
     system("pause");
     return 0;
     
}

