#include <time.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

char name[100];
char input[100];
char input2[100];
char input3[100];
char Ginput[1];
int a = 3;
int length;
int fool;
void Ncity();
void Ecity();
void Wcity();
void city();
void Scity();
void draw();
void arcade();
void minigame1();
void Lose();
int key = 0;
int paper = 0;
int bank = 0;
int bath = 0;
int b;
int images;
int c;
int d = 1;
int e = 2;
bool display[100000];
bool juggle[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 1, 1, 0, 1, 1, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 1, 0, 0,
    0, 0, 1, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 1, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0,    
    
    
    
    
};
bool boy[] = {
    0, 1, 1, 1, 0, 1, 1, 1, 0,
    0, 1, 0, 1, 0, 1, 0, 1, 0,
    0, 1, 1, 1, 0, 1, 1, 1, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 1, 1, 1, 1, 1, 1, 1, 1,
    0, 0, 1, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 1, 1, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 0,
};
bool North[] = {                                            //31
  0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
  0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
  0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
  0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
  0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
  0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1,
  0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1,
  0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1,
  0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
  0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
  0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

};
bool screen1[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    
    
};
bool screen2[] = {
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    
    
};
bool screen3[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    
    
};
bool screen4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    
    
};
void p(){
  fflush(stdout);  
    sleep(a);
}

void hotel()
{
    printf("landlord : Welcome to our hotel\n\n");
    p();
    printf("landlord : You cant buy a room but feel free to explore!\n\n");
    p();
    input[0] = '0';
    while (input[0] != 'C' || input[0] != '1' || input[0] != '2' || input[0] != '3' || input[0] != 'B'){
        printf("C = to return outside, 1 = search room 1, 2 = room 2, 3 = room 3, B = go to the bathroom\n\n");
        scanf("%s", &input[0]);
        if (input[0] == 'C')
            city();
        else if (input[0] == '1')
        {
            printf("Inside the room there is a poster for a local band, but nothing else\n\n");
            p();
            input[0] = '0';
        }
    
    
        else if (input[0] == '2')
        {
            if (key != 1){
                printf("Its locked and you dont have the key\n\n");
                p();
                input[0] = '0';
            }
            else {
            printf("Inside the room you see Matt, the game developer\n\n");
            p();
            printf("Matt : Congrats on beating my game\n\n");
            p();
            printf("Matt : I hope to add more features later\n\n");
            p();
            printf("Matt : Soon there will be settings and such\n\n");
            p();
            printf("Matt : You can still wander around but there isnt much left for you to do.\n\n");
            p();
            printf("Matt : Bye, and remember, I am better at C then Omar\n\n");
            p();
            input[0] = '0';
            
            }
        
    }
    
    
    else if (input[0] == '3')
    {
        printf("Inside the room there is a man changing.\n\n");
        p();
        printf("Man : GET OUT GET OUT GET OUT!\n\n");
        p();
        printf("As you leave you here, 'I should've gotten the deluxe room with the lock\n\n");
        p();
        input[0] = '0';
    }
    
    
    else if (input[0] == 'B')
    {
        if (bath != 1)
        {
            printf("You try to open the door to the bathroom but find it's occupied.\n\n");
            p();
            printf("But as you leave you hear a man on the other side saying : \n\n");

            p();
            printf("Man : Do you have any toilet paper?\n\n");
            p();
            printf("Man : tbh i would take any kind of paper\n\n");
            p();
            if (paper != 1)
            {
                printf("Man : ah nvm, you dont have any.\n\n");
                p();
                input[0] = '0';
            }
            else
            {
                printf("you give the poor man your banknote\n\n");
                p();
                printf("Man : AHHHHH thank you......\n\n");
                p();
                printf("Man : I tried using a key to clean myself but it didnt work.\n\n");
                p();
                printf("Man : You can have it\n\n");
                p();
                key++;
                bath++;
                printf("You got a key!\n\n");
                p();
                printf("Man : dont wait on me, my butt has fused with the toilet seat.\n\n");
                p();
            }
        }
        else{
            printf("Man : im never coming out of here");
            p();
        }
        
    }
    }
}
   
