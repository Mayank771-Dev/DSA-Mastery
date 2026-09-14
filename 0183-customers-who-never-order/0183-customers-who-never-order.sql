select cus.name as Customers from Customers as cus
left join Orders as odr
on cus.id=odr.customerId
where odr.id is null
