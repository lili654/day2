#include <cstring>
#include <iostream>
using namespace std;
int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
bool check(int date)
	{
	int year=date/10000;
	int mouth =
	(date / 100) % 100;
	int day = date % 100;
	if(mouth < 0 ||mouth > 12) return false;
	if(day == 0 || mouth != 2 && day > days [mouth]) return false;
	if(mouth == 2)
		{
		int leap=year%100 && year%4==0||year%400==0;
		if(day > days[mouth] + leap)
		return false;
		}
	return true;
	}
int main( )
{
	int date1, date2;
	cin >> date1 >> date2;
	int res = 0;
	for(int i = 1000; i < 10000; i ++)
	{
		int date=i,x=i;
		for(int j=0;j<4;j++)
		date=date*10+x%10;x/=10;
		if(date1 <= date && date <= date2 && check(date))
		res++;
	cout << res << endl ;
	return 0;
	}
}

