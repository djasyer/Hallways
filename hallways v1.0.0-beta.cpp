#include <iostream>
using namespace std;

int main(){
	string hi = "You\'re in a dark, old castle. Navigate through the hallway to get out.[west, south, north, east]\n\n";
	cout << hi + "\n";
	string loc = "You\'re in :", ent = "\n";
	string pos = "centre hallway", dir, walls = "[walls]\n";
	bool win = 0, doomed = 0;
	cout <<	 loc + pos + ent;
	while(win == 0){
	while(pos == "centre hallway"){
		cin >> dir;
		if(dir == "west"){
			pos = "west hallway";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			pos = "north hallway";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			pos = "east hallway";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			pos = "south hallway";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "west hallway"){
		cin >> dir;
		if(dir == "west"){
			pos = "west hallway";
			cout <<	 walls;
		}if(dir == "north"){
			pos = "throne";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			pos = "centre hallway";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			pos = "dining room";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "north hallway"){
		cin >> dir;
		if(dir == "west"){
			pos = "execution room";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			pos = "toilet";
			cout << loc + pos + ent;
			doomed = 1;
		}if(dir == "south"){
			pos = "centre hallway";
			cout <<	 loc + pos + ent;
		}
	}
		while(pos == "east hallway"){
		cin >> dir;
		if(dir == "west"){
			pos = "centre hallway";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			pos = "gate";
			win = 1;
		}if(dir == "east"){
			pos = "east hallway";
			cout <<	 walls;
		}if(dir == "south"){
			pos = "sick bay";
			cout << loc + pos + ent;
			doomed = 1;
		}
	}
	while(pos == "south hallway"){
		cin >> dir;
		if(dir == "west"){
			pos = "worker\'s hostel";
			doomed = 1;
		}if(dir == "north"){
			pos = "centre hallway";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			pos = "kitchen";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	//west hallway elements
	while(pos == "throne"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			pos = "west hallway";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "dining room"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			pos = "west hallway";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	//north hallway elements
	while(pos == "execution room"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			pos = "north hallways";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	//south hallway elements
	while(pos == "dining room"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			pos = "west hallway";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	if(doomed == 1){
		cout <<	 "ha kalah padan muke";
		break;
	}
	if(win == 1){
		cout <<	 "Gratulere! you\'ve managed to go out!";
		break;
	}
	}
	return 0;
}
