#ifndef tcviewstockgroup_h

#define tcviewstockgroup_h

#include <QtCore/QVariant>
#include <QtCore/QObject>
#include <QtGui/QGraphicsItemGroup>

#include "../stockinfo/tcstockinfopack.h"
#include "../viewmodel/tcviewmodelpack.h"

/*! \brief tcViewStockGroup
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.04
 	
	ÿ�չ�Ʊ�����飬����K��ͼ�κͳɽ���ͼ�Ρ�
*/
class tcViewStockGroup : public QObject, public QGraphicsItemGroup
{
	Q_OBJECT

public:
	tcViewStockGroup(QObject *pParent, tcStock *pStock, tcViewModel *pViewModel);

private:
	tcStock *mStock;

};

#endif //tcviewstockgroup_h
