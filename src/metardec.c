#include <metar.h>
#include <stdio.h> 
#include <process.h> 

void prtDMETR( Decoded_METAR *);

int main()
{
  char			acCmd[256]; 
  Decoded_METAR		Metar;
  Decoded_METAR		*Mptr = &Metar;
  int			ErReturn;

  getcmd( &acCmd );
  if ( acCmd[0] == '\0' )
  {
    printf("Usage: metardec.exe <METAR CODED LINE>\n");
    return 1;
  }

  if ( (ErReturn = DcdMETAR( &acCmd, Mptr )) != 0 )
  {
    printf("DcdMETAR:  Error Return Number: %d\n",ErReturn);
    return 1;
  }
  else
    prtDMETR( Mptr );

  return 0;
}
