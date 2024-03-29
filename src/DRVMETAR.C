#include <metar.h>
void prtDMETR( Decoded_METAR *);
 
#pragma page(1)
#pragma subtitle(" ")
#pragma subtitle("subtitle - description                       ")
/********************************************************************/
/*                                                                  */
/*  Title:         dRVMETAR                                         */
/*  Organization:  W/OSO242 - GRAPHICS AND DISPLAY SECTION          */
/*  Date:          28 Oct 1994                                      */
/*  Programmer:    CARL MCCALLA                                     */
/*  Language:      C/370                                            */
/*                                                                  */
/*  Abstract:      DRVMETAR is a main routine that acts a driver    */
/*                 for testing the METAR Decoder function.          */
/*                                                                  */
/*  External Functions Called:                                      */
/*                 None.                                            */
/*                 DcdMETAR                                         */
/*                 prtDcdMetar                                      */
/*                 Sec0MTSm                                         */
/*                 Sec1MTSm                                         */
/*                                                                  */
/*  Input:         None                                             */
/*                                                                  */
/*  Output:        None                                             */
/*                                                                  */
/*  Modification History:                                           */
/*                 None.                                            */
/*                                                                  */
/********************************************************************/
#pragma page(1)
#ifdef __WATCOMC__
void
#endif
main()
{
   char bltn_prefix[20];
   static char *string[] =
  {
  "KAST 221156Z COR 09005KT 7SM -RA OVC026 09/08 A2996 RMK "
  "AO2 TNO SLP143 P0007 60047 70109 T00890084 10100 20089 55005",
 
  "KAST COR 221156Z 09005KT 7SM -RA OVC026 09/08 A2996 RMK "
  "AO2 TNO SLP143 P0007 60047 70109 T00890084 10100 20089 55005",
 
  "KAST COR 221156Z 09005KT 1/SM -RA OVC026 09/08 A2996 RMK "
  "AO2 TNO SLP143 P0007 60047 70109 T00890084 10100 20089 55005",
 
  "KP88 COR 221156 09005KT 1/SM -RA OVC026 09/08 A2996 RMK "
  "AO2 TNO SLP143 P0007 60047 70109 T00890084 10100 20089 55005",
 
  "KP88 COR 221156 09005KT 1/SM -RA OVC026 09/08 A2996 RMK "
  "AO2 TNO SLP143 P0007 6//// 70109 T00890084 10100 20089 55005",
 
   NULL,
 
 
 "EPIT 1755 22015G25KT 1 3/4SM R22L/2700FT R16/1200FT "
 "R34/1000V1600FT R01L/P6000FT R04RR/900FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/16 A2992 "
 "RMK 58033 6003/ TWELVE 70125 10039 20029 410840112 "
 "PCPN 0009 WSHFT 1715 PK WND 2032/1725 "
 "CIG 20V25 WND 12V25 TWR VIS 2 1/2 "
 "SFC VIS 1 1/2 VIS 1/2V3/4",
 
   "KFAR 181154Z 10003KT 1/4SM HZ CLR 16/13 A2988 RMK AO2 "
   "SLP117 56012 10345 20226 T01610133 $",
 
   "KFAR 181154Z 10003KT 1/SM HZ CLR 16/13 A2988 RMK AO2 "
   "SLP117 56012 10345 20226 T01610133 $",
 
 
 
 
"RKSS 21009KT 1400 RP2000 // ////// 21/20 1006/2972 NOSIG",
 
"RKSS 1200 21009KT 1400 RP2000 // ////// 21/20 1006/2972 NOSIG",
 
"RKSS 1130Z 23011KT 1100 R14R/P1500N R14L/P1500N BR SCT010 BKN030 "
"BKN080 21/21 Q1006 NOSIG",
 
"RKSS 1130Z 23011KT 1100 R14R/P1500 R14L/P1500 BR SCT010 BKN030 "
"BKN080 21/21 Q1006 NOSIG",
 
NULL,
   "KFAR 181154Z 10003KT 4SM HZ CLR 16/13 A2988 RMK AO2 "
   "SLP117 56012 1//// 2//// T01610133 $",
 
   "CYYE 061300Z 3500KT 15SM BKN005 OVC040 08/08 A3004 RMK "
   "SF6SC1 VSBY RDCE DUE LO CLD SLP186",
 
   "CYYE 061300Z 3500KT 15SM BKN005 OVC040 08/08 A3004 RMK "
   "SF6SC1 VSBY RDCE DUE10 LO CLD SLP186",
 
   "CYYE 061300Z 3500KT 15SM BKN005 OVC040 08/08 A3004 RMK "
   "SF6SC1 VSBY RDCE DUE9 LO CLD SLP186",
 
   "CYYE 061300Z 3500KT 15SM BKN005 OVC040 08/08 A3004 RMK "
   "SF6SC1 VSBY RDCE FZDZE10 LO CLD SLP186",
 
   "CYYE 061300Z 3500KT 15SM BKN005 OVC040 08/08 A3004 RMK "
   "SF6SC1 VSBY RDCE FZDZE9 LO CLD SLP186",
 
 
 
 
 
"MKJP 1400Z 13011KT 9999 FEW022 30/XX Q1015",
"MKJP 1400Z 13011KT 9999 FEW022 M30/XX Q1015",
"MKJP 1400Z 13011KT 9999 FEW022 MM/XX Q1015",
"MKJP 1400Z 13011KT 9999 FEW022 MM/30 Q1015",
"MKJP 1400Z 13011KT 9999 FEW022 MM/M30 Q1015",
 
 
 
 
  "EGPD 36016G26KT 320V030 9999 FEW015TCU SCT026 BKN045 OVC090 "
  "SCT120 FEW250 RMK OCNL LTGICCG OHD",
 
  "EGPD 36016G26KT 320V030 9999 FEW015TCU SCT026 07/01 Q1011 "
  "RMK TEMPO 8000 -SHRA BKN015 FRQ LTG VC",
 
  "EGPD 36016G26KT 320V030 9999 FEW015TCU SCT026 07/01 Q1011 "
  "RMK TEMPO 8000 -SHRA BKN015 LTG DSNT W",
 
 
  "METAR KLAX 281156Z AUTO VRB100G135KT 130V210 3 1/2SM "
  "R15L/0500FT R22L/2700FT R16/1200FT R34/1000V1600FT R01L/P6000FT FC "
  "+TS BLPY FEW/// SCT000 BKN050 SCT150 OVC250 3/M1 A2991 RMK "
  "TORNADO B13E45 6 NE MOV E A02 PK WND 18515/45 "
  "WSHFT 1350 FROPA TWR VIS 1 1/2 SFC VIS 1/4 VIS 1/4V1 1/4 "
  "VIS 2 1/2 RY11 "
  "DVR/1000V1600FT "
  "OCNL LTG VCY STN "
  "RAB1030E1145 FZDZE56 BLPYE57 CIG 1000V1500 CIG 020 RY11 "
  "PRESFR PRESRR SLP013 FG FEW/// HZ SCT000 VIS NW 2 1/2 GR 3/4 "
  "VIRGA SE -XRAFG3 CIGE005 BKN014 V OVC "
  "FU BKN020 NOSPECI LAST 8/365 SNINCR 2/10 4/178 "
  "933125 98096 P 0125 60225 70565 "
  "T00261015 10369 21026 "
  "404800360 52101 VISNO RY05 CHINO RY27 PNO RVRNO "
  "PWINO FZRANO TSNO $",
 
 
  "KBOS 251356Z 26011KT 10SM CLR 12/02 A2995 RMK AO2 SC VCNTY "
  "STN SSE-NNW SCT CI ABV SLP141 T01220023",
 
  "EFHK 36009KT 340V060 CAVOK 12/M02 Q1013 NOSIG",
  "EGKK 24011KT 210V300 9999 SCT020 BKN045 12/06 Q1007 NOSIG",
  "EGPD 31018KT 8000 RA FEW013 BKN021 OVC045 06/04 Q0994 NOSIG",
  "EKCH 16012KT CAVOK 20/07 Q1006 NOSIG",
  "ESKN 10014KT 9000 BR SCT100 14/04 Q1010",
  "LOWW 231450Z 14017KT CAVOK 23/07 Q1010 NOSIG",
 
 
  "METAR CYCH 171500Z CCA 30017KT 2SM -SN BKN006",
 
  "METAR CYOW 171500Z CCA 30017KT 2SM -SN BKN006 OVC020 00/M02 "
  "A2957 RMK S35F4NS1 /S01/ SNW WET SNW MELTG ON GRND CIG 5-7 "
  "SLP018",
 
  "KAST 221156Z AUTO 09005KT 7SM -RA OVC026 09/08 A2996 RMK "
  "AO2 TNO SLP143 P0007 60047 70109 T00890084 10100 20089 55005"
  " TSB0159E30 TS SE MOV NE",
 
  "KAST 221156Z AUTO 09005KT 7SM -RA OVC026 09/08 A2996 RMK "
  "AO2 TNO SLP143 P0007 60047 70109 T00890084 10100 20089 55005"
  " TSE0159 TS SE",
 
  "KHVR 1756Z 31007KT 5SM -SN SCT011 BKN024 OVC030 M05/M08 A3056 "
  "RMK AOA 933004 "
  "BKN V SCT TNO PCPN 000 $ SLP389 4/015 60002 "
  "T10501077 11050 21078 51010",
 
  "SPECI KGFI 041420Z AUTO 18030KT 3 1/2SM RVRNO TS -RA BKN008 OVC060 "
  "26/22 A2991 RMK A02 RA15TSB20 PRESFR SLP 101 P 0000 T02640218",
 
  "METAR KCLE 281156Z 170100G135KT 110V180  M1/4SM "
  "R01L/P6000FT +TSSHRA VCFG "
  "BKN025 SCT100 OVC200 M26/ A2991 RMK PK WND 18515/45 A02 "
  "WSHFT 1350 TWR VIS 1 1/2 SFC VIS 1/4 VIS 1/4V1 1/4 "
  "CIG 1000V1500 PRESFR FRQ LTG CG NW "
  "RAB1030E1145 FZDZE56 PRESRR SLP135 GS "
  "T1263 "
  "VIRGA NW 8/365 4/178 P 0125 60225 7//// 70565 10369 21026 "
  "404800360 52101 PWINO FZRANO TSNO $",
 
  "CYQR 161700Z 15015KT 15SM SCT045 SCT090 BKN250 10/03 A2955 "
  "RMK SC1AC2C11 OB TAKEN H+ 5 DUE AWOS FAILURE SLP027",
 
 
 
 
 "KPIT 1755Z 22015G25KT 1 3/4SM R22L/2700FT R16/1200FT "
 "R34/1000V1600FT R01L/P6000FT R04RR/900FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/16 A2992 "
 "RMK 58033 6003/ TWELVE 70125 10039 20029 410840112 "
 "PCPN 0009 WSHFT 1715 PK WND 2032/1725 "
 "CIG 20V25 WND 12V25 TWR VIS 2 1/2 "
 "SFC VIS 1 1/2 VIS 1V2",
 
 
 
 
 
  "SPECI KGFI 041430Z 18045G56KT M1/4SM R15/0200FT FC +TS VV010 20/18 "
  "A2900 RMK A02A PK WND 18056/28 RAB15E25TSB20 FCB1430 PRESFR "
  "SLP 701 P 0254 199/182",
 
  "SPECI KGFI 041430Z 18045G56KT M1/4SM R15/0200FT FC +TS VV010 20/18 "
  "A2900 RMK A02A PK WND 18056/28 RAB15E25TSB20 FCB1430 PRESFR "
  "SLP701 P0254 199/182",
 
"KHLN 281156Z AUTO 27005KT 10SM OVC023 07/05 A3011 RMK AOA OVC V "
"BKN $ SLP202 60000 70001 T00670050 10122 20061 53003",
 
"KPHX 281156Z 12004KT 10SM CLR 15/05 A2996 RMK AOA SLP135 T01500050 "
"10250 20150 53006",
"KFCA 281156Z 30003KT 10SM CLR 06/02 A3009 RMK AO TNO $ SLP191 "
"T00610023 10167 20056 53003",
"KAST 281156Z 00000KT 10SM BKN095 09/08 A2997 RMK AOA SLP150 "
"T00940084 10161 20094 52005 ",
"KHVR 281156Z 03003KT 10SM OVC020 09/07 A3010 RMK AO TNO ZRNO "
"$ SLP194 T00940073 10156 20089 51005",
"KGGW 281156Z 35006KT 5SM BR OVC010 10/09 A3003 RMK AOA $ SLP177 "
"70003 T01000095 10156 20110 53008",
"KELY 1153Z AUTO 14004KT 10SM SCT075 01/M01 A3011 RMK AOA TNO ZRNO "
"SLP171 70001 T00061011 10139 21006 51005",
"KFLG 281156Z 29006KT 10SM CLR 04/M01 A3012 RMK AO TNO SLP147 "
"T00391011 21006 51004",
"KGTF 281156Z 27005KT 7SM BKN080 04/04 A3010 RMK AOA SLP205 "
"T00440045 10117 20039 51006",
 
"K13A 1918Z 20011KT 26/M06 RMK AO PKWND 020/RNO 644V264 T02611061",
 
"KP88 1919Z 09001KT 14/03 RMK AO / PKWND 002/RNO 158 Z T01440034",
 
"K40B 1924Z 29004KT 15/M07 RMK AO PKWND 011/RM MV263 T01501072",
 
   "KGGW 1756Z 33018KT 10SM OVC015 M03/M06 A3041 RMK AOA SLP338 "
   "4/007 60002 T10281055 11028 21072 51009",
   "KPHX 1756Z 130004KT 10SM CLR 18/M03 A3001 RMK AOA SLP154 "
   "T01781033 10178 20067 58007",
   "KFCA 1756Z 29005KT 10SM CLR 05/M11 A3049 RMK AOA TNO SLP352 "
   "T00501111 10050 21044 50004",
   "KAST 1756Z 01006KT 10SM CLR 11/04 A3047 RMK AOA SLP316 "
   "T01110045 10111 20000 50002",
   "KELY 1753Z 34010KT 10SM CLR 01/M07 A3022 RMK AOA TNO ZRNO "
   "SLP240 T00111066 10011 21078 58007",
   "KFLG 1756Z 07006KT 10SM CLR 06/M12 A3009 RMK AO TNO ZRNO "
   "SLP178 T00561122 10061 21100 58005",
   "KGTF 1756Z 35010KT 1/2SM -SN FG VV09 M06/M08 A3051 RMK AOA "
   "933004 SFC VSBY 3/4 "
   "PCPN M SLP393 60010 T10611077 11044 21067 53013",
   "KHLN 1756Z 35012KT 10SM SCT032 OVC060 M02/M09 A3048 RMK AOA "
   "SLP369 60000 T10171094 11017 21061 53006",
   "KAST 1756Z 01006KT 10SM CLR 11/04 A3047 RMK AOA SLP316 61104 "
   "71235 T01110045 10111 20000 401720056 58002",
  "METAR KLAX 04281156Z AUTO VRB100G135KT 130V210 3 1/2SM "
  "R15L/0500FT R22L/2700FT R16/1200FT R34/1000V1600FT R01L/P6000FT FC "
  "+TS BLPY FEW000 BKN050 SCT150 OVC250 3/M1 A2991 RMK "
  "TORNADO B13 DSNT NE A02 PK WND 18515/45 "
  "WSHFT 1350 FROPA TWR VIS 1 1/2 SFC VIS 1/4 VIS 1/4V1 1/4 "
  "VIS 2 1/2 RY11 OCNL LTG VCY STN "
  "RAB1030E1145 FZDZE56 BLPYE57 CIG 1000V1500 CIG 020 RY11 "
  "PRESFR PRESRR SLP013 FG FEW000 VIS NW2 1/2 GR 3/4 "
  "VIRGA SE -XRAFG3 CIGE005 BKN014 V OVC "
  "FU BKN020 NOSPECI LAST 8/365 SNINCR 2/10 4/178 "
  "933125 98096 P 0125 60225 70565 "
  "T00261015 10369 21026 "
  "404800360 52101 PWINO FZRANO TSNO $",
 
 
 
  "METAR KGFI 041356Z AUTO 17012KT 130V210 3 1/2SM R15L/0500FT -RA "
  "SCT050 OVC110 26/18 A2991 RMK FUNNEL CLOUDS A02 RAB30 "
  "SLP 101 GR M1/4 VIRGA SCT V BKN P 0010 T02640178",
 
  "METAR KGFI 041356Z AUTO 05008KT 10SM R15L/P6000FT CLR A2991 "
  "RMK WATERSPOUTS VCY STN NW A02 SLP 101 10288 20243 52021 $ ",
 
  "SPECI KGFI 041430Z 18045G56KT M1/4SM R15/0200FT FC +TS VV010 20/18 "
  "A2900 RMK A02A PK WND 18056/28 OCNL LTG AP "
  "RAB15E25TSB20 FCB1430 PRESFR "
  "SLP 701 P 0254 T01990182",
 
  "KABE 281900Z NIL",
 
  "METAR KPIT NIL",
 
  "METAR KCLE 04281156Z 170100G135KT 110V180  M1/4SM "
  "R01L/P6000FT +TSSHRA VCFG "
  "BKN025 SCT100 OVC200 M26/ A2991 RMK PK WND 18515/45 A02 "
  "WSHFT 1350 TWR VIS 1 1/2 SFC VIS 1/4 VIS 1/4V1 1/4 "
  "CIG 1000V1500 PRESFR FRQ LTG CG NW "
  "RAB1030E1145 FZDZE56 PRESRR SLP135 GS "
  "T1263 "
  "VIRGA NW 8/365 4/178 P 0125 60225 7//// 70565 10369 21026 "
  "404800360 52101 PWINO FZRANO TSNO $",
 
  "METAR KPHL 040256Z AUTO 170100G135KT 130V210  1/2SM "
  "R15L/0500FT R22L/2700FT R16/1200FT R34/1000V1600FT R01L/P6000FT "
  "FC +TS BKN050 SCT150 OVC250 M26/ A2991 RMK A02 PK WND 185150/1345 "
  "WSHFT 1350 TWR VIS 1 1/2 SFC VIS 1/4 VIS 1/4V1 1/4 LTG DSNT "
  "RAB1030E1145 FZDZE56 CIG 1000V1500 PRESFR PRESRR SLP037 GR 2 3/4 "
  "VIRGA E 8/365 4/178 P 0125 70565 21026 T0263 10369 60225 "
  "404800360 52101 PWINO FZRANO TSNO $",
 
  "SPECI KGFI 041420Z AUTO 18030KT 2 1/2SM RVRNO TS -RA BKN008 "
  "OVC060 25/22 A2991 RMK A02 LTG DSNT W "
  "RAB15TSB20 PRESFR SLP101 P 0000 "
  "254/218",
 
  "METAR KGFI 041356Z AUTO 170100G135KT 130V210 3 1/2SM "
  "R15L/0500FT R22L/2700FT R16/1200FT R34/1000V1600FT R01L/P6000FT "
  "FC +TS BKN050 SCT150 OVC250 M26/ A2991 RMK A02 PK WND 185150/1345 "
  "WSHFT 1350 TWR VIS 1 1/2 SFC VIS 1/4 VIS 1/4V1 1/4 "
  "RAB1030E1145 FZDZE56 CIG 1000V1500 PRESFR PRESRR SLP997 GR M1/4 "
  "VIRGA SE 8/365 4/178 P 0125 6//// 60225 70565 T0263 10369 21026 "
  "404800360 52101 PWINO FZRANO TSNO $",
 
 
 
 
  "METAR KGFI 041356Z AUTO 170100G135KT 130V210 3 1/2SM "
  "R15L/0500FT R22L/2700FT R16/1200FT R34/1000V1600FT R01L/P6000FT "
  "FC +TS BKN050 SCT150 OVC250 M26/ A2991 RMK A02 PK WND 185150/1345 "
  "WSHFT 1350 TWR VIS 1 1/2 SFC VIS 1/4 VIS 1/4V1 1/4 "
  "RAB1030E1145 FZDZE56 CIG 1000V1500 PRESFR PRESRR SLP997 GR 25 "
  "VIRGA 35 8/365 4/178 P 0125 6//// 60225 70565 T0263 10369 21026 "
  "VIRGA 35 8/365 4/178 P 0125 21026 70565 10369 60225 T0263 21026 "
  "404800360 52101 PWINO FZRANO TSNO $",
 
 
  "METAR KGFI 041356Z AUTO 170100G135KT 130V210 3 1/2SM "
  "R15L/0500FT R22L/2700FT R16/1200FT R34/1000V1600FT R01L/P6000FT "
  "FC +TS BKN050 SCT150 OVC250 3/M1 A2991 RMK A02 PK WND 18515/45 "
  "WSHFT 1350 TWR VIS 1 1/2 SFC VIS 1/4 VIS 1/4V1 1/4 "
  "RAB1030E1145 FZDZE56 CIG 1000V1500 PRESFR PRESRR SLP997 GR 25 "
  "VIRGA 35 8/365 4/178 P 0125 60225 70565 T00261015 10369 21026 "
  "404800360 52101 PWINO FZRANO TSNO $",
 
  "METAR KGFI 041356Z AUTO 170100G135KT 130V210 3 1/2SM "
  "R15L/0500FT R22L/2700FT R16/1200FT R34/1000V1600FT R01L/P6000FT "
  "FC +TS BKN050 SCT150 OVC250 3/M1 A2991 RMK A02 PK WND 185150/1345 "
  "WSHFT 1350 TWR VIS 1 1/2 SFC VIS 1/4 VIS 1/4V1 1/4 "
  "RAB1030E1145 FZDZE56 CIG 1000V1500 PRESFR PRESRR SLP997 GR 25 "
  "VIRGA 35 8/365 4/178 P 0125 60225 70565 T00261015 10369 21026 "
  "404800360 52101 PWINO FZRANO TSNO",
 
 
 
  "METAR KGFI 041356Z AUTO 05008KT 10SM R15L/P6000FT CLR A2991 RMK "
  "A02 SLP 101 10288 20243 52021",
  "SPECI DGFI 041430Z 18045G56KT M1/4SM R15/0200FT FC +TS VV010 20/18 "
  "M20/M18 A2900 RMK A02A PK WND 18056/28 RAB15E25TSB20 FCB1430 PRESFR "
  "SLP 701 P 0254 M199/M182",
 
  "SPECI DGFI 041430Z 18045G56KT M1/4SM R15/0200FT FC +TS VV010 20/18 "
  "M20/M18 A2900 RMK A02A PK WND 18056/28 RAB15E25TSB20 FCB1430 PRESFR "
  "SLP 701 P 0254 M199/182",
 
  "SPECI DGFI 041430Z 18045G56KT M1/4SM R15/0200FT FC +TS VV010 20/18 "
  "M20/M18 A2900 RMK A02A PK WND 18056/28 RAB15E25TSB20 FCB1430 PRESFR "
  "SLP 701 P 0254 199/M182",
 
 "METAR APIT 171755Z AUTO 22015G25KT 1 3/4SM R22L/2700FT R16/1200FT "
 "R34/1000V1600FT R01L/P6000FT R04RR/900FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/16 A2992 "
 "RMK 4/369 58033 6003/ TWELVE 70125 10039 20029 410840112 "
 "PCPN 0009 8/563 WSHFT 1715 PK WND 2032/1725 "
 "CIG 20V25 WND 12V25 TWR VIS 2 1/2 "
 "SFC VIS 1 1/2 VIS 1 1/2V2 SLP875 SGB1213E1225",
 
 "NZWN 1700Z 35030G49KT 320V030 20KM 02 5SC021 7SC046 12/08 "
 "          Q0994.2 TEMPO 6000 RA 5ST012 2CB015 RMK SLP056 "
 "RAE0123",
 
 "SPECI APIT 171755Z 22015G25KT 1 3/4SM R22L/2700FT R16/1200FT "
 "R34/1000V1600FT R01L/P6000FT R04RR/900FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/16 A2992 "
 "RMK 58033 6003/ TWELVE 70125 8/321 10039 20029 410840112 "
 "PCPN 0009 WSHFT 1715 PK WND 2032/1725 "
 "CIG 20V25 WND 12V25 TWR VIS 2 1/2 "
 "SFC VIS 1 1/2 VIS 1 SLP875 FGB1713",
 
 "APIT 1755Z 22015G25KT 1 3/4SM R22L/2700FT R16/1200FT "
 "R34/1000V1600FT R01L/P6000FT R04RR/900FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/16 A2992 "
 "RMK 58033 6003/ TWELVE 70125 10039 20029 410840112 "
 "PCPN 0009 WSHFT 1715 PK WND 2032/1725 "
 "CIG 20V25 WND 12V25 TWR VIS 2 1/2 "
 "SFC VIS 1 1/2 VIS 1V2 SLP875",
 
 
 "APIT 1755Z 22015G25KT 1 3/4SM R22L/2700FT R16/1200FT "
 "R34/1000V1600FT R01L/P6000FT R04RR/900FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/16 A2992 "
 "RMK 58033 6003/ TWELVE 70125 10039 20029 410840112 "
 "PCPN 0009 WSHFT 1715 PK WND 2032/1725 "
 "CIG 20V25 WND 12V25 TWR VIS 2 1/2 "
 "SFC VIS 1 1/2 VIS 1 1/2V2 1/2 SLP875",
 
 "APIT 1755Z 22015G25KT 1 3/4SM R22L/2700FT R16/1200FT "
 "R34/1000V1600FT R01L/P6000FT R04RR/900FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/16 A2992 "
 "RMK 58033 6003/ TWELVE 70125 10039 20029 410840112 "
 "PCPN 0009 WSHFT 1715 PK WND 2032/1725 "
 "CIG 20V25 WND 12V25 TWR VIS 2 1/2 "
 "SFC VIS 1 1/2 VIS 1V2 1/2 SLP875",
 
 
 "EGPF 1720Z 00000KT 9999 -SHRA STC014 SCT020CB BNK024 12/09 "
 "Q1003 NOSIG",
 
 "NZAA 1700Z 03010KT 30KM 03 5CU022 7SC035 11/07 Q1006.5 NOSIG",
 "NZWN 1700Z 35030G49KT 320V030 20KM 02 5SC021 7SC046 12/08 "
 "     Q0994.2 TEMPO 6000 RA 5ST012 2CB015 RMK KAUKAU 30050KT",
 "DGAA 1800Z 22012KT 9999 SCT009 BKN120 25/21 Q1015",
 "DAAT 1830Z 30010KT CAVOK 29/06 Q1019",
 
 "GQPP 1800Z 34023KT 3000 DRSA SKC 24/20 Q1011 NSG",
 "DAAG 1830Z 06006KT 9999 SCT020 25/22 Q1015",
 "DABB 1830Z 04010KT 9999 SCT030TCU SCT033CB 27/18 Q1017",
 "DABC 1830Z 00000KT 9999 SCT026TCU SCT036CB 22/18 Q1020 RETS",
 
 "NZAA 1700Z 03010KT 30KM 03 5CU022 7SC035 11/07 Q1006.5 NOSIG",
 "NZWN 1700Z 35030G49KT 320V030 20KM 02 5SC021 7SC046 12/08 "
 "          Q0994.2 TEMPO 6000 RA 5ST012 2CB015 RMK K",
 "NZWN 1700Z 35030G49KT 320V030 20KM 02 5SC021 7SC046 12/08 "
 "     Q0994.2 TEMPO 6000 RA 5ST012 2CB015 RMK KAUKAU 30050KT",
 "DGAA 1800Z 22012KT 9999 SCT009 BKN120 25/21 Q1015",
 
 "GFLL 1900Z NIL",
 
 "GOOY 1800Z 03006G17KT 340V080 6000 TSRA BKN016 BKN030CB "
 "BKN133 26/23 Q1013 NOSIG",
 
 "GCXO 1930Z 32018KT 8000 SCT003 SCT007 18/16 Q1019",
 
 "APIT 1755Z 22015G25KT 1 3/4SM R22L/2700FT R16/1200FT "
 "R34/1000V1600FT R01L/P6000FT R04RR/900FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/16 A2992 "
 "RMK 58033 6003/ TWELVE 70125 10039 20029 410840112 "
 "PCPN 0009 WSHFT 1715 PK WND 2032/1725 "
 "CIG 20V25 WND 12V25 TWR VIS 2 1/2 "
 "SFC VIS 1 1/2 VIS 1 1/2V2",
 
 "BPIT 1755Z 22015G25KT 1 3/4SM R22L/2700FT R16/1200FT "
 "R34/1000V1600FT R01L/P6000FT R04RR/900FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/16 A2992 "
 "RMK 58033 6003/ TWELVE 70125 10039 20029 410840112 "
 "PCPN 0009 WSHFT 1715 PK WND 2032/1725 "
 "CIG 20V25 WND 12V25 TWR VIS 2 1/2 "
 "SFC VIS 1 1/2 VIS 1V2",
 
 "CPIT 1755Z 22015G25KT 1 3/4SM R22L/2700FT R16/1200FT "
 "R34/1000V1600FT R01L/P6000FT R04RR/900FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/16 A2992 "
 "RMK 58033 6003/ TWELVE 70125 10039 20029 410840112 "
 "PCPN 0009 WSHFT 1715 PK WND 2032/1725 "
 "CIG 20V25 WND 12V25 TWR VIS 2 1/2 "
 "SFC VIS 1 1/2 VIS 1V2 1/2",
 
 "DPIT 1755Z 22015G25KT 1 3/4SM R22L/2700FT R16/1200FT "
 "R34/1000V1600FT R01L/P6000FT R04RR/900FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/16 A2992 "
 "RMK 58033 6003/ TWELVE 70125 10039 20029 410840112 "
 "PCPN 0009 WSHFT 1715 PK WND 2032/1725 "
 "CIG 20V25 WND 12V25 TWR VIS 2 1/2 "
 "SFC VIS 1 1/2 VIS 1 1/2V2 1/2",
 
 
 "FPIT 1755Z 22015G25KT 1 3/4SM R22L/2700FT R16/1200FT "
 "R34/1000V1600FT R01L/P6000FT R04RR/900FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/16 A2992 "
 "RMK 58033 6003/ TWELVE 70125 10039 20029 410840112 "
 "PCPN 0009 WSHFT 1715 PK WND 2032/1725 "
 "CIG 20V25 WND 12V25 TWR VIS 2 1/2 "
 "SFC VIS 1 1/2 VIS 3/4V2 1/2",
 
 "GPIT 1755Z 22015G25KT 1 3/4SM R22L/2700FT R16/1200FT "
 "R34/1000V1600FT R01L/P6000FT R04RR/900FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/16 A2992 "
 "RMK 58033 6003/ TWELVE 70125 10039 20029 410840112 "
 "PCPN 0009 WSHFT 1715 PK WND 2032/1725 "
 "CIG 20V25 WND 12V25 TWR VIS 2 1/2 "
 "SFC VIS 1 1/2 VIS 3/4V3",
 
 "KPIT 1935Z 22015G25KT 1 3/4SM R22L/2700FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB M18/M16 A2992",
 
 "KPIT 1935Z 22015G25KT 1 3/4SM R22L/2700FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB M18/16 A2992",
 
 "KPIT 1935Z 22015G25KT 1 3/4SM R22L/2700FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/M16 A2992",
 
 "KPIT 1935Z 22015G25KT 1 3/4SM R22L/2700FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB MM/M16 A2992",
 
 "KPIT 1935Z 22015G25KT 1 3/4SM R22L/2700FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB MM/16 A2992",
 
 "KPIT 1935Z 22015G25KT 1 3/4SM R22L/2700FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB M18/MM A2992",
 
 "KPIT 1935Z 22015G25KT 1 3/4SM R22L/2700FT "
 "TSRA -DZ FG +SNPE SCT005 BKN010 OVC250CB 18/MM A2992",
 
        NULL};
 
   /***************************/
   /* DECLARE LOCAL VARIABLES */
   /***************************/
 
   Decoded_METAR Metar;
   Decoded_METAR *Mptr = &Metar;
   int j,
       ErReturn;
   static char *synopRTRN = NULL;
 
 
   /***************************************************/
   /* START BODY OF MAIN ROUTINE FOR CALLING DcdMETAR */
   /***************************************************/
 
   j = 0;
 
   while( string[j] != NULL)
   {
            /*-- PRINT INPUT METAR REPORT ----------------------------*/
      printf("INPUT METAR REPORT: %s\n",string[j] );
 
            /*-- DECODE INPUT REPORT ---------------------------------*/
      if ( (ErReturn = DcdMETAR( string[ j ], Mptr )) != 0 )
         printf("DcdMETAR:  Error Return Number: %d\n",ErReturn);
 
            /*-- PRINT DECODED METAR REPORT ELEMENTS -----------------*/
      prtDMETR( Mptr );
 
      j++;
 
   }
 
}
