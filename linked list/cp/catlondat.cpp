

int catalan(int n){
	if (n == 0 or n == 1):
		return 1;

	catalan = [0]
    for(int i=0;i<n+1;i++)
    {
	
	catalan[0] = 1;
	catalan[1] = 1;
    }

	for (int i=2;i<n+1;i++)
    {
		catalan[i] = 0
		for(int j=0;j<i;j++)
        {
            catalan[i] += catalan[j] * catalan[i-j-1]
        }
			
    }
	
	return catalan[n];
}
int main()
{

int n=100;
for(int i=0;i<n;i++)
{
printf(catalan(i));
}
return 0;
}
