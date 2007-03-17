#ifndef tcstockinfo_h

#define tcstockinfo_h

#include <QtCore/QVariant>
#include <QtCore/QObject>

#include "tcstock.h"

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
	tcStockInfo();

	tcStockInfo(const QString &pStockCode);

	tcStockInfo(const tcStockInfo &pInfo);

	tcStock* GetStock();

	QString GetStockCode();

	tcStockInfo& operator=(const tcStockInfo &pInfo);

	bool operator==(const tcStockInfo &pInfo);

	QString GetStockName();

	QString GetDescription();

protected slots:

protected:
	QString mStockCode;

};

#endif //tcstockinfo_h
