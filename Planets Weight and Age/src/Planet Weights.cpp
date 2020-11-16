//============================================================================
// Name        : Planets Weight and Age.cpp
// Author      : Hasnain Ali
// Version     : 1.0.0
// Copyright   : Freshman Class of 2020
// Description : This program will convert one's weight and age on Earth to what their weight and age would be on other planets within the solar system.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string anyletter, anyletter2, anyletter3;
	float weight, age;
	int planet;
	
	cout << "Hello! Welcome to Planet weight and age converter." << endl;
	cout << "This program will convert your current weight and age on planet Earth to what your weight and age would be on other planets within the solar system." << endl; 
	cout << "Afterwards, it will tell you three cool facts about that planet!" << endl; 
	
	cout << endl; 
	
	cout << "Please press any letter and hit enter to begin." << endl; 
	cin >> anyletter; 
	
	cout << endl; 
	cout << endl; 
	
	cout << "Alright, let's begin. :D" << endl; 
	
	cout << endl; 
	
	cout << "Please enter you current weight on planet Earth." << endl; 
	cin >> weight;
	cout << "Please enter your current age on planet Earth." << endl; 
	cin >> age; 
	
	cout << endl; 
	
	cout << "Please choose the planet you would like to convert your current weight and age to using the list below." << endl; 
	cout << "NOTE: IN ORDER FOR THIS PROGRAM TO WORK, YOU MUST ENTER THE NUMBER OF THE PLANET YOU WOULD LIKE TO CONVERT TO USING THE LIST BELOW. DO NOT ENTER THE NAME OF THE PLANET OR THE PROGRAM WILL NOT RUN!" << endl; 
	
	cout << endl;
	cout << endl; 
	
	cout << " 1) Mercury" << endl; 
	cout << " 2) Venus" << endl;
	cout <<	" 3) Earth" << endl; 
	cout << " 4) Mars" << endl; 
	cout << " 5) Jupiter" << endl; 
	cout <<	" 6) Saturn" << endl; 
	cout <<	" 7) Uranus" << endl;
	cout <<	" 8) Neptune" << endl; 
	cout <<	" 9) Pluto" << endl;
	
	cout << endl; 
	
	cout << "Please enter the number of the planet you would like to convert your current weight and age to below." << endl; 
	cin >> planet; 
	
	cout << endl;
	cout << endl; 
	
	
	switch(planet) {
		case 1: 
			
			cout << "Your weight on Mercury would be " << weight * 0.38 << " pounds. On Mercury, you would be " << age / 0.241 << " years old." << endl;
			
			cout << endl; 
			
			cout << "Facts About Mercury:" << endl; 
			cout << "1) Mercury is the closest planet to the sun." << endl; 
			cout << "2) The smallest planet in the solar system (excluding pluto)." << endl; 
			cout << "3) For every 2 orbits of the Sun, which takes around 88 Earth days, Mercury completes three rotations of its axis." << endl; 
			
			cout << endl; 
			cout << endl; 
			
			cout << "All facts pertaining to Mercury were taken from https://theplanets.org/mercury/." << endl; 
			
		break;
		
		case 2: 
			
			cout << "Your weight on Venus would be " << weight * 0.91 << " pounds. On Venus, you would be " << age / 0.615 << " years old." << endl;
			
			cout << endl;
			
			cout << "Facts About Venus:" << endl; 
			cout << "1) Venus is warmer than Mercury despite the fact that it is the second closest planet to the solar system. This is because of the clouds that trap heat on Mercury." << endl; 
			cout << "2) Venus is the second planet from the Sun and the third brightest object in Earth's sky after the Sun and Moon." << endl; 
			cout << "3) The planet is named for \"Venus,\" the Roman goddess of love and beauty and is the second largest terrestrial planet." << endl;
			
			cout << endl; 
			cout << endl; 
			
			cout << "All facts pertaining to Venus were taken from https://theplanets.org/venus/." << endl; 
		
		break;
		
		case 3: 
			
			cout << "You already know your weight and age on Earth! Your weight is " << weight << " pounds and you are " << age << " years old on Earth. " << endl; 
			
			cout << endl;
			
			cout << "Facts About Earth:" << endl; 
			cout << "1) Earth is the third planet from the Sun and largest of the terrestrial planets." << endl; 
			cout << "2) Earth is only the fifth largest planet in terms of size and mass, it is the densest (5,513 kg/m3) of all the planets. " << endl; 
			cout << "3) Earth is the only planet in the solar system not named after a mythological being." << endl;
			
			cout << endl; 
			cout << endl; 
			
			cout << "All facts pertaining to Earth were taken from https://theplanets.org/earth/." << endl; 
			
		break;
		
		case 4: 
			
			cout << "Your weight on Mars would be " << weight * 0.38 << " pounds. On Mars, you would be " << age / 1.88 << " years old." << endl;
			
			cout << endl;
			
			cout << "Facts About Mars:" << endl; 
			cout << "1) Mars is the fourth planet from the Sun and last of the terrestrial planets." << endl; 
			cout << "2) Like the rest of the planets in the solar system (except Earth), Mars is named after a mythological figure — the Roman god of war." << endl; 
			cout << "3) Mars is the second smallest planet in the solar system behind Mercury." << endl;
			
			cout << endl; 
			cout << endl; 
			
			cout << "All facts pertaining to Mars were taken from https://theplanets.org/mars/." << endl; 
			
		break; 
		
		case 5:
			
			cout << "Your weight on Jupiter would be " << weight * 2.36 << " pounds. On Jupiter, you would be " << age / 11.9 << " years old." << endl;
			
			cout << endl;
			
			cout << "Facts About Jupiter:" << endl; 
			cout << "1) Jupiter is named after the Roman king of gods." << endl; 
			cout << "2) With a mass of 1.90 x 1027 kg and a mean diameter of 139,822 km, Jupiter is easily the largest and most massive planet in the Solar System." << endl; 
			cout << "3) It would take 11 Earths lined up next to each other to stretch from one side of Jupiter to the other and it would take 317 Earths to equal the mass of Jupiter." << endl;
			
			cout << endl; 
			cout << endl; 
			
			cout << "All facts pertaining to Jupiter were taken from https://theplanets.org/jupiter/." << endl; 
			
		break;
		
		case 6: 
			cout << "Your weight on Saturn would be " << weight * 0.91 << " pounds. On Saturn, you would be " << age / 29.5 << " years old." << endl;
			
			cout << endl; 
			
			cout << "Facts About Saturn:" << endl; 
			cout << "1) Saturn is the sixth planet from the Sun and second largest planet of the Solar System in terms of diameter and mass." << endl; 
			cout << "2) Saturn is one of five planets able to be seen with the naked eye." << endl; 
			cout << "3) Saturn gives off more energy than it receives from the Sun." << endl; 
			
			cout << endl; 
			cout << endl; 
			
			cout << "All facts pertaining to Saturn were taken from https://theplanets.org/saturn/." << endl; 
			
		break;
		
		case 7:
			cout << "Your weight on Uranus would be " << weight * 0.89 << " pounds. On Saturn, you would be " << age / 84 << " years old." << endl;
			
			cout << endl; 
			
			cout << "Facts About Uranus:" << endl; 
			cout << "1) Uranus, named after the the father of the Roman god Saturn, is the seventh planet in the Solar System and third of the gas giants." << endl; 
			cout << "2) It is the third largest planet by diameter, yet fourth most massive." << endl; 
			cout << "3) William Herschel discovered Uranus in 1781." << endl; 
			
			cout << endl; 
			cout << endl; 
			
			cout << "All facts pertaining to Uranus were taken from https://theplanets.org/uranus/." << endl; 
			
		break;
		
		case 8: 
		
			cout << "Your weight on Neptune would be " << weight * 1.12 << " pounds. On Neptune, you would be " << age / 164.8 << " years old." << endl;
		
		  cout << endl; 
			
			cout << "Facts About Neptune:" << endl; 
			cout << "1) Due to its blue coloration, Neptune was named after the Roman god of the Sea." << endl; 
			cout << "2) It takes Neptune 164.8 Earth years to orbit the Sun." << endl; 
			cout << "3) Neptune has the second largest gravity of any planet." << endl; 
			
			cout << endl; 
			cout << endl; 
			
			cout << "All facts pertaining to Neptune were taken from https://theplanets.org/neptune/." << endl; 

		break;
		
		case 9:
		
			cout << "Your weight on Pluto would be " << weight * 0.06 << " pounds. On Pluto, you would be " << age / 248.5 << " years old." << endl;
			
			cout << endl; 
			
			cout << "Facts About Pluto:" << endl; 
			cout << "1) Pluto is named after the Greek god of the underworld." << endl; 
			cout << "2) Pluto was reclassified from a planet to a dwarf planet in 2006." << endl; 
			cout << "3) Pluto was discovered on February 18th, 1930 by the Lowell Observatory." << endl; 
			
			cout << endl; 
			cout << endl; 
			
			cout << "All facts pertaining to Pluto were taken from http://space-facts.com/pluto/." << endl;

		break;
		
		default: 
		  cout << "You did not enter a vaild number. Be sure to enter the number of the planet you would like to convert to from the list that was provided. Please rerun the program and try again." << endl;
		  cout << "Here are three facts for you:" << endl; 
		  
		  cout << endl; 
		  cout << endl; 
			
			cout << "1) You made a mistake when using this program." << endl; 
			cout << "2) You are going to rerun this program if you really want to learn about your weight and age on other planets in the solar system." << endl; 
			cout << "3) You are annoyed right now because you had to read this." << endl; 
	  
	}
		
		cout << endl; 
		cout << endl; 
		
		cout << "I hope you enjoyed the facts and the difference of your weight and age on different planets." << endl; 
		cout << endl; 
		
		cout << "Please press any letter and hit enter continue." << endl; 
		cin >> anyletter2; 
		
		cout << endl; 
		cout << endl; 
		
		cout << "Thank you for using this program. It was made by Hasnain Ali." << endl;
		cout << endl;
		cout << "To terminate this program, please push any letter and press enter." << endl; 
		cin >> anyletter; 
		
		cout << endl; 
		
		cout << "Thank you! Good-bye. =)" << endl; 
		
	
	return 0;
} // I do not understand this error!!