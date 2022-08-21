#pragma once

#include "../Protocol.h"

class IPCClient
{
public:
	~IPCClient();

	void Connect();
	protocol::Response SendBlocking(const protocol::Request &request);

	void Send(const protocol::Request &request);
	protocol::Response Receive();

private:
	int pipe = -1;
};