#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#define numOfanimals 4

int main()
{
	std::cout<<"========This is main from subject==========="<<std::endl;
	std::cout<<std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout<<"-------------"<<std::endl;
	delete j;//should not create a leak
	delete i;

	std::cout<<std::endl;
	std::cout<<"======Create an array of "<<numOfanimals<<" animals and fill it with Cats and Dogs====="<<std::endl;
	std::cout<<std::endl;

	Animal *animals[numOfanimals];

	for(int i = 0; i < numOfanimals; i++)
	{
		if (i < (numOfanimals/2))
		{
			animals[i] = new Dog;
		}
		else
		{
			animals[i] = new Cat;
		}
		std::cout<<"-------------"<<std::endl;
	}

	Brain *brain;

	brain = animals[0]->getBrain();
	brain->ideas[0] = "Hello I am DOG";
	brain->ideas[1] = "I am hungry";

	brain = animals[2]->getBrain();

	brain->ideas[0] = "Hello I am CAT";
	brain->ideas[1] = "I like milk";

	std::cout<<std::endl;
	std::cout<<"========We call type, sound and ideas from an array animals======="<<std::endl;
	std::cout<<std::endl;

	for(int i = 0; i < numOfanimals; i++)
	{
		std::cout<<animals[i]->getType()<<std::endl;
		animals[i]->makeSound();
		animals[i]->voiceIdeas();
		std::cout<<"-------------"<<std::endl;
	}

	std::cout<<std::endl;
	std::cout<<"========Delete animals from the array======="<<std::endl;
	std::cout<<std::endl;
	
	for(int i = 0; i < numOfanimals; i++)
	{	std::cout<<"-------------"<<std::endl;
		delete animals[i];
	}

	std::cout<<std::endl;
	std::cout<<"========Assignment Animal;======="<<std::endl;
	std::cout<<std::endl;

	Dog *dog1 = new Dog;
	std::cout<<"-------------"<<std::endl;
	Dog *dog2 = new Dog;

	std::cout<<std::endl;
	dog1->setIdea( 0, "hello i'm hungry");
	std::cout<<"Dog1: ";
	dog1->voiceIdeas();
	std::cout<<"Dog2: ";
	dog2->voiceIdeas();std::cout<<std::endl;
	std::cout<<"-------------"<<std::endl;
	*dog2 = *dog1;
	std::cout<<"-------------"<<std::endl;
	std::cout<<"Dog1: ";
	dog1->voiceIdeas();
	std::cout<<"Dog2: ";
	dog2->voiceIdeas();
	std::cout<<"-------------"<<std::endl;
	std::cout<<"Set new idea Dog2"<<std::endl;
	dog2->setIdea( 1,"I am completely different");
	std::cout<<"-------------"<<std::endl;
	std::cout<<"Dog1: ";
	dog1->voiceIdeas();
	std::cout<<"Dog2: ";
	dog2->voiceIdeas();

	std::cout<<std::endl;
	std::cout<<"========Copy Animal;======="<<std::endl;
	std::cout<<std::endl;

	Dog dog3(*dog2);
	std::cout<<"-------------"<<std::endl;
	std::cout<<"Dog3: ";
	dog3.voiceIdeas();
	std::cout<<"-------------"<<std::endl;
	std::cout<<"Set new idea Dog3"<<std::endl;
	dog3.setIdea(2, "I am defferent a Dog2");
	std::cout<<"-------------"<<std::endl;
	std::cout<<"Dog2: ";
	dog2->voiceIdeas();
	std::cout<<"-------------"<<std::endl;
	std::cout<<"Dog3: ";
	dog3.voiceIdeas();
	std::cout<<"-------------"<<std::endl;
	delete dog1;
	delete dog2;

}
