# Write your MySQL query statement below

SELECT C.name as Customers
FROM Customers C  
WHERE C.id NOT IN (select customerId from Orders)