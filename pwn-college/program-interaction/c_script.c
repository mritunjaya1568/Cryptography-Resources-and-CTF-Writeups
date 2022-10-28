#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>
#include<signal.h>
#include<sys/socket.h> 
#include<netdb.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <string.h>

int pwncollege()
{
	int socket_fd = socket(AF_INET, SOCK_STREAM, 0);
	if (socket_fd == -1)
	{
		printf("Couldnt create socket\n");
	}
	
	char hostbuffer[256];
	char *ip;
	int hostname;
	struct hostent *host_entry;

	hostname = gethostname(hostbuffer,sizeof(hostbuffer));
	if(hostname == -1) return 1;

	printf("%s\n",hostbuffer);

	host_entry = gethostbyname(hostbuffer);
	if (host_entry == NULL) return 2;

	// convert long ip internet address format to string format
	ip = inet_ntoa(*(struct in_addr *) host_entry->h_addr_list[0]);

	printf("Hostname is %s \n",hostbuffer);
	printf("Ip addr is %s\n",ip);

	struct sockaddr_in server;
	
	// creating elements of server which we are going to connect to
	server.sin_addr.s_addr = inet_addr(ip);
	server.sin_family = AF_INET;
	server.sin_port = htons(1714);

	if(connect(socket_fd, (struct sockaddr *)&server, sizeof(server)) < 0 )
	{
		puts("connect error");
		return 2;
	}

	puts("connected");

	char buf[1024];
	int n,val;
	int fd1 = open("sum",O_WRONLY);
	int fd2 = open("mri",O_RDONLY);

	int pid1 = fork();
	if (pid1 == 0)
	{
		while ( (n = read(socket_fd,buf,1024)) > 0 )
		{
			printf("%d\n",n);
			puts("receiving reply");

			write(fd1,&n,sizeof(int));
			
			write(fd1,buf,n);
			printf("wrote to fd1 \n");
			memset(buf,'\0',sizeof(buf));
		}
	}
	else
	{
		sleep(5);
		kill(pid1,SIGKILL);
	}

	n = 0;
	printf("Sent all bytes of 1 challenge\n");
	write(fd1,&n,sizeof(int));
	printf("Sent n = 0\n");


	if ( (n = read(fd2,buf,1024)) > 0)
		printf("%s\n",buf);


	int size = strlen(buf);
	buf[size] = '\n';

	if (write(socket_fd,buf,size+1) < 0) puts("error");

	memset(buf,'\0',sizeof(buf));
	
	printf("wrote to server\n");


	read(socket_fd, buf, 1024);
	printf("%s\n",buf);
	printf("mosi moss\n");

	return 0;
}

void main(int argc , char * argv[])
{
	pwncollege();
}
