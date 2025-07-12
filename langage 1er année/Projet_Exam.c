#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

char repetition(char rep){
    do{
        printf("\n\n\nRecommencer oui=O /non=N : ");
        fflush(stdin); //vider le cache de la machine pour la saisie des caracteres
        rep=getchar(); //recuperation d'un caractere
    }while(rep!='N' && rep!='O');
    return rep;
}

void bye(){
    system("cls");
    system("color B0"); //changer couleur console
    printf("\t\t\t\t   ######    ##     ##    #######\n");
    printf("\t\t\t\t  ##    ##   ##     ##   ##      \n");
    printf("\t\t\t\t  ##    ##   ##     ##   ##      \n");
    printf("\t\t\t\t  #######     ########   ####### \n");
    printf("\t\t\t\t  ##    ##          ##   ##      \n");
    printf("\t\t\t\t  ##    ##          ##   ##      \n");
    printf("\t\t\t\t  #######     #######     #######\n\n");
    exit(0); //pour arreter le programme
}

void somme_deux_nombre(){
    system("cls"); //Effacer l'ecran
    printf(" \t");printf(" \t");puts("~~~~~~~~ Somme de deux nombres ~~~~~~~~\n");
    int x,y,s;
    printf("\n\nSaisir le premier terme et le deuxieme terme : ");
    scanf("%d,%d",&x,&y);
    s=x+y;
    printf("La somme de %d plus %d egale : %d",x,y,s);
}

void produit_deux_nombre(){
    system("cls"); //Effacer l'ecran
    printf(" \t");printf(" \t");puts("~~~~~~~~ Produit de deux nombres ~~~~~~~~\n");
    int x,y,p;
    printf("\n\nSaisir le premier terme et le deuxieme terme : ");
    scanf("%d,%d",&x,&y);
    p=x*y;
    printf("Le produit de %d et %d est egal a : %d",x,y,p);
}

void factoriel_1_nombre(){
    system("cls"); //Effacer l'ecran
    printf(" \t");printf(" \t");puts("~~~~~~~~ Factoriel d'un nombre ~~~~~~~~\n");
    int n,i,f;
    printf("Veillez saisir un nombre : ");
    scanf("%d",&n);
    if (n<0)
        printf("Le nombre doit etre positif");
    else
        if ( n==0 || n == 1)
            printf("%d factoriel est 1",n);
        else{
            f = 1;
            for(i=2;i<=n;i++)
            f = f * i;
            printf("%d factoriel est %d",n,f);
        }
}

void compte_epargne(){
    system("cls"); //Effacer l'ecran
    printf(" \t");printf(" \t");puts("~~~~~~~~ Compte d'epargne ~~~~~~~~\n");
    float s;
    int i;
    s = 100;
    for(i=1;i<20;i++){
        s = s + (s * 2.25) / 100 ;
        printf("%d ans : Gabiel a %.2f dans son compte \n",i,s);
    }
}

void nombre_parfait(){
    system("cls"); //Effacer l'ecran
    printf(" \t");printf(" \t");puts("~~~~~~~~ Nombre parfait ~~~~~~~~\n");
    int a,b,c,i;
    do{
        printf("veillez saisir un nombre entre 1 et 50 : ");
        scanf("%d",&a);
    }while(a<1 || a>50);
    b = 0;
    for(i=1;i<a;i++){
    c = a % i;
    if (c == 0)
        b = b + i;
    }
    if (a == b)
        printf("%d est un nombre parfait",a);
    else
        printf("%d n'est pas un nombre parfait",a);
}

void nombre_premier(){
    system("cls"); //Effacer l'ecran;
    printf(" \t");printf(" \t");puts("~~~~~~~~ Nombre premier  ~~~~~~~~\n");
    int a,b,c,i;
    do{
        printf("veillez saisir un nombre entre 2 et 50 : ");
        scanf("%d",&a);
    }while(a<2 || a>50);
    b = 0;
    for(i=2;i<=a;i++){
        c = a % i;
        if (c == 0)
            b = b + i;
    }
    if (a == b)
        printf("%d est un nombre premier",a);
    else
        printf("%d n'est pas un nombre premier",a);
}

