# Write your MySQL query statement below
select name as Customers from customers where id not in(select a.id from customers a join orders b on(a.id=b.customerId));