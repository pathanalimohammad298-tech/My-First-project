
#include<iostream>
using namespace std;

int main(){


char box[3][3]={

{ ' ',' ',' ' },
{ ' ',' ',' ' },
{ ' ',' ',' ' }

};


char player1='x';

char player2='o';

char curentplayer=player1;

int r=-1;
int c=-1;
char winer=' ';
for(int i=0;i<=9;i++){
    

cout<<"   |     |   "<<endl;
cout<<box[0][0]<<"  |  "<<box[0][1]<<"  |  "<<box[0][2]<<endl;
cout<<"---------------"<<endl;
cout<<"   |     |   "<<endl;
cout<<box[1][0]<<"  |  "<<box[1][1]<<"  |  "<<box[1][2]<<endl;
cout<<"   |     |   "<<endl;
cout<<"---------------"<<endl;
cout<<"   |     |   "<<endl;
cout<<box[2][0]<<"  |  "<<box[2][1]<<"  |  "<<box[2][2]<<endl;
cout<<"   |     |   "<<endl;

cout<<"The currentplayer is:"<<curentplayer<<endl;;

if(winer!=' '){

break;

}

while(true){

cout<<"Enter value of r and c:";
cin>>r>>c;


if(cin.fail()){


cout<<"Invalid input"<<endl;

cin.clear();
cin.ignore(10000, '\n');

continue;
}



if(r<0||r>2||c<0||c>2){

cout<<"Invalid input"<<endl;

}

else if(box[r][c]!=' '){

cout<<"Space is full"<<endl;

       }


else{break;

}


  }

box[r][c]=curentplayer;
curentplayer=(curentplayer==player1)?player2:player1;

      //Row 

for(int r=0;r<3;r++){

if(box[r][0]!=' ' && box[r][0]==box[r][1] && box[r][1]==box[r][2]){

winer=box[r][0];

}

break;

}

// Column


for(int c=0;c<3;c++){

if(box[0][c]!=' '&& box[0][c]==box[1][c] && box[1][c]==box[2][c]){

winer=box[0][c];

}

break;

}

if(box[r][c]!=' ' && box[0][0]==box[1][1] && box[1][1]==box[2][2]){

winer=box[0][0];

}

else if(box[r][c]!=' ' && box[0][2]==box[1][1] && box[1][1]==box[2][0]){

winer=box[0][2];

}




}

if(winer!=' '){

cout<<"The winer is:"<<winer;

}


   }
