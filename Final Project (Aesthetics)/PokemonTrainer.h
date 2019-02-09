#ifndef POKEMONTRAINER_H
#define POKEMONTRAINER_H

#include "header.hpp"

class PokemonTrainer: private PokemonMaster{	
	public:
		int menu(){
			int choice=1;
			
			for(;;){
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
			
				if(choice==1){cout<<"\t\t\t\t\t\t> display profile\n";}else{cout<<"\t\t\t\t\t\t  display profile\n";}
				if(choice==2){cout<<"\t\t\t\t\t\t> catch pokemon\n";}else{cout<<"\t\t\t\t\t\t  catch pokemon\n";}
				if(choice==3){cout<<"\t\t\t\t\t\t> display pokemon\n";}else{cout<<"\t\t\t\t\t\t  display pokemon\n";}
				if(choice==4){cout<<"\t\t\t\t\t\t> logout\n";}else{cout<<"\t\t\t\t\t\t  logout\n";}
				
				choice = trap.arrow4(choice);
				
				if(choice>10){ choice-=10;
					system("cls");
					
					if(choice==1){
						print();
						getch();
					}
					else if(choice==2){
						return 2;
					}
					else if(choice==3){
						return 3;
					}
					else if(choice==4){
						return 0;
					}
				}
				system("cls");
			}
		}
		//---------------------------------------------------------------------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------
		
