#include "error.hpp"
#include "message.hpp"

// void Gui::DrawMessage(void) {
// 	LimeMessage_t message = Message::Get();
// 	int errorcode = error.err_code;
// 	char codestr[30];

// 	C2D_DrawRectSolid(10, 10, 0.5f, 300, SCREEN_HEIGHT-20, C2D_Color32(0, 0, 0, 255));

// 	snprintf(codestr, 30, "Error code: %d", errorcode);
// 	Gui::Print(codestr, 20.0f, 20.0f, 0.5f, 0.5f);
	
// 	if (errorcode == E_FILE_NOT_SUPPORTED) {
// 		Gui::Print("ERR: Unrecognized filetype.", 20.0f, 40.0f, 0.5f, 0.5f);
// 	}
// 	else if (errorcode == E_DECODER_INIT_FAIL){
// 		Gui::Print("ERR: Failed to initalize decoder.", 20.0f, 40.0f, 0.5f, 0.5f);
// 	}
// 	else if (errorcode == E_MUSIC_DIR_NOT_FOUND){
// 		Gui::Print("ERR: Directory \'music/\' does not exist.", 20.0f, 40.0f, 0.5f, 0.5f);
// 	}
// 	else if (errorcode == E_GENERIC);
// 	else {
// 		Gui::Print("ERR: Undefined error.", 20.0f, 40.0f, 0.5f, 0.5f);
// 	}

// 	if (error.extra_info.size())
// 		Gui::Print(error.extra_info.c_str(), 20.0f, 60.0f, 0.5f, 0.5f);
// }

void Error::Thrw(int err) {
    char codestr[30];
	snprintf(codestr, 30, "Error code: %d", err);

	std::string title(codestr);

	std::string text;

	if (err == E_FILE_NOT_SUPPORTED) {
		text = "ERR: Unrecognized filetype.";
	}
	else if (err == E_DECODER_INIT_FAIL){
		text = "ERR: Failed to initalize decoder.";
	}
	else if (err == E_DECODER_INIT_TIMEOUT){
		text = "ERR: Decoder init timed out.";
	}
	else if (err == E_UNSUPPORTED_CHANNELS){
		text = "ERR: Unsupported Channel.";
	}
	else if (err == E_MUSIC_DIR_NOT_FOUND){
		text = "ERR: Directory \'music/\' does not exist.";
	}
	else if (err == E_GENERIC);
	else {
		text = "ERR: Undefined error.";
	}

	Message::Add(title, text);
}

void Error::Thrw(int err, const std::string& extraInfo) {
	char codestr[30];
	snprintf(codestr, 30, "Error code: %d", err);

	std::string title(codestr);

	std::string text;

	if (err == E_FILE_NOT_SUPPORTED) {
		text = "ERR: Unrecognized filetype.";
	}
	else if (err == E_DECODER_INIT_FAIL){
		text = "ERR: Failed to initalize decoder.";
	}
	else if (err == E_DECODER_INIT_TIMEOUT){
		text = "ERR: Decoder init timed out.";
	}
	else if (err == E_UNSUPPORTED_CHANNELS){
		text = "ERR: Unsupported Channel.";
	}
	else if (err == E_MUSIC_DIR_NOT_FOUND){
		text = "ERR: Directory \'music/\' does not exist.";
	}
	else if (err == E_GENERIC);
	else {
		text = "ERR: Undefined error.";
	}

	text.append("\n\n");
	text.append(extraInfo);

	Message::Add(title, text);
}
