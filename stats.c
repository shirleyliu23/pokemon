#include <stdio.h>
#include <cs50.h>

float average(float v1, float v2);
float divide(float stat);


int main(void)
{
    // Input (max IV) values from PokemonDB.net
    float initHp = get_float("HP? ");
    float initAtk = get_float("Attack? ");
    float initDef = get_float("Defense?");
    float initSpAtk = get_float("Special attack? ");
    float initSpDef = get_float("Special defense? ");
    float initSpeed = get_float("Speed? ");
    
    // Calculate new values
    float speed = divide(initSpeed);
    float atk = divide(average(initAtk, initSpAtk));
    float def = divide(average(initDef, initSpDef));
    float hp = divide(initHp);
    
    // Print everything
    printf("HP: %.2f\n", hp);
    printf("Attack: %.2f\n", atk);
    printf("Defense: %.2f\n", def);
    printf("Speed: %.2f\n", speed);
    
    return 0;
}

// Averages for attack and defense
float average(float v1, float v2)
{
    float sum = v1 + v2;
    return sum/2;
}

// Divides by 100
float divide(float stat)
{
    return stat/100;
}