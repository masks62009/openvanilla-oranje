#ifndef BIGRAM_H
#define BIGRAM_H

#include <vector>

#include "Token.h"
#include "Vocabulary.h"
#include "DictionarySingleton.h"

class BiGram
{
public:
	BiGram(const char* dbFilePath);
	~BiGram(void);

	int maximumMatching(
	   vector<Token>& tokenVectorRef, int index, int length, bool doBackward);
	void getCharacterCombination(
	   vector<string>& leftRef, vector<string>& rightRef,
	   vector<string>& combinedRef);
	void getVocabularyCombination(
	   vector<Vocabulary>& leftRef, vector<Vocabulary>& rightRef,
	   vector<Vocabulary>& combinedRef);
	   
private:
    DictionarySingleton* dictionary;
};

#endif