void ppcm(){
    system("cls"); //Effacer l'ecran
    printf(" \t");printf(" \t");puts("~~~~~~~~ PPCM de deux nombres ~~~~~~~~\n");
    int a,b,p,r;
    printf("Veillez saisir un premier nombres :\n");
    scanf("%d",&a);
    printf("Veillez saisir un deuxieme nombre :\n");
    scanf("%d",&b);
    if(a<=0  || b<=0)
        printf("Saisir des valeurs positif et differentes de zero(0)\n");
    else
        if (b>0 && a>b){
            p=a*b;
            r=a%b;// r =reste
            while(r!=0){
                a=b;
                b=r;
                r=a%b;// reste
            }
            printf ("Le PPCM est:%d",p/b);
        }
        else
            if (a>0 && b>a){
                p=a*b;
                r=b%a;
                while (r!=0){
                    b=a;
                    a=r;
                    r=b%a;
                }
                printf("Le PPMC est : %d\n",p/a);
            }
}

void puissance_1_nombre(){
    system("cls"); //Effacer l'ecran
    printf(" \t");printf(" \t");puts("~~~~~~~~ Puissance d'un nombre ~~~~~~~~\n");
    int n,p,i,k;
    do{
        printf("veillez saisir un nombre positif : ");
        scanf("%d",&n);
    }while(n<=1);
    do{
        printf("veillez saisir une puisaance : ");
        scanf("%d",&p);
    }while(p<0);
    if( p > 0){
        k = n;
        for(i=1;i<p;i++)
        k = k * n;
        printf("%d a la puissance %d est egale a %d",n,p,k);
                                  }
    else
        printf("la puisance est 1 ");
}

void compte_rebour(){
    system("cls"); //Effacer l'ecran
    printf(" \t");printf(" \t");puts("~~~~~~~~ Compte a rebours ~~~~~~~~\n");
    int m,s,i;
    do{
        printf("Donner le nombre minute :");
        scanf("%d",&m);
    }while(m<0 || m>59);
    do{
        printf("Donner le nombre seconde :");
        scanf("%d",&s);
    }while(s<0 || s>59);
    while(m!=0 || s!=0){
        if(s!=0)
            s = s-1;
        else{
            s = 59;
            m = m-1;
        }
        printf("%d : %d \n",m,s);
    }
}

void jeu(){
    system("cls"); //Effacer l'ecran
    printf(" \t");printf("\n \t\t");puts("~~~~~~~~ JEU ~~~~~~~~\n\n");
    int Nordi,Nessai,Nuser;
    srand(time(NULL));
    Nordi = rand()%100+1;
    Nessai = 0;
    do{
        printf("\t Devinez le nombre de l'ordinateur :");
        scanf("%d",&Nuser);
        if(Nuser != 0){
            Nessai++;
            if(Nuser == Nordi)
                printf("\n\t Vous avez gagne en %d essai",Nessai);
            else
                if(Nuser > Nordi)
                    puts("\t Votre saisie est trop grande\n");
                else
                    puts("\t Votre saisie est trop petite\n");

        }
    }while(Nessai<10 && Nuser!=Nordi && Nuser!=0);
    if(Nessai==0)
        puts("\n\t Au revoir");
    else
        if(Nessai==10)
            puts("\t \nVous avez perdu BYE");
        else
            if(Nordi!=Nuser && Nessai<10)
                printf("\t Vous avez perdu apres %d tentatives",Nessai);
}

