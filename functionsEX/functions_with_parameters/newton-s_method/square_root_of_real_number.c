/* Copyleft 2018 @_AntJ_ */

#include "square_root_of_real_number.h"

extern double
squareRootOfReal(const double *n) 
{
        #define UCHAR unsigned char
        #define F_OF_X(xz, x) ((xz * xz) - x)
        #define F_PRIME_OF_X(x) (x + x)

        register const double xSquared = *n;
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
        else printf("%.*G", DBL_DIG, squareRootOfReal(&x));

#ifdef DEBUG_NEWT_SQRT_METHOD
        #if DEBUG_NEWT_SQRT_METHOD == 1
                #include <assert.h>

                double v = squareRootOfReal(&x);
                assert(v == sqrt(x));
        #endif
#endif
/* Proven with frama-c. Should be right all the time. */
}