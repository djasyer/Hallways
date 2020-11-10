#include <iostream>
using namespace std;

int main(){
	string hi = "You\'re in a dark, old castle. Navigate through the hallway to get out.[west, south, north, east]\n\n";
	cout << hi + "\n";
	string loc = "You\'re in : ", ent = "\n", lvl ="level : ";
	string pos = "centre hallway 1", dir, walls = "[walls]\n";
	bool win = 0, doomed = 0, havekey = 0;
	cout <<	 loc + pos + ent;
	string level = "1";
	while(win == 0){
		while(level == "1"){
	while(pos == "centre hallway 1"){
		cin >> dir;
		if(dir == "west"){
			pos = "west hallway 1";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			pos = "north hallway 1";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			pos = "east hallway 1";
			havekey = 1;
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			pos = "south hallway 1";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "west hallway 1"){
		cin >> dir;
		if(dir == "west"){
			pos = "west hallway 1";
			cout <<	 walls;
		}if(dir == "north"){
			pos = "worker\'s hostel";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			pos = "centre hallway 1";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			pos = "west staircase 1";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "north hallway 1"){
		cin >> dir;
		if(dir == "west"){
			pos = "toilet 1";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			pos = "sick bay";
			cout << loc + pos + ent;
			doomed = 1;
		}if(dir == "south"){
			pos = "centre hallway 1";
			cout <<	 loc + pos + ent;
		}
	}
		while(pos == "east hallway 1"){
		cin >> dir;
		if(dir == "west"){
			pos = "centre hallway 1";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			pos = "kitchen & cafeteria";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			pos = "east staircase 1";
			cout << loc + pos + ent;
		}
	}
	while(pos == "south hallway 1"){
		cin >> dir;
		if(dir == "west"){
			pos = "gallery";
			doomed = 1;
		}if(dir == "north"){
			pos = "centre hallway 1";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			pos = "gate";
			if(havekey == 1){
				win = 1;
			}
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	//west hallway elements
	while(pos == "worker\'s hostel"){
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
	while(pos == "west staircase 1"){
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
		if(dir == "up"){
			level = "2";
			pos = "east staircase 2";
			cout << lvl + level;
			cout << loc + pos + ent;
		}if(dir == "down"){
			pos = "east staircase 0";
			level = "0";
			cout << lvl + level;
			cout << loc + pos + ent;
		}
	}
	//north hallway elements
	while(pos == "toilet 1"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			pos = "north hallway 1";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	while(pos == "sick bay"){
		cin >> dir;
		if(dir == "west"){
			pos = "north hallway 1";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	//east hallways elements
	while(pos == "kitchen & cafeteria"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			pos = "east hallway 1";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "east staircase 1"){
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
		if(dir == "up"){
			level = "2";
			pos = "east staircase 2";
			cout << lvl + level + ent;
			cout << loc + pos + ent;
		}if(dir == "down"){
			pos = "east staircase 0";
			level = "0";
			cout << lvl + level;
			cout << loc + pos + ent;
		}
	}
	//south hallway elements
	while(pos == "gallery"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			pos = "south hallway 1";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	while(pos == "gate"){
		if(havekey == 0){
			cout << "you must find the key first to get out";
		}
		if(havekey == 1){
			cout << "You have found the key, now you succeed...";
			win = 1;
			}
		}
		cin >> dir;
		if(dir == "west"){
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			pos = walls;
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			cout <<	 "[GATE]";
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
}
/*
this pseudo-code section is for second floor
*/
	while(level == "2"){
	while(pos == "centre hallway 2"){
		cin >> dir;
		if(dir == "west"){
			pos = "west hallway 2";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			pos = "north hallway 2";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			pos = "east hallway 2";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			pos = "south hallway 2";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "west hallway 2"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			pos = "toilet 2";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			pos = "centre hallway 2";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			pos = "west staircase 2";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "north hallway 2"){
		cin >> dir;
		if(dir == "west"){
			pos = "meeting room";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			pos = "library";
			cout << loc + pos + ent;
			havekey = 1;
		}if(dir == "south"){
			pos = "centre hallway 2";
			cout <<	 loc + pos + ent;
		}
	}
		while(pos == "east hallway 2"){
		cin >> dir;
		if(dir == "west"){
			pos = "centre hallway 2";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			pos = "dining room";
		}if(dir == "east"){
			pos = "east hallway 2";
			cout <<	 walls;
		}if(dir == "south"){
			pos = "east staircase 2";
			cout << loc + pos + ent;
		}
	}
	while(pos == "south hallway 2"){
		cin >> dir;
		if(dir == "west"){
			pos = "throne";
		}if(dir == "north"){
			pos = "centre hallway 2";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			pos = "master bedroom";
			win = 1;
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	//west hallway elements
	while(pos == "toilet 2"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			pos = "north hallway 2";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			pos = "west hallway 2";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "west staircase 2"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			pos = "west hallway 2";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			cout <<	 walls;
		}
		if(dir == "up"){
			level = "2";
			pos = "west staircase attic";
			cout << lvl + level;
			cout << loc + pos + ent;
		}if(dir == "down"){
			pos = "west staircase 1";
			level = "0";
			cout << lvl + level;
			cout << loc + pos + ent;
		}
	}
	//north hallway elements
	while(pos == "meeting room"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			pos = "north hallways 2";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	while(pos == "library"){
		cin >> dir;
		if(dir == "east"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "west"){
			pos = "north hallways 2";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	//east hallway elements 2
	while(pos == "dining room"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			pos = "east hallway 2";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "east staircase 2"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			pos = "east hallway 2";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			cout <<	 walls;
		}
		if(dir == "up"){
			level = "2";
			pos = "east staircase attic";
			cout << lvl + level;
			cout << loc + pos + ent;
		}if(dir == "down"){
			pos = "east staircase 1";
			level = "0";
			cout << lvl + level;
			cout << loc + pos + ent;
		}
	}
	//south hallway elements
	while(pos == "master bedroom"){
		cin >> dir;
		if(dir == "west"){
			pos + "south hallway 2";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	while(pos == "throne"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			pos = "south hallway 2";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
}
/*
this pseudo-code section is for the basement
*/
	while(level == "0"){
	while(pos == "centre hallway 0"){
		cin >> dir;
		if(dir == "west"){
			pos = "west hallway 0";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			pos = "north hallway 0";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			pos = "east hallway 0";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			pos = "south hallway 0";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "west hallway 0"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			pos = "dungeon 1";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			pos = "centre hallway 0";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			pos = "west staircase 0";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "north hallway 0"){
		cin >> dir;
		if(dir == "west"){
			pos = "dungeon 2";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			pos = "dungeon 3";
			cout << loc + pos + ent;
			doomed = 1;
		}if(dir == "south"){
			pos = "centre hallway 0";
			cout <<	 loc + pos + ent;
		}
	}
		while(pos == "east hallway 0"){
		cin >> dir;
		if(dir == "west"){
			pos = "centre hallway 0";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			pos = "dungeon 4";
		}if(dir == "east"){
			pos = "east hallway 0";
			cout <<	 walls;
		}if(dir == "south"){
			pos = "east staircase 0";
			cout << loc + pos + ent;
		}
	}
	while(pos == "south hallway 0"){
		cin >> dir;
		if(dir == "west"){
			pos = "store";
			doomed = 1;
		}if(dir == "north"){
			pos = "centre hallway 0";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			pos = "execution room";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	//west hallway elements
	while(pos == "dungeon 1"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			pos = "west hallway 0";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "west staircase 0"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			pos = "west hallway 0";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			cout <<	 walls;
		}
		if(dir == "up"){
			level = "1";
			pos = "west staircase 1";
			cout << lvl + level;
			cout << loc + pos + ent;
		}if(dir == "down"){
			cout << "down enough\n";
			level = "0";
			cout << lvl + level;
			cout << loc + pos + ent;
		}
	}
	//north hallway elements
	while(pos == "dungeon 2"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			pos = "north hallways 0";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	while(pos == "dungeon 3"){
		cin >> dir;
		if(dir == "east"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "west"){
			pos = "north hallways 0";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	//east hallway elements 2
	while(pos == "dungeon 4"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			pos = "east hallway 2";
			cout <<	 loc + pos + ent;
		}
	}
	while(pos == "east staircase 0"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			pos = "west hallway 0";
			cout <<	 loc + pos + ent;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			cout <<	 walls;
		}
		if(dir == "up"){
			level = "2";
			pos = "east staircase 1";
			cout << lvl + level;
			cout << loc + pos + ent;
		}if(dir == "down"){
			cout << "down enough\n";
			level = "0";
			cout << lvl + level;
			cout << loc + pos + ent;
		}
	}
	//south hallway elements
	while(pos == "store"){
		cin >> dir;
		if(dir == "west"){
			pos + "south hallway 0";
			cout <<	 loc + pos + ent;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			cout <<	 walls;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
	while(pos == "execution room"){
		cin >> dir;
		if(dir == "west"){
			cout <<	 walls;
		}if(dir == "north"){
			cout <<	 walls;
		}if(dir == "east"){
			pos = "south hallway 0";
			cout <<	 loc + pos + ent;
		}if(dir == "south"){
			cout <<	 walls;
		}
	}
}
	if(doomed == 1){
		cout <<	 "ha kalah padan muke";
	}
	if(win == 1){
		cout <<	 "Gratulere! you\'ve managed to go out!";
	}
	return 0;
}
