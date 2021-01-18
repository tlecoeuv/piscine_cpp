#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>

class Enemy
{
public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & src);
	virtual ~Enemy() {};
	Enemy &		operator=(Enemy const & rhs);

	std::string		getType() const;
	int				getHP() const;
	virtual void	takeDamage(int damage);

private:
	Enemy() {};

	int				_HP;
	std::string		_type;
};

#endif
