#pragma once

#include "IBot.h"

class MffBot : public IBot
{
public:
	MffBot() { }
	virtual ~MffBot() { }

	void Update() override;
};