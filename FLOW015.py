t=int(input())
list = ['sunday','monday','tuesday','wednesday','thursday','friday','saturday']
for i in range(t):
    year=int(input())
    #now process the year
    if(year<2001):
        #calculate the number of days
        #calc how many leap years come in between
        days=0
        if abs(year-2000)>400:
            count=abs(year-2000)//400
            days+=count*((303*365)+(93*366))
            remaining=2000-(400*count)
            for k in range(remaining,year,-1):
                if(k%4==0 and k%100!=0 or k%400==0):
                    days-=366
                else:
                    days-=365
            if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0):
                days -= 365
            else:
                days -= 364
        else:
            remaining=2000
            for k in range(remaining, year, -1):
                if (k % 4 == 0 and k % 100 != 0 or k % 400 == 0):
                    #print(k)
                    days -= 366
                else:
                    days -= 365
            if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0):
                days -= 365
            else:
                days -= 364
        #print(days)
        print(list[days%7])

    else:
        # calc how many leap years come in between
        days = 0
        remaining = 2001
        for k in range(remaining, year):
            if (k % 4 == 0 and k % 100 != 0 or k % 400 == 0):
                #print(k)
                days += 366
            else:
                days += 365

        # print(days)
        days+=1
        print(list[(days % 7)])
