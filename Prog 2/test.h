/*package main

import(
    "fmt"
    "sort"
    )

    type ItemBase struct {
    Weight      int
        Price       int
        ItemType    int
        Description string
        Name        string
}

type Inventory struct {
    Itemslots  int
        Items[]ItemBase
        Equipments map[int]ItemBase
}

func(I Inventory) Create(slots int) 
Inventory {
    return Inventory
    {
        Itemslots:  slots,
        Items : [] ItemBase{},
        Equipments : map[int]ItemBase{1: ItemBase{}, 2 : ItemBase{}, 3 : ItemBase{}},
    }
}

func(I Inventory) Add(item ItemBase) Inventory {
    if len(I.Items) >= I.Itemslots{
        // do inventory full stuff here
        return I
    }
        I.Items = append(I.Items, item)
        return I
}

func(I Inventory) Equip(item ItemBase) Inventory {
    I.Equipments[item.ItemType] = item
        return I
}

func(I Inventory) SortByWeight(take string) Inventory {
    if take == "<" {
        sort.Slice(I.Items, func(i, j int) bool{
            return I.Items[i].Weight < I.Items[j].Weight
            })

    }
    else {
        sort.Slice(I.Items, func(i, j int) bool{
            return I.Items[i].Weight > I.Items[j].Weight
            })
    }
    return I
}

func(I Inventory) SortByValue(take string) Inventory {
    if take == "<" {
        sort.Slice(I.Items, func(i, j int) bool{
            return I.Items[i].Price < I.Items[j].Price
            })
    }
    else {
        sort.Slice(I.Items, func(i, j int) bool{
            return I.Items[i].Price > I.Items[j].Price
            })
    }
    return I
}

func main() {
inventory: = Inventory{}.Create(5)
// slot 1 is ring, slot 2 is pants, 3 is weapons
ring : = ItemBase{
    Weight:      1,
    Price : 5,
    ItemType : 1, // this is the slot it will go
    Description : "A Cheap ring",
    Name : "Cheap Ring",
}
ring2: = ItemBase{
    Weight:      2,
    Price : 50,
    ItemType : 1, // this is the slot it will go
    Description : "An Expensive ring",
    Name : "Expensive Ring",
}

excalibur: = ItemBase{
    Weight:      20,
    Price : 100,
    ItemType : 3,
    Description : "Mythic Sword",
    Name : "Excalibur",
}
bambo: = ItemBase{
    Weight:      5,
    Price : 2,
    ItemType : 3,
    Description : "Wooden Sword",
    Name : "Poor Wooden Sword",
}

inventory = inventory.Add(ring)
inventory = inventory.Add(ring2)
inventory = inventory.Add(excalibur)
inventory = inventory.Add(bambo)
inventory = inventory.Equip(ring)
fmt.Println(inventory)
inventory = inventory.Equip(excalibur)
fmt.Println(inventory)
inventory = inventory.SortByValue(">")
fmt.Println(inventory)
inventory = inventory.SortByWeight("<")
fmt.Println(inventory)
}







