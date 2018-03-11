/* Copyleft 2018 @_AntJ_ */

#include "square_root_of_real_number.h"


#ifdef __GNUC__
inline static double _squareRootOfReal(register const double, register double)__attribute__((hot));
#endif

inline static double
_squareRootOfReal(register const double xSquared, register double xGuess) 
{
        for (char i = DBL_DIG; i > 0; --i) xGuess -= ((xGuess * xGuess) - xSquared) / (xGuess + xGuess);

        return xGuess;
}

extern void
checkAndPrintSquareRootOfRealNumber(const double x)
{
        #define squareRootOfReal(x) _squareRootOfReal(x, (x * 0.5))
        
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
        else printf("%.*G\n", DBL_DIG, squareRootOfReal(x));

        #undef squareRootOfReal

        #if DEBUG_NEWT_SQRT_METHOD == 1
                printf("%i", ((float) sqrt(x) == (float) squareRootOfReal(x)));
                assert(_squareRootOfReal(x, x * 0.5) == sqrt(x));
        #endif
}

