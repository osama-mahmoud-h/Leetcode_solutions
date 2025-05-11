

DELETE 
FROM Person p 
WHERE p.id > (select min(p2.id) from Person p2 where p2.email = p.email)
