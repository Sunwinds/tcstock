#ifndef tcfavouritestockdlt_h

#define tcfavouritestockdlt_h

#include <QtCore/QVariant>
#include <QtCore/QObject>
#include <QtGui/QItemDelegate>

/*! \brief tcFavouriteStockDelegate
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.26
 	
	��ѡ��Ʊ�б���ʾ��Delegate���� tcFavouriteInfoDialog ʹ�á�
*/
class tcFavouriteStockDelegate : public QItemDelegate
{
	Q_OBJECT

public:
	tcFavouriteStockDelegate(QObject *pParent);

};

#endif //tcfavouritestockdlt_h


