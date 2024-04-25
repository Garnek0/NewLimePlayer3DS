#ifndef __MESSAGE_H__
#define __MESSAGE_H__

#include <vector>
#include <string>

typedef struct {
	std::string title;
    std::string text;
} LimeMessage_t;

namespace Message {
	void Add(std::string& title);

	void Add(std::string& title, const std::string& text);

	void Remove(void);

	LimeMessage_t Get(void);

	bool IsMessageQueued(void);

	void Clear(void);
}

#endif //ifndef __MESSAGE_H__