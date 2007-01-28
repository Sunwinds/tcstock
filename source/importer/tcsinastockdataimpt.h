#ifndef tcsinastockdataimpt_h

#define tcsinastockdataimpt_h

#include <QtCore/QVariant>
#include <QtCore/QObject>
#include <QtNetwork/QHttp>

/*! \brief tcSinaStockDataImporter
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.29

	�������ݵ����࣬ͨ��ֱ�ӷ������˵Ĺ�Ʊ������ҳ�����ÿ�����ݡ�
	�������ԣ�http://stock.sina.com.cn/stock/quote/sha0.html ֮�����ҳ��
	Ŀǰ�����С�
*/
class tcSinaStockDataImporter : public QObject
{
	Q_OBJECT

public:
	tcSinaStockDataImporter();

	~tcSinaStockDataImporter();

	int LoadStockData();

protected slots:
	void DoRequestFinished(int pId, bool pError);

	void DoDone(bool pError);

private:
	QHttp mHttp;

};

#endif //tcsinastockdataimpt_h
