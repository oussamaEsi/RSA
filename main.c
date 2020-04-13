#include "stdio.h"

int main()
{
	unsigned long Message[33],E[33],Modulo [33],Mc,result_exp[33],time_exe;

Modulo[0]=0xF5E2B22B;
Modulo[1]=0xAB86184A;
Modulo[2]=0xEDCE0F2E;
Modulo[3]=0x1C4EE6A;
Modulo[4]=0xDE88F537;
Modulo[5]=0xD74EFC97;
Modulo[6]=0x54770FBE;
Modulo[7]=0x4B160BFA;
Modulo[8]=0x175E5F9D;
Modulo[9]=0x74FECA59;
Modulo[10]=0x120DF297;
Modulo[11]=0x6053717E;
Modulo[12]=0xF199411D;
Modulo[13]=0x6E604A76;
Modulo[14]=0x61785A03;
Modulo[15]=0xB504BDDB;
Modulo[16]=0xE16F8427;
Modulo[17]=0xD06192EF;
Modulo[18]=0xDDEDB471;
Modulo[19]=0xBD7757E7;
Modulo[20]=0xCCA12635;
Modulo[21]=0xD13A0487;
Modulo[22]=0xA7912EC3;
Modulo[23]=0x3A02D54D;
Modulo[24]=0xA5CAD78A;
Modulo[25]=0x8C679AE;
Modulo[26]=0x835B524B;
Modulo[27]=0xF59DE7FC;
Modulo[28]=0x270DAA19;
Modulo[29]=0x10004288;
Modulo[30]=0xA3D25C94;
Modulo[31]=0x9872E35D;
Modulo[32]=0x0;

Mc= 0x52E9837D;

Message[0]=0xCF8D4991;
Message[1]=0x01EEC161;
Message[2]=0x4D888210;
Message[3]=0x4FED64B8;
Message[4]=0xF2B8D6C4;
Message[5]=0x8DF8F4A5;
Message[6]=0x20718D0F;
Message[7]=0x8EDFFBAC;
Message[8]=0x0E9371FE;
Message[9]=0xE34061B5;
Message[10]=0x8395A567;
Message[11]=0xFE9582A4;
Message[12]=0xF546D9B8;
Message[13]=0xAAD3C116;
Message[14]=0x073F535D;
Message[15]=0x813809BE;
Message[16]=0xB0D09B10;
Message[17]=0x3A6561AE;
Message[18]=0xC04615FB;
Message[19]=0x11D3A02D;
Message[20]=0xBEE0E30B;
Message[21]=0xD560AD6C;
Message[22]=0xEAFA9EF7;
Message[23]=0x37378F7D;
Message[24]=0x3BE4528C;
Message[25]=0x6B9E26A8;
Message[26]=0x5FA2F943;
Message[27]=0x1333BAD5;
Message[28]=0x3F1E963E;
Message[29]=0x72F5E8B3;
Message[30]=0x9CFA7A5E;
Message[31]=0x5C32EA52;
Message[32]=0x00000000;

E[1]=0x10001;


expBinnaryBase32(Message,E,Modulo,Mc,result_exp,1, time_exe);


return 0;
}