void fusion_2_tableau(){
    system("cls"); //Effacer l'ecran
    printf(" \t");printf(" \t");puts("~~~~~~~~ Fusion de tableaux ~~~~~~~~\n");
    // Fonction pour fusionner deux tableaux triés
    void fusionnerTableaux(int T1[100], int n, int T2[100], int m, int T[]) {
        int i = 0, j = 0, k = 0;
        // Fusionner les tableaux en comparant les éléments
        while (i < n && j < m) {
            if (T1[i] < T2[j]) {
                T[k++] = T1[i++];
            }
            else {
                T[k++] = T2[j++];
            }
        }
        // Ajouter les éléments restants du premier tableau
        while (i < n) {
            T[k++] = T1[i++];
        }
        // Ajouter les éléments restants du second tableau
        while (j < m) {
            T[k++] = T2[j++];
        }
    }
    int T1[100],T2[100],i,n,m;
    // Saisie de la taille du premier tableau
    do{
        printf("Entrez la taille du premier tableau :");
        scanf("%d",&n);
    }while (n<=0 || n>100);
    // Saisie des éléments du premier tableau
    printf("Entrez les elements du premier tableau (tries) :\n");
    for(i=0;i<n;i++){
        printf("Element [%d] :",i+1);
        scanf("%d",&T1[i]);
    }
    // Saisie de la taille du second tableau
    do{
        printf("\nEntrez la taille du second tableau :");
        scanf("%d",&m);
    }while (m<=0 || m>100);
    // Saisie des éléments du second tableau
    printf("Entrez les elements du second tableau (tries) :\n");
    for(i=0;i<m;i++){
        printf("Element [%d] :",i+1);
        scanf("%d",&T2[i]);
    }
    //AFFICHAGE PREMIER TAB
    printf("\n");
    for(i=0;i<n;i++){
        printf("| %d ",T1[i]);
    }
    printf("|");
    //AFFICHAGE SECOND TAB
    printf("\n\n");
    for(i=0;i<m;i++){
            printf("| %d ",T2[i]);
    }
    printf("|");
    // Tableau pour stocker la fusion des deux tableaux
    int T[n + m];
    // Appel de la fonction de fusion
    fusionnerTableaux(T1,n,T2,m,T);
    // Afficher le tableau fusionné
    printf("\n\nFusion des deux tableaux :\n");
    for (int i = 0; i < n + m; i++){
         printf("|");
    }
    printf("\n");
}

void valeurs_nulles(){
        system("cls"); //Effacer l'ecran
        printf(" \t");printf(" \t");puts("~~~~~~~~ Les valeurs nulles d'un tableau ~~~~~~~~\n");
        int T[100],i,n,m,cpt;
        do{
            printf("Entrez la taille du tableau comprise entre 1 et 100 :");
            scanf("%d",&n);
        }while (n<=0 || n>100);
        printf("Entrez les elements du tableau :\n");
        for(i=0;i<n;i++){
            printf("Element [%d] :",i+1);
            scanf("%d",&T[i]);
        }
        printf("\n");
        for(i=0;i<n;i++)
            printf("| %d ",T[i]);
        printf("|");
        //COMPTER LES VALEURS NULLES
        cpt = 0;
        for (int i = 0; i < n; i++)
            if (T[i] == 0)
                cpt++;
        //SUPPRIMER?LES VALEURS NULLES
        m = 0;
        for (i = 0; i < n; i++)
            if (T[i] != 0)
                T[m++] = T[i];
            n = m;
        // AFFICGAGE SANS LES VALEURS NULLES
        printf("\n");
        printf("Nombre de valeurs nulles dans le tableau : %d\n",cpt);
        printf("Tableau apres suppression des valeurs nulles :\n");
        printf("\n");
        for(i=0;i<n;i++)
            printf("| %d ",T[i]);
        printf("|");
}

void recherche_dichotomique(){
        system("cls"); //Effacer l'ecran
        printf(" \t");printf(" \t");puts("~~~~~~~~ Recherche dichotomique ~~~~~~~~\n");
        int T[100],i,j,n,ech,x,mil,bi,bs,stop;
        do{
            printf("Entrez la taille du tableau comprise entre 1 et 100 :");
            scanf("%d",&n);
        }while (n<=0 || n>100);
        printf("Entrez les elements du tableau :\n");
        for(i=0;i<n;i++){
            printf("Element [%d] :",i+1);
            scanf("%d",&T[i]);
        }
        printf("\n");
        for(i=0;i<n;i++)
            printf("| %d ",T[i]);
        printf("|");
        //TRI A BULL
        for(i=n-1;i>=1;i--){
            for(j=0;j<=i-1;j++){
                if(T[j]>T[j+1]){
                    ech = T[j];
                    T[j] = T[j+1];
                    T[j+1] = ech;
                }
            }
        }

        //AFFICHAGE APRES TRI
        printf("\nAPRES TRI\n");
        for(i=0;i<n;i++)
            printf("| %d ",T[i]);
        printf("|");
        //FRECHERCHE DICHOTOMIQUE
        printf("\n\nVeillez saisir le nombre a rechercher :");
        scanf("%d",&x);
        bi = 0;
        bs = n - 1;
        stop = 0;
        do{
            mil = (bs + bi)/2;
            if (x < T[mil])
            bs = mil - 1;
            else
                if(x > T[mil])
                    bi = mil + 1;
                else
                    stop = 1;
        }while(bi<bs && stop==0);
        mil++;
        if(stop==1)
            printf("\n\n%d a ete trouve a la position %d",x,mil);
        else
            printf("\n\n%d n 'est pas dans le tableau",x);
}

