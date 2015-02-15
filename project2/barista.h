

class Barista{
public:
	virtual void deliverDrinks(OrderList&)=0;
	virtual OrderList& Sort(OrderList&)=0;
	virtual string getSortBy(const Drink&)=0;

protected:
	Barista()=default;
	Barista(const Barista&)=default;
	virtual	~Barista(){};
	Barista& operator =(const Barista&)=default;
	virtual string sortBy(const Drink&)=0;
private:
	void print(const OrderList&);
};

class CoolBarista: public Barista{
public:
	virtual void deliverDrinks(OrderList& orderList)
		{return coolDeliverDrinks(orderList);}
	virtual OrderList& Sort(OrderList& orderList)
		{return coolSort(orderList);}
	string sortBy(const Drink&);	

	CoolBarista()=default;
	CoolBarista(const CoolBarista&)=default;
	CoolBarista& operator=(const CoolBarista&)=default;
	~CoolBarista(){};
	

private:
	string add = "for";
	void coolDeliverDrinks(OrderList&);
	OrderList& coolSort(OrderList&);

};

class NewbieBarista: public Barista{
public:
	virtual void deliverDrinks(OrderList& orderList)
		{return newbieDeliverDrinks(orderList);}
	virtual OrderList& Sort(OrderList& orderList)
		{return newbieSort(orderList);}
	string getSortBy(const Drink&);

	NewbieBarista()=default;
	NewbieBarista(const NewbieBarista&)=default;
	NewbieBarista& operator=(const NewbieBarista&) = default;
	~NewbieBarista(){};

	
private:

	string add ="of";
	void newbieDeliverDrinks(OrderList&);
	OrderList& newbieSort(OrderList&);

};
