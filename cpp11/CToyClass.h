#pragma once
class CToyClass
{
private:
	unsigned int m_price;
	unsigned int m_product_year;
public:
	CToyClass(unsigned int price, unsigned int product_year);
	virtual ~CToyClass();
	virtual void Show(void);
	virtual void Move(void) = 0;
};

class Car : public CToyClass
{
public:
	Car(int speed, unsigned int price, unsigned int product_year);
	~Car();
	virtual void Show(void);
	virtual void Move(void);
}; 

class Robot : public CToyClass
{
public:
	Robot(int power, unsigned int price, unsigned int product_year);
	~Robot();
	virtual void Show(void);
	virtual void Move(void);
};