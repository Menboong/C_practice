#include<stdio.h>
union ip_addr {
	unsigned int addr;
	unsigned char saddr[4];
}ip;

main()
{
	ip.addr = 0x01020304;
	printf("%d %d %d %d",ip.saddr[0],ip.saddr[1],ip.saddr[2],ip.saddr[3]);
}
