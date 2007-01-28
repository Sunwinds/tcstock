#ifndef tcstockinfoimpt_h

#define tcstockinfoimpt_h

#include <QtCore/QVariant>
#include <QtCore/QObject>

/*! \brief tcStockInfoImporter
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.28

	��Ʊ��Ϣ�����࣬���Դ�CSV��ʽ���ļ������Ʊ��Ϣ��

	�ļ���ʽ���£�
	[stock code],[stock name],[UNKNOWN],[stock pinyin],[stock english name]
	...
*/
class tcStockInfoImporter : public QObject
{
	Q_OBJECT

public:
	tcStockInfoImporter();

	~tcStockInfoImporter();

	int LoadFromFile(const QString &pFileName, int pMarketIndex);

};

#endif //tcstockinfoimpt_h


