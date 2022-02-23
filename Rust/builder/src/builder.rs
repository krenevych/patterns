#[derive(Debug)]
pub enum Dough {
    Fat,
    Regular,
    Thin
}

#[derive(Debug)]
pub enum Flour {
    Wheat,
    Pastry,
    Bread
}

#[derive(Debug)]
pub enum Mixin {
    Pineapple,
    Tomato,
    Orange,
    Ham,
    Olive
}

#[derive(Debug)]
pub struct Pizza {
    dough: Dough,
    flour_type: Flour,
    mixins: Vec<Mixin>
}

impl Pizza {

    pub fn price(&self) -> i32 {
        let dough_price = match self.dough {
            Dough::Fat => 3,
            Dough::Regular => 2,
            Dough::Thin => 1
        };
        let flour_price = match self.flour_type {
            Flour::Pastry => 1,
            Flour::Wheat => 2,
            Flour::Bread => 3
        };
        let mixins_prices: i32 = self.mixins.iter().map(|item| {
            match item {
                Mixin::Ham => 1,
                Mixin::Orange => 2,
                Mixin::Olive => 3,
                Mixin::Tomato => 4,
                Mixin::Pineapple => 5
            }
        }).sum();
        dough_price + flour_price + mixins_prices
    }

}

impl Default for Pizza {
    fn default() -> Self {
        Pizza {
            dough: Dough::Regular,
            flour_type: Flour::Bread,
            mixins: vec![]
        }
    }
}

#[derive(Debug)]
struct PizzaBuilder {
    pizza: Pizza
}

impl PizzaBuilder {

    pub fn new() -> PizzaBuilder {
        PizzaBuilder {pizza: Pizza::default()}
    }

    pub fn reset(&mut self) -> &mut PizzaBuilder {
        self.pizza = Pizza::default();
        self
    }

    pub fn set_dough(&mut self, dough: Dough) -> &mut PizzaBuilder {
        self.pizza.dough = dough;
        self
    }

    pub fn set_flour(&mut self, flour: Flour) -> &mut PizzaBuilder {
        self.pizza.flour_type = flour;
        self
    }

    pub fn add_mixin(&mut self, mixin: Mixin) -> &mut PizzaBuilder {
        self.pizza.mixins.push(mixin);
        self
    }

    pub fn build(&self) -> &Pizza {
        &self.pizza
    }
}

pub struct Director {
    builder: PizzaBuilder
}

impl Director {

    pub fn new() -> Director {
        Director{ builder: PizzaBuilder::new() }
    }

    pub fn make_cheap(&mut self) -> &Pizza {
        self.builder.reset()
            .set_dough(Dough::Thin)
            .set_flour(Flour::Wheat)
            .build()
    }

    pub fn make_expensive(&mut self) -> &Pizza {
        self.builder.reset()
            .set_dough(Dough::Fat)
            .set_flour(Flour::Pastry)
            .add_mixin(Mixin::Ham)
            .add_mixin(Mixin::Olive)
            .build()
    }
}