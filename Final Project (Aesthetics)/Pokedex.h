#ifndef POKEDEX_H
#define POKEDEX_H

#include "header.hpp"

class Pokedex{
	public:
		void login(){
			int i, admin=0, normal=0, task1=0, task2=0;
			string user, pass;
			
			setcolor(10); 
			cout<<endl<<"\t\t\t                                  ,'\\ ";
			cout<<endl<<"\t\t\t    _.----.        ____         ,'  _\\   ___    ___     ____";
			cout<<endl<<"\t\t\t_,-'       `.     |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`.";
			cout<<endl<<"\t\t\t\\      __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  |";
			cout<<endl<<"\t\t\t \\.    \\ \\   |  __  |  |/    ,','_  `.  |          | __  |    \\|  |";
			cout<<endl<<"\t\t\t   \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  |";
			setcolor(14);
			cout<<endl<<"\t\t\t    \\     ,-'/  /   \\    ,'   | \\/ / ,`.|         /  /   \\  |     |";
			cout<<endl<<"\t\t\t     \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  | |\\    |";
			cout<<endl<<"\t\t\t      \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   |";
			cout<<endl<<"\t\t\t       \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   |";
			cout<<endl<<"\t\t\t        \\_.-'       |__|    `-._ |              '-.|     '-.| |   |";
			cout<<endl<<"\t\t\t                               `'                            '-._|";
			cout<<endl<<endl<<endl;

			setcolor(10);
			cout<<"\t\t\t\t\t\t Username: ";
			user = trap.noBlank();
			user = to_lower(user);
			setcolor(14);
			cout<<"\t\t\t\t\t\t Password: ";
			pass = trap.noBlank();
			
			for(i=0;i<masters;i++){
				if(pokemonMaster[i].checkCredentials(user, pass)){
					admin=1;
					break;
				}
			}
			
			/*CHECK IF USER IS MASTER OR TRAINER*/
			if(admin==1){
				system("cls");
				sleep(1);
				setcolor(14);
				cout<<endl<<"\t\t\tW E L C O M E !";
				
				setcolor(13);		
				cout<<endl<<endl<<"\t\t\t                                           /";
				cout<<endl<<"\t\t\t                        _,.------....___,.' ',.-.";
				cout<<endl<<"\t\t\t                     ,-'          _,.--\"        |";
				cout<<endl<<"\t\t\t                   ,'         _.-'              .";
				cout<<endl<<"\t\t\t                  /   ,     ,'                   `";
				cout<<endl<<"\t\t\t                 .   /     /                     ``.";
				cout<<endl<<"\t\t\t                 |  |     .                       \\.\\";
				setcolor(10);
				cout<<endl<<"\t\t\t       ____      |___._.  |       __               \ `.";
				cout<<endl<<"\t\t\t     .'    `---""       ``\\\"-.--\"'`  \\               .  \\";
				cout<<endl<<"\t\t\t    .  ,            __               `              |   .";
				cout<<endl<<"\t\t\t    `,'         ,-\"'  .               \\             |    L";
				cout<<endl<<"\t\t\t   ,'          '    _.'                -._          /    |";
				cout<<endl<<"\t\t\t  ,`-.    ,\".   `--'                      >.      ,'     |";
				cout<<endl<<"\t\t\t ||:, .           ,'  ;  /  / \ `        `.    .      .'/";
				cout<<endl<<"\t\t\t j|:D  \          `--'  ' ,'_  . .         `.__, \   , /";
				cout<<endl<<"\t\t\t / L:_  |                 .  \"' :_;                `.'.'";
				cout<<endl<<"\t\t\t.    ""'                  """"\"'                    V";
				cout<<endl<<"\t\t\t `.                                 .    `.   _,..  `";
				cout<<endl<<"\t\t\t   `,_   .    .                _,-'/    .. `,'   __  `";
				cout<<endl<<"\t\t\t    ) \`._        ___....----\"'  ,'   .'  \ |   '  \  .";
				cout<<endl<<"\t\t\t   /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |";
				cout<<endl<<"\t\t\t  .   _  `""'--.._____..--\"   ,             '         |";
				cout<<endl<<"\t\t\t  | .\" `. `-.                /-.           /          ,";
				cout<<endl<<"\t\t\t  | `._.'    `,_            ;  /         ,'          .";
				cout<<endl<<"\t\t\t .'          /| `-.        . ,'         ,           ,";
				cout<<endl<<"\t\t\t .'          /| `-.        . ,'         ,           ,";
				cout<<endl<<"\t\t\t `\"^--'..'   '-`-^-'\"--    `-^-'`.''""""\"`.,^.`.--'";
				cout<<endl<<endl<<endl;

				setcolor(14);
				cout<<". . .";
				sleep(1);
				setcolor(13);
				cout<<endl<<". . . . . .";
				sleep(1);
				setcolor(14);
				cout<<endl<<". . . . . . . . . ";
				setcolor(13);
				cout<<"R E A D Y ?";
				sleep(2);
				
				system("cls");
				task1 = pokemonMaster[i].menu(masters,trainers,pokemons);
			}
			else{
				for(i=0;i<trainers;i++){
					if(pokemonTrainer[i].checkCredentials(user, pass)){
						normal=1;
						break;
					}
				}
				if(normal==1){
					system("cls");
					task2 = pokemonTrainer[i].menu();
				}
				else{
					setcolor(10);
					cout<<endl<<endl<<"\t\t\t invalid credentials press any key to return";
					getch();
					return;
				}
			}
			
			/*DO WHAT THE TRAINER OR MASTER WANTS TO DO*/
			if(task1>0){
				tasks1(task1, i);
			}
			else if(task2>0){
				tasks2(task2, i);
			}
		}
		void update(){
			int line=0, id=0, idBig=0;
			
			/*UPDATE STATIC DATA*/
			masters = masDB.count_no_masters();
			trainers = traDB.count_no_trainers();
			pokemons = pokDB.count_no_pokemon();
			
			/*UPDATE MASTERS*/
			for(int i=0;i<masters;i++){
				line = pokemonMaster[i].update(line);
			} line=0;
			
			/*UPDATE TRAINERS*/
			for(int i=0;i<trainers;i++){
				line = pokemonTrainer[i].update(line);
			}line=0;
			
			/*UPDATE POKEMON*/
			for(int i=0;i<pokemons;i++){
				line = pokemon[i].update(line);
			}
			
			/*GET LATEST ID NUMBER*/			
			latest_id = idDB.getID();
		}
	//---------------------------------------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------------------------------------
	
