/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include <time.h>
const AfstandMellemDioder = 5;
const MultiplikationsFaktor = 100/AfstandMellemDioder;

void delay(int AntalSekunder)
{
    int AffyringsDelay = 3000*AntalSekunder;
    
    clock_t StartTidsMaaling = clock();
    
    while(clock() < StartTidsMaaling + AffyringsDelay)
    {
        ;
    }
    AffyrKlar=1;
    
}
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    StartInterrupt(HastighedsMaaling);
    {
        if (HastighedsMaalingStart == 1)
        {
            StartTimer();
        }
        if (HastighedsMaalingSlut == 1)
        {
            StopTimer();
        }
        HastighedsMaaling = TimerValue*MultiplikationsFaktor;
    }
    
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
