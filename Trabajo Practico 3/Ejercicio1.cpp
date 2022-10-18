#include "iostream"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct DiscoCompacto{
	char title[20];
	char artist[20];
	int nsongs;
	double price;
	int year;
};

typedef struct DiscoCompacto CD;

using namespace std;

CD disc[3]{
{"Antezana 247","YSY A",10,546.5,2018},
{"Home Run","Paulo Londra",18,1234.5,2019},	
};

int main(){
	char sameartist[3][20];
	char artist[20];
	int count = 0;
	bool exist_sameartist=false;
	strcpy(disc[2].title,"Hecho a mano");
	strcpy(disc[2].artist,"YSY A");
	disc[2].nsongs=17;
	disc[2].price=789;
	disc[2].year=2022;
	for(int i=0;i<3;i++){
		if(strlen(disc[i].artist)>10){
			cout<<"Artista: "<<disc[i].artist<<endl;
		}
		for(int j=0;j<3;j++){
			if(i!=j){
				if(0==strcmp(disc[i].artist,disc[j].artist)){
					strcpy(sameartist[count],disc[i].title);
					strcpy(artist,disc[i].artist);
					count++;
					exist_sameartist=true;
				}
			}
		}	
	}
	if(exist_sameartist){
		printf("\nEl artista %s tiene los siguientes titulos: \n",artist);
		for(int i=0;i<count;i++){
			printf("%s\n",sameartist[i]);
		}
	}
	return 0;
}