	private:
		int accounts, masters, trainers, latest_id, pokemons;
		
		PokemonMaster pokemonMaster[16];
		PokemonTrainer pokemonTrainer[16];
		Pokemon pokemon[152];
		
		/*TASKS FOR POKEDEX TASKS FOR POKEDEX TASKS FOR POKEDEX TASKS FOR POKEDEX TASKS FOR POKEDEX TASKS FOR POKEDEX TASKS FOR POKEDEX */
		//TASKS FOR MASTERS
		void tasks1(int task, int account){					
			do{
				if(task==1){
					setcolor(9); 
					cout<<endl<<"\t\t\t\t\t\t                                  ,'\\ ";
					cout<<endl<<"\t\t\t\t\t\t    _.----.        ____         ,'  _\\   ___    ___     ____";
					cout<<endl<<"\t\t\t\t\t\t_,-'       `.     |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`.";
					cout<<endl<<"\t\t\t\t\t\t\\      __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  |";
					cout<<endl<<"\t\t\t\t\t\t \\.    \\ \\   |  __  |  |/    ,','_  `.  |          | __  |    \\|  |";
					cout<<endl<<"\t\t\t\t\t\t   \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  |";
					setcolor(12);
					cout<<endl<<"\t\t\t\t\t\t    \\     ,-'/  /   \\    ,'   | \\/ / ,`.|         /  /   \\  |     |";
					cout<<endl<<"\t\t\t\t\t\t     \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  | |\\    |";
					cout<<endl<<"\t\t\t\t\t\t      \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   |";
					cout<<endl<<"\t\t\t\t\t\t       \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   |";
					cout<<endl<<"\t\t\t\t\t\t        \\_.-'       |__|    `-._ |              '-.|     '-.| |   |";
					cout<<endl<<"\t\t\t\t\t\t                               `'                            '-._|";
					cout<<endl<<endl<<endl;
					setcolor(14);
					cout<<endl<<"\t\t\t\t\t\t Create master";
					createMaster();
				}
				else if(task==2){
					setcolor(12); 
					cout<<endl<<"\t\t\t\t\t\t                                  ,'\\ ";
					cout<<endl<<"\t\t\t\t\t\t    _.----.        ____         ,'  _\\   ___    ___     ____";
					cout<<endl<<"\t\t\t\t\t\t_,-'       `.     |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`.";
					cout<<endl<<"\t\t\t\t\t\t\\      __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  |";
					cout<<endl<<"\t\t\t\t\t\t \\.    \\ \\   |  __  |  |/    ,','_  `.  |          | __  |    \\|  |";
					cout<<endl<<"\t\t\t\t\t\t   \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  |";
					setcolor(9);
					cout<<endl<<"\t\t\t\t\t\t    \\     ,-'/  /   \\    ,'   | \\/ / ,`.|         /  /   \\  |     |";
					cout<<endl<<"\t\t\t\t\t\t     \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  | |\\    |";
					cout<<endl<<"\t\t\t\t\t\t      \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   |";
					cout<<endl<<"\t\t\t\t\t\t       \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   |";
					cout<<endl<<"\t\t\t\t\t\t        \\_.-'       |__|    `-._ |              '-.|     '-.| |   |";
					cout<<endl<<"\t\t\t\t\t\t                               `'                            '-._|";
					cout<<endl<<endl<<endl;
					setcolor(14);
					cout<<endl<<"\t\t\t\t\t\t Create trainer";
					createTrainer();
				}
				else if(task==3){
					setcolor(12); 
					cout<<endl<<"\t\t\t\t\t\t                                  ,'\\ ";
					cout<<endl<<"\t\t\t\t\t\t    _.----.        ____         ,'  _\\   ___    ___     ____";
					cout<<endl<<"\t\t\t\t\t\t_,-'       `.     |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`.";
					cout<<endl<<"\t\t\t\t\t\t\\      __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  |";
					cout<<endl<<"\t\t\t\t\t\t \\.    \\ \\   |  __  |  |/    ,','_  `.  |          | __  |    \\|  |";
					cout<<endl<<"\t\t\t\t\t\t   \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  |";
					setcolor(9);
					cout<<endl<<"\t\t\t\t\t\t    \\     ,-'/  /   \\    ,'   | \\/ / ,`.|         /  /   \\  |     |";
					cout<<endl<<"\t\t\t\t\t\t     \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  | |\\    |";
					cout<<endl<<"\t\t\t\t\t\t      \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   |";
					cout<<endl<<"\t\t\t\t\t\t      \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   |";
					cout<<endl<<"\t\t\t\t\t\t        \\_.-'       |__|    `-._ |              '-.|     '-.| |   |";
					cout<<endl<<"\t\t\t\t\t\t                               `'                            '-._|";
					cout<<endl<<endl<<endl;

					setcolor(12);
					cout<<endl<<"\t\t\t\t\t\t  Delete user"<<endl;
					deleteUser(account, task);
				}
				else if(task==5){
					displayAll();
				}
				else if(task==6){
					setcolor(14); 
					cout<<endl<<"\t\t\t\t\t\t                                  ,'\\ ";
					cout<<endl<<"\t\t\t\t\t\t    _.----.        ____         ,'  _\\   ___    ___     ____";
					cout<<endl<<"\t\t\t\t\t\t_,-'       `.     |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`.";
					cout<<endl<<"\t\t\t\t\t\t\\      __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  |";
					setcolor(9);
					cout<<endl<<"\t\t\t\t\t\t \\.    \\ \\   |  __  |  |/    ,','_  `.  |          | __  |    \\|  |";
					cout<<endl<<"\t\t\t\t\t\t   \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  |";
					cout<<endl<<"\t\t\t\t\t\t    \\     ,-'/  /   \\    ,'   | \\/ / ,`.|         /  /   \\  |     |";
					cout<<endl<<"\t\t\t\t\t\t     \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  | |\\    |";
					cout<<endl<<"\t\t\t\t\t\t      \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   |";
					setcolor(14);
					cout<<endl<<"\t\t\t\t\t\t       \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   |";
					cout<<endl<<"\t\t\t\t\t\t        \\_.-'       |__|    `-._ |              '-.|     '-.| |   |";
					cout<<endl<<"\t\t\t\t\t\t                               `'                            '-._|";
					cout<<endl<<endl<<endl;
					
					setcolor(9);
					cout<<endl<<"\t\t\t\t\t\t Catch a pokemon"<<endl;
					catchPokemon(account, 1);
				}
				else if(task==7){
					setcolor(9); 
					cout<<endl<<"\t\t\t                                  ,'\\ ";
					cout<<endl<<"\t\t\t    _.----.        ____         ,'  _\\   ___    ___     ____";
					cout<<endl<<"\t\t\t_,-'       `.     |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`.";
					cout<<endl<<"\t\t\t\\      __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  |";
					setcolor(14);
					cout<<endl<<"\t\t\t \\.    \\ \\   |  __  |  |/    ,','_  `.  |          | __  |    \\|  |";
					cout<<endl<<"\t\t\t   \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  |";
					cout<<endl<<"\t\t\t    \\     ,-'/  /   \\    ,'   | \\/ / ,`.|         /  /   \\  |     |";
					cout<<endl<<"\t\t\t     \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  | |\\    |";
					cout<<endl<<"\t\t\t      \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   |";
					setcolor(9);
					cout<<endl<<"\t\t\t       \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   |";
					cout<<endl<<"\t\t\t        \\_.-'       |__|    `-._ |              '-.|     '-.| |   |";
					cout<<endl<<"\t\t\t                               `'                            '-._|";
					cout<<endl<<endl<<endl;
					
					setcolor(14);
					cout<<endl<<"\t\t\t\t\t\t Create a pokemon"<<endl;
					createPokemon();					
				}
				else if(task==8){
					setcolor(14); 
					cout<<endl<<"\t\t\t                                  ,'\\ ";
					cout<<endl<<"\t\t\t    _.----.        ____         ,'  _\\   ___    ___     ____";
					cout<<endl<<"\t\t\t_,-'       `.     |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`.";
					cout<<endl<<"\t\t\t\\      __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  |";
					setcolor(9);
					cout<<endl<<"\t\t\t \\.    \\ \\   |  __  |  |/    ,','_  `.  |          | __  |    \\|  |";
					cout<<endl<<"\t\t\t   \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  |";
					cout<<endl<<"\t\t\t    \\     ,-'/  /   \\    ,'   | \\/ / ,`.|         /  /   \\  |     |";
					cout<<endl<<"\t\t\t     \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  | |\\    |";
					cout<<endl<<"\t\t\t      \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   |";
					setcolor(14);
					cout<<endl<<"\t\t\t       \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   |";
					cout<<endl<<"\t\t\t        \\_.-'       |__|    `-._ |              '-.|     '-.| |   |";
					cout<<endl<<"\t\t\t                               `'                            '-._|";
					cout<<endl<<endl<<endl;
					
					setcolor(9);
					cout<<endl<<"\t\t\t\t\t\t Delete a pokemon"<<endl;
					deletePokemon();					
				}
				else if(task==9){
					displayAll_pokemon(account,1);
				}
				
				getch();
				system("cls");
				if(task>0){task = pokemonMaster[account].menu(masters,trainers,pokemons);}		
			}while(task>0);
		}
		//TASKS FOR TRAINERS
		void tasks2(int task, int account){					
			do{
				if(task==2){
					setcolor(14);
					cout<<endl<<"\t\t\t\t\t\t Catch a pokemon"<<endl;
					catchPokemon(account, 0);
				}
				else if(task==3){
					displayAll_pokemon(account,0);
				}
				
				getch();
				system("cls");
				if(task>0){task = pokemonTrainer[account].menu();}
			}while(task>0);
		}
		/*END OF TASKS END OF TASKS END OF TASKS END OF TASKS END OF TASKS END OF TASKS END OF TASKS END OF TASKS*/
		