void minigame1(){
    printf("UNDER CONSTRUCTION\n\n");
int r = rand () % 4;
c = 11;
if (r == 1){
printf("       ");
    for (int i = 0; i < c; i++)//HEIGHT
    {

        for (int i = 0; i < c; i++)//LENGTH
        {  
            if (screen1[b] == 0){
                printf("  ");
            }
            else
            printf("%d ", screen1[b]);
            b++;
        }  
    printf("\n       ");

    }
scanf("%s", &Ginput[0]);
if (Ginput[0] != 'w')
Lose();
}
else if (r == 2){
    
}
else if (r == 3){
    
}
else if (r == 4){
    
}
}
 void Lose(){
     
 } 
   
void arcade(){
    printf("You enter the arcade and there is a man in there.\n\n");
    p();
    printf("Man : Hello my name is Arcane\n\n");
    p();
    printf("Arcane : This is the arcade. Soon there will be many mre minigames in here\n\n");
    p();
    while (input[0] != 'S' || input[0] != '1' || input[0] != 'T' || input[0] != 'I'){
        printf("S = back outside, 1 = minigame 1 (T = text speed, I = images)");
        scanf("%s", &input[0]);
        if (input[0] == 'S')
        Scity();
        else if (input[0] == '1')
        minigame1();
        else if (input[0] == 'T'){
            printf("Insert new text speed\n\n");
            scanf("%d", &a);
            if (a == 0){
                printf("cannot be 0. going to one.\n\n");
                p();
                a = 1;
            }
            input[0] == '0';
        }
        else if (input[0] == 'I'){
            printf("Type 9 to turn off images. Type any other number to turn them on");
            scanf("%d", &images);
            
        
        }
        
        
    }
}     
void Ncity(){
    if (images != 9){
 length = sizeof(North)/sizeof(North[0]);
      for(int i = 0; i < length; i++){
          
      display[i] = North[i];
      
  }
  c = 31;
  draw();
  for(int i = 0; i < length; i++){
          
      display[i] = 1;
  }
    }
    printf("You are in the north of the city.\n\n");
    p();
    printf("You can head to the center of the city, to the east or to the west.\n\n");
    p();
    printf("NPC's : 1 : little boy with bad haircut\n\n");
    p();
    input[0] = '0';
    while (input[0] != 'W' || input[0] != 'E' || input[0] != 'C' || input[0] != '1'){
        printf(" W = west, E = east and C = center.NPC number above.(T = text speed,I = Images)\n\n");
        scanf("%s", &input[0]);
        if (input[0] == 'W')
            Wcity();

        else if (input[0] == 'E')
            Ecity();
        else if (input[0] == 'C')
            city();
        else if (input[0] == '1'){
            if (images != 9){
                length = sizeof(boy)/sizeof(boy[0]);
                for(int i = 0; i < length; i++)
                {
          
                    display[i] = boy[i];
                    c = 9;
                } 
  draw();
    }
            printf("Little Boy : Welcome to the city of glen. For now all you can do is wander, but soon there will be minigames and maybe even a story.\n\n");
            
            p();
            input[0] = '0';
        }
        else if (input[0] == 'T'){
            printf("Insert new text speed\n\n");
            scanf("%d", &a);
            if (a == 0){
                printf("cannot be 0. going to one.\n\n");
                p();
                a = 1;
            }
            input[0] == '0';
        }
        else if (input[0] == 'I'){
            printf("Type 9 to turn off images. Type any other number to turn them on");
            scanf("%d", &images);
            
        
        }
    }
    
    

    
    
}

void Ecity()
{
    printf("You are in the east of the city.\n\n");
    p();
    printf("You can head to the north, the south, or the center of the city.\n\n");
    p();
    printf("NPC's : 1 : juggling man 2 : businessman\n\n");
    p();

    while (input[0] != 'N' || input[0] != 'S' || input[0] != 'C' || input[0] != '1' || input[0] != '2'){
        printf(" N = north, S = south and C = center.NPC numbers above.(T = text speed,I = Images)\n\n");
        scanf("%s", &input[0]);
        if (input[0] == 'N')
            Ncity();
        else if (input[0] == 'S')
            Scity();
        else if (input[0] == 'C')
            city();
        else if (input[0] == '1'){
            
            printf("Juggling Man : What do termites eat for breakfast?\n\n");
            p();
            printf("Juggling Man : oakmeal. hee hee ho ho ha ha.\n\n");
            p();
            input[0] = '0';
        }
        else if (input[0] == '2')
        {
            printf("businessman : Outta my way, you troublemaker, i have important business to do.\n\n");
            p();
            input[0] = '0';    
        }
        else if (input[0] == 'T'){
            printf("Insert new text speed\n\n");
            scanf("%d", &a);
            if (a == 0){
                printf("cannot be 0. going to one.\n\n");
                a = 1;
                p();
            }
            input[0] == '0';
        }
        else if (input[0] == 'I'){
            printf("Type 9 to turn off images. Type any other number to turn them on");
            scanf("%d", &images);
    }
    }
}

