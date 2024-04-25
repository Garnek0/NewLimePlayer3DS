#ifndef __LIME_ERROR_H__
#define __LIME_ERROR_H__



#define E_GENERIC 1
#define E_NDSP_INIT_FAIL 2 
#define E_DECODER_INIT_FAIL 3
#define E_FILE_NOT_SUPPORTED 4
#define E_DECODER_INIT_TIMEOUT 5
#define E_UNSUPPORTED_CHANNELS 6
#define E_MUSIC_DIR_NOT_FOUND 7

#include <vector>
#include <string>

typedef struct {
	int err_type = 0;
	int err_code;
	std::string extra_info;
} LimeError_t;

namespace Error {
	void Thrw(int err);

	void Thrw(int err, const std::string& extraInfo);
}

#endif //ifndef __ERROR_H__