		/*FUNCTIONS FOR TASK FUNCTIONS FOR TASK FUNCTIONS FOR TASK FUNCTIONS FOR TASK FUNCTIONS FOR TASK FUNCTIONS FOR TASK */
		//---------------------------------------------------------------------------------------------------------------------
		/*CREATE*/
		void createMaster(){
			string username, id_for_user;
			id_for_user = to_string(++latest_id);
			
			setcolor(9);
			cout<<"\t\t\t\t\t\t ID: "<<id_for_user<<endl<<endl<<endl;
			
			username = getUser();
			pokemonMaster[masters++].create(username, id_for_user);
			
			writeMasters();
			writeID();
		}
		void createTrainer(){	
			string username, id_for_user;
			id_for_user = to_string(++latest_id);
			
			setcolor(12);
			cout<<"\t\t\t\t\t\t ID: "<<id_for_user<<endl<<endl<<endl;
			
			username = getUser();
			pokemonTrainer[trainers++].create(username, id_for_user);
			
			writeTrainers();
			writeID();
		}
		void createPokemon(){	
			int available;
			string poke_number;
			string pokemonName;
			
			setcolor(9);
			cout<<endl<<"\t\t\t\t\t\t ID: "<<pokemons+1<<endl;
			do{
				available=0;
				cout<<"\t\t\t\t\t\t Name: ";
				pokemonName = trap.getInput();
				
				for(int i=0;i<pokemons;i++){
					if(pokemon[i].checkCredentials(pokemonName)){
						available=1;
						setcolor(12);
						cout<<endl<<endl<<endl<<"\t\t\t\t\t Name already taken!"<<endl;
						setcolor(9);
						break;
					}
				}
			}while(available==1);
			
			poke_number = to_string(pokemons+1);
			pokemon[pokemons].create(pokemonName, poke_number);
			pokemons++;
			writePokemons();
		}
		//---------------------------------------------------------------------------------------------------------------------
		