void Wcity()
{
    printf("You are in the west of the city.\n\n");
    p();
    printf("You can head to the north, the south, or the center of the city.\n\n");
    p();
    printf("NPC's : 1 : city guard 2 : postman\n\n");
    p();

    while (input[0] != 'N' || input[0] != 'S' || input[0] != 'C' || input[0] != '1' || input[0] != '2'){
        printf("N = north, S = south, C = center. NPC numbers above(T = text speed,I = Images)\n\n");
        scanf("%s", &input[0]);
        if (input[0] == 'N')
            Ncity();
        else if (input[0] == 'S')
            Scity();
        else if (input[0] == 'C')
            city();
        else if (input[0] == '1'){
            printf("guard : Bright young men like you shouldnt be up at this hour.\n\n");
            p();
            input[0] = '0';
        }
        else if (input[0] == '2')
        {
        printf("postman : Huff.. Puff... must.... deliver... mail....\n\n");
        p();
        input[0] = '0';
            
        }
        else if (input[0] == 'T'){
            printf("Insert new text speed\n\n");
            scanf("%d", &a);
            if (a == 0){
                printf("cannot be 0. going to one.\n\n");
                p();
                a = 1;
            }
            input[0] == '0';
        }
        else if (input[0] == 'I'){
            printf("Type 9 to turn off images. Type any other number to turn them on");
            scanf("%d", &images);
    }
    }
}

void Scity()
{
    printf("You are in the south of the city.\n\n");
    p();
    printf("You can head to the west, the east, or the center of the city.\n\n");
    p();
    printf("NPC's : 1 : sketchy man 2 : old woman 3 : flat-earther\n\n");
    p();
    printf("Buildings : Arcade");
    p();
 
    while (input[0] != 'W' || input[0] != 'S' || input[0] != 'C' || input[0] != '1' || input[0] != '2' || input[0] != '3'){
    printf("A = Arcade, W = west, E = east, C = center. NPC numbers above(T = text speed, I = Images)\n\n");
        scanf("%s", &input[0]);
        if (input[0] == 'W')
            Wcity();
        else if (input[0] == 'E')
            Ecity();
        else if (input[0] == 'A')
            arcade();
        else if (input[0] == 'C')
            city();
        else if (input[0] == '1'){
            printf("sketchy man : hey there kid... want any CANDY?\n\n");
            p();
            printf("sketchy man : Sucks, im out\n\n");
            p();
            input[0] = '0';
        }
        else if (input[0] == '2')
        {
           printf("old woman : Back in my day, young boys like you would look up to old women like me\n\n");
           p();
            input[0] = '0';
        }
        else if (input[0] == '3'){
            printf("flat-earther : ITS ALL FAKE! DONT BELEIVE THEM! IF IT FLIES IT SPIES\n\n");
            p();
            input[0] = '0';
        }
        else if (input[0] == 'T'){
            printf("Insert new text speed\n\n");
            scanf("%d", &a);
            if (a == 0){
                printf("cannot be 0. going to one.\n\n");
                p();
                a = 1;
            }
            input[0] == '0';
        }
        else if (input[0] == 'I'){
            printf("Type 9 to turn off images. Type any other number to turn them on");
            scanf("%d", &images);
    }
    }
}

