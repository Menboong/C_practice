int main()
{
	int ary[10]={95,100,88,65,76,89,58,93,77,99};
	int i,j;
	int temp;
	
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(ary[i]<ary[j])
			{
				temp=ary[i];
				ary[i]=ary[j];
				ary[j]=temp;	
			}	
		}	
	} 
	for(i=0;i<10;i++)
	{
		printf("%-5d",ary[i]);
	}
	
	return 0;
}
