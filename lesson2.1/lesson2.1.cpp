#include <iostream>

//создаем дочерние классы для класса телефон и сам класс телефон

class UsbPower{};

class Screen
{
public:
	Screen();
	~Screen();

    void touch(size_t x, size_t y);
private:

};

class phone
{
public:
    /*
   класс - описание работы обьекта
   структура -
   обьект - переменная созданная с помощью класса
   процуедура -

   типы методов:
   конструктор - метод, создающий обьекты, и инициализирующий переменные
   деструктор - метода, удаляющий обьект
   инспектор -
   модификатор -
   гетер -
   */

    //default methods of a class
	phone(); // constructor - works when we create an object (ex. tel)
	~phone(); // distructor - works when we destroy the object

    void PowerButton(); // power button in your phone - custom method
    void SoundUp();
    void SoundDown();
    void USB(UsbPower pwr);
    Screen screen();


private:
    //it is recommendet to use privat variables, to not brake it later
    bool powerstat;
};

phone::phone()
{
    std::cout << "phone" << std::endl;
    powerstat = true;
}

int main()
{
    //class - описание обьекта
    //обьект в нашем случае tel
    {
        phone tel; //create "tel" object
        tel.PowerButton(); // run a phone method
    }
    // objects' weight is a count of classes variables bites
    // classes' weighth is nothing

}