		/*CATCH*/
		void catchPokemon(int account, int admin){
			string pokemonName;
			
			pokemonName = getPokemon(account, admin);
			if(admin){
				pokemonMaster[account].catchPoke(pokemonName);
				writeMasters();
			}
			else{
				pokemonTrainer[account].catchPoke(pokemonName);
				writeTrainers();
			}
			
			setcolor(9);
			cout<<endl<<endl<<endl<<"\t\t\t\t\t POKEMON ";
			setcolor(14);
			cout<<"CAUGHT !";
			setcolor(7);
			cout<<endl<<endl<<endl<<endl<<"\t\t\t\t\t\t Press any key to continue";
		}
		//---------------------------------------------------------------------------------------------------------------------
		
		/*DISPLAY*/
		void displayAll(){
			
			setcolor(9); 
			cout<<endl<<"\t\t\t                                  ,'\\ ";
			cout<<endl<<"\t\t\t    _.----.        ____         ,'  _\\   ___    ___     ____";
			cout<<endl<<"\t\t\t_,-'       `.     |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`.";
			cout<<endl<<"\t\t\t\\      __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  |";
			cout<<endl<<"\t\t\t \\.    \\ \\   |  __  |  |/    ,','_  `.  |          | __  |    \\|  |";
			cout<<endl<<"\t\t\t   \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  |";
			setcolor(12);
			cout<<endl<<"\t\t\t    \\     ,-'/  /   \\    ,'   | \\/ / ,`.|         /  /   \\  |     |";
			cout<<endl<<"\t\t\t     \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  | |\\    |";
			cout<<endl<<"\t\t\t      \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   |";
			cout<<endl<<"\t\t\t       \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   |";
			cout<<endl<<"\t\t\t        \\_.-'       |__|    `-._ |              '-.|     '-.| |   |";
			cout<<endl<<"\t\t\t                               `'                            '-._|";
			cout<<endl<<endl<<endl;
			
			setcolor(14);
			cout<<"\t\t\t\t\t\t------------------------";
			setcolor(9);
			cout<<"POKEMON MASTERS";
			setcolor(14);
			cout<<"------------------------"<<endl;
			
			for(int i=0;i<masters;i++){
				pokemonMaster[i].print();
				cout<<endl;
			}
			
			setcolor(14);
			cout<<"\t\t\t\t\t\t------------------------";
			setcolor(12);
			cout<<"POKEMON TRAINERS";
			setcolor(14);
			cout<<"------------------------"<<endl;
			
			for(int i=0;i<trainers;i++){
				pokemonTrainer[i].print();
				cout<<endl;
			}
		}
		void displayAll_pokemon(int account, int admin){
			string pokeName_tocheck;
			int captured;
			
			setcolor(14);
			cout<<endl<<endl<<"\t\t\t\t\t\t------------------------";
			setcolor(9);
			cout<<"POKEMON";
			setcolor(14);
			cout<<"------------------------"<<endl;
			
			setcolor(10);		
			cout<<endl;
			cout<<endl<<"\t\t\t             `;,;.;,;.;.'";
			cout<<endl<<"\t\t\t              ..:;:;::;: ";
			cout<<endl<<"\t\t\t        ..--''' '' ' ' '''--.  ";
			cout<<endl<<"\t\t\t      /' .   .'        '.   .`\\";
			cout<<endl<<"\t\t\t     | /    /            \   '.|";
			cout<<endl<<"\t\t\t     | |   :             :    :|";
			cout<<endl<<"\t\t\t   .'| |   :             :    :|";
			cout<<endl<<"\t\t\t ,: /\ \.._\ __..===..__/_../ /`.";
			setcolor(2);
			cout<<endl<<"\t\t\t|'' |  :.|  `'          `'  |.'  ::.";
			cout<<endl<<"\t\t\t|   |  ''|    :'';          | ,  `''\\";
			cout<<endl<<"\t\t\t|.:  \/  | /'-.`'   ':'.-'\ |  \,   |";
			cout<<endl<<"\t\t\t| '  /  /  | / |...   | \\ |  |  |';'|";
			cout<<endl<<"\t\t\t \\ _ |:.|  |_\\_|`.'   |_/_|  |.:| _ |";
			cout<<endl<<"\t\t\t/,.,.|' \__       . .      __/ '|.,.,\\";
			cout<<endl<<"\t\t\t     | ':`.`----._____.---'.'   |";
			cout<<endl<<"\t\t\t      \   `:""\"------'""' |   |";
			cout<<endl<<"\t\t\t       ',-,-',             .'-=,=,";
			cout<<endl<<endl<<endl;
			
			setcolor(13);
			cout<<endl<<"\t\t\t\t  H E Y	Y O U ! ! !"<<endl;
			
			sleep(1);
			
			if(admin){
				for(int i=0;i<pokemons;i++){
					pokeName_tocheck = pokemon[i].checkCredentials();
					captured = pokemonMaster[account].checkPokemon(pokeName_tocheck);
					pokemon[i].print(captured);
					cout<<endl;
				}
			}
			else{
				for(int i=0;i<pokemons;i++){
					pokeName_tocheck = pokemon[i].checkCredentials();
					captured = pokemonTrainer[account].checkPokemon(pokeName_tocheck);
					pokemon[i].print(captured);
					cout<<endl;
				}
			}
			
			
			
			setcolor(7);
			cout<<endl<<endl<<endl<<"\t\t\tpress any key to go back..";
			getch();
			
			system("cls");
			setcolor(13);
			cout<<endl<<"\t\t\tThanks ";
			setcolor(9);
			cout<<"for ";
			setcolor(13);
			cout<<"Viewing ";
			setcolor(9);
			cout<<"^.^";
			
			setcolor(14);		
			cout<<endl;
			cout<<endl<<"\t\t\t                                      |";
			cout<<endl<<"\t\t\t                                     /|";
			cout<<endl<<"\t\t\t                                   ,' |";
			cout<<endl<<"\t\t\t                                  .   |";
			cout<<endl<<"\t\t\t                                    | |";
			cout<<endl<<"\t\t\t                                 ' '| |";
			cout<<endl<<"\t\t\t                                / / | |";
			cout<<endl<<"\t\t\t       _,.-""--._              / /  | |";
			cout<<endl<<"\t\t\t     ,'          `.           j '   ' '";
			cout<<endl<<"\t\t\t   ,'              `.         ||   / ,                         ___..--,";
			cout<<endl<<"\t\t\t  /                  \        '`.'`.-.,-\".  .      _..---""'' __, ,'";
			cout<<endl<<"\t\t\t /                    \       \\`.\\\"`    `\"'\\  ,'\"_..--''""'.'.'";
			cout<<endl<<"\t\t\t.                      .      .'-'             \,' ,'         ,','";
			cout<<endl<<"\t\t\t|                      |      ,`               ' .`         .' /";
			cout<<endl<<"\t\t\t|                      |     /          ,\"`.  ' `-. _____.-' .'";
			cout<<endl<<"\t\t\t'                      |..---.|,\".      | | .  .-'""   __.,-'";
			cout<<endl<<"\t\t\t .                   ,'       ||,|      |.' |    |""`'";
			cout<<endl<<"\t\t\t  `-._   `._.._____  |        || |      `._,'    |";
			cout<<endl<<"\t\t\t      `.   .      `\".    ,'\"|\"  `'           ,+.";
			cout<<endl<<"\t\t\t        \  '         |    '   |   .....        .'  `.";
			cout<<endl<<"\t\t\t         .'          '     7 \".              ,'    \\";
			cout<<endl<<"\t\t\t                   ,'      |    `..        _,'      F";
			cout<<endl<<"\t\t\t                  .        |,      `'----''         |";
			cout<<endl<<"\t\t\t                  |     ,\"j  /                   | '";
			cout<<endl<<"\t\t\t                  `     |  | .                 | `,'";
			cout<<endl<<"\t\t\t                   .    |  `.|                 |/";
			cout<<endl<<"\t\t\t                    `-..'   ,'                .'";
			cout<<endl<<"\t\t\t                            | \             ,''";
			cout<<endl<<"\t\t\t                            |  `,'.      _,' /";
			cout<<endl<<"\t\t\t                           |    | ^.  .'   /";
			cout<<endl<<"\t\t\t                             `-'.' j` V    /";
			cout<<endl<<"\t\t\t                                   |      /";
			cout<<endl<<"\t\t\t                                   |     /";
			cout<<endl<<"\t\t\t                                   |   ,'";
			cout<<endl<<"\t\t\t                                    `""";
			cout<<endl<<endl<<endl;
			
			setcolor(7);
			cout<<endl<<endl<<endl<<endl<<"press any key to return";
		}
		//---------------------------------------------------------------------------------------------------------------------
		
