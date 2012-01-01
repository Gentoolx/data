#ifndef COSMOQUERY_HPP
#define COSMOQUERY_HPP

// Local
#include "query.hpp"

namespace Wintermute {
namespace Data {
namespace Ontology {

class COSMOQuery : public Query
{
    Q_OBJECT
public:
    explicit COSMOQuery(QObject *parent = 0);

signals:

public slots:

};

}}} // namespaces
#endif // COSMOQUERY_HPP
