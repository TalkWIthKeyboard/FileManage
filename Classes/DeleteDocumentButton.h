#pragma once
#include <cocos2d.h>
#include "MyButton.h"
#include "System.h"
#include "ViewSystem.h"
#include "Document.h"

USING_NS_CC;
using namespace std;

class DeleteDocumentButton :
	public MyButton
{
public:
	DeleteDocumentButton(Menu* menuButton, int positionX, int positionY);
	~DeleteDocumentButton();
public:
	void event(cocos2d::Ref* pSender);
	void createMySelf(Menu* menuButton, int positionX, int positionY);
};