#ifndef tcstockinfo_h

#define tcstockinfo_h

#include <QtCore/QVariant>
#include <QtCore/QObject>

#include "tcstock.h"

class tcStockInfo;

typedef QList<tcStockInfo> tcStockInfoList;

/*! \brief tcStockInfo
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.26
 	
	������Handle��һ���࣬����ָ��ϵͳ�е�ĳ�� tcStock ��
	��ͬʱ�������б�ź͹�Ʊ���룬���ϵͳ��Ҫ����ĳ����Ʊָ��ʱ��һ�㲻Ҫֱ��ʹ�� tcstock ��ָ�룬
	��Ӧ��ʹ�ø��࣬������ָ��� tcStock ����ɾ��ʱ�������������Ӧ����֤������ʵ��Ƿ���ַ��
*/
class tcStockInfo : public QObject
{
	Q_OBJECT

public:
	tcStockInfo(int pMarketIndex, const QString &pStockCode);

	tcStockInfo(const tcStockInfo &pInfo);

	tcStock* GetStock();

	int GetMarketIndex();

	QString GetStockCode();

	void ConnectMarketIndexModifiedSignal();

	tcStockInfo& operator=(const tcStockInfo &pInfo);

	bool operator==(const tcStockInfo &pInfo);

	QString GetMarketName();

	QString GetStockName();

protected:
	tcStockInfo();

protected slots:
	/*!
		notify by tcMarket when the market's index changed.
	*/
	void DoMarketIndexModified(int pNewIndex);

protected:
	int mMarketIndex;

	QString mStockCode;

};

#endif //tcstockinfo_h