void Tableaux_mirroirs(){
    system("cls"); //Effacer l'ecran
    printf(" \t");printf(" \t");puts("~~~~~~~~ Tableaux mirroirs ~~~~~~~~\n");
    int T1[100],T2[100],i,n,m,mir;
    //TAB 1
    do{
        printf("Entrez la taille du tableau 1 :");
        scanf("%d",&n);
    }while (n<=0 || n>100);
    //TAB 2
    do{
        printf("\nEntrez la taille du tableau 2 :");
        scanf("%d",&m);
    }while (m<=0 || m>100);
    //VERIFICATION
    if(n != m)
        printf("\n\nLes tableaux ne sont pas des mirroirs");
    else{
        printf("Entrez les elements du premier tableau :\n");
        for(i=0;i<n;i++){
            printf("Element [%d] :",i+1);
            fflush(stdin);
            T1[i] = getch ();
            scanf("%c",&T1[i]);
        }
        printf("Entrez les elements du second tableau :\n");
        for(i=0;i<m;i++){
            printf("Element [%d] :",i+1);
            fflush(stdin);
            T2[i] = getch ();
            scanf("%c",&T2[i]);
        }
        //AFFICHAGE TAB 1
        printf("\nTABLEAU 1 :\n");
            for(i=0;i<n;i++)
                printf("| %c ",T1[i]);
            printf("|");
        //AFFICHAGE TAB 2
        printf("\n\nTABLEAU 2 :\n");
            for(i=0;i<m;i++)
                printf("| %c ",T2[i]);
            printf("|");
        //VERIFICATION SI N = M
        mir = 0;
        for(i = 0;i < n;i++)
        if(T1[i] != T2[n-i-1])
            mir = 1;
        if(mir == 0)
            printf("\n\nLes tableaux sont des mirroirs");
        else
            printf("\n\nLes tableaux ne sont pas des mirroirs");
    }
}

void tableau_palindromes(){
     system("cls"); //Effacer l'ecran
                                printf(" \t");printf(" \t");puts("\n\t~~~~~~~~ Tableau palindrome ~~~~~~~~\n");
                                int Tab[100],i,n,palin;
                                 do{
                                    printf("Entrez la taille du tableau comprise entre 1 et 100 :");
                                    scanf("%d",&n);
                                }while (n<=0 || n>100);
                                printf("Entrez les elements du tableau :\n");
                                for(i=0;i<n;i++){
                                    printf("Saisir Tab[%d] : ",i+1);
                                    fflush(stdin);
                                    Tab[i] = getch ();
                                    scanf("%c",&Tab[i]);
                                }
                                printf("\n");
                                for(i=0;i<n;i++)
                                    printf("| %c ",Tab[i]);
                                printf("|");

                                //VERIFICARION
                                palin = 0;
                                i = 0 ;
                                while(i<=(n-1)%2 && palin==0){
                                if(Tab[i] != Tab[n-i-1])
                                    palin = 1;
                                    i++;
                                }
                                if(palin == 0)
                                    printf("\n\nLe tableau est un palindrome");
                                else
                                    printf("\n\nLe tableau n'est pas un palindrome");
}

void plus_longue_monotomie(){
    system("cls"); //Effacer l'ecran;
                                printf(" \t");printf(" \t");puts("~~~~~~~~ la plus longue monotomie d'un tableau  ~~~~~~~~\n");
                                int T[100],i,n,cpt1,cpt2;
                                 do{
                                    printf("Entrez la taille du tableau comprise entre 1 et 100 :");
                                    scanf("%d",&n);
                                }while (n<=0 || n>100);
                                printf("Entrez les elements du tableau :\n");
                                for(i=0;i<n;i++){
                                    printf("Element [%d] :",i+1);
                                    scanf("%d",&T[i]);
                                }
                                printf("\n");
                                for(i=0;i<n;i++)
                                    printf("| %d ",T[i]);
                                printf("|");

                                // Vérifier les séquences croissantes
                                cpt1 = 1;
                                cpt2 = 1;
                                for (i = 0; i < n; i++) {
                                    if (T[i] <= T[i + 1]){
                                        cpt1++;
                                        if(cpt1 > cpt2)
                                            cpt2 = cpt1;
                                        else
                                            cpt2 = cpt2;
                                    }
                                    else
                                    cpt1 = 1;
                                }
                                printf("\n\nLa plus longue monotonie croissante est %d",cpt2);
}

