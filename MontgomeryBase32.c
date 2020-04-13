unsigned long S[33];

void multiply(unsigned long A,unsigned long B,unsigned long *paquetRetenue,unsigned long *resultat)
{
unsigned long long r=(unsigned long long)A*B;
*resultat=(unsigned long) r;
*paquetRetenue=r>>32;
}


void add3Op(unsigned long A,unsigned long B,unsigned long C,unsigned long *retenue,unsigned long *resultat)
{
unsigned long long r=(unsigned long long)A+B+C+(*retenue);
 *resultat=(unsigned long) r;
  *retenue=r>>32;
}
//------------------------------------------



//------------------------------------------
//fonction de Montgomery

void montgomery1024Base32(unsigned long A[33],unsigned long B[33],unsigned long M[33],unsigned long m,unsigned long Resultat[33])
{

//initialisation
	unsigned long Z=0,P=0,C1=0,C2=0,L=0;
	int i,j,ii;unsigned long q=0,retenue1=0,retenue2=0,tmp=0;
	for(i=0;i<=32;i++)S[i]=0;

//algorithme de Montgomery

for(i=0;i<=32;i++)
{// debut boucle i

  C1=0;C2=0;retenue1=0;retenue2=0;tmp=0;//initialisation des retenu dans chaque iteration

// **************calcul de q
  P=A[i]*B[0];
  Z=P+S[0];
  q=(Z*m);

    //*****calcul de S=A[i]*B +q*M /R

	for(j=0;j<=32;j++)
	{// debut boucle j

	  tmp=C1; // save la valeur de C1

	  multiply(A[i],B[j],&C1,&P); //calcul P=A[i]*B[j]de 32 bits et C1=retenu de 32bit

	  add3Op(P,S[j],tmp,&retenue1,&Z); // calcul Z= P+S[j]+tmp les 2bits de retenu save in retenue1

 	  tmp=C2;// save la valeur de C2

	  multiply(q,M[j],&C2,&P); //calcul P=q[i]*M[j]de 32 bits et C2=retenu de 32bit

	  add3Op(Z,P,tmp,&retenue2,&P);// calcul P= Z+S[j]+tmp les 2bits de retenu save in retenue2

	  	if(j!=0)S[j-1]=P;// pour le decalage

	}// fin boucle j

  S[j-1]=C1+C2+retenue1+retenue2; // pour ajouter les derniers retenues

}// fin boucle i
for(i=0;i<=32;i++)Resultat[i]=S[i];
}// fin de la fonction de montgomery

//-------------------------------------------------------


