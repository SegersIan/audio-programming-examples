// Calculate frequency of a MIDI Note Number

#include <stdio.h>
#include <math.h>

/* See "The Audio Programming Book - p.69" */

int main(){
    double semitone_ratio;
    double c0; /* for frequency of MIDI Note 0 */
    double c5; /* for frequency of Middle C */
    double frequency; /* ... Which we want to find */
    int midinote; /* ... given this note */

    /* Calculate required numbers */
    semitone_ratio = pow(2, 1/12.0); /* Approx 1.0594631 */

    /* Find middle C, three semitones above low A = 220 */
    c5 = 220.0 * pow(semitone_ratio, 3);

    /* MIDI Note 0 is C, 5 octiaves below middle  C */
    c0 = c5 * pow(0.5, 5);

    /* Calculate a frequency for a given MIDI Note Number */
    midinote = 73; // C# above A = 440 
    frequency = c0 * pow(semitone_ratio, midinote);

    printf("MIDI Note %d has frequency %f\n", midinote, frequency);

    return 0;
}