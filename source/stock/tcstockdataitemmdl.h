#ifndef tcstockdataitemmdl_h

#define tcstockdateitemmdl_h

#include <QtCore/QVariant>
#include <QtCore/QObject>
#include <QtGui/QStandardItemModel>

#include "tcmarket.h"

/*! \brief tcStockDataItemModel
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.03
 	
	�༭ tcStockData �õ�ItemModel���� tcStockDataInfoDialog ��ʹ�á�
*/
class tcStockDataItemModel : public QStandardItemModel
{
	Q_OBJECT

public:
	tcStockDataItemModel(QObject *pParent);

	/*!
		here the pGroupIndex means the favourite group's index or market's index that user selected.
		pGroupIndex < 0 means the favourite group's index, > 0 means the market's index.
	*/
	void CreateStockList(int pGroupIndex, const QString &pStockCodeFilter, const QString &pStockNameFilter);

	void LoadStockData(const QDate &pDate);

	tcStockDailyData* ReadData(int pRow);

	bool WriteData(int pRow, tcStockDailyData* pStockDailyData);

	bool AppendStock(QWidget *pParent);

	bool ModifyStock(QWidget *pParent, int pIndex);

	bool RemoveStock(QWidget *pParent, int pIndex);

private:
	tcStockInfoList mViewStockInfoList;

	QDate mEditDate;

};

#endif //tcstockdateitemmdl_h
