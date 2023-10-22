#include "PlayerSniper4.h"
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

PlayerSniper4 *_player;


int main(){

	
	_player = new PlayerSniper4();

	RenderWindow *App;
	

	App= new RenderWindow(VideoMode(800, 600, 32),
		"Que ventana horrible");


	enum Boton{ circulo1, circulo2, circulo3, circulo4 };
	Boton boton;
	boton = circulo1;
	while (App->isOpen())
	{

		int p = 0;


		Event evt{};

		evt.type;

		while (App->pollEvent(evt)){


			switch (evt.type)
			{
			case Event::EventType::Closed:
				App->close();
				break;


			case 	evt.MouseButtonPressed:
				if (evt.mouseButton.button == Mouse::Left)


				{   
					
					switch (boton)
					{
					case circulo1:
						
						_player->Posicionar(evt.mouseButton.x, evt.mouseButton.y);
						boton = circulo4;
						break;
					case circulo2:
						
						_player->Posicionar1(evt.mouseButton.x, evt.mouseButton.y);
						boton = circulo3;
					case circulo3:
						
						_player->Posicionar2(evt.mouseButton.x, evt.mouseButton.y);
						boton = circulo2;
						break;
					case circulo4:
						
						_player->Posicionar3(evt.mouseButton.x, evt.mouseButton.y);
						boton = circulo1;
						break;
					}
	
				}
			
			}
			
		}

			App->clear();
			
			switch (boton)
			{
			        
			case circulo1:
			
				_player->Dibujar(App);
				break;
			case circulo2:

				_player->Dibujar(App);
				break;
			case circulo3:

				_player->Dibujar(App);
				break;
			case circulo4:

				_player->Dibujar(App);
				break;

			 
			}

			App->display();
		}

	
	
		delete _player;
	
	return 0;
}
