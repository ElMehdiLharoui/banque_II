#pragma once
namespace Banque {
	class MAD;
	class dollar;
	class euro;
	
	class devise
	{

	private:
		double somme;

	public:
		devise(double);
		devise(const devise&);
		devise& operator+(const devise&)const;
		devise& operator-(const devise&)const;
		devise& operator*(const devise&)const;
		devise& operator*(double)const;
		devise& operator/(const devise&)const;
		devise& operator/(double)const;
		bool operator>=(const devise&)const;
		bool operator<=(const devise&)const;
		double convert(double)const;
		virtual devise* check(double)const = 0;
		virtual dollar* todollar()const = 0;
		virtual euro* to_euro()const = 0;
		virtual MAD* to_mad()const = 0;
		virtual void afficher()const;
		devise* Mytype( const devise*)const;


	};
};
