#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
//---------------------------------------------colors
#define RESET               "\x1b[0m"

#define BLACK        "\x1b[30m"
#define RED          "\x1b[31m"
#define GREEN        "\x1b[32m"
#define YELLOW       "\x1b[33m"
#define ACOLOR_BLUE         "\x1b[34m"
#define MAGENTA      "\x1b[35m"
#define CYAN         "\x1b[36m"
#define WHITE        "\x1b[37m"

#define B_BLACK   "\x1b[40m"
#define B_RED     "\x1b[41m"
#define B_GREEN   "\x1b[42m"
#define B_YELLOW  "\x1b[43m"
#define B_BLUE    "\x1b[44m"
#define B_MAGENTA "\x1b[45m"
#define B_CYAN    "\x1b[46m"
#define B_WHITE   "\x1b[47m"

#define BOLD         "\x1b[1m"
#define ITALIC       "\x1b[3m"
#define UNDERLINE    "\x1b[4m"
//system("cls");

//---------------------------------------------------------------------------------------------------------- 0- Menu
int menu(int n){
    printf(BOLD"Enter options 0 through 3:"RESET"\n");
    printf("["UNDERLINE ITALIC BOLD GREEN"1"RESET"] for "ITALIC BOLD GREEN"Calendar"RESET"\n");
    printf("["UNDERLINE ITALIC BOLD CYAN"2"RESET"] for "ITALIC BOLD CYAN"Conversion"RESET"\n");
    printf("["UNDERLINE ITALIC BOLD YELLOW"3"RESET"] for "ITALIC BOLD YELLOW"Age Calculation"RESET"\n");
    printf("["UNDERLINE ITALIC BOLD MAGENTA"4"RESET"] for "ITALIC BOLD MAGENTA"Age diff"RESET"\n");
    printf("["UNDERLINE RED BOLD "0"RESET"] to "BOLD ITALIC RED"Quit"RESET"\n");
    printf(BOLD UNDERLINE"Enter option:"RESET);
    scanf("%d",&n);
    system("cls");
    if(n==0){
        printf(ITALIC BOLD"Bye!"RESET);
        return 0;
    }
    else if(n==1){
        return calendar(n);
    }
    else if(n==2){
        return conversion(n);
    }
    else if(n==3){
        return age(n);
    }
    else if(n==4){
        return diff(n);
    }
    else{
        printf(BOLD RED"Invalid input try again"RESET"\n==> ");
        return menu(10);
    }
}

//---------------------------------------------------------------------------------------------------------- 1- Calendar (green)
int calendar(int n){
    int year,month;
    printf("Enter ["UNDERLINE RED BOLD "0"RESET"] to go back to the"BOLD RED" Menu"RESET" or\n");
    printf(BOLD UNDERLINE"Enter year:"RESET);
    scanf("%d",&year);
    if(year==0){
        system("cls");
        return menu(n);
    }
    printf(BOLD UNDERLINE"Enter month:"RESET);
    scanf("%d",&month);
    if(month==0){
        system("cls");
        return menu(n);
    }
    system("cls");
    return cal(year,month,n);
}
//===========
int cal(int year,int month, int n){

















}

