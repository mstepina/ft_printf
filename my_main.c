#include "includes/ft_printf.h"

# define USHRT_MAX  65535
#include <limits.h>

int main()
{
	// ft_printf("%08.5x\n", 34);	
	// printf("%08.5x\n", 34);
	// ft_printf("%#llX\n", 18446744073709551615);
	// printf("%#llX\n", 18446744073709551615);
	// ft_printf("%f\n", -0.00039);
	// printf("%f\n", -0.00039);
	// ft_printf("%.0u\n", 0);
	// printf("%.0u\n", 0);
	// ft_printf("%08.5u\n", 34);	
	// printf("%08.5u\n", 34);
	// ft_printf("% 5i\n", 52625);
	// printf("% 5i\n", 52625);
	// ft_printf("%010.5i\n", -216);
	// printf("%010.5i\n", -216);
	// ft_printf("{%5p}\n", 0);
	// printf("{%5p}\n", 0);
	// ft_printf("%15.4d\n", -42);
	// printf("%15.4d\n", -42);
	// ft_printf("%15.4d\n", -424242);
	// printf("%15.4d\n", -424242);
	// ft_printf("%#08x\n", 42);
	// printf("%#08x\n", 42);
  	
	// ft_printf("%5.x %5.0x\n", 0, 0);
	// printf("%5.x %5.0x\n", 0, 0);
	// ft_printf("@moulitest: %.5u\n", 42);
	// printf("@moulitest: %.5u\n", 42);
	// ft_printf("%10x\n", 42);
	// printf("%10x\n", 42);
	// ft_printf("%lld\n", -9223372036854775807);
	// printf("%lld\n", -9223372036854775807);
	// ft_printf("%.0%\n");
	// printf("%.0%\n");
	// ft_printf("%#08x\n", 42);
	// printf("%#08x\n", 42);
	// ft_printf("%#8x\n", 42);
	// printf("%#8x\n", 42);
	// ft_printf("%#-08x\n", 42);
	// printf("%#-08x\n", 42);
	// ft_printf("@moulitest: %5.x %5.0x\n", 0, 0);
	// printf("@moulitest: %5.x %5.0x\n", 0, 0);

	// ft_printf("%lu\n", -42);
	// printf("%lu\n", -42);
	// ft_printf("%0+5d\n", -42);
	// printf("%0+5d\n", -42);

	// ft_printf("%o\n", 0);
	// printf("%o\n", 0);
	// ft_printf("@moulitest: %#.o %#.0o\n", 0, 0);
	// printf("@moulitest: %#.o %#.0o\n", 0, 0);
	// ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);
	// printf("@moulitest: %5.d %5.0d\n", 0, 0);
	// ft_printf("@moulitest: %.d %.0d\n", 42, 43);
	// printf("@moulitest: %.d %.0d\n", 42, 43);
	// ft_printf("%hd\n", 32768);
	// printf("%hd\n", 32768);
	// ft_printf("%hhd\n", 128);
	// printf("%hhd\n", 128);
	// ft_printf("@moulitest: %.10d\n", -42);
	// printf("@moulitest: %.10d\n", -42);
	// ft_printf("%03.2d\n", -1);
	// printf("%03.2d\n", -1);
	// ft_printf("%03.2d\n", 0);
	// printf("%03.2d\n", 0);

	//unsigned short i = 65535;
	char *s = "lol";
	char	*ss = NULL;
	//char i = 90;
	int i = 75;
	int prec = 4;
	int j = -75;
	long	l = -5123123123;
	unsigned int u = 4294967294; 
	//111;
	unsigned long	ul = 5123123123;;
	long long ll = -9223372036854775807;
	unsigned long long ull = 18446744073709551615U;
	
	int nonprint = 15;
	
	// ft_printf("{%10d}\n", -42);
	// printf("{%10d}\n", -42);
	// ft_printf("%hu\n", 0);
	// printf("%hu\n", 0);

	/* char, string, % */
	// ft_printf("ft %20s\n", NULL);
	// printf("ls %20s\n", NULL);
	// ft_printf("%s\n", s);
	// printf("%s\n", s);
	// ft_printf("%5.4s\n", s);
	// printf("%5.4s\n",s);
	// ft_printf("%-5.4s\n", s);
	// printf("%-5.4s\n", s);
	// ft_printf("%s\n", ss);
	// printf("%s\n", ss);
	// ft_printf("%5c\n", i);
	// printf("%5c\n", i);
	// ft_printf("%c\n", 0);
	// printf("%c\n", 0);
	// ft_printf("ft %%\n");
	// printf("lc %%\n");
	// ft_printf("ft %%d\n");
	// printf("lc %%d\n");
	// ft_printf("ft %5%\n");
	// printf("lc %5%\n");
	// ft_printf("ft %-5%\n");
	// printf("lc %-5%\n");
	// ft_printf("ft %05%\n");
	// printf("lc %05%\n");
	// ft_printf("ft %-05%\n");
	// printf("lc %-05%\n");
	

	/*char options */
	// ft_printf("%c\n", i);
	// printf("%c\n", i);
	// ft_printf("%c\n", nonprint);
	// printf("%c\n", nonprint);
	// ft_printf("%10c\n", i);
	// printf("%10c\n", i);
	// ft_printf("%-9c\n", i);
	// printf("%-9c\n", i);
	// ft_printf("%lc\n", i);
	// printf("%lc\n", i);


	/* pointers */
	// ft_printf("ft %p\n", NULL);
	// printf("lc %p\n", NULL);
	// ft_printf("ft %p\n", &i);
	// printf("lc %p\n", &i);
	// ft_printf("ft %20p\n", &i);
	// printf("lc %20p\n", &i);
	// ft_printf("ft %-20p\n", &i);
	// printf("lc %-20p\n", &i);
	// ft_printf("%.0p, %.p\n", 0, 0);
	// printf("%.0p, %.p\n", 0, 0);

	

	/* int lengths */
	// ft_printf("%i%i%li%lli\n", i, j, l, ll);
	// printf("\n");
	// printf("%i%i%li%lli\n", i, j, l, ll);
	
	/* lengths out of range */
	// ft_printf("ft %hhi, %hhi, %hi, %hi\n", (char)-129, (char)128, (short)32768, (short)-32769);
	// printf("lc %hhi, %hhi, %hi, %hi\n", (char)-129, (char)128, (short)32768, (short)-32769);

	/* signed int options */
	// ft_printf("ft %d\n", 5555);
	// printf("lc %d\n", 5555);
	// ft_printf("ft %9d\n", 5555);
	// printf("lc %9d\n", 5555);
	// ft_printf("ft %09i\n", i);
	// printf("lc %09i\n", i);
	// ft_printf("ft %-9i\n", i);
	// printf("lc %-9i\n", i);
	// ft_printf("ft %-09i\n", i); // 0 is ignored
	// printf("lc %-09i\n", i); // 0 is ignored
	// ft_printf("ft %+i\n", i);
	// printf("ft %+i\n", i);
	// ft_printf("ft % i\n", i);
	// printf("lc % i\n", i);
	// ft_printf("ft % +i\n", i); // ' ' is ignored
	// printf("ft % +i\n", i); // ' ' is ignored
	// ft_printf("ft % 9i\n", i);
	// printf("lc % 9i\n", i);
	// ft_printf("ft % -9i\n", i);
	// printf("lc % -9i\n", i);
	// ft_printf("ft % 09i\n", i);
	// printf("lc % 09i\n", i);
	// ft_printf("ft %.*i\n", prec, i);
	// printf("lc %.*i\n", prec, i);
	// ft_printf("ft %37.*i\n", prec, i);
	// printf("lc %37.*i\n", prec, i);
	// ft_printf("ft %037.*i\n", prec, i);
	// printf("lc %037.*i\n", prec, i);
	// ft_printf("ft %-39.*i\n", prec, i);
	// printf("lc %-39.*i\n", prec, i);
	// ft_printf("ft %-039.*i\n", prec, i); // 0 is ignored
	// printf("lc %-039.*i\n", prec, i); // 0 is ignored
	// ft_printf("ft %+.*i\n", prec, i);
	// printf("lc %+.*i\n", prec, i);
	// ft_printf("ft % .*i\n", prec, i);
	// printf("lc % .*i\n", prec, i);
	// ft_printf("ft % +.*i\n", prec, i); // ' ' is ignored
	// printf("lc % +.*i\n", prec, i); // ' ' is ignored
	// ft_printf("ft % 39.*i\n", prec, i);
	// printf("lc % 39.*i\n", prec, i);
	// ft_printf("ft % -39.*d\n", prec, i);
	// printf("lc % -39.*d\n", prec, i);
	// ft_printf("ft % 039.*i\n", prec, i);
	// printf("lc % 039.*i\n", prec, i);


	/* octal options */
	int r = 0;
	// ft_printf("%2i ft %o\n", r, u);
	// printf("%2i ls %o\n", r, u);
	// ft_printf("%2i ft %#o\n", ++r, u);
	// printf("%2i lc %#o\n", ++r, u);
	// ft_printf("%2i ft %9o\n", ++r, u);
	// printf("%2i lc %9o\n", ++r, u);
	// ft_printf("%2i ft %#9o\n", ++r, u);
	// printf("%2i lc %#9o\n", ++r, u);
	// ft_printf("%2i ft %09o\n", ++r, u);
	// printf("%2i lc %09o\n", ++r, u);
	// ft_printf("%2i ft %#09o\n", ++r, u);
	// printf("%2i ft %#09o\n", ++r, u);
	// ft_printf("%2i ft %-9o\n", ++r, u);
	// printf("%2i lc %-9o\n", ++r, u);
	// ft_printf("%2i ft %#-9o\n", ++r, u);
	// printf("%2i lc %#-9o\n", ++r, u);
	// ft_printf("%2i ft %.o\n", ++r, u);
	// printf("%2i lc %.o\n", r, u);
	// ft_printf("%2i ft %#.o\n", ++r, u);
	// printf("%2i lc %#.o\n", ++r, u);
	// ft_printf("%2i ft %.*o\n", ++r, prec, u);
	// printf("%2i lc %.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %#.*o\n", ++r, prec, u);
	// printf("%2i ft %#.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %9.*o\n", ++r, prec, u);
	// printf("%2i ft %9.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %#9.*o\n", ++r, prec, u);
	// printf("%2i ft %#9.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %09.*o\n", ++r, prec, u);
	// printf("%2i ft %09.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %#09.*o\n", ++r, prec, u);
	// printf("%2i ft %#09.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %-9.*o\n", ++r, prec, u);
	// printf("%2i ft %-9.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %#-9.*o\n", ++r, prec, u);
	// printf("%2i ft %#-9.*o\n", ++r, prec, u);
	// ft_printf("\n");
	// ft_printf("%llo", ull);
	// ft_printf("\n");
	// printf("%llo\n", ull);

	// ft_printf("ft %.0o\n", 5);
	// printf("lc %.0o\n", 5);
	// ft_printf("ft %.0o\n", 0);
	// printf("ft %.0o\n", 0);
	// printf("%.4o\n", i);
	// ft_printf("%.4o\n", i);

	/* u options */
	// ft_printf("%llu\n", ull);
	// printf("%llu\n", ull);

	//int r = 0;
	// ft_printf("%2i ft %u\n", r, u);
	// printf("%2i ls %u\n", r, u);
	// ft_printf("%2i ft %#o\n", ++r, u);
	// printf("%2i lc %#o\n", ++r, u);
	// ft_printf("%2i ft %9u\n", ++r, u);
	// printf("%2i lc %9u\n", ++r, u);
	// ft_printf("%2i ft %#9u\n", ++r, u);
	// printf("%2i lc %#9u\n", ++r, u);
	// ft_printf("%2i ft %09u\n", ++r, u);
	// printf("%2i lc %09u\n", ++r, u);
	// ft_printf("%2i ft %#09u\n", ++r, u);
	// printf("%2i ft %#09u\n", ++r, u);
	// ft_printf("%2i ft %-9u\n", ++r, u);
	// printf("%2i lc %-9u\n", ++r, u);
	// ft_printf("%2i ft %#-9u\n", ++r, u);
	// printf("%2i lc %#-9u\n", ++r, u);
	// ft_printf("%2i ft %.u\n", ++r, u);
	// printf("%2i lc %.u\n", ++r, u);
	// ft_printf("%2i ft %#.u\n", ++r, u);
	// printf("%2i lc %#.u\n", ++r, u);
	// ft_printf("%2i ft %.*u\n", ++r, prec, u);
	// printf("%2i lc %.*u\n", ++r, prec, u);
	// ft_printf("%2i ft %#.*u\n", ++r, prec, u);
	// printf("%2i ft %#.*u\n", ++r, prec, u);
	// ft_printf("%2i ft %9.*u\n", ++r, prec, u);
	// printf("%2i ft %9.*u\n", ++r, prec, u);
	// ft_printf("%2i ft %#9.*u\n", ++r, prec, u);
	// printf("%2i ft %#9.*u\n", ++r, prec, u);
	// ft_printf("%2i ft %09.*u\n", ++r, prec, u);
	// printf("%2i ft %09.*u\n", ++r, prec, u);
	// printf("%2i ft %-9.*u\n", ++r, prec, u);
	// ft_printf("%2i ft %-9.*u\n", ++r, prec, u);
	// ft_printf("%2i ft %#-9.*u\n", ++r, prec, u);
	// printf("%2i ft %#-9.*u\n", ++r, prec, u);
	// ft_printf("\n");
	// ft_printf("%llu", ull);
	// ft_printf("\n");
	// printf("%llu\n", ull);

	// ft_printf("ft %.0u\n", 5);
	// printf("lc %.0u\n", 5);
	// ft_printf("ft %.0u\n", 0);
	// printf("ft %.0u\n", 0);
	// printf("%.4u\n", i);
	// ft_printf("%.4u\n", i);

	/* x options  */

	// ft_printf("%llX\n", ull);
	// printf("%llX\n", ull);
	// ft_printf("ft %.0X\n", 0);
	// printf("lc %.0X\n", 0);
	// ft_printf("ft %X\n", 0);
	// printf("ls %X\n", 0);
	// ft_printf("ft %.0X\n", 0);
	// printf("lc %.0X\n", 0);
	// ft_printf("%#X\n", i);
	// printf("%#X\n", i);
 // 	printf("%##X\n", i);
 // 	ft_printf("%##X\n", i);
	// printf("%.4X\n", i);
	// ft_printf("%.4X\n", i);
	// ft_printf("%.x\n", i);
	// printf("%.x\n", i);
	// ft_printf("%14X\n", i);
	// printf("%14X\n", i);
	// ft_printf("%-14X\n", i);
	// printf("%-14X\n", i);
	// ft_printf("%014X\n", i);
	// printf("%014X\n", i);
	// ft_printf("%X\n", i);
	// printf("%X\n", i);
	// ft_printf("%#X\n", i);
	// printf("%#X\n", i);
	// ft_printf("%X\n", j);
	// printf("%X\n", j);
	// ft_printf("%#x\n", j);
	// printf("%#x\n", j);

	//printf("-- lengths: hh & h --\n");
	// ft_printf("%hhX\n", (unsigned char)255);
	// printf("%hhX\n", (unsigned char)255);
	// ft_printf("%hX\n", (short)255);
	// printf("%hX\n", (short)255);
	// printf("-- lengths: ll --\n");
	// ft_printf("%lX\n", l);
	// printf("%lX\n", l);
	// printf("-- lengths: ull --\n");
	// ft_printf("%llX\n", ull);
	// printf("%llX\n", ull);

	double ld3 = 42.2456456456;
	double	ld4 = 1300000;
	float 	f  = 2345.1349999999;

	// ft_printf("f ft %f\n", ld3);
	// ft_printf("f ft %f\n", -ld4);
	// printf("f ls %f\n", ld3);
	// printf("f ls %f\n", -ld4);

	// ft_printf("ft %.20f\n", 1.5);
	// printf("ft %.20f\n", 1.5);
	// ft_printf("float rounding ft %.2lf\n", -23.679);
	// printf("float rounding lc %.2f\n", -23.679);
	// ft_printf("float rounding ft %.2f\n", 99.99999);
	// printf("float rounding lc %.2f\n", 99.99999);
	// ft_printf("float rounding ft %f\n", 573.924);
	// printf("float rounding ft %f\n", 573.924);
	// ft_printf("float ft %f\n", f);
	// printf("float ft %f\n", f);
	// ft_printf("float ft %#.f\n", -f);
	// printf("float ft %#.f\n", -f);
	// ft_printf("float ft %.10f\n", f);
	// printf("float ft %.10f\n", f);
	// ft_printf("float ft %020.10f\n", f);
	// printf("float ft %020.10f\n", f);
	// ft_printf("float ft %020.10f\n", -f);
	// printf("float ft %020.10f\n", -f);
	// ft_printf("float ft % 20.10f\n", f);
	// printf("float ft % 20.10f\n", f);
	// ft_printf("float ft %# 20.10f\n", -f);
	// printf("float ft %# 20.10f\n", -f);
	// ft_printf("float ft %#-20.10f\n", -f);
	// printf("float ft %#-20.10f\n", -f);
	// ft_printf("float ft %#+20.10f\n", f);
	// printf("float ft %#+20.10f\n", f);
	// ft_printf("ls %f\n", f);
	// printf("ls %f\n", f);
	// ft_printf("ls %.10f\n", f);
	// printf("ls %.10f\n", f);
	// ft_printf("f %.0f\n", f);
	// printf("f %.0f\n", f);
	// ft_printf("f %.f\n", f);
	// printf("f %.f\n", f);


	long double d  = 2345.111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999;
	// ft_printf("%Lf\n", d);
	// printf("%Lf\n", d);
	// ft_printf("%#f\n", d);
	// printf("%#f\n", d);
	// ft_printf("%0f\n", d);
	// printf("%0f\n", d);
	// ft_printf("%15Lf\n", d);
	// printf("%15Lf\n", d);
	// ft_printf("%015f\n", d);
	// printf("%015f\n", d);
	// ft_printf("%-15f\n", d);
	// printf("%-15f\n", d);
	// ft_printf("%+f\n", d);
	// printf("%+f\n", d);
	// ft_printf("% f\n", d);
	// printf("% f\n", d);
	// ft_printf("%.12f\n", d);
	// printf("%.12f\n", d);
	// ft_printf("%30.12f\n", d);
	// printf("%30.12f\n", d);
	// ft_printf("%030.12f\n", d);
	// printf("%030.12f\n", d);
	// ft_printf("%-30.12f\n", d);
	// printf("%-30.12f\n", d);
	ft_printf("%.f\n", d);
	printf("%.f\n", d);
	ft_printf("%#.f\n", d);
	printf("%#.f\n", d);
	return (0);
}
