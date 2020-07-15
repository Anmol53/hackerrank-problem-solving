/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

char* hNumToWord(int num)
{
	char *word;
	word=(char *)malloc(7*sizeof(char));
	switch(num)
	{
	    case 1:
	    	word="one";
	    	break;
	    case 2:
	    	word="two";
	    	break;
	    case 3:
	    	word="three";
	    	break;
	    case 4:
	    	word="four";
	    	break;
	    case 5:
	    	word="five";
	    	break;
	    case 6:
	    	word="six";
	    	break;
	    case 7:
	    	word="seven";
	    	break;
	    case 8:
	    	word="eight";
	    	break;
	    case 9:
	    	word="nine";
	    	break;
	    case 10:
	    	word="ten";
	    	break;
	    case 11:
	    	word="eleven";
	    	break;
	    case 12:
	    	word="twelve";
	    	break;
	}
	return word;
}
char* mNumToWord(int num)
{
	char *word;
	word=(char *)malloc(21*sizeof(char));
	switch(num)
	{
	    case 0:
	    	word="zero";
	    	break;
	    case 1:
	    	word="one minute";
	    	break;
	    case 2:
	    	word="two minutes";
	    	break;
	    case 3:
	    	word="three minutes";
	    	break;
	    case 4:
	    	word="four minutes";
	    	break;
	    case 5:
	    	word="five minutes";
	    	break;
	    case 6:
	    	word="six minutes";
	    	break;
	    case 7:
	    	word="seven minutes";
	    	break;
	    case 8:
	    	word="eight minutes";
	    	break;
	    case 9:
	    	word="nine minutes";
	    	break;
	    case 10:
	    	word="ten minutes";
	    	break;
	    case 11:
	    	word="eleven minutes";
	    	break;
	    case 12:
	    	word="twelve minutes";
	    	break;
	    case 13:
	    	word="thirteen minutes";
	    	break;
		case 14:
	    	word="fourteen minutes";
	    	break;
		case 15:
	    	word="quarter";
	    	break;
		case 16:
	    	word="sixteen minutes";
	    	break;
		case 17:
	    	word="seventeen minutes";
	    	break;
		case 18:
	    	word="eighteen minutes";
	    	break;
		case 19:
	    	word="nineteen minutes";
	    	break;
		case 20:
	    	word="twenty minutes";
	    	break;
		case 21:
	    	word="twenty one minutes";
	    	break;
		case 22:
	    	word="twenty two minutes";
	    	break;
		case 23:
	    	word="twenty three minutes";
	    	break;
		case 24:
	    	word="twenty four minutes";
	    	break;
		case 25:
	    	word="twenty five minutes";
	    	break;
		case 26:
	    	word="twenty six minutes";
	    	break;
		case 27:
	    	word="twenty seven minutes";
	    	break;
		case 28:
	    	word="twenty eight minutes";
	    	break;
		case 29:
	    	word="twenty nine minutes";
	    	break;
		case 30:
	    	word="half";
	    	break;
	}
	return word;
}

int main()
{
	int i,h,m;
	char *hour,*min;
	hour=(char *)malloc(7*sizeof(char));
	min=(char *)malloc(21*sizeof(char));
	scanf("%d %d",&h,&m);
	if(m<=30)
	{
		hour=hNumToWord(h);
		min=mNumToWord(m);		
	}
	else
	{
		min=mNumToWord(60-m);
		if(h==12)
		{
			hour="one";
		}
		else
		{
			hour=hNumToWord(h+1);
		}
	}
	if(m==0)
	{
		printf("%s o' clock",hour);
	}
	else if(m>0 && m<=30)
	{
		printf("%s past %s",min,hour);
	}
	else if(m>30 && m<60)
	{
		printf("%s to %s",min,hour);
	}
	return 0;
}
