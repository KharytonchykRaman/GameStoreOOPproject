#include "Adventure.h"

bool Adventure::isOnline() {
	return online;
}

void Adventure::setOnlineStatus(bool online) {
	this->online = online;
}