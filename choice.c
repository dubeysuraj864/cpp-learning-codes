#include <stdio.h>
                                                        //for length//
float km_to_miles(float kmtomiles)
{
    printf("ENTER THE DISTANCE IN KM\n");
    scanf("%f", &kmtomiles);
    return (kmtomiles * 0.621);
}
float miles_to_km(float milestokm)
{
    printf("ENTER THE DISTANCE IN MILES\n");
    scanf("%f", &milestokm);
    return (milestokm * 1.609);
}
float km_to_yard(float kmtoyard)
{
    printf("ENTER THE DISTANCE IN KM\n");
    scanf("%f", &kmtoyard);
    return (kmtoyard * 1093.613);
}
float yard_to_km(float yardtokm)
{
    printf("ENTER THE DISTANCE IN YARDS\n");
    scanf("%f", &yardtokm);
    return (yardtokm * 0.000941);
}
float inches_to_feet(float inchestofeet)
{
    printf("ENTER THE DISTANCE IN INCHES\n");
    scanf("%f", &inchestofeet);
    return (inchestofeet * 0.0833);
}
float feet_to_inches(float feettoinches)
{
    printf("ENTER THE DISTANCE IN FEET\n");
    scanf("%f", &feettoinches);
    return (feettoinches * 12.0);
}
                                                          //for weight//
float kg_to_pound(float kgtopound)
{
    printf("ENTER THE QUANTITY IN KG\n");
    scanf("%f", &kgtopound);
    return (kgtopound * 2.205);
}
float pound_to_kg(float poundtokg)
{
    printf("ENTER THE QUANTITY IN POUNDS\n");
    scanf("%f", &poundtokg);
    return (poundtokg * 0.454);
}

                                                        //for temprature//
float celcius_to_faranite(float ctof)
{
    printf("ENTER THE TEMPRATURE IN CELCIUS\n");
    scanf("%f", &ctof);
    return (ctof * 1.8 + 32 );
}
float faranite_to_celcius(float ftoc)
{
    printf("ENTER THE TEMPRATURE IN FARANITE\n");
    scanf("%f", &ftoc);
    return ((ftoc - 32) / 1.8 );
}
float celcius_to_kevlin(float ctok)
{
    printf("ENTER THE TEMPRATURE IN CELCIUS\n");
    scanf("%f", &ctok);
    return (ctok + 273 );
}
float kelvin_celcius(float ktoc)
{
    printf("ENTER THE TEMPRATURE IN KELVIN\n");
    scanf("%f", &ktoc);
    return (ktoc - 273 );
}
float faranite_to_kelvin(float ftok)
{
    printf("ENTER THE TEMPRATURE IN FARANITE\n");
    scanf("%f", &ftok);
    return ((ftok - 32) / 1.8 + 273 );
}
float kelvin_to_faranite(float ktof)
{
    printf("ENTER THE TEMPRATURE IN KELVIN\n");
    scanf("%f", &ktof);
    return ((ktof - 273) * 1.8 + 32 );
}

                                                     // for user input length//                                                   
int userinput_d_option(int option)
{
    float kmtomiles, milestokm, kmtoyard, yardtokm, inchestofeet, feettoinches;
    printf("\n");
    printf("choose the option\n1. km to miles\n2. miles to km\n3. km to yards\n4. yards to km\n5. inches to feet\n6. feet to inches\n");
    printf("\n");
    scanf("%d", &option);
    if (option == 1)
    {
        printf(" your answer is %f miles\n", km_to_miles(kmtomiles));
    }
    else if (option == 2)
    {
        printf(" your anser is %f km\n", miles_to_km(milestokm));
    }
    else if (option == 3)
    {
        printf(" your answer is %f yards\n", km_to_yard(kmtoyard));
    }
    else if (option == 4)
    {
        printf(" your answer is %f km\n", yard_to_km(yardtokm));
    }
    else if (option == 5)
    {
        printf(" your answer is %f feet\n", inches_to_feet(inchestofeet));
    }
    else if (option == 6)
    {
        printf(" your answer is %f inches\n", feet_to_inches(feettoinches));
    }
}
                                                     // for user input weight//
int userinput_w_option(int weightoption)
{
    float kgtopound, poundtokg;
    printf("\n");
    printf("choose the option\n1.kg to pounds\n2. pounds to kg\n");
    printf("\n");
    scanf("%d", &weightoption);
    if (weightoption == 1)
    {
        printf(" your answer is %f pounds\n", kg_to_pound(kgtopound));
    }
    else if (weightoption == 2)
    {
        printf(" your anser is %f kg\n", pound_to_kg(poundtokg));
    }
}                                   
                                                // for user input temprature//  
int userinput_t_option(int tempoption)
{
    float ctof, ftoc, ctok, ktoc, ftok, ktof;
    printf("\n");
    printf("choose the option\n1. celcius to faranite\n2. faranite to celcius\n3. celcius to kelvin\n4. kevin to celcius\n5. faranite to kelvin\n6. kelvin to faranite\n");
    printf("\n");
    scanf("%d", &tempoption);
    if (tempoption == 1)
    {
        printf(" your answer is %f degree faranite\n", celcius_to_faranite(ctof));
    }
    else if (tempoption == 2)
    {
        printf(" your anser is %f degree celcius\n", faranite_to_celcius(ftoc));
    }
    else if (tempoption == 3)
    {
        printf(" your answer is %f kelvin\n", celcius_to_kevlin(ctok));
    }
    else if (tempoption == 4)
    {
        printf(" your answer is %f degree celcius\n", kelvin_celcius(ktoc));
    }
    else if (tempoption == 5)
    {
        printf(" your answer is %f kelvin\n", faranite_to_kelvin(ftok));
    }
    else if (tempoption == 6)
    {
        printf(" your answer is %f degree faranite\n", kelvin_to_faranite(ktof));
    }
}
                                                        //main//                                                                                              
int main()
{
    int user_input, option, weightoption, tempoption;
    printf("WHICH OF THE UNIT CONVERSATION YOU WANT TO DO\n1. DISTANCE\n2. WEIGHT\n3. TEMPRATURE\n");
    printf("\n");
    scanf("%d", &user_input);
    if (user_input == 1)
    {
        printf("%d", userinput_d_option(option));
    }
    else if (user_input == 2)
    {
        printf("%d", userinput_w_option(weightoption));
    }
    else if (user_input == 3)
    {
        printf("%d", userinput_t_option(tempoption));
    }
    return 0;
}


