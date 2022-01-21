#include <stdio.h>

int main(){
        char ch;
        char ry;
        char ty;
        int yr;
        
        do
        {
                /* code */
        
        printf("Welcome to India at Olympics\n");
        printf("Total Medals- India have 35 medals\n");
        printf("Enter G for Gold S for Silver and B for Bronze: ");
        scanf(" %c", &ch);
        printf("\n");
        // For Gold
        while (ch =='g' || ch=='G')
        {
                do
                {
                        /* code */
                
                
                printf("10 Gold Medals- Won gold medal in this year\n");
                printf("-\n");
                printf("[1928, 1932, 1936, 1948, 1952, 1956, 1964, 1980, 2008, 2020, 2021]\n");
                printf("-\n");
                printf("Enter year to genrate breif information: ");
                scanf("%d", &yr);

                if(yr==1928){
                        printf("Indian Hockey Team(Men's hockey) Amsterdam(1928) Major Dhyan Chand winning- Gold\n");
                }
                else if(yr==1932){
                        printf("Indian Hockey Team(Men's hockey) Los Angles(1932) Major Dhyan Chand winning- Gold\n");
                }
                else if(yr==1936){
                        printf("Indian Hockey Team(Men's hockey) Berlin(1936) Major Dhyan Chand winning- Gold\n");
                }
                else if(yr==1948){
                        printf("Indian Hockey Team(Men's hockey) London(1948) winning- Gold\n");

                }
                else if(yr==1952){
                        printf("Indian Hockey Team(Men's hockey) Helsinki(1952) winning- Gold\n");

                }
                else if(yr==1956){
                        printf("Indian Hockey Team(Men's hockey) Melbourne(1956) winning- Gold\n");
                }
                else if(yr==1964){ 
                        printf("Indian Hockey Team(Men's hockey) Tokyo(1964) winning- Gold\n");
                }
                else if(yr==1980){
                        printf("Indian Hockey Team(Men's hockey) Moscow(1980) winning- Gold\n");
                }
                else if(yr==2008){
                        printf("At the 2008 Beijing Olympics, shooter Abhinav Bindra became the first individual Indian athlete to win gold while at the 1932 Olympics in Los Angeles, the legendary Indian hockey team led by Major Dhyan Chand cruised to a second consecutive title with a record 24-1 win over the United States.");
                }
                else if(yr==2020 || yr ==2021){
                        printf("After 13 yaer later Neeraj chopra! gold medolist. India has broken out into celebrations after Neeraj Chopra became the first Indian to win a historic Olympic gold medal in athletics (javelin throw) at the Tokyo 2020 Olympics.\n");
                }
                else{
                        printf("No medals in this year");
                }
                
                ch++;
                printf("Do you want to again this type(y/n): ");
                scanf(" %c", &ry);
                } while (ry=='Y' || ry=='y');
        }
        // For Silver
        while (ch=='s' || ch=='S')
        {
                do{

                printf("9 Silver Medals- Won Silver medal in this year-\n");
                printf("-\n");
                printf("[1900, 1960, 2004, 2012, 2016, 2020]\n");
                printf("-\n");
                printf("Enter year to genrate breif information ");
                scanf("%d", &yr, "\n");
                printf("\n");
                if(yr==1900){
                printf("In 1900, with a lone athlete Norman Pritchard winning Two Medals – both Silver – in athletics and became the first Asian nation to win an Olympic medal.\n");
                }
                else if(yr==1960){
                printf("In Rome(1960), Indian Hockey Team winning Medal - Silver\n");
                }
                else if(yr==2004){
                printf("Athens(2004), Men double trap shooting Rajavardhan Singh Rathore winning - Silver\n");
                }
                else if(yr==2012){
                printf("London(2012), Men's 66kg wrestling Sushil Kumar winning - Silver\n");
                printf("London(2012), Men's 25m pistol shooting Vijay Kumar winning - Silver\n");
                }
                else if(yr==2016){
                printf("Rio(2016), Women Single badminton PV Sindhu winning - Silver\n");
                }
                else if(yr==2020){
                printf("Tokyo(2020) 2 Silver Medalist-\n");
                printf("\n");
                printf("Wonmen's 49kg weightlifting Mirabai Chanu winning - Silver\n");
                printf("-\n");
                printf("Men's 57kg wrestling Ravi kumar Dahiya winning - Silver\n");
                }
                else{
                printf("No medals in this year\n");
                }
                ch++;
                printf("Do you want to again this type(y/n): ");
                scanf(" %c", &ry);
                } while (ry=='Y' || ry=='y');
        }
        // For Bronze
        while (ch =='b' || ch=='B')
        {
                do{
                printf("9 Bronze Medals- Won Bronze medal in this year-\n");
                printf("-\n");
                printf("[1952, 1968, 1972, 1996, 2000, 2008, 2012, 2016, 2020]\n");
                printf("-\n");
                printf("Enter year to genrate breif information ");
                scanf("%d", &yr, "\n");
                printf("\n");
                if(yr==1952){
                printf("In helsinki(1952), Men's bantamweight wrestling KD jadhav winning- Bronze\n");
                }
                else if(yr==1968){
                printf("In Mexico City(1968), Indian Hockey Team winning Medal - Bronze\n");
                }
                else if(yr==1972){
                printf("Munich(1972), Indian Hockey Team winning - Bronze\n");
                }
                else if(yr==1996){
                printf("Atlanta(1996), Men's single tennis Leander paes - Bronze\n");
                }
                else if(yr==2000){
                printf("Sydney(2000), Women's 54kg weightlifting Karnam Malleswari - Bronze\n");
                }
                else if(yr==2008){
                printf("In Beijing(2008) 2 Bronze Medals\n");
                printf("\n");
                printf("Men's middle weight boxing Vijender - Bronze");
                printf("-\n");
                printf("Men's 66kg wrestling bejing Sushil Kumar - Bronze\n");
                }
                else if(yr==2012){
                printf("London(2012) 4 Bronze Medals,\n");
                printf("\n");
                printf("Women's singles badminton Sania Nehwal winning - Bronze\n");
                printf("-\n");
                printf("Women's Flyweight boxing Marry Kom winning - Bronze\n");
                printf("-\n");
                printf("Men's 60kg wrestling Yogeshwar Dutt winning - Bronze\n");
                printf("-\n");
                printf("Men's 10m air rifle shoooting Gagan Narang winning - Bronze\n");
                }
                else if(yr==2016){
                // printf("")
                printf("Rio(2016) Women's 58kg wrestling Sakshi Malik winning - Bronze\n");
                }
                else if(yr==2020){
                printf("In Tokoyo(2020): 4 Bronze medals-\n");
                printf("\n");
                printf("Women's welterweight boxing Lovlina Borgohain winning - Bronze\n");
                printf("-\n");
                printf("Women's Singles badminton PV Sindhu winning - Bronze\n");
                printf("-\n");
                printf("men's Hockey Indian Hockey team winning - Bronze\n");
                printf("-\n");
                printf("Men's 65kg wrestling Bajrang Punia winning - Bronze\n");
                }
                else{
                        printf("No medals in this year\n");
                }
                ch++;
                printf("Do you want to again this type(y/n): ");
                scanf(" %c", &ry);
                } while (ry=='Y' || ry=='y');
        }
        printf("Do you want to again from starting type(y/n): ");
        scanf(" %c", &ty);
        } while (ty=='Y', ty =='y');
        
        return 0;
}