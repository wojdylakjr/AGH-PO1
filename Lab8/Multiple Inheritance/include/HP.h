#pragma once

class HP{
public:
HP(int hp) : _hp(hp){}
int getHP() const{return _hp;}
void setHP(int hp){_hp = hp; }

private:
int _hp;
};