void city()
{
    printf("You are in the center of the city.\n\n");
    p();
    printf("You can head to the west, the east, the north or the south.\n\n");
    p();
    printf("NPC's : 1 : mayor 2 : construction worker 3 : janitor 4 : banker\n\n");
    p();
    printf("Building(s) : hotel\n\n");
    p();
 
    while (input[0] != 'W' || input[0] != 'S' || input[0] != 'C' || input[0] != '1' || input[0] != '2' || input[0] != '3' || input [0] != '4'|| input[0] != 'H')
    {
        printf("H = hotel, N = north, S = south, C = center. NPC numbers above(T = text speed, I = Images)\n\n");
        scanf("%s", &input[0]);
        if (input[0] == 'N')
            Ncity();
        else if (input[0] == 'H')
            hotel();
        else if (input[0] == 'S')
            Scity();
        else if (input[0] == 'C')
            city();
        else if (input[0] == '1'){
            printf("mayor : Welcome to the wonderful city of glen.\n\n");
            p();
            printf("mayor : im using this city as a money-laundering scheme.\n\n");
            p();
            input[0] = '0';
        }
        
        
        else if (input[0] == '2')
        {
            printf("construction worker : Always things to build around here\n\n");
            p();
            input[0] = '0';
        }
        
        
        else if (input[0] == '3'){
            printf("janitor : Man, you would not beleive what these guys throw away.\n\n");
            p();
            printf("janitor : Just last night i found and ate half a taco someone left on this street.\n\n");
            p();
            input[0] = '0';
        }
        else if (input[0] == 'T'){
            printf("Insert new text speed\n\n");
            scanf("%d", &a);
            if (a == 0){
                printf("cannot be 0. going to one.\n\n");
                p();
                a = 1;
            }
            input[0] == '0';
        }
        else if (input[0] == 'I'){
            printf("Type 9 to turn off images. Type any other number to turn them on");
            scanf("%d", &images);
        }
        
        
        else if (input [0] == '4')
        {
            if (bank != 1)
            {
                printf("banker : Hey there!\n\n");
                p();
                printf("banker : If you can answer my riddle you can join my bank!\n\n");
                p();
                printf("bank : What do termites eat for breakfast? (ALL LOWERCASE)\n\n");
                scanf("%s", input2);
                if (strcmp(input2, "oakmeal")==0 )
                {
                    printf("bank : WOW how did you know that?\n\n");
                    p();
                    printf("bank : Well then answer my last question...\n\n");
                    p();
                    printf("bank : How many npc's are there in this city?\n\n");
                    scanf("%s", input3);
                    if (strcmp(input3, "12")==0)
                    {
                        printf("bank : Nice job!\n\n");
                        printf("bank : Well here's a welcome gift to my bank!\n\n");
                        p();
                        printf("bank : You got a banknote!\n\n");
                        paper++;
                        bank++;
                    }
                    else
                        printf("bank : WRONG\n\n");
                }
                else
                    printf("bank : WRONG\n\n");
            }
            else{
                printf("banker : We dont have any money yet. That banknote is worthless\n\n");
                p();
            }
            input [0] = '0';
        }

    }
    
    }
  /*
if (images != 9){
 length = sizeof(North)/sizeof(North[0]);
      for(int i = 0; i < length; i++){
          
      display[i] = North[i];
      c = 31;
  }
  draw();
    }
  */
void draw(){

    
    
    printf("       ");
    for (int i = 0; i < c; i++)//HEIGHT
    {

        for (int i = 0; i < c; i++)//LENGTH
        {  
            if (display[b] == 0){
                printf("  ");
            }
            else
            printf("%d ", display[b]);
            b++;
        }  
    printf("\n       ");

    }
    length;
    c;
    for (int i = 0; i < 100000; i++){
        display[i];
    }

}

int main()
{

printf("Welcome to Matt's game.\n\n");
p();
printf("To begin choose a text speed.\n\n");
p();

printf("The higher the number, the slower the text (2, 3 or 4 recommended)\n\n");
scanf("%d", &a);
if (a <= 0){
    printf("Cannot go to 0. Going to 1\n\n");
    a = 1;
}
else if (a > 7){
    printf("Too high. Going to 7");
    a = 7;
}

p();
printf("PLEASE TYPE 9 HERE, because images are currently brokey");
p();
printf("If you want to turn off images, type 9\n\n");
scanf("%d", &images);
printf("If you ever want to change the text speed type S when in a city section\n\n");
p();
printf("If you want to turn on or off images type I when in a city section\n\n");
p();
printf("Note : If you ever spam the text, hte game will probably become laggy");
p();
printf("Excuse the crappy drawings and let the game begin!\n\n");
p();

Ncity();    
    
    return 0;
}
