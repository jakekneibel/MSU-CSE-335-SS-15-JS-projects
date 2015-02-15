#include "barista.h"

void Barista::print(const OrderList& sortedList){

	vector<Drink*> tempDrinks;
	string sortBy;


	for(unsigned int i=0;i<OrderList.size();i++)
	{
		if(tempDrinks.size() ==0)
		{
			sortBy = getSortBy(OrderList.getIndex(i));
			tempDrinks.push_back(OrderList.getIndex(i));
		}
		else
		{
			if (sortBy == getSortBy(OrderList.getIndex(i))){
			
				tempDrinks.push_back(OrderList.getIndex(i));
			}
			else{
				cout<< "I have "<<tempDrinks.size()<< add << sortBy<<endl;
				for(unsigned t=0;t<tempDrinks.size();t++){
					tempDrinks[t].comfirmOrder();	
				}
				cout <<  endl;
				sortBy= getSortBy(OrderList.getIndex(i));
				tempDrinks.clear()
				tempDrinks.push_back(OrderList.getIndex(i));
			}
		}
		
	}


}
CoolBarista::coolDeliverDrinks(OrderList& list){

	OrderList sortedList = Sort(list);
	cout << "Cool Barista: Order's up!"<<endl;
	print(sortedList);
	
}

OrderList& CoolBarista::coolSort(OrderList& list){

	return list;	
}

Drink& CoolBarista::getSortBy(const Drink& drink){
	return drink.get_user()
}

NewbieBarista::newbieDeliver Drinks(OrderList& list){

	OrderList sortedList = Sort(list);
	cout << "Newbie Barista: Order's up!" << endl;
	print(sortedList);
}

OrderList& newbieBarista::newbieSort(OrderList& list){
	return list;
}

Drink& CoolBarista::getSortBy(const Drink& drink){
	return drink.sizestr()
}




	
