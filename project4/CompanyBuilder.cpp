#include "CompanyBuilder.h"
CompanyBuilder::CompanyBuilder(const CompanyBuilder & company){
  root=company.getroot();
}
CompanyBuilder::~CompanyBuilder(){}