//---------------------------------------------------------------------------------------------------------- 2- Conversion (blue)
int conversion(int n){
    int year,month,day;
    if(n!=-1){printf(B_CYAN ITALIC BOLD"\tConversion"RESET"\n\n");
    n=2;}
    printf("Enter ["UNDERLINE RED BOLD "0"RESET"] to go back to the"BOLD RED" Menu"RESET" or\n");
    printf("Enter ["BOLD ITALIC UNDERLINE CYAN"1"RESET"] for"BOLD ITALIC CYAN" Shamsi to Miladi"RESET" or ["BOLD ITALIC UNDERLINE CYAN"2"RESET"] for"BOLD ITALIC CYAN" Miladi to Shamsi"RESET" conversion: ");
    int a;
    scanf("%d",&a);
    system("cls");
    if(a==1){
        printf(BOLD UNDERLINE"Enter year:"RESET);
        scanf("%d",&year);
        if(year==0){
           system("cls");
           return menu(n);
        }
        if(year<1260 || year>1500){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return conversion(2);
        }
        printf(BOLD UNDERLINE"Enter month:"RESET);
        scanf("%d",&month);
        if(month==0){
           system("cls");
           return menu(n);
        }
        if(month<=0 || month>12){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return conversion(2);
        }
        printf(BOLD UNDERLINE"Enter day:"RESET);
        scanf("%d",&day);
        if(day==0){
           system("cls");
           return menu(n);
        }
        if(day<=0 || day>31){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return conversion(2);
        }
        system("cls");
    
        day=day+20;
        if(day>30){
            month+=1;
            day-=30;
        }
        month=month+2;
        if(month>12){
            year+=1;
            month-=12;
        }
        year=year+621;
        printf("date in Miladi: year="BOLD UNDERLINE ITALIC CYAN"%d"RESET" month="BOLD ITALIC CYAN"%d"RESET" day="BOLD ITALIC CYAN"%d"RESET"\n",year,month,day);
        printf("--------------------------------------------------------------------------\n");
        n=-1;
        return conversion(n);
    }
    else if(a==2){
        printf(BOLD UNDERLINE"Enter year:"RESET);
        scanf("%d",&year);
        if(year==0){
           system("cls");
           return menu(n);
        }
        if(year<1880 || year>2122){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return conversion(2);
        }
        printf(BOLD UNDERLINE"Enter month:"RESET);
        scanf("%d",&month);
        if(month==0){
           system("cls");
           return menu(n);
        }
        if(month<=0 || month>12){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return conversion(2);
        }
        printf(BOLD UNDERLINE"Enter day:"RESET);
        scanf("%d",&day);
        if(day==0){
           system("cls");
           return menu(n);
        }
        if(day<=0 || day>31){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return conversion(2);
        }
        system("cls");

        day=day-20;
        if(day<0){
            day+=30;
            month-=1;
        }
        month=month-2;
        if(month<0){
            month+=12;
            year-=1;
        }
        year=year-621;
        printf("date in Miladi: year="BOLD ITALIC UNDERLINE CYAN"%d"RESET" month="BOLD ITALIC CYAN"%d"RESET" day="BOLD ITALIC CYAN"%d"RESET"\n",year,month,day);
        printf("--------------------------------------------------------------------------\n");
        return conversion(n);
    }
    else if(a==0){
        system("cls");
        return menu(n);
    }
    else {
        system("cls");
        printf(BOLD RED"Invalid input try again"RESET"\n==> ");
        n=-1;
        return conversion(n);

    }

}


