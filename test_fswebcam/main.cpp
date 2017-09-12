#include<stdio.h>
#include"fswebcam.h"
int main(){

	open_camere();
	int i;
	for(i=0;i<10;i++){

		char cmd[20]={'\0'};
		snprintf(cmd,sizeof(cmd),"%d.jpg",i);
		take_picture(cmd);
	}
	close_camera();
	return 0;
}

