#ifndef POKEMONMASTER_H
#define POKEMONMASTER_H

#include "header.hpp"

class PokemonMaster{
	protected:
		string username, password, id, firstName, lastName, bday, sex, address, contact, pokemon[200];
		int pokemons;
		
	public:
		int menu(int masters, int trainers, int no_pokemon){
			int choice=1;
			
			for(;;){
				
				setcolor(11); 
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
				
				setcolor(11); 
				if(choice==1){cout<<"\t\t\t\t\t\t> create master\n";}else{cout<<"\t\t\t\t\t\t  create master\n";}
				if(choice==2){cout<<"\t\t\t\t\t\t> create trainer\n";}else{cout<<"\t\t\t\t\t\t  create trainer\n";}
				if(choice==3){cout<<"\t\t\t\t\t\t> delete user\n";}else{cout<<"\t\t\t\t\t\t  delete user\n";}
				if(choice==4){cout<<"\t\t\t\t\t\t> display user\n";}else{cout<<"\t\t\t\t\t\t  display user\n";}	
				if(choice==5){cout<<"\t\t\t\t\t\t> display all users\n";}else{cout<<"\t\t\t\t\t\t  display all users\n";}
				if(choice==6){cout<<"\t\t\t\t\t\t> catch a pokemon\n";}else{cout<<"\t\t\t\t\t\t  catch a pokemon\n";}
				if(choice==7){cout<<"\t\t\t\t\t\t> create pokemon\n";}else{cout<<"\t\t\t\t\t\t  create pokemon\n";}
				if(choice==8){cout<<"\t\t\t\t\t\t> delete pokemon\n";}else{cout<<"\t\t\t\t\t\t  delete pokemon\n";}
				if(choice==9){cout<<"\t\t\t\t\t\t> display pokemons\n";}else{cout<<"\t\t\t\t\t\t  display pokemons\n";}
				if(choice==10){cout<<"\t\t\t\t\t\t> logout\n";}else{cout<<"\t\t\t\t\t\t  logout\n";}
				
				choice = trap.arrow10(choice);
				
				
				
				if(choice>10){ choice-=10;
					system("cls");
					
					if(choice==1){					//CREATE MASTER
						if(masters<15){
							return 1;
						}
						else{
							setcolor(12);
							cout<<endl<<endl<<"\t\t\t\t Number of masters that can be created reached!";
							setcolor(7);
							cout<<endl<<endl<<endl<<endl<<"\t\t\t\t Press any key to continue";
							getch();
						}
					}
					else if(choice==2){				//CREATE TRAINER
						if(trainers<15){
							return 2;
						}
						else{
							setcolor(12);
							cout<<endl<<endl<<"\t\t\t Number of trainers that can be created reached!";
							setcolor(7);
							cout<<endl<<endl<<endl<<endl<<"\t\t\t\t\t Press any key to continue";
							getch();
						}
					}
					else if(choice==3){				//DELETE USER
						return 3;
					}
					else if(choice==4){				//DISPLAY USER
					setcolor(9);
						cout<<endl<<"\t\t\t                                  ,'\\ ";
						cout<<endl<<"\t\t\t    _.----.        ____         ,'  _\\   ___    ___     ____";
						cout<<endl<<"\t\t\t_,-'       `.     |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`.";
						setcolor(14);
						cout<<endl<<"\t\t\t\\      __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  |";
						cout<<endl<<"\t\t\t \\.    \\ \\   |  __  |  |/    ,','_  `.  |          | __  |    \\|  |";
						cout<<endl<<"\t\t\t   \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  |";
						cout<<endl<<"\t\t\t    \\     ,-'/  /   \\    ,'   | \\/ / ,`.|         /  /   \\  |     |";
						cout<<endl<<"\t\t\t     \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  | |\\    |";
						cout<<endl<<"\t\t\t      \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   |";
						setcolor(9);
						cout<<endl<<"\t\t\t       \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   |";
						cout<<endl<<"\t\t\t        \\_.-'       |__|    `-._ |              '-.|     '-.| |   |";
						cout<<endl<<"\t\t\t                               `'                            '-._|";
						cout<<endl;
						print();
						getch();
					}
					else if(choice==5){				//DISPLAY ALL USERS
						return 5;
					}
					else if(choice==6){				//CATCH POKEMON
						return 6;
					}
					else if(choice==7){				//CREATE POKEMON
						if(no_pokemon<151){
							return 7;
						}
						else{
							setcolor(12);
							cout<<endl<<endl<<"\t\t\t\t number of pokemon that can be created reached!";
							setcolor(7);
							cout<<endl<<endl<<endl<<endl<<"\t\t\t\t press any key to continue";
							getch();
						}
					}
					else if(choice==8){				//DELETE POKEMON
						return 8;
					}
					else if(choice==9){				//DISPLAY ALL POKEMONS
						return 9;
					}
					else if(choice==10){			//LOGOUT
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
			//cout<<"password: "<<password<<endl;			//OPTED TO HIDE PASSWORD
			cout<<"\t\t\t\t\t\t Id: "<<id<<endl;
			setcolor(9);
			cout<<"\t\t\t\t\t\t First name: "<<to_upper(firstName)<<endl;
			cout<<"\t\t\t\t\t\t Last name: "<<to_upper(lastName)<<endl;
			cout<<"\t\t\t\t\t\t Birthdate: "<<to_upper(bday)<<endl;
			cout<<"\t\t\t\t\t\t Sex: "<<to_upper(sex)<<endl;
			cout<<"\t\t\t\t\t\t Address: "<<to_upper(address)<<endl;
			cout<<"\t\t\t\t\t\t Contact: "<<to_upper(contact)<<endl;
		}
		void create(string user, string latest_id){
			id = latest_id;
			username = user;
			setcolor(9);
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
			cout<<"c\t\t\t\t\t\t Contact: ";
			contact = trap.getNumber();
			pokemons=0;
			
			
			
			setcolor(15);		
			cout<<endl<<"\t\t\t       ,-.                                            ___.._";
			cout<<endl<<"\t\t\t _     `. `.                                    _,-\"""      ',._";
			cout<<endl<<"\t\t\t`.`.      `.\\                                _,'         _..-'  `.";
			cout<<endl<<"\t\t\t   `._\\      `.                            ,'         _,'_,.-'-. \\";
			cout<<endl<<"\t\t\t      `.       `.                        ,'        ,-',-\"      \  .";
			cout<<endl<<"\t\t\t        `.      \\                      /  _,----\"',-'          L  L";
			cout<<endl<<"\t\t\t          `.     \\                   ,' _.--\"-. [             |   |";
			cout<<endl<<"\t\t\t            `.     .                 / ,'       | |     _..---../   |";
			cout<<endl<<"\t\t\t              .     L               / /         | j ,.-'        `   |";
			cout<<endl<<"\t\t\t              \\    .              ' /          j ,'             |  |";
			setcolor(13);
			cout<<endl<<"\t\t\t               \\    .            ' /          ' /               |  |";
			cout<<endl<<"\t\t\t                \\   l           / /          /,'                j  '";
			cout<<endl<<"\t\t\t                  L__L._        / /          +'      __,........'  j";
			cout<<endl<<"\t\t\t                ,'   '  \"`.   / /         .' _,.--'\"          \  |";
			cout<<endl<<"\t\t\t               /,""-.      `. ' '        _/.-'                  | F";
			cout<<endl<<"\t\t\t              /|   / l       . /       ,'                       | |";
			cout<<endl<<"\t\t\t             | |  /  |       ]'      ,'                         | |";
			cout<<endl<<"\t\t\t            ,._\"'   |       |     ,'-'\"""""""""""""'---.._   / |";
			setcolor(15);
			cout<<endl<<"\t\t\t            |  \`.._,'       F  _,'                         `--'  |";
			cout<<endl<<"\t\t\t            `..'           _/ ,:_____                         L   |";
			cout<<endl<<"\t\t\t              `..          .-'       `'--.._                   | j";
			cout<<endl<<"\t\t\t            _,. /,---.       \              `--..              | |";
			cout<<endl<<"\t\t\t           F  <j-.'   `       ._                 `\"-._       j  '";
			cout<<endl<<"\t\t\t           |  <|`,.    |       `L._                   `..   _, ,'";
			cout<<endl<<"\t\t\t           `..<|`.___,'        |.  `-.                   Y\"'_.";
			cout<<endl<<"\t\t\t              `L               | `.   `-.._____________,',.-'";
			cout<<endl<<"\t\t\t                `.            .Y   \      `"".""""\". .\"'";
			setcolor(13);
			cout<<endl<<"\t\t\t                  `.        ,' |\   `.        `+-._\\  |";
			cout<<endl<<"\t\t\t                    `,--. -'   | .    `.       `   `.| |";
			cout<<endl<<"\t\t\t                    /    //    |  \    ``-..___/     | |";
			cout<<endl<<"\t\t\t                   j    .l     |   .    F  \\   `   F  |";
			cout<<endl<<"\t\t\t                   |    ||     |    `   `    .   ` ,  /";
			cout<<endl<<"\t\t\t                   |    ||    F      `-.|     . _,' _'";
			cout<<endl<<"\t\t\t                   |   / |    |       `._`-----'  ,'";
			cout<<endl<<"\t\t\t                   |  /  |   /           `-------'";
			cout<<endl<<"\t\t\t                   l /   \_,'";
			cout<<endl<<"\t\t\t                   \"";
			cout<<endl<<endl<<endl;
			
			setcolor(13);	
			cout<<endl<<endl<<"\t\t\t\t\t\t D O N E !";
			
			setcolor(7);
			cout<<endl<<endl<<endl<<endl<<"\t\t\t\t Press any to continue";
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
			username = masDB.getData(++line);
			password = masDB.getData(++line);
			id = masDB.getData(++line);
			firstName = masDB.getData(++line);
			lastName = masDB.getData(++line);
			bday = masDB.getData(++line);
			sex = masDB.getData(++line);
			address = masDB.getData(++line);
			contact = masDB.getData(++line);
			pokemons = masDB.getDataNum(++line);
			for(int i=0;i<pokemons;i++){
				pokemon[i]=masDB.getData(++line);
			}
			return line;
		}
		void write(){
			masDB.write(username);
			masDB.write(password);
			masDB.write(id);
			masDB.write(firstName);
			masDB.write(lastName);
			masDB.write(bday);
			masDB.write(sex);
			masDB.write(address);
			masDB.write(contact);
			masDB.write(pokemons);
			for(int i=0;i<pokemons;i++){
				masDB.write(pokemon[i]);
			}
		}
};

#endif