//---------------------------------------------------------------------------------------------------------- 3- Age calculation (yellow)
int age(int n){
    int year,month,day;
    printf(B_YELLOW ITALIC BOLD"\tAge Calculation"RESET"\n\n");
    printf("Enter ["UNDERLINE BOLD RED "0"RESET"] to go back to the"BOLD RED" Menu"RESET" or\n");
    printf(BOLD UNDERLINE"Enter birth year:"RESET);
    scanf("%d",&year);
    if(year==0){
        system("cls");
        return menu(n);
    }
    if(year<1260 || year>1500){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return age(2);
    }
    printf(BOLD UNDERLINE"Enter birth month:"RESET);
    scanf("%d",&month);
    if(month==0){
        system("cls");
        return menu(n);
    }
    if(month<=0 || month>12){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return age(2);
    }
    printf(BOLD UNDERLINE"Enter birth day:"RESET);
    scanf("%d",&day);
    if(day==0){
        system("cls");
        return menu(n);
    }
    if(day<=0 || day>31){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return age(2);
    }
    system("cls");
    return age2(year,month,day,n);
}
//==========
int age2(int year,int month,int day,int n){
int d=0,m=0,y=0;
d+=7-day;
int d1=d;
if(d<0){
    m+=-1;
    d=30+d;
    d1=d;
}
m+=11-month;
if(m<0){
    y+=-1;
}
y+=1402-year;
printf("your age is"BOLD ITALIC YELLOW" %d"RESET" year(s) , "BOLD ITALIC YELLOW"%d"RESET" month(s) and"BOLD ITALIC YELLOW" %d"RESET" day(s) ",y,m,d);
d1=d+(y*365.242189)+(m*30);
printf("or you are"BOLD ITALIC YELLOW" %d "RESET"days old\n",d1);
d1=((year-1206-1)*365.242189)+day+(m*30);
d1=(d1%7);
if(d1==0){
    printf("and born on "BOLD ITALIC YELLOW"thursday"RESET".\n");
}
else if(d1==1){
    printf("and born on "BOLD ITALIC YELLOW"friday"RESET".\n");
}
else if(d1==2){
    printf("and born on "BOLD ITALIC YELLOW"saturday"RESET".\n");
}
else if(d1==3){
    printf("and born on "BOLD ITALIC YELLOW"sunday"RESET".\n");
}
else if(d1==4){
    printf("and born on "BOLD ITALIC YELLOW"mondday"RESET".\n");
}
else if(d1==5){
    printf("and born on "BOLD ITALIC YELLOW"tuesday"RESET".\n");
}
else if(d1==6){
    printf("and born on "BOLD ITALIC YELLOW"wednsday"RESET".\n");
}

printf("--------------------------------------------------------------------------\n");
printf("Enter ["UNDERLINE BOLD RED"0"RESET"] to go back to the"BOLD RED" Menu"RESET" or\n");
printf(BOLD UNDERLINE"Enter birth year:"RESET);
    scanf("%d",&year);
    if(year==0){
        system("cls");
        return menu(n);
    }
    printf(BOLD UNDERLINE"Enter birth month:"RESET);
    scanf("%d",&month);
    if(month==0){
        system("cls");
        return menu(n);
    }
    printf(BOLD UNDERLINE"Enter birth day:"RESET);
    scanf("%d",&day);
    if(day==0){
        system("cls");
        return menu(n);
    }
    system("cls");
    return age2(year,month,day,n);
}
//------------------------------------------------------------------------------------------------------ 4-age dif
    int diff(int n){
    int year,year2,month,month2,day,day2;
    printf(B_MAGENTA ITALIC BOLD"\tDiff"RESET"\n\n");
    printf("Enter ["UNDERLINE BOLD RED "0"RESET"] to go back to the"BOLD RED" Menu"RESET" or\n");
    printf(BOLD UNDERLINE"Enter 1st birth year:"RESET);
    scanf("%d",&year);
    if(year==0){
        system("cls");
        return menu(n);
    }
    if(year<1260 || year>1500){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return diff(4);
    }
    printf(BOLD UNDERLINE"Enter 1st birth month:"RESET);
    scanf("%d",&month);
    if(month==0){
        system("cls");
        return menu(n);
    }
    if(month<=0 || month>12){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return diff(4);
    }
    printf(BOLD UNDERLINE"Enter 1st birth day:"RESET);
    scanf("%d",&day);
    if(day==0){
        system("cls");
        return menu(n);
    }
    if(day<=0 || day>31){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return diff(4);
    }
    printf(BOLD UNDERLINE"Enter 2nd birth year:"RESET);
    scanf("%d",&year2);
    if(year2==0){
        system("cls");
        return menu(n);
    }
    if(year2<1260 || year2>1500){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return diff(4);
    }
    printf(BOLD UNDERLINE"Enter 2nd birth month:"RESET);
    scanf("%d",&month2);
    if(month2==0){
        system("cls");
        return menu(n);
    }
    if(month2<=0 || month2>12){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return diff(4);
    }
    printf(BOLD UNDERLINE"Enter 2nd birth day:"RESET);
    scanf("%d",&day2);
    if(day2==0){
        system("cls");
        return menu(n);
    }
    if(day2<=0 || day>31){
            system("cls");
            printf(BOLD RED"Invalid input try again"RESET"\n");
            return diff(4);
    }
    system("cls");
    if(year2>year){
        year=year2-year;
        day=day2-day;
        month=month2-month;
        if(day>0){
            month+=1;
        }
        else{
            day*=-1;
        }
        if(month>0){
            year+=1;
        }
        else{
            month*=-1;
        }
    }
    else if(year>year2){
        year=year-year2;
        day=day-day2;
        month=month-month2;
        if(day>0){
            month+=1;
        }
        else{
            day*=-1;
        }
        if(month>0){
            year+=1;
        }
        else{
            month*=-1;
        }
        
    }else{
        year=0;
        day=day-day2;
        month=month-month2;
        if(day>0){
            month+=1;
        }
        else{
            day*=-1;
            month-=1;
        }
        if(month<0){
            month*=-1;
        }
        
    }
    printf("Age diffrence is"BOLD MAGENTA" %d"RESET" year, "BOLD MAGENTA"%d"RESET" month, "BOLD MAGENTA"%d"RESET" day\n",year,month,day);
    printf("--------------------------------------------------------------------------\n");
    return diff(4);

    

}
//------------------------------------------------ Main
int main(){
    int n=10;
    int output=menu(n);
    return 0;
}