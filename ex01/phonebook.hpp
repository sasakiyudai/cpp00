#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

# include "contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void add(void);
		void search(void);
	private:
		static int num_contacts;
		Contact contacts[8];
};

#endif