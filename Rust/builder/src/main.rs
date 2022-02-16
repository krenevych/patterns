use num::Complex;

mod builder;
mod prototype;


fn main() {
    // demonstrate builder pattern
    //
    // NOTE: as implementation intended to be as quick as possible
    // we extensively use mutable references, which makes it impossible
    // to reuse same builder several times
    // There's probably a better approach to implement it
    let mut b = builder::Director::new();
    let cheap_pizza = b.make_cheap();
    println!("{:?}, price: {}", cheap_pizza, cheap_pizza.price());

    let mut b = builder::Director::new();
    let expensive_pizza = b.make_expensive();
    println!("{:?}, price: {}", expensive_pizza, expensive_pizza.price());

    let q = prototype::Quadratics{
        a: Complex::from(1.0),
        b: Complex::from(1.0),
        c: Complex::from(1.0)
    };

    // using Prototype pattern
    let q2 = q.clone();
    println!("{:?}", q2.solve());
}
