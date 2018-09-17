DROP TABLE IF EXISTS tbCustomers;
CREATE TABLE tbCustomers (
	customer_id INTEGER PRIMARY KEY AUTOINCREMENT,
	customer_name TEXT,
	customer_adress TEXT
);

DROP TABLE IF EXISTS tbOrders;
CREATE TABLE tbOrders (
	order_id INTEGER PRIMARY KEY AUTOINCREMENT,
	customer_id INTEGER,
	subscription_id INTEGER,
	purchase_date DATE,
    FOREIGN KEY(subscription_id) REFERENCES tbSubscriptions(subscription_id),
    FOREIGN KEY(customer_id) REFERENCES tbCustomers(customer_id)
);

DROP TABLE IF EXISTS tbSubscriptions;
CREATE TABLE tbSubscriptions (
	subscription_id INTEGER PRIMARY KEY AUTOINCREMENT,
	description TEXT,
	price_per_month INTEGER,
	subscription_length TEXT
);
