/*
Copyright 2014 F-Secure

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#pragma once

#include "pin.H"

#include "FlashPlayerConfigBuilder.h"

class ASByteArray
{
public:
	static ASByteArray* create(UINT32* ptr);
	UINT8* getData();
	UINT32 getDataLength();

private:
	ASByteArray(void);
	ASByteArray(UINT32*);
	ASByteArray(ASByteArray const&);
	void operator=(ASByteArray const&);

	static bool ASByteArray::isByteArray(UINT32*);

	Config* m_config;
	UINT32* m_addr;
	UINT32* m_buffer;
};

