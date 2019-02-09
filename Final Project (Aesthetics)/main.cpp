#include "header.hpp"

int main(int argc, char** argv) {
	Pokedex pokedex;
	int choice=1;
	
	pokedex.update();

	for(;;){	
	
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
		
		//sleep(1);
		setcolor(12);
		cout<<endl<<endl<<"\t\t                                F I R E           R E D "<<endl<<endl;

		setcolor(14);		
		cout<<endl<<"\t\t\t                 .\"-,.__ ";
		cout<<endl<<"\t\t\t                 `.     `.  ,\\";
		cout<<endl<<"\t\t\t             .--'  .._,'\"-' `.";
		cout<<endl<<"\t\t\t             .    .'         `'";
		cout<<endl<<"\t\t\t             `.   /          ,'";
		cout<<endl<<"\t\t\t              `  '--.   ,-\"'";
		cout<<endl<<"\t\t\t                `\"`   |  \\";
		cout<<endl<<"\t\t\t                   -. \\, |";
		setcolor(12);
		cout<<endl<<"\t\t\t                    `--Y.'      ___.";
		cout<<endl<<"\t\t\t                         \\     L._, \\";
		cout<<endl<<"\t\t\t               _.,        `.   <  <\\                _";
		cout<<endl<<"\t\t\t             ,' '           `, `.   | \\            ( `";
		cout<<endl<<"\t\t\t          ../, `.            `  |    .\\`.           \\ \\_";
		cout<<endl<<"\t\t\t         ,' ,..  .           _.,'    ||\\l            )  '\".";
		cout<<endl<<"\t\t\t        , ,'   \\           ,'.-.`-._,'  |           .  _._`.";
		cout<<endl<<"\t\t\t      ,' /      \\ \\        `' ' `--/   | \\          / /   ..\\";
		cout<<endl<<"\t\t\t    .'  /        \\ .         |\\__ - _ ,'` `        / /     `.`.";
		cout<<endl<<"\t\t\t    |  '          ..         `-...-\"  |  `-'      / /        . `.";
		cout<<endl<<"\t\t\t    | /           |L__           |    |          / /          `. `.";
		cout<<endl<<"\t\t\t  , /            .   .          |    |         / /             ` `";
		cout<<endl<<"\t\t\t  / /          ,. ,`._ `-_       |    |  _   ,-' /               ` \\";
		cout<<endl<<"\t\t\t / .           \"`_/. `-_ \\_,.  ,'    +-' `-'  _,        ..,-.    \\`.";
		cout<<endl<<"\t\t\t.  '         .-f    ,'   `    '.       \\__.---'     _   .'   '     \\ \\";
		cout<<endl<<"\t\t\t' /          `.'    l     .' /          \\..      ,_|/   `.  ,'`     L`";
		cout<<endl<<"\t\t\t|'      _.-""` `.    \\ _,'  `            \\ `.___`.'\"`-.  , |   |    | \\";
		cout<<endl<<"\t\t\t||    ,'      `. `.   '       _,...._        `  |    `/ '  |   '     .|";
		cout<<endl<<"\t\t\t||  ,'          `. ;.,.---' ,'       `.   `.. `-'  .-' /_ .'    ;_   ||";
		cout<<endl<<"\t\t\t|| '              V      / /           `   | `   ,'   ,' '.    !  `. ||";
		cout<<endl<<"\t\t\t||/            _,-------7 '              . |  `-'    l         /    `||";
		cout<<endl<<"\t\t\t. |          ,' .-   ,' ||               | .-.        `.      .'     ||";
		cout<<endl<<"\t\t\t `'        ,'    `\".'    |               |    `.        '. -.'       `'";
		cout<<endl<<"\t\t\t          /      ,'      |               |,'    \\-.._,.'/'";
		cout<<endl<<"\t\t\t          .     /        .               .       \\    .''";
		cout<<endl<<"\t\t\t        .`.    |         `.             /         :_,'.'";
		cout<<endl<<"\t\t\t          \\ `...\\   _     ,'-.        .'         /_.-'";
		cout<<endl<<"\t\t\t          `-.__ `,  `'   .  _.>----''.  _  __  /";
		cout<<endl<<"\t\t\t                .'        /\"'          |  \"'   '_";
		cout<<endl<<"\t\t\t               /_|.-'\\ ,\".             '.'`__'-( \\";
		cout<<endl<<"\t\t\t                 / ,\"'\"\\,'               `/  `-.|\"		";
		cout<<endl<<endl<<endl;
		
		//sleep(1);
		
		setcolor(7);
		if(choice==1){cout<<"\t\t\t\t\t\t> Login\n";}else{cout<<"\t\t\t\t\t\t  Login\n";}
		if(choice==2){cout<<"\t\t\t\t\t\t> Exit\n";}else{cout<<"\t\t\t\t\t\t  Exit\n";}
		
		choice = trap.arrow2(choice);
		
		if(choice>10){ choice-=10;
			system("cls");
			
			if(choice==1){
				pokedex.login();
			}
			else if(choice==2){
				setcolor(9);
				cout<<endl<<"\t\t\t\t\t>>>> Thank";
				setcolor(7);
				cout<<" You ";
				setcolor(9);
				cout<<"for Playing";
				setcolor(14);
				cout<<" \\(^.^)/"<<endl<<endl;
				
				sleep(1);
				cout<<endl<<"\t\t                     Featuring:";
				setcolor(12);
				cout<<endl<<"\t\t                                F I R E       R E D "<<endl<<endl;
		
				setcolor(12);		
				cout<<endl<<"\t\t\t                 .\"-,.__ ";
				cout<<endl<<"\t\t\t                 `.     `.  ,\\";
				cout<<endl<<"\t\t\t             .--'  .._,'\"-' `.";
				cout<<endl<<"\t\t\t             .    .'         `'";
				cout<<endl<<"\t\t\t             `.   /          ,'";
				cout<<endl<<"\t\t\t              `  '--.   ,-\"'";
				cout<<endl<<"\t\t\t                `\"`   |  \\";
				cout<<endl<<"\t\t\t                   -. \\, |";
				setcolor(7);
				cout<<endl<<"\t\t\t                    `--Y.'      ___.";
				cout<<endl<<"\t\t\t                         \\     L._, \\";
				cout<<endl<<"\t\t\t               _.,        `.   <  <\\                _";
				cout<<endl<<"\t\t\t             ,' '           `, `.   | \\            ( `";
				cout<<endl<<"\t\t\t          ../, `.            `  |    .\\`.           \\ \\_";
				cout<<endl<<"\t\t\t         ,' ,..  .           _.,'    ||\\l            )  '\".";
				cout<<endl<<"\t\t\t        , ,'   \\           ,'.-.`-._,'  |           .  _._`.";
				cout<<endl<<"\t\t\t      ,' /      \\ \\        `' ' `--/   | \\          / /   ..\\";
				cout<<endl<<"\t\t\t    .'  /        \\ .         |\\__ - _ ,'` `        / /     `.`.";
				cout<<endl<<"\t\t\t    |  '          ..         `-...-\"  |  `-'      / /        . `.";
				cout<<endl<<"\t\t\t    | /           |L__           |    |          / /          `. `.";
				cout<<endl<<"\t\t\t  , /            .   .          |    |         / /             ` `";
				cout<<endl<<"\t\t\t  / /          ,. ,`._ `-_       |    |  _   ,-' /               ` \\";
				cout<<endl<<"\t\t\t / .           \"`_/. `-_ \\_,.  ,'    +-' `-'  _,        ..,-.    \\`.";
				cout<<endl<<"\t\t\t.  '         .-f    ,'   `    '.       \\__.---'     _   .'   '     \\ \\";
				cout<<endl<<"\t\t\t' /          `.'    l     .' /          \\..      ,_|/   `.  ,'`     L`";
				cout<<endl<<"\t\t\t|'      _.-""` `.    \\ _,'  `            \\ `.___`.'\"`-.  , |   |    | \\";
				cout<<endl<<"\t\t\t||    ,'      `. `.   '       _,...._        `  |    `/ '  |   '     .|";
				cout<<endl<<"\t\t\t||  ,'          `. ;.,.---' ,'       `.   `.. `-'  .-' /_ .'    ;_   ||";
				cout<<endl<<"\t\t\t|| '              V      / /           `   | `   ,'   ,' '.    !  `. ||";
				cout<<endl<<"\t\t\t||/            _,-------7 '              . |  `-'    l         /    `||";
				cout<<endl<<"\t\t\t. |          ,' .-   ,' ||               | .-.        `.      .'     ||";
				cout<<endl<<"\t\t\t `'        ,'    `\".'    |               |    `.        '. -.'       `'";
				cout<<endl<<"\t\t\t          /      ,'      |               |,'    \\-.._,.'/'";
				cout<<endl<<"\t\t\t          .     /        .               .       \\    .''";
				cout<<endl<<"\t\t\t        .`.    |         `.             /         :_,'.'";
				cout<<endl<<"\t\t\t          \\ `...\\   _     ,'-.        .'         /_.-'";
				cout<<endl<<"\t\t\t          `-.__ `,  `'   .  _.>----''.  _  __  /";
				cout<<endl<<"\t\t\t                .'        /\"'          |  \"'   '_";
				cout<<endl<<"\t\t\t               /_|.-'\\ ,\".             '.'`__'-( \\";
				cout<<endl<<"\t\t\t                 / ,\"'\"\\,'               `/  `-.|\"		";
				cout<<endl<<endl<<endl;
				
				setcolor(12);
				return 0;
			}
		}
		
		system("cls");
	}
}
