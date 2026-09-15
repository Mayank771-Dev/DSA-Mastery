select usr.name as NAME,sum(trs.amount) as BALANCE from Users as usr
left join Transactions as trs
on usr.account=trs.account
group by usr.account
having sum(trs.amount)>10000
