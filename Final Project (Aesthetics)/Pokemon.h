#ifndef POKEMON_H
#define POKEMON_H

#include "header.hpp"

class Pokemon{
	private:
		string name, prevEvo, nextEvo, type1, type2, desc, id;
		
		string getType(int type_pors){
			int error; string type;
			
			if(type_pors==1){
				do{
					cout<<"type  (cannot be none): ";
					type = trap.getInput();
					type = to_lower(type);
					if(type=="bug" || type=="dark" || type=="dragon" || type=="electric" || type=="fairy" || type=="fighting" || type=="fire" || type=="flying" || type=="ghost" || type=="grass" || type=="ground" || type=="ice" || type=="normal" || type=="poison" || type=="psychic" || type=="rock" || type=="steel" || type=="water"){
						error=0;	
					}
					else if(type=="none"){
						error=1;
						setcolor(12);
						cout<<endl<<endl<<endl<<"\t\t\t invalid type enter again!"<<endl;
						setcolor(9);
					}
					else{
						error=1;
						setcolor(12);
						cout<<endl<<endl<<endl<<"\t\t\t invalid type enter again!"<<endl;
						setcolor(9);
					}
				}while(error==1);
			}
			else{
				do{
					error=0;
					cout<<"type   (write none if no secondary type): ";
					type = trap.getInput();
					type = to_lower(type);
					if(type=="none" || type=="bug" || type=="dark" || type=="dragon" || type=="electric" || type=="fairy" || type=="fighting" || type=="fire" || type=="flying" || type=="ghost" || type=="grass" || type=="ground" || type=="ice" || type=="normal" || type=="poison" || type=="psychic" || type=="rock" || type=="steel" || type=="water"){
						error=0;	
					}
					else{
						error=1;
						cout<<"\t\t\t invalid type enter again!"<<endl;
						setcolor(9);
					}
					if(type==type1){
						error=1;
						setcolor(12);
						cout<<endl<<endl<<endl<<"\t\t\t cannot have same type as previous enter again!"<<endl;
						setcolor(9);
					}
					
				}while(error==1);
				
			}
			return type;
		}
		
