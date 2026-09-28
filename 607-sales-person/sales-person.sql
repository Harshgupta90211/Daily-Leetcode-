 
SELECT name #salespeople whose sales_id is not in that list
FROM salesperson s
where s.sales_id
NOT IN(
    SELECT sales_id    #this part finds all salesperson who sell to comapany Red
    FROM company c
    INNER JOIN orders o
    ON o.com_id=c.com_id
        WHERE c.name='Red'
)