void Produit_2_matrices(){
    system("cls"); //Effacer l'ecran
                                printf(" \t");printf(" \t");puts("~~~~~~~~ Carrée d'une matrice ~~~~~~~~\n");
                                int A[100][100],B[100][100],C[100][100],i,j,k,l1,l2,c1,c2;
                                //SAISIE DES NOMBRES DE LIGNES ET DE COLONNES
                                do{//CREATION MATRICE 1
                                    printf("Entrez le nombre de lignes du premier matrice :");
                                    scanf("%d",&l1);
                                    printf("Entrez le nombre de colonnes du premier matrice :");
                                    scanf("%d",&c1);
                                    printf("\n");
                                }while ((c1<=0 || c1>100) || (l1<=0 || l1>100));
                                do{//CREATION MATRICE 2
                                    printf("Entrez le nombre de lignes du deuxieme matrice :");
                                    scanf("%d",&l2);
                                    printf("Entrez le nombre de colonnes du deuxieme matrice :");
                                    scanf("%d",&c2);
                                    printf("\n");
                                }while ((c2<=0 || c2>100) || (l2<=0 || l2>100));

                                if(c1 != l2)// SI C1 DIFFERENT DE L2
                                    printf("Le produit matriciel est impossible");
                                else{// C1 = L1
                                    printf("Entrez les elements du premier matrice : :\n");
                                    for(i=0;i<l1;i++){
                                        for(j=0;j<c1;j++){
                                            printf("Element [%d][%d]= :",i+1,j+1);
                                            scanf("%d",&A[i][j]);
                                        }
                                    }
                                    printf("\n");
                                    printf("Entrez les elements du deuxieme matrice : :\n");
                                    for(i=0;i<l2;i++){
                                        for(j=0;j<c2;j++){
                                            printf("Element [%d][%d]= :",i+1,j+1);
                                            scanf("%d",&B[i][j]);
                                        }
                                    }
                                    //AFFICHAGE MATRICE 1
                                    printf("\n");
                                    for(i=0;i<l1;i++){
                                        for(j=0;j<c1;j++)
                                            printf("| %d ",A[i][j]);
                                        printf("|\n");
                                    }
                                    //AFFICHAGE MATRICE 2
                                    printf("\n\n");
                                        for(i=0;i<l2;i++){
                                            for(j=0;j<c2;j++)
                                                printf("| %d ",B[i][j]);
                                        printf("|\n");
                                    }
                                    printf("\n\n");

                                    //CALCUL DU PRODUIT MATRICIEL
                                    for(i=0;i<l1;i++)
                                        for(j=0;j<c2;j++){
                                            C[i][j] = 0;
                                            for(k=0;k<l2;k++)
                                                C[i][j] = C[i][j] + A[i][k] * B[k][j];
                                        }
                                        printf("Le produit matriciel donne :\n");
                                        for(i=0;i<l1;i++){
                                            for(j=0;j<c2;j++)
                                                printf("| %d ",C[i][j]);
                                            printf("|\n");
                                        }
                                }
}

void carree_matrice(){
    system("cls"); //Effacer l'ecran
                                printf(" \t");printf(" \t");puts("~~~~~~~~ Matrice carrée diaguonale ~~~~~~~~\n");
                                int A[100][100],C[100][100],i,j,k,l,c;
                                //CREATION DE LA MARTRICE
                                do{
                                    printf("Entrez le nombre de lignes du premier matrice :");
                                    scanf("%d",&l);
                                    printf("Entrez le nombre de colonnes du premier matrice :");
                                    scanf("%d",&c);
                                    printf("\n");
                                }while ((c<=0 || c>100) || (l<=0 || l>100));
                                printf("Entrez les elements du premier matrice : :\n");
                                for(i=0;i<l;i++){
                                    for(j=0;j<c;j++){
                                        printf("Element [%d][%d]= :",i+1,j+1);
                                        scanf("%d",&A[i][j]);
                                    }
                                }
                                //AFFICHAGE DE LA MATRICE
                                printf("\n");
                                for(i=0;i<l;i++){
                                    for(j=0;j<c;j++)
                                        printf("| %d ",A[i][j]);
                                    printf("|\n");
                                }

                                //CALCUL DU CARRE
                                printf("\n\n");
                                for(i=0;i<l;i++)
                                    for(j=0;j<c;j++){
                                        C[i][j] = 0;
                                        for(k=0;k<l;k++)
                                            C[i][j] = C[i][j] + A[i][k] * A[k][j];
                                    }
                                printf("Le carre de la matrice donne :\n");
                                for(i=0;i<l;i++){
                                    for(j=0;j<c;j++)
                                        printf("| %d ",C[i][j]);
                                    printf("|\n");
                                }
}

