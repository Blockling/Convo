// This is a practice program made by Vlad Nicolai and Nikita
// First version will be made for local communication (yes im talking with myself) and 
// later we will be aiming for client - server - client communication


//
#include <iostream>
#include <cmath>
#include <string>

// simple encyption protocol, propably using Caesar Encryption or something simmiliarly simple -> using "backwards encryption"
std::string encryptMessage(std::string message){
    std::string encryptedMessage = "";
    for (int i = message.length() - 1; i>=0; i--){
        encryptedMessage += message[i];
    }
    return encryptedMessage;
}

// a backwards message backwards looks just like the original...
std::string decryptMessage(std::string message){
    return encryptMessage(message);
}


// get message - encrypt message - decrypt message - output message
int main () {
    // take input from user
    std::cout << "Hello, user! Do you want to send a message?" << std::endl;
    std::string userMessage;
    std::getline(std::cin, userMessage);

    // Encrypt the message
    std::string messageEncrypted = encryptMessage(userMessage);
    std::cout << "The encrypted message looks like this" << messageEncrypted << std::endl;

    // Decrypt the message
    std::string messageDecrypted = encryptMessage(messageEncrypted);
    std::cout << "The decrypted message looks like this " << messageDecrypted << std::endl;

    std::string Message = messageDecrypted;
    std::cout << "En- Decrypted Message:  " << Message << std::endl;
    std::cout << "Original Message:  " << userMessage << std::endl;

    return 0;
}

/*
Issues:
- need better Variable Names for encryptedMessage between main function and encrypt function
- need better encryption
- 
*/