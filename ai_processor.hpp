//
//  ai_processor.hpp
//  DropboxClg
//
//  Created by Peter Chen on 2016-02-05.
//  Copyright © 2016 Peter Chen. All rights reserved.
//

#ifndef ai_processor_hpp
#define ai_processor_hpp

#include <stdio.h>
#include <vector>
#include <algorithm>
#include "dropblox_ai.h"

using namespace std;

class AIProcessor {
private:
	Board board;

public:
	AIProcessor(const Board &);

	Point realSize(Block *);
	void start();
};

#endif /* ai_processor_hpp */