void matrice_carree_diagonale(){
    system("cls"); //Effacer l'ecran
                                printf(" \t");printf(" \t");puts("~~~~~~~~ Matrice carrée diaguonale ~~~~~~~~\n");
                               int A[100][100],i,j,l,c,diag1 = 0,diag2 = 0;
                               //CREATION DE LA MARTRICE
                                do{
                                    printf("Entrez le nombre de lignes du premier matrice :");
                                    scanf("%d",&l);
                                    printf("Entrez le nombre de colonnes du premier matrice :");
                                    scanf("%d",&c);
                                    printf("\n");
                                }while ((c<=0 || c>100) || (l<=0 || l>100));
                                printf("\n\n");
                                if(l != c)
                                    printf("Cette matrice n'est pas une matrice carre");
                                else{
                                    printf("Entrez les elements du premier matrice : :\n");
                                    for(i=0;i<l;i++){
                                        for(j=0;j<c;j++){
                                            printf("Element [%d][%d]= :",i+1,j+1);
                                            scanf("%d",&A[i][j]);
                                        }
                                    }
                                    //AFFICHAGE DE LA MATRICE
                                    printf("\n");
                                    for(i=0;i<l;i++){
                                        for(j=0;j<c;j++)
                                            printf("| %d ",A[i][j]);
                                        printf("|\n");
                                        }
                                     //VREFICATION
                                    for(i=0;i<l;i++){
                                        for(j=0;j<c;j++){
                                            if((i != j) && (A[i][j] != 0))
                                                diag1++;
                                            else if((i = j) && (A[i][j] == 0))
                                                    diag2++;
                                        }
                                    }
                                    if((diag1 != 0) || (diag2 == l))
                                        printf("Cette matrice n'est pas une matrice carre diagonale");
                                    else
                                        printf("Cette matrice est une matrice carre diagonale");
                                }
}

