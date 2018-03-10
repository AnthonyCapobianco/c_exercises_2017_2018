/* Copyleft 2018 @_AntJ_ */

#include "square_root_of_real_number.h"


#ifdef __GNUC__
inline double squareRootOfReal(register const double xSquared)__attribute__((hot));
#else
inline double squareRootOfReal(register const double xSquared);
#endif

inline double
squareRootOfReal(register const double xSquared) 
{
        #define UCHAR unsigned char
        #define F_OF_X(xz, x) ((xz * xz) - x)
        #define F_PRIME_OF_X(x) (x + x)

        register double xGuess = (xSquared / 2);

        for (UCHAR i = 0; i < DBL_DIG; ++i) xGuess -= (F_OF_X(xGuess, xSquared) / F_PRIME_OF_X(xGuess));     

        return xGuess;
}

extern void
checkAndPrintSquareRootOfRealNumber(const double x)
{
        if (x == 1.0 || x <= 0.0)
        {
                if (x < 0.0) 
                {
                        fprintf(stderr, "ERROR: SQUARE ROOT OF A NEGATIVE NUMBER");
                        return;
                }
                else if (x == 0.0) printf("0");
                else if (x == 1.0) printf("1");
        }
        else printf("%.*G", DBL_DIG, squareRootOfReal(x));


#if DEBUG_NEWT_SQRT_METHOD == 1
        assert(squareRootOfReal(x) == sqrt(x));
#endif
/* Proven with frama-c. Should be right all the time. */
}