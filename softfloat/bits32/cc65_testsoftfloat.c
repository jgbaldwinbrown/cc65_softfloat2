
/*============================================================================

This C source file is part of the Berkeley SoftFloat IEEE Floating-Point
Arithmetic Package, Release 2c, by John R. Hauser.

THIS SOFTWARE IS DISTRIBUTED AS IS, FOR FREE.  Although reasonable effort has
been made to avoid it, THIS SOFTWARE MAY CONTAIN FAULTS THAT WILL AT TIMES
RESULT IN INCORRECT BEHAVIOR.  USE OF THIS SOFTWARE IS RESTRICTED TO PERSONS
AND ORGANIZATIONS WHO CAN AND WILL TOLERATE ALL LOSSES, COSTS, OR OTHER
PROBLEMS THEY INCUR DUE TO THE SOFTWARE WITHOUT RECOMPENSE FROM JOHN HAUSER OR
THE INTERNATIONAL COMPUTER SCIENCE INSTITUTE, AND WHO FURTHERMORE EFFECTIVELY
INDEMNIFY JOHN HAUSER AND THE INTERNATIONAL COMPUTER SCIENCE INSTITUTE
(possibly via similar legal notice) AGAINST ALL LOSSES, COSTS, OR OTHER
PROBLEMS INCURRED BY THEIR CUSTOMERS AND CLIENTS DUE TO THE SOFTWARE, OR
INCURRED BY ANYONE DUE TO A DERIVATIVE WORK THEY CREATE USING ANY PART OF THE
SOFTWARE.

Derivative works require also that (1) the source code for the derivative work
includes prominent notice that the work is derivative, and (2) the source code
includes prominent notice of these three paragraphs for those parts of this
code that are retained.

=============================================================================*/

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "milieu.h"
#include "softfloat.h"

int divtest() {
    int32 i3, fi3, i2, fi2, i10, ifrac, fifrac;
    float32 f3, f2, f10, ffrac, ffinal;

    i3 = 3;
    printf("i3: %ld\n", i3);
    i2 = 2;
    printf("i2: %ld\n", i2);

    f3 = int32_to_float32(i3);
    fi3 = float32_to_int32(f3);
    printf("fi3: %ld\n", fi3);
    printf("f3: %ld\n", f3);

    f2 = int32_to_float32(i2);
    fi2 = float32_to_int32(f2);
    printf("fi2: %ld\n", fi2);
    printf("f2: %ld\n", f2);

    ffrac = float32_div(f3, f2);
    fifrac = float32_to_int32(ffrac);
    printf("fifrac: %ld\n", fifrac);
    printf("ffrac: %ld\n", ffrac);

    i10 = 10;
    f10 = int32_to_float32(i10);
    ffinal = float32_mul(ffrac, f10);
    ifrac = float32_to_int32(ffinal);
    printf("%ld\n", ifrac);

    return 0;
}

int main() {
    return divtest();
}