		/*DELETE*/
		int deleteUser(int account, int task){
			int i, if_available=0, is_admin=0;
			string username;
			
			setcolor(14);
			cout<<endl<<"\t\t\t\t\t\t Username: ";
			username = trap.noBlank();
			username = to_lower(username);
			
			for(i=0;i<masters;i++){
				if(pokemonMaster[i].checkCredentials(username)){
					if_available=1;
					is_admin=1;
					break;
				}
			}
			if(if_available==0){
				for(i=0;i<trainers;i++){
					if(pokemonTrainer[i].checkCredentials(username)){
						if_available=1;
						break;
					}
				}
			}
				
			/*DELETING THE USER*/
			if(if_available==1){
				/*ERROR TRAP SO THAT NUMBER DOES NOT GET TO NEGATIVE*/
				if(is_admin==1 && masters==1){
					setcolor(10);
					cout<<endl<<endl<<endl<<"\t\t\t\t\tmust have atleast one admin!"<<endl;
				}
				else{						
					if(i==account){											 //RETURN TO MENU IF SELF DELETE
						task=0;
					}
					
					if(is_admin==1){
						for(i;i<masters;i++){
							pokemonMaster[i] = pokemonMaster[i+1];
						}
						masters--;
						writeMasters();
					}
					else{
						for(i;i<trainers;i++){
							pokemonTrainer[i] = pokemonTrainer[i+1];
						}
						trainers--;
						writeTrainers();
					}
					
					setcolor(9);
					cout<<endl<<endl<<endl<<"\t\t\t\t\t\t DELETED!";
					setcolor(7);
					cout<<endl<<endl<<endl<<endl<<"\t\t\t\t Press any key to return";
				}
			}
			else{
				setcolor(12);
				cout<<endl<<endl<<endl<<"\t\t\t Username not found! press any key to return";
			}
			
			return task;
		}
		void deletePokemon(){
			int i, if_available=0;
			string pName;

			setcolor(14);
			cout<<endl<<"\t\t\t\t\t\t Name: ";
			pName = trap.noBlank();
			pName = to_lower(pName);
			
			for(i=0;i<pokemons;i++){
				if(pokemon[i].checkCredentials(pName)){
					if_available=1;
					break;
				}
			}
				
			/*DELETING THE USER*/
			if(if_available==1){						
				for(i;i<pokemons;i++){
					pokemon[i] = pokemon[i+1];
					pokemon[i].updateNumber(i+1);
				}
				pokemons--;
				writePokemons();
				
				setcolor(9);
				cout<<endl<<endl<<endl<<"\t\t\t\t\t\t POKEMON ";
				setcolor(14);
				cout<<"DELETED!";
				setcolor(7);
				cout<<endl<<endl<<endl<<endl<<"\t\t\t\t\t\t Press any key to return";
			}
			else{
				setcolor(12);
				cout<<endl<<endl<<endl<<"\t\t\t Pokemon not found! Press any key to return";
			}
		}
		//---------------------------------------------------------------------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------
		
