# Write your MySQL query statement below
SELECT p1.product_id, IFNULL(ROUND(
    (SUM(p1.price*u1.units)/SUM(u1.units))
, 2) , 0)as average_price
FROM Prices p1
LEFT JOIN UnitsSold u1
ON p1.product_id = u1.product_id
AND u1.purchase_date BETWEEN p1.start_date and p1.end_date
GROUP BY product_id;