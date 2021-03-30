/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leaks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 14:58:29 by kkamashi          #+#    #+#             */
/*   Updated: 2021/03/30 11:08:30 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

// ! Memory Check
int main(void)
{
	// ! %i or %d
	ft_printf(" 1[%7i]", -14);
	ft_printf(" 2[%5i]", -2562); // i_width_neg_exactfit
	ft_printf(" 3[%4i]", -2464); // i_width_neg_nofit
	ft_printf(" 4[%-7i]", -14);
	ft_printf(" 5[%-5i]", -2562); // i_width_neg_exactfit_lj
	ft_printf(" 6[%-4i]", -2464); // i_width_neg_nofit_lj
	ft_printf(" 7[%.6i]", -3);
	ft_printf(" 8[%.4i]", -2372);
	ft_printf(" 9[%.3i]",-23646);
	ft_printf("10[%07i]", -54);
	ft_printf("11[%04i]", -532);
	ft_printf("12[%04i]", -4825);
	ft_printf("13[%10.5i]", -216);
	ft_printf("14[%8.3i]", -8473);
	ft_printf("15[%3.7i]", -2375);
	ft_printf("16[%3.3i]", -8462);
	ft_printf("17[%010.5i]", -216);
	ft_printf("18[%08.3i]", -8473);
	ft_printf("19[%03.7i]", -2375);
	ft_printf("20[%03.3i]", -8462);

	// ! parcent
	ft_printf("%%");
	ft_printf("%5%");
	ft_printf("%-5%");
	ft_printf("%05%");
	ft_printf("%-05%");

	// ! %s
	//String specifiers - no modifiers
	ft_printf("hello, %s.", "gavin");
	ft_printf("%s", "ft_printfing ft_printfing");
	ft_printf("%s%s", "hello", "world");
	ft_printf("..%s stuff %s", "a", "b");
	ft_printf("this %s is empty", "");
	ft_printf("this %s is %s", "hello", "");
	ft_printf("this %s is %s", "", "hello");
	ft_printf("%s%s%s", "1", "2", "3's a charm");
	//String specifiers with field_width, space- or zero-padded
	ft_printf("%32s", "abc");
	ft_printf("%16s", "nark nark");
	ft_printf("%5s", "goes over");
	//String specifiers with field_width, space- or zero-padded, left-justified
	ft_printf("%-32s", "abc");
	ft_printf("%-16s", "nark nark");
	ft_printf("%-5s", "goes over");
	//String specifiers with precision
	ft_printf("%.7s", "hello");
	ft_printf("%.3s", "hello");
	ft_printf("%.s", "hello");
	ft_printf("%.0s", "hello");
	ft_printf("%.3s%.2s", "holla", "bitch");
	ft_printf("%.2s%.7s", "hello", "world");
	ft_printf("%.7s%.2s", "hello", "world");
	ft_printf("%.5s%7s", "yo", "boi");
	//String specifiers with both precision and field width
	ft_printf("%7.5s", "yolo");
	ft_printf("%7.5s", "bombastic");
	ft_printf("%-7.5s", "yolo");
	ft_printf("%-7.5s", "tubular");
	ft_printf("%7.7s%7.7s", "hello", "world");
	ft_printf("%3.7s%7.7s", "hello", "world");
	ft_printf("%7.7s%3.7s", "hello", "world");
	ft_printf("%3.7s%3.7s", "hello", "world");
	ft_printf("%7.3s%7.7s", "hello", "world");
	ft_printf("%3.3s%7.7s", "hello", "world");
	ft_printf("%7.3s%3.7s", "hello", "world");
	ft_printf("%3.3s%3.7s", "hello", "world");
	ft_printf("%7.7s%7.3s", "hello", "world");
	ft_printf("%3.7s%7.3s", "hello", "world");
	ft_printf("%7.7s%3.3s", "hello", "world");
	ft_printf("%3.7s%3.3s", "hello", "world");
	ft_printf("%7.3s%7.3s", "hello", "world");
	ft_printf("%3.3s%7.3s", "hello", "world");
	ft_printf("%7.3s%3.3s", "hello", "world");
	ft_printf("%3.3s%3.3s", "hello", "world");
	ft_printf("%3s%3s", "hello", "world");
	//String specifiers, other ft_printfs
	ft_printf("%-7s%5s", "hello", "world");
	ft_printf("%7s%-5s", "hello", "world");
	//String specifiers - NULL strings
	ft_printf("hello, %s.", NULL);
	ft_printf("%s", NULL);
	ft_printf("%32s", NULL);
	ft_printf("%2s", NULL);
	ft_printf("%-32s", NULL);
	ft_printf("%-16s", NULL);
	ft_printf("%-3s", NULL);
	//String specifiers with precision
	ft_printf("%.9s", "NULL");
	ft_printf("%.3s", "NULL");
	ft_printf("%.s", "NULL");
	ft_printf("%.0s", "NULL");
	//String specifiers with both precision and field width
	ft_printf("%7.5s", "yolo");
	ft_printf("%7.5s", "bombastic");
	ft_printf("%-7.5s", "yolo");
	ft_printf("%-7.5s", "tubular");
	ft_printf("%7.7s%7.7s", "hello", "world");
	ft_printf("%3.7s%7.7s", "hello", "world");
	ft_printf("%7.7s%3.7s", "hello", "world");
	ft_printf("%3.7s%3.7s", "hello", "world");
	ft_printf("%7.3s%7.7s", "hello", "world");
	ft_printf("%3.3s%7.7s", "hello", "world");
	ft_printf("%7.3s%3.7s", "hello", "world");
	ft_printf("%3.3s%3.7s", "hello", "world");
	ft_printf("%7.7s%7.3s", "hello", "world");
	ft_printf("%3.7s%7.3s", "hello", "world");
	ft_printf("%7.7s%3.3s", "hello", "world");
	ft_printf("%3.7s%3.3s", "hello", "world");
	ft_printf("%7.3s%7.3s", "hello", "world");
	ft_printf("%3.3s%7.3s", "hello", "world");
	ft_printf("%7.3s%3.3s", "hello", "world");
	ft_printf("%3.3s%3.3s", "hello", "world");
	ft_printf("%3s%3s", "hello", "world");
	//String specifiers, other tests
	ft_printf("%-7s%5s", "hello", "world");
	ft_printf("%7s%-5s", "hello", "world");
	//String specifiers - NULL strings
	ft_printf("hello, %s.", NULL);
	ft_printf("%s", NULL);
	ft_printf("%32s", NULL);
	ft_printf("%2s", NULL);
	ft_printf("%-32s", NULL);
	ft_printf("%-16s", NULL);
	ft_printf("%-3s", NULL);
	//String specifiers with precision
	ft_printf("%.9s", "NULL");
	ft_printf("%.3s", "NULL");
	ft_printf("%.s", "NULL");
	ft_printf("%.0s", "NULL");

	static char *s_hidden = "hi low\0don't print me lol\0";

	ft_printf("%s", s_hidden);
	// width pad
	ft_printf("%3s", s_hidden);
	ft_printf("%9s", s_hidden);
	// precision no width
	ft_printf("%.s", s_hidden);
	ft_printf("%.9s", s_hidden);
	// precision  0 before number
	ft_printf("%.03s", s_hidden);
	ft_printf("%.09s", s_hidden);
	ft_printf("%.03s", NULL);
	ft_printf("%.09s", NULL);
	ft_printf("%.00s", "\0");
	ft_printf("%.01s", "\0");
	ft_printf("%.03s", "\0");
	ft_printf("%.09s", "\0");
	// width  no precision
	ft_printf("%3.s", s_hidden);
	ft_printf("%10.s", s_hidden);
	ft_printf("%3.s", NULL);
	ft_printf("%10.s", NULL);
	ft_printf("%1.s", "\0");
	ft_printf("%2.s", "\0");
	ft_printf("%9.s", "\0");
	// lj flag width  no precision
	ft_printf("%-3.s", s_hidden);
	ft_printf("%-8.s", s_hidden);
	ft_printf("%-3.s", NULL);
	ft_printf("%-8.s", NULL);
	ft_printf("%-1.s", "\0");
	ft_printf("%-2.s", "\0");
	ft_printf("%-6.s", "\0");
	// width  precision 1
	ft_printf("%3.1s", s_hidden);
	ft_printf("%10.1s", s_hidden);
	ft_printf("%3.1s", NULL);
	ft_printf("%9.1s", NULL);
	// lj flag width  precision 1
	ft_printf("%-3.1s", s_hidden);
	ft_printf("%-10.1s", s_hidden);
	ft_printf("%-3.1s", NULL);
	ft_printf("%-9.1s", NULL);
	ft_printf("%-3.1s", "\0");
	ft_printf("%-6.1s", "\0");
	// width  exact precision
	ft_printf("%3.6s", s_hidden);
	ft_printf("%20.6s", s_hidden);
	ft_printf("%3.6s", NULL);
	ft_printf("%20.6s", NULL);
	ft_printf("%3.6s", "\0");
	ft_printf("%6.6s", "\0");
	// lj flag width exact precision
	ft_printf("%-3.6s", s_hidden);
	ft_printf("%-20.6s", s_hidden);
	// lj flag width excess precision
	ft_printf("%-3.8s", s_hidden);
	ft_printf("%-10.8s", s_hidden);
	ft_printf("%-3.8s", NULL);
	ft_printf("%-10.8s", NULL);
	// decoy lj flag
	ft_printf("%-.00s", s_hidden);
	ft_printf("%-.09s", s_hidden);
	// multi zeros
	ft_printf("%00s", s_hidden);
	ft_printf("%000s", s_hidden);
	ft_printf("%0000s", s_hidden);
	ft_printf("%-00s", s_hidden);
	ft_printf("%0-0s", s_hidden);
	ft_printf("%00-s", s_hidden);
	// zero and width
	ft_printf("%03s", s_hidden);
	ft_printf("%09s", s_hidden);
	// flag cancelling
	ft_printf("%-03s", s_hidden);
	ft_printf("%-09s", s_hidden);

	// ! %p
	static char	a01;
	static unsigned char a02;
	static short a03;
	static unsigned short a04;
	static int a05;
	static unsigned int a06;
	static long a07;
	static unsigned long a08;
	static long long a09;
	static unsigned long long a10;
	static char *a11;
	static void *a12;

	ft_printf("%p", NULL);
	ft_printf("%5p", NULL);
	ft_printf("%2p", NULL);
	ft_printf("%.p", NULL);
	ft_printf("%5.p", NULL);
	ft_printf("%2.p", NULL);
	ft_printf("%9.2p\n", 1234);
	ft_printf("%2.9p\n", 1234);
	ft_printf("%.5p", 0);
	ft_printf("%.0p", 0);
	ft_printf("%5p", 0);
	ft_printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);

	// ! %u
	//Unsigned integers - no modifers
	ft_printf("this %u number", 17);
	ft_printf("this %u number", 0);
	ft_printf("%u", 3);
	ft_printf("%u", 4294967295u);
	//Unsigned integers with field width
	ft_printf("%7u", 33);
	ft_printf("%3u", 0);
	ft_printf("%5u", 52625);
	ft_printf("%4u", 94827);
	ft_printf("%-7u", 33);
	ft_printf("%-3u", 0);
	ft_printf("%-5u", 52625);
	ft_printf("%-4u", 94827);
	//unsigned integers with precision
	ft_printf("%.5u", 2);
	ft_printf("%.3u", 0);
	ft_printf("%.4u", 5263);
	ft_printf("%.3u", 13862);
	//Unsigned integers with zero field width padding
	ft_printf("%05u", 43);
	ft_printf("%03u", 0);
	ft_printf("%03u", 634);
	//Unsigned integers with field width and precision
	ft_printf("%8.5u", 34);
	ft_printf("%8.5u", 0);
	ft_printf("%8.3u", 8375);
	ft_printf("%3.7u", 3267);
	ft_printf("%3.3u", 6983);
	//Unsigned integers with field width and precision, left-justified
	ft_printf("%-8.5u", 34);
	ft_printf("%-8.5u", 0);
	ft_printf("%-8.3u", 8375);
	ft_printf("%-3.7u", 3267);
	ft_printf("%-3.3u", 6983);
	//Unsigned integers with field width and precision with zeropadding
	ft_printf("%08.5u", 34);
	ft_printf("%08.5u", 0);
	ft_printf("%08.3u", 8375);
	ft_printf("%03.7u", 3267);
	ft_printf("%03.3u", 6983);
	//Unsigned integers with field width and precision, left-justified with zeropadding
	ft_printf("%0-8.5u", 34);
	ft_printf("%0-8.5u", 0);
	ft_printf("%0-8.3u", 8375);
	ft_printf("%0-3.7u", 3267);
	ft_printf("%0-3.3u", 6983);
	//Unsigned integers - zero precision zero value
	ft_printf("%.0u", 0);
	ft_printf("%.u", 0);
	ft_printf("%5.0u", 0);
	ft_printf("%5.u", 0);
	ft_printf("%-5.0u", 0);
	ft_printf("%-5.u", 0);

	// ! %x
	//Hexadecimal lowers - no modifers
	ft_printf("this %x number", 17);
	ft_printf("this %x number", 0);
	ft_printf("%x", 3);
	ft_printf("%x", 4294967295u);
	//Hexadecimal lowers with field width
	ft_printf("%7x", 33);
	ft_printf("%3x", 0);
	ft_printf("%5x", 52625);
	ft_printf("%2x", 94827);
	ft_printf("%-7x", 33);
	ft_printf("%-3x", 0);
	ft_printf("%-5x", 52625);
	ft_printf("%-4x", 9648627);
	//Hexadecimal lowers with precision
	ft_printf("%.5x", 21);
	ft_printf("%.3x", 0);
	ft_printf("%.4x", 5263);
	ft_printf("%.3x", 938862);
	//Hexadecimal lowers with zero field width padding
	ft_printf("%05x", 43);
	ft_printf("%03x", 0);
	ft_printf("%03x", 698334);
	//Hexadecimal lowers with field width and precision
	ft_printf("%8.5x", 34);
	ft_printf("%8.5x", 0);
	ft_printf("%8.3x", 8375);
	ft_printf("%2.7x", 3267);
	ft_printf("%3.3x", 6983);
	//Hexadecimal lowers with field width and precision, left-justified
	ft_printf("%-8.5x", 34);
	ft_printf("%-8.5x", 0);
	ft_printf("%-8.3x", 8375);
	ft_printf("%-2.7x", 3267);
	ft_printf("%-3.3x", 6983);
	//Hexadecimal lowers with field width and precision with zeropadding
	ft_printf("%08.5x", 34);
	ft_printf("%08.5x", 0);
	ft_printf("%08.3x", 8375);
	ft_printf("%02.7x", 3267);
	ft_printf("%03.3x", 6983);
	//Hexadecimal lowers with field width and precision, left-justified with zeropadding
	ft_printf("%0-8.5x", 34);
	ft_printf("%0-8.5x", 0);
	ft_printf("%0-8.3x", 8375);
	ft_printf("%0-2.7x", 3267);
	ft_printf("%0-3.3x", 6983);
	//Hexadecimal lower - zero precision zero value
	ft_printf("%.0x", 0);
	ft_printf("%.x", 0);
	ft_printf("%5.0x", 0);
	ft_printf("%5.x", 0);
	ft_printf("%-5.0x", 0);
	ft_printf("%-5.x", 0);

	// !Moulinette tests
	ft_printf(" pouet %s !!", "camembert");
	ft_printf("%s !", "Ceci n'est pas un \0 exercice !");
	ft_printf("%s!", "Ceci n'est toujours pas un exercice !");
	ft_printf("%s!", NULL);

	ft_printf("%s",
			"Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Etalafinilla*bip*");

	ft_printf("%d", 42);
	ft_printf("Kashim a %d histoires à raconter", 1001);
	ft_printf("Il fait au moins %d\n", -8000);
	ft_printf("%d", -0);
	ft_printf("%d", 0);
	ft_printf("%d", INT_MAX);
	ft_printf("%d", INT_MIN);
	// ft_printf("%d", INT_MIN - 1);
	// ft_printf("%d", INT_MAX + 1);
	ft_printf("%%d 0000042 == |%d|\n", 0000042);
	ft_printf("%%d \t == |%d|\n", '\t');
	ft_printf("%%d Lydie == |%d|\n", 'L'+'y'+'d'+'i'+'e');

	ft_printf("Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %p", 100, "Ly", 500);

	ft_printf("%c", 42);
	ft_printf("Kashim a %c histoires à raconter", 1001);
	ft_printf("Il fait au moins %c\n", -8000);
	ft_printf("%c", -0);
	ft_printf("%c", 0);
	ft_printf("%c\n", INT_MAX);
	ft_printf("%c\n", 'c');
	ft_printf("%c\n", '\n');
	ft_printf("%c", 'l');
	ft_printf("%c", ' ');
	ft_printf("%c\n", '!');
	ft_printf("%c\n", '\r');
	ft_printf("%c\n", '\t');

	ft_printf("%i", 42);
	ft_printf("%i", -0);
	ft_printf("%i", 0);
	ft_printf("%i", INT_MAX);
	ft_printf("%i", INT_MIN);
	// ft_printf("%i", INT_MIN - 1);
	// ft_printf("%i", INT_MAX + 1);
	ft_printf("%%i 0000042 == |%i|\n", 0000042);
	ft_printf("%%i \t == |%i|\n", '\t');
	ft_printf("%%i Lydie == |%i|\n", 'L'+'y'+'d'+'i'+'e');

	ft_printf("%u", 42);
	ft_printf("Kashim a %u histoires à raconter", 1001);
	ft_printf("Il fait au moins %u\n", -8000);
	ft_printf("%u", -0);
	ft_printf("%u", 0);
	ft_printf("%u", INT_MAX);
	ft_printf("%u", INT_MIN);
	// ft_printf("%u", INT_MIN - 1);
	// ft_printf("%u", INT_MAX + 1);
	ft_printf("%%u 0000042 == |%u|\n", 0000042);
	ft_printf("%%u \t == |%u|\n", '\t');
	ft_printf("%%u Lydie == |%u|\n", 'L'+'y'+'d'+'i'+'e');

	ft_printf("%x", 42);
	ft_printf("Kashim a %x histoires à raconter", 1001);
	ft_printf("Il fait au moins %x\n", -8000);
	ft_printf("%x", -0);
	ft_printf("%x", 0);
	ft_printf("%x", INT_MAX);
	ft_printf("%x", INT_MIN);
	// ft_printf("%x", INT_MIN - 1);
	// ft_printf("%x", INT_MAX + 1);
	ft_printf("%%x \t == |%x|\n", '\t');
	ft_printf("%%x Lydie == |%x|\n", 'L'+'y'+'d'+'i'+'e');

	// !memory leaksが起きてる

	ft_printf("%%-5.3s LYDI == |%-5.3s|\n", "LYDI");
	ft_printf("%%04.5i 42 == |%04.5i|\n", 42);
	ft_printf("%%04.3i 42 == |%04.3i|\n", 42);
	ft_printf("%%04.2i 42 == |%04.2i|\n", 42);

	ft_printf("%%04i 42 == |%04i|\n", 42);
	ft_printf("%%05i 42 == |%05i|\n", 42);
	ft_printf("%%0i 42 == |%0i|\n", 42);
	ft_printf("%%0d 0000042 == |%0d|\n", 0000042);

	ft_printf("%%-i 42 == %-i\n", 42);
	ft_printf("%%-d 42 == %-d\n", INT_MIN);
	ft_printf("%%-i -42 == %-i\n", -42);
	ft_printf("%%-4d 42 == |%-4d|\n", 42);
	ft_printf("%%-5d -42 == |%-5d|\n", -42);
	ft_printf("|%3i|%-3i|\n", 42, 42);
	ft_printf("%%-4i 42 == |%-4i|\n", 42);

	ft_printf("%%-*.3s LYDI == |%-*.3s|\n", 5, "LYDI");
	ft_printf("%%*i 42 == |%*i|\n", 5, 42);
	ft_printf("%%*i 42 == |%*i|\n", 3, 42);
	ft_printf("%%*i 42 == |%*i|\n", 2, 42);

	ft_printf("%*s", 32, "abc");
	ft_printf("%-*s", 32, "abc");
	ft_printf("%*s", 3, "hello");
	ft_printf("%.*s", 3, "hello");
	ft_printf("%.*s", 0, "hello");
	ft_printf("%-*.*s", 7, 3, "yolo");
	ft_printf("%*i", 4, 94827);
	ft_printf("%*i", 14, 94827);
	ft_printf("%.*i", 6, -3);
	ft_printf("%0*i", 7, -54);
	ft_printf("%*s", -32, "abc");
	ft_printf("%-*s", -32, "abc");
	ft_printf("%*s", -3, "hello");
	ft_printf("%.*s", -3, "hello");
	ft_printf("%-*.*s", -7, -3, "yolo");
	ft_printf("%*i", -4, 94827);
	ft_printf("%*i", -14, 94827);
	ft_printf("%.*i", -6, -3);
	ft_printf("%0*i", -7, -54);
	printf("\nEND\n");
	while (1)
		;
}