int main(){
    int choix;
    char rep;
    system("cls");
    system("color 30"); //changer couleur console
    printf("\t\t   ####     #####     #####    ######    #####   ######           #######\n");
    printf("\t\t  ##  ##   ##   ##   ##   ##     ##     ##         ##            ########\n");
    printf("\t\t  ##  ##   ##   ##   ##   ##     ##     ##         ##            ##      \n");
    printf("\t\t  #####    ######    ##   ##     ##     #####      ##            ##      \n");
    printf("\t\t  ##       ##   ##   ##   ##     ##     ##         ##            ##      \n");
    printf("\t\t  ##       ##   ##   ##   ##     ##     ##         ##            ########\n");
    printf("\t\t  ####     ##   ##    #####   ####       #####     ##             #######\n\n");
    getch();
        do{
        system("cls");
    	system("color 30"); //changer couleur console
		printf(" \n\n\t\t\t\t\t");printf(" _______________________ \n");
		printf(" \t\t\t\t\t");printf("[         MENU          ]\n");
		printf(" \t\t\t\t\t");printf("{~~~~~~~~~~~~~~~~~~~~~~~}\n");
		printf(" \t\t\t\t\t");printf("{  1 - MENU SIMPLE      }\n");
		printf(" \t\t\t\t\t");printf("{_______________________}\n");
		printf(" \t\t\t\t\t");printf("{  2 - MENU COMPLEXE    }\n");
		printf(" \t\t\t\t\t");printf("{_______________________}\n");
		printf(" \t\t\t\t\t");printf("{  0 - Quitter          }\n");
		printf(" \t\t\t\t\t");printf("{_______________________}\n");
		printf(" \n\t\t");printf("Enter votre choix :");
		scanf("%d",&choix);
		switch(choix){

	    	case 1:// MENU SIMPLE
                do{
			        system("cls"); //Effacer l'ecran
			        system("color 70");
			        printf(" \n\n\t\t\t\t");puts("~~~~~~~~ MENU SIMPLE ~~~~~~~~\n\n\n\n");
		            printf(" \t\t"); printf("1 - Somme de deux nombres  \n\n");
		            printf(" \t\t");printf("2 - Produit de deux nombres \n\n");
		            printf(" \t\t");printf("3 - Factoriel d'un nombre  \n\n");
			        printf(" \t\t");printf("4 - Compte d'epargne \n\n");
			        printf(" \t\t");printf("5 - Nonbbre parfait \n\n");
			        printf(" \t\t");printf("6 - Nombre premier \n\n");
			        printf(" \t\t");printf("7 - PPCM de deux nombre \n\n");
			        printf(" \t\t");printf("8 - Puissance d'un nombre \n\n");
			        printf(" \t\t");printf("9 - Compte a rebours \n\n");
			        printf(" \t\t");printf("10 - Jeu \n\n");
			        printf(" \t\t");printf("99 - RETOUR \n\n");
			        printf(" \t\t");printf("0 - Qutter le programme \n\n\n\n");
			        printf(" \t\t");printf("Enter votre choix :");
			        scanf("%d",&choix);
			        switch(choix){
                        case 1://SOMME DE DEUX NOMBRES
                            do{
                                somme_deux_nombre();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 2://PRODUIT DE DEUX NOMBRES
                            do{
                                produit_deux_nombre();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 3://FACTORIEL D'UN NOMBRE
                            do{
                                factoriel_1_nombre();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 4://COMPTE D'EPARGNE
                            do{
                                compte_epargne();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 5://NOMBRE PARFAIT
                            do{
                                nombre_parfait();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 6://NOMBRE PREMIER
                            do{
                                nombre_premier();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 7://PPCM DE DEUX NOMBRES
                            do{
                                ppcm();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 8://PUISSANCE D'UN NOMBRE
                            do{
                                puissance_1_nombre();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 9://COMPTE A REBOURS
                            do{
                                compte_rebour();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                            case 10://JEU
                            do{
                                jeu();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 0:
                            bye();
			        }
                }while( choix != 99);
			    break;

			case 2: // MENU COMPLEXE
			    do{
			        system("cls"); //Effacer l'ecran
			        system("color 80");
			        printf(" \n\n\t\t\t\t");puts("~~~~~~~~ MENU COMPLEXE ~~~~~~~~\n\n\n\n");
			        printf(" \t\t"); printf("1 - Fusion de tableaux  \n\n");
		            printf(" \t\t");printf("2 - Les valeurs nulles d'un tableau \n\n");
		            printf(" \t\t");printf("3 - Recherche dichotomique  \n\n");
			        printf(" \t\t");printf("4 - Tableaux miroirs \n\n");
			        printf(" \t\t");printf("5 - Tableaux palindromes \n\n");
			        printf(" \t\t");printf("6 - la plus longue monotomie d'un tableau \n\n");
			        printf(" \t\t");printf("7 - Produit de deux martices \n\n");
			        printf(" \t\t");printf("8 - Le carre d'une matrice \n\n");
			        printf(" \t\t");printf("9 - Matrice carre diagonale \n\n");
			        printf(" \t\t");printf("99 - RETOUR \n\n");
			        printf(" \t\t");printf("0 - Quitter le programme \n\n\n\n");
			        printf(" \t\t");printf("Enter votre choix :");
			        scanf("%d",&choix);
			        switch(choix){
                        case 1://FUSION DE DEUX TABLEAUX
                            do{
                                fusion_2_tableau();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;

                        case 2://LES VALEURS NULLES D'UN TABLEAU
                            do{
                                valeurs_nulles();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 3:// RECHERCHE DICHOTOMIE
                            do{
                                recherche_dichotomique();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 4:// TABLEAUX MIRROIRS
                            do{
                                Tableaux_mirroirs();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 5://TABLEAU PALINDROME
                            do{
                               tableau_palindromes();
                               rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 6://LA PLUS LONGUE MONOTONIE
                            do{
                                plus_longue_monotomie();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 7://PRODUIT DE DEUX MATRICES
                            do{
                                Produit_2_matrices();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 8://CARRE D'UNE MATRICE
                            do{
                                carree_matrice();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 9://MATRICE CARRE DIAGONALE
                            do{
                                matrice_carree_diagonale();
                                rep = repetition(rep);
                            }while(rep!='N');
                            break;
                        case 0:
                            bye();
			        }
                }while( choix != 99);
			    break;

			case 0:
				bye();
    	}
    }while(1); //boucle toujours vraie (infinie)
    return 0;
}
