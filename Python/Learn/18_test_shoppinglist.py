import unittest
from shoppinglist import ShoppingList

class TestShoppingList(unittest.TestCase):
    def setUp(self):
        self.shopping_list=ShoppingList({'纸巾':8,'音响':30,'鞋子':100})

    def test_get_item_count(self):
        self.assertEqual(self.shopping_list.get_item_count(),32)

    def test_get_total_price(self):
        self.assertEqual(self.shopping_list.get_total_price(),137)