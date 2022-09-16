#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
struct Race{
   int numberOfLaps;
   int currentLap;
   char firstPlaceDriverName[100];
   char firstPlaceRaceCarColor[100];
 };


struct RaceCar{
   char driverName[30];
   char raceCarColor[30];
   int  totalLapTime;
 };


void printIntro(){
   printf("Bienvenue à notre evenement principal, les fans de course numerique !J espere que tout le monde a pris son goeter car nous allons commencer ! \n");
 }
void printCountDown(){
  printf("Coureurs prets ! Dans...\n");
  for(int i=5;i>=1;i--){
    printf("%d \n",i);
  }
  printf("Course !");

}

void printFirstPlaceAfterLap(struct Race race){
  printf("Apres le tour numero : %d \n",race.numberOfLaps);
  printf("La premiere place est occuee par: %s dans la voiture de course %s !\n",race.firstPlaceDriverName,race.firstPlaceRaceCarColor);

}
void printCongratulation(struct Race race2){
  printf("Felicitons tous %s, dans la voiture de course %s, pour son incroyable performance.\n C etait vraiment une belle course et bonne nuit à tous !```",race2.firstPlaceDriverName,race2.firstPlaceRaceCarColor);
}



int calculateTimeToCompleteLap(){

  int vitesses,accelerations,nervess;
  vitesses=(rand() %3) + 1;
  accelerations=(rand() %3) + 1;
  nervess=(rand() %3) + 1;
  //printf("Vitesse1 : %d \n",vitesses);
  //printf("Acceleration1 : %d \n",accelerations);
  //printf("nerves1 : %d \n",nervess);
  return vitesses + accelerations + nervess;
}


//8
void  updateRaceCar(struct RaceCar *racecar){
   racecar->totalLapTime;
}
//9://win number one
void updateFirstPlace(struct Race *race,struct RaceCar *racecar1,struct RaceCar *racecar2){
   if(racecar1->totalLapTime<=racecar2->totalLapTime){
      strcpy(race->firstPlaceDriverName,racecar1->driverName);
      //printf("%s is win \n",race->firstPlaceDriverName);
      strcpy(race->firstPlaceRaceCarColor,racecar1->raceCarColor);

      //printf("%s",race->firstPlaceRaceCarColor);
      printf("The win is %s  And Color car: %s \n",race->firstPlaceDriverName,race->firstPlaceRaceCarColor);


   }else{
      strcpy(race->firstPlaceDriverName,racecar2->driverName);
      //race->firstPlaceDriverName=racecar2->driverName;
      strcpy(race->firstPlaceRaceCarColor,racecar2->raceCarColor);
      //race->firstPlaceRaceCarColor=racecar2->raceCarColor;
      //printf("%s",race->firstPlaceDriverName);
      //printf("%s",race->firstPlaceRaceCarColor);
      printf("The win is %s  And Color car: %s \n",race->firstPlaceDriverName,race->firstPlaceRaceCarColor);
      race->numberOfLaps=5;
      race->currentLap=1;
   }
}

//10
void startRace(struct RaceCar *racecar1,struct RaceCar *racecar2){
      int numberOfLaps=5;
      int currentLap=1;
      char firstPlaceDriverName[30];
      char firstPlaceRaceCarColor[30];
      srand(time(0));


      for(int i=0;i<numberOfLaps;i++){
        int num_rand=0;
        num_rand+=calculateTimeToCompleteLap();//number time for 1 period
        struct RaceCar racecar1={"zoro","blue",num_rand};
        struct Race race;
        int num_rand2=0;
        num_rand2+=calculateTimeToCompleteLap();//number time for 1 period
        struct RaceCar racecar2={"mugiwara","red",num_rand2};
        updateFirstPlace(&race,&racecar1,&racecar2);


      }
      //printCongratulation(&race);
}

int main(){
  srand(time(0));
  printIntro();
  printCountDown();
  //This Value For function --printFirstPlaceAfterLap
  //----------------------------------
  //int num_rand=0;
  //num_rand+=calculateTimeToCompleteLap();//number time for 1 period
  //struct RaceCar racecar1={"zoro","blue",num_rand};
  //updateRaceCar(&racecar1);
  //----------------------------------
  //int num_rand2=0;
  //num_rand2+=calculateTimeToCompleteLap();//number time for 1 period
  //struct RaceCar racecar2={"mugiwara","red",num_rand};
  //updateRaceCar(&racecar2);
    //printf("%s %s %d \n",racecar2.driverName,racecar2.raceCarColor,racecar2.totalLapTime);
    //printf("%s %s %d \n",racecar1.driverName,racecar1.raceCarColor,racecar1.totalLapTime);

  //----------------------------------

  //struct Race race;
  //updateFirstPlace(&race,&racecar1,&racecar2);
  //printFirstPlaceAfterLap(race);
  //This Value For Functio --printCongratulation
  //struct Race race2={2,2,"mugiwara","red"};
  //printCongratulation(race2);
  //printf("somme %d",calculateTimeToCompleteLap());

  //num_rand+=calculateTimeToCompleteLap();//number time for 1 period
  //struct RaceCar racecar={"zoro",'g',num_rand};
  //updateRaceCar(&racecar);
  //
int num_rand=0;
num_rand+=calculateTimeToCompleteLap();//number time for 1 period
struct RaceCar racecar1={"zoro","blue",num_rand};
updateRaceCar(&racecar1);
printf("%d",racecar1.totalLapTime);
int num_rand2=0;
num_rand2+=calculateTimeToCompleteLap();//number time for 1 period
struct RaceCar racecar2={"mugiwara","red",num_rand};
printf("%d",racecar2.totalLapTime);
updateRaceCar(&racecar2);

startRace(&racecar1,&racecar2);

//startRace(&racecar1,&racecar2);












  return 0;
}