	public:
		/*FUNCTIONS*/
		void print(int captured){
			if(captured==1){
				setcolor(10);
				cout<<"\t\t\t\t\t\t ---";
				setcolor(13);
				cout<<"POKEMON CAPTURED";
				setcolor(10);
				cout<<"---"<<endl;
					
				setcolor(7);
			}
			setcolor(14);
			cout<<"\t\t\t\t\t\t Id: "<<to_upper(id)<<'\t';
			setcolor(11);
			cout<<"\t\t\t\t\t\t Name: "<<to_upper(name)<<endl;
			setcolor(7);
			cout<<"\t\t\t\t\t\t Previous Evolution: "<<to_upper(prevEvo)<<'\t';
			cout<<"\t\t\t\t\t\t Next Evolution: "<<to_upper(nextEvo)<<endl;
			cout<<"\t\t\t\t\t\t Type : "<<to_upper(type1)<<'\t';
			cout<<"\t\t\t\t\t\t Type : "<<to_upper(type2)<<endl;
			cout<<"\t\t\t\t\t\t Desc: "<<to_upper(desc)<<endl;
		}
		void create(string pName, string pokemonid){
			id = pokemonid;
			name = pName;
			cout<<"\t\t\t\t\t\t Previous evolution: ";
			prevEvo = trap.getInput();
			cout<<"\t\t\t\t\t\t Next evolution: ";
			nextEvo = trap.getInput();
			type1 = getType(1);
			type2 = getType(2); 
			cout<<"\t\t\t\t\t\t Desc: ";
			desc = trap.noBlank();
			
			setcolor(14);		
				cout<<endl<<"\t\t\t                                             ,-.";
				cout<<endl<<"\t\t\t                                          _.|  '";
				cout<<endl<<"\t\t\t                                        .'  | /";
				cout<<endl<<"\t\t\t                                      ,'    |'";
				cout<<endl<<"\t\t\t                                     /      /";
				cout<<endl<<"\t\t\t                       _..----""---.'      /";
				cout<<endl<<"\t\t\t _.....---------...,-""                  ,'";
				cout<<endl<<"\t\t\t `-._ \\                                /";
				cout<<endl<<"\t\t\t     `-.+_            __           ,--. .";
				cout<<endl<<"\t\t\t          `-.._     .:  ).        (`--\"|\\";
				cout<<endl<<"\t\t\t               7    | `\"|         `...' \\";
				cout<<endl<<"\t\t\t               |     `--'     '+\"       ,\", ""-";
				setcolor(12);
				cout<<endl<<"\t\t\t               |   _...        .____     | |/    '";
				cout<<endl<<"\t\t\t          _.   |  .    `.  '--\"  /      `./     j";
				cout<<endl<<"\t\t\t        \\' `-.|  '     |   `.   /        /     /";
				cout<<endl<<"\t\t\t         '     `-. `---\"     `-\"       /     /";
				setcolor(14);
				cout<<endl<<"\t\t\t         \\       `.                  _,'     /";
				cout<<endl<<"\t\t\t          \\        `                        .";
				cout<<endl<<"\t\t\t           \\                                j";
				cout<<endl<<"\t\t\t            \\                              /";
				cout<<endl<<"\t\t\t              `.                           .";
				cout<<endl<<"\t\t\t                |                           L";
				cout<<endl<<"\t\t\t                |                           |";
				cout<<endl<<"\t\t\t                |  _ /,                     |";
				cout<<endl<<"\t\t\t                | | L)'..                   |";
				cout<<endl<<"\t\t\t                | .    | `                  |";
				cout<<endl<<"\t\t\t                '  \'   L                   '";
				cout<<endl<<"\t\t\t                 \  \   |                  j";
				cout<<endl<<"\t\t\t                  `. `__'                 /";
				cout<<endl<<"\t\t\t                _,.--.---........__      /";
				cout<<endl<<"\t\t\t               ---.,'---`         |   -j\"";
				cout<<endl<<"\t\t\t                .-'  '....__      L    |";
				cout<<endl<<"\t\t\t              ""--..    _,-'       \ l||";
				cout<<endl<<"\t\t\t                  ,-'  .....------. `||'";
				cout<<endl<<"\t\t\t               _,'                /";
				cout<<endl<<"\t\t\t             ,'                  /";
				cout<<endl<<"\t\t\t            '---------+-        /";
				cout<<endl<<"\t\t\t                     /         /";
				cout<<endl<<"\t\t\t                   .'         /";
				cout<<endl<<"\t\t\t                 .'          /";
				cout<<endl<<"\t\t\t               ,'           /";
				cout<<endl<<"\t\t\t             _'....----\"""";
				cout<<endl<<endl;
				
			setcolor(14);
			cout<<endl<<endl<<"\t\t\t\t\t P I K A ! 	 P I K A !"<<endl<<endl;
			
			setcolor(7);
			cout<<"\t\t\t\t\t\t Press any to continue";
		}
		void updateNumber(int pokemon_no){
			string number;
			
			number = to_string(pokemon_no);
			id = number;
		}
		//---------------------------------------------------------------------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------
		
		/*CHECKING AND GETTING*/
		int checkCredentials(string pName){
			if(pName==name){
				return 1;
			}
			else{
				return 0;
			}
		}
		string checkCredentials(){
			return name;
		}
		//---------------------------------------------------------------------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------
		
		/*DATABASE AND CREDENTIALS STUFF*/
		int update(int line){
			name = pokDB.getData(++line);
			prevEvo = pokDB.getData(++line);
			nextEvo = pokDB.getData(++line);
			type1 = pokDB.getData(++line);
			type2 = pokDB.getData(++line);
			desc = pokDB.getData(++line);
			id = pokDB.getData(++line);
			return line;
		}
		void write(){
			pokDB.write(name);
			pokDB.write(prevEvo);
			pokDB.write(nextEvo);
			pokDB.write(type1);
			pokDB.write(type2);
			pokDB.write(desc);
			pokDB.write(id);
		}
};

#endif
