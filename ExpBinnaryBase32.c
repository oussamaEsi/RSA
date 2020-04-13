unsigned long C[33],S1[33],un[33];


unsigned long getBitIndex(long num,int index){
int bit=(num>>index)&1;
return bit;
}

void expBinnaryBase32(unsigned long M[ ],unsigned long E[ ],unsigned long N[ ],unsigned long m,unsigned long Resultat[ ],int nbrPaquet,int time_exe)
//void expBinnaryBase32(unsigned long M[ ],unsigned long E[ ],unsigned long N[ ],unsigned long m,unsigned long Resultat[ ],int nbrPaquet)
{
	//initialisation
	int i,j; un[0]=1;

	for(i=1;i<=32;i++)un[i]=0;

unsigned long R2[33];

R2[0]=0x3d8aa90d;
R2[1]=0x75c66c72;
R2[2]=0x2a832fd1;
R2[3]=0xc693404d;
R2[4]=0xd87cbed3;
R2[5]=0xa9e6b0dc;
R2[6]=0x19dcfc26;
R2[7]=0x5f902e46;
R2[8]=0x87d9f709;
R2[9]=0x9b005aa0;
R2[10]=0x8c7a2a31;
R2[11]=0xe70ffe18;
R2[12]=0x78a31955;
R2[13]=0xa674a96;
R2[14]=0x9d4e3cbb;
R2[15]=0x743e0f69;
R2[16]=0x185ed38d;
R2[17]=0x388960ab;
R2[18]=0x910a8699;
R2[19]=0x3a49f452;
R2[20]=0x1ef3ce3f;
R2[21]=0x89dedd00;
R2[22]=0x88fdb60f;
R2[23]=0x592b900a;
R2[24]=0xc6f6bd1c;
R2[25]=0x3c506ea0;
R2[26]=0x35e4622d;
R2[27]=0x17a58a42;
R2[28]=0xce25235f;
R2[29]=0x60661d8b;
R2[30]=0x66e5c069;
R2[31]=0x93811915;
R2[32]=0x0;

// Montgomery(1,R2,N)

montgomery1024Base32(un,R2,N,m,C);

// Montgomery(M,R2,N)
montgomery1024Base32(M,R2,N,m,S1);



for(i=1;i<=nbrPaquet;i++)
{
	//for(j=0;j<32;j++)
	for(j=0;j<17;j++)
	{
		if(getBitIndex(E[i],j)==1)// virification de la valeur du Jeme bit de E
		{
			// Montgomery(C,S1,N)
    		montgomery1024Base32(C,S1,N,m,C);
    	}

     	// Montgomery(S1,S1,N)
		montgomery1024Base32(S1,S1,N,m,S1);
	}
}

// Montgomery(C,1,N)
montgomery1024Base32(C,un,N,m,Resultat);


}

