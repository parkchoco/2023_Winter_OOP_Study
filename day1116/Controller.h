#pragma once
#include "Model.h"
#include "View.h"

class Controller {
	Model*_model;
	View*_view;

public:
	Controller() {
	_model = new Model;
	_view = new View;
}
~Controller() {
	delete _model;
	delete _view;
	}
void start()
{
	_view->getInput(_model->getValues(), _model->getCount());
	_model->sort();
	_view->printResult(_model->getValues(), _model->getCount());
}
};