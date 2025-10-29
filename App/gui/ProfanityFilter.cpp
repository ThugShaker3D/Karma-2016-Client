/* Copyright 2003-2005 ROBLOX Corporation, All Rights Reserved */
#include "stdafx.h"

#include "Network/Player.h"
#include "Util/Hash.h"
#include "Util/Color.h"
#include "Gui/ProfanityFilter.h"
#include <boost/algorithm/string.hpp>
#include "v8datamodel/contentprovider.h"
#include "Util/SafeToLower.h"
#include "StringConv.h"

namespace RBX {


void WordList::decrypt(std::string& str)
{
	for(unsigned i = 0; i<str.size(); ++i){
		str[i] = 0x55 ^ str[i];
	}
}

WordList::WordList()
{

}
WordList::~WordList()
{

}
bool WordList::ContainsProfanity(std::string str)
{
	return false;
}


ProfanityFilter::ProfanityFilter()
	: wordlist(0)
{
}

ProfanityFilter::~ProfanityFilter()
{

}

bool ProfanityFilter::ContainsProfanity(const std::string& str)
{
	return false;
}


bool ProfanityFilter::ContainsProfanityWorker(std::string str)
{
	return false;
}

} // namespace


