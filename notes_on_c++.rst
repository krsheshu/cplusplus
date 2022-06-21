-------------------
c++ Tips and Tricks
-------------------


1) c++11: Introduces initialization notations instead of narrowing conversions
   Ex: double x {2.7};
       int y{x}; // throws an error as double-> int might narrow!
       char b{1000]; // Error narrowing

2) c++11: Use constexpr for constants  and functions known at pre compile time
    Ex: constexpr int max = 100;
   c++98: Use const for constants which are initialized and not known pre compile
    Ex: int func ( int n )  {
          const int val = n+7;
        }

3) Vectors:
	a) 	std::vector <int> intvec = { 1, 2, 3, 4 };
		for ( int i: intvec )   // range-for-statement
			std::cout<<i<<" ";
	b)	Adding elements: intvec.push_back(7)
	c)	An efficient vector read loop
			std::vector <double> vecfloat;
			for (double temp; cin>>temp)
				vecfloat.pushback(temp);

4) Stdlib Operations: sort(), size() etc.

5) Exceptions
