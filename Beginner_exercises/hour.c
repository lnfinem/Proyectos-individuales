// Asks the user for a 24-hour time, then displays the time in 12-hours form

#include <stdio.h>

int main(void)
{
	int tfhour;
int tfseconds;
int twhour;
 
        printf("Enter a 24-hour time (ex. 10:23): ");
        scanf("%d:%d", &tfhour, &tfseconds);
 
        if (tfseconds > 60 || tfseconds < 0)
            {
            printf("Not a valid seconds time!\n");
            return;
            }
         
        if (tfhour <= 12 && tfhour >= 0)
             printf("Equivalent 12-hour time: %d:%.2d AM\n", tfhour, tfseconds);
                                                                                
        else if (tfhour >= 13 && tfhour <= 24)
            {
             twhour = (tfhour - 12);
             printf("Equivalent 12-hour time: %d:%d PM\n", twhour, tfseconds);
            }
 
        else
        printf("Not a valid hour!\n");
        return;
 
}
