#ifndef _CONTACT_HPP_
# define _CONTACT_HPP_

# include <string>

class Contact
{
	public:
		Contact();
		~Contact();
		int can_set_then_set(int);
		void show_list(void);
		void show_data(void);
	private:
		int id;
		static std::string fields[11];
		std::string data[11];
};

#endif