		/*TECHNICAL STUFF TECHNICAL STUFF TECHNICAL STUFF TECHNICAL STUFF TECHNICAL STUFF TECHNICAL STUFF TECHNICAL STUFF TECHNICAL STUFF */
		string getUser(){
			string username;
			int repeat=0;
			
			do{
				repeat=0;
			
				cout<<"\t\t\t\t\t\t  Username: ";
				username = trap.noBlank();
				username = to_lower(username);
				
				for(int i=0;i<masters;i++){
					if(pokemonMaster[i].checkCredentials(username)){
						repeat=1;
						break;
					}
				}
				if(repeat==0){
					for(int i=0;i<trainers;i++){
						if(pokemonTrainer[i].checkCredentials(username)){
							repeat=1;
							break;
						}
					}
				}
				if(repeat==1){
					setcolor(12);
					cout<<endl<<endl<<endl<<"\\t\t\t\t  Username already taken!"<<endl;
				}
			}while(repeat>0);
			
			return username;
		}
		string getPokemon(int account, int admin){
			string pokemonName;
			int available;
			
			do{
				available=0;
				setcolor(14);
				cout<<endl<<"\t\t\t\t\t\t Pokemon name: ";
				pokemonName = trap.noBlank();
				
				pokemonName = to_lower(pokemonName);
				
				for(int i=0;i<pokemons;i++){
					if(pokemon[i].checkCredentials(pokemonName)){
						available=1;
						break;
					}
				}
				
				if(available==1){
					if(admin){
						if(pokemonMaster[account].checkPokemon(pokemonName)){
							available=2;
						}
					}
					else{
						if(pokemonTrainer[account].checkPokemon(pokemonName)){
							available=2;
						}
					}
				}
				
				if(available==0){
					setcolor(12);
					cout<<endl<<endl<<endl<<"\t\t\t\t Pokemon name not found!"<<endl;
				}
				else if(available==2){
					setcolor(14);
					cout<<endl<<endl<<endl<<"\t\t\t\t Pokemon already caught!"<<endl;
				}
			}while(available==0 || available==2);
			
			return pokemonName;
		}
		//---------------------------------------------------------------------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------
		
		/*DB WRITING STUFF*/
		writeTrainers(){
			traDB.clear();
			for(int i=0;i<trainers;i++){
				pokemonTrainer[i].write();
			}
			traDB.write(trainers);
		}
		writeMasters(){
			masDB.clear();
			for(int i=0;i<masters;i++){
				pokemonMaster[i].write();
			}
			masDB.write(masters);
		}
		writePokemons(){
			pokDB.clear();
			for(int i=0;i<pokemons;i++){
				pokemon[i].write();
			}
		}
		writeID(){
			idDB.clear();
			idDB.write(latest_id);
		}
		//---------------------------------------------------------------------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------
};

#endif
