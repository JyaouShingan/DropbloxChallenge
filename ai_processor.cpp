//
//  ai_processor.cpp
//  DropboxClg
//
//  Created by Peter Chen on 2016-02-05.
//  Copyright © 2016 Peter Chen. All rights reserved.
//

#include "ai_processor.hpp"

AIProcessor::AIProcessor(const Board &b):
board(b)
{

}

Point AIProcessor::realSize(Block *block) {
	int size = block->size;
	int *is = new int[size];
	int *js = new int[size];
	for (int i = 0; i < size; i++) {
		is[i] = block->offsets[i].i;
		js[i] = block->offsets[i].j;
	}
	int iSize = *max_element(is, is + size) - *min_element(is, is + size);
	int jSize = *max_element(js, js + size) - *min_element(js, js + size);
	Point p;
	p.i = iSize;
	p.j = jSize;
	return p;
}

void AIProcessor::start() {
	vector<string> moves;
	
}