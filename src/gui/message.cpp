#include "message.hpp"

static std::vector<LimeMessage_t> _msg;

void Message::Add(std::string& title) {
	if(title.c_str()){
		LimeMessage_t tmpmsg;
		tmpmsg.title = title;
		_msg.push_back(tmpmsg);
	}
}

void Message::Add(std::string& title, const std::string& text) {
	if (title.c_str() && text.c_str()) {
		LimeMessage_t tmpmsg;
		tmpmsg.title = title;
		tmpmsg.text = text;
		_msg.push_back(tmpmsg);
	}
}

void Message::Remove(void){
	_msg.erase(_msg.begin());
}

LimeMessage_t Message::Get(void) {
	return _msg[0];
}

bool Message::IsMessageQueued(void) {
	return _msg.size();
}

void Message::Clear(void) {
	_msg.clear();
}
