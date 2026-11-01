#include <stdio.h>
#include <sys/utsname.h>

int main(){
	struct utsname buffer;
	if(uname(&buffer) == 0){
		printf("%s %s %s %s %s\n", buffer.sysname, buffer.nodename, buffer.release, buffer.version, buffer.machine);
	}
	return 0;
}