		void print(){
			setcolor(14);
			cout<<"\t\t\t\t\t\t Username: "<<to_upper(username)<<endl;
			//cout<<"password: "<<password<<endl;
			cout<<"\t\t\t\t\t\t Id: "<<id<<endl;
			setcolor(12);
			cout<<"\t\t\t\t\t\t First name: "<<to_upper(firstName)<<endl;
			cout<<"\t\t\t\t\t\t Last name: "<<to_upper(lastName)<<endl;
			cout<<"\t\t\t\t\t\t Birthdate: "<<to_upper(bday)<<endl;
			cout<<"\t\t\t\t\t\t Sex: "<<to_upper(sex)<<endl;
			cout<<"\t\t\t\t\t\t Address: "<<to_upper(address)<<endl;
			cout<<"\t\t\t\t\t\t Contact: "<<contact<<endl;
		}
		void create(string user, string latest_id){
			id = latest_id;
			username = user;
			cout<<"\t\t\t\t\t\t Password: ";
			password = trap.noBlank();
			cout<<"\t\t\t\t\t\t First name: ";
			firstName = trap.getInput();
			cout<<"\t\t\t\t\t\t Last name: ";
			lastName = trap.getInput();
			cout<<"\t\t\t\t\t\t Birthdate: ";
			bday = trap.noBlank(); 
			cout<<"\t\t\t\t\t\t Sex: ";
			sex = trap.getInput();
			cout<<"\t\t\t\t\t\t Address: ";
			address = trap.noBlank();
			cout<<"\t\t\t\t\t\t Contact: ";
			contact = trap.getNumber();
			pokemons=0;
			
			setcolor(14);		
			cout<<endl<<"\t\t\t                                        .";
			cout<<endl<<"\t\t\t                         |              |";
			cout<<endl<<"\t\t\t                         |             ,|";
			cout<<endl<<"\t\t\t                ,_       |\\           F'   ,.-""`.";
			cout<<endl<<"\t\t\t               /  `-._   |`           // ,-\"_,.. |";
			cout<<endl<<"\t\t\t              |   ___ `. |\\ ,""\"`-. /.-','   ' |_....._";
			cout<<endl<<"\t\t\t              |  /   `-.`.  L......|j j_.'      ` |       `._";
			cout<<endl<<"\t\t\t              | |      _,'| |______|' | '-._     ||  ,.-.    `.";
			cout<<endl<<"\t\t\t               L|    ,'   | |      | j      `-.  || '    `.   \\";
			cout<<endl<<"\t\t\t___            |\\_,'      | |`\"----| |        `.||       |\\  \\";
			cout<<endl<<"\t\t\t ""=+...__     `,'   ,.-.   |....._|   _....     Y \      j_),..+=--";
			setcolor(7);
			cout<<endl<<"\t\t\t     `\"-._\"._.  ,' |  `  \\    /  ,' |   \\   \\ j,..-\"_..+-\"L";
			cout<<endl<<"\t\t\t          `-._-+. j   !   \\ `--'  .   !    \\ ,.-\"_..<._  |    |";
			cout<<endl<<"\t\t\t              |-. |   |    L        |   !     |  .-/'      `.|-.,-|";
			cout<<endl<<"\t\t\t              |__ '   '    |        '   |    /    /|   `, -. |   j";
			cout<<endl<<"\t\t\t        _..--'\"__ `-.___,'         `.___,.'  __/_|_  /   / '   |";
			setcolor(14);
			cout<<endl<<"\t\t\t   _.-_..---""_.-\\                           .,...__""--./L/_   |";	
			cout<<endl<<"\t\t\t -'""'     ,""  ,-`-.    .___.,...___,    _,.+"      """\"`-+-==++-";
			cout<<endl<<"\t\t\t          / /  `.  )\"-.._`v \|    V/  /-'   \\._,._.'\"-./   /";
			cout<<endl<<"\t\t\t          ` `.  )---.     `""\\__  / .'        /   \\    Y\"._.'";
			cout<<endl<<"\t\t\t           `\"'`\"   `-.     /|._""_/         |  ,..   _ |  |";
			cout<<endl<<"\t\t\t                        `""\"' | \"'           `. `-'  (_|,-.'";
			cout<<endl<<"\t\t\t                              \\               |`       .`-";
			cout<<endl<<"\t\t\t                                `.           . j`._    /";
			cout<<endl<<"\t\t\t                                 |`.._     _.'|    `""/";
			cout<<endl<<"\t\t\t                                 |    /""'\"  |  .\".j";
			setcolor(7);
			cout<<endl<<"\t\t\t                                .`.__j        \\ `.' |";
			cout<<endl<<"\t\t\t                                j    |          `._.'";
			cout<<endl<<"\t\t\t                               /     |";
			cout<<endl<<"\t\t\t                              \\|  |   L";
			cout<<endl<<"\t\t\t                               `..|_..'";
			cout<<endl<<endl<<endl;
			
			setcolor(13);	
			cout<<endl<<endl<<"\t\t\t\t\t\t D O N E !";
			
			setcolor(7);
			cout<<endl<<endl<<endl<<endl<<"\t\t\t\t press any to continue";
		}
		void catchPoke(string pokemonName){
			pokemon[pokemons]=pokemonName;
			pokemons++;
		}
		//---------------------------------------------------------------------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------
		
		/*CHECKING AND GETTING*/		
		int checkCredentials(string user, string pass){
			if(user==username && pass==password){
				return 1;
			}
			else{
				return 0;
			}
		}
		int checkCredentials(string user){
			if(user==username){
				return 1;
			}
			else{
				return 0;
			}
		}
		int checkPokemon(string pokemonName){
			int captured=0;
			
			for(int i=0;i<pokemons;i++){
				if(pokemonName==pokemon[i]){
					captured=1;
					break;
				}
			}
			
			return captured;
		}
		//---------------------------------------------------------------------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------
		
		/*DATABASE AND CREDENTIALS STUFF*/
		int update(int line){
			username = traDB.getData(++line);
			password = traDB.getData(++line);
			id = traDB.getData(++line);
			firstName = traDB.getData(++line);
			lastName = traDB.getData(++line);
			bday = traDB.getData(++line);
			sex = traDB.getData(++line);
			address = traDB.getData(++line);
			contact = traDB.getData(++line);
			pokemons = traDB.getDataNum(++line);
			for(int i=0;i<pokemons;i++){
				pokemon[i]=traDB.getData(++line);
			}
			return line;
		}
		void write(){
			traDB.write(username);
			traDB.write(password);
			traDB.write(id);
			traDB.write(firstName);
			traDB.write(lastName);
			traDB.write(bday);
			traDB.write(sex);
			traDB.write(address);
			traDB.write(contact);
			traDB.write(pokemons);
			for(int i=0;i<pokemons;i++){
				traDB.write(pokemon[i]);
			}
		}
};

#endif
