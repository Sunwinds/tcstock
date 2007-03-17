#ifndef tctoolpadwgt_h

#define tctoolpadwgt_h

#include <QtCore/QVariant>
#include <QtGui/QWidget>
#include "ui_toolpadwgt.h"

#include "../stockinfo/tcstockinfopack.h"
#include "tcstocklistfavtwgt.h"
#include "tcstocklistallwgt.h"
class tcMarketManager;

/*! \brief tcToolPadWidget
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.03
 	
	��Ʊ�б�����塣
*/
class tcToolPadWidget : public QWidget, private Ui_tcToolPadWidget
{
	Q_OBJECT

public:
	tcToolPadWidget(QWidget *pParent);

	~tcToolPadWidget();

protected slots:
	void DoTabStockSelected(tcStockInfoList *pStockInfoList);

private:
	tcStockListFavouriteWidget *mFavouriteWidget;

	tcStockListAllWidget *mAllWidget;

signals:
	void OnStockSelected(tcStockInfoList *pStockInfoList);

};

#endif //tctoolpadwgt_h
