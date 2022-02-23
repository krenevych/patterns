use num::complex::Complex;

pub struct Quadratics {
    pub a: Complex<f32>,
    pub b: Complex<f32>,
    pub c: Complex<f32>
}

// Rust provides Prototype pattern support out-of-the-box,
// (name is different though)
impl Clone for Quadratics {
    fn clone(&self) -> Self {
        Quadratics {
            a: self.a.clone(),
            b: self.b.clone(),
            c: self.c.clone()
        }
    }
}

impl Quadratics {
    pub fn solve(&self) -> (Complex<f32>, Complex<f32>) {
        let d_sqrt = (self.b.powi(2) - Complex::from(4.0)*self.a*self.c).sqrt();
        let x1 = (d_sqrt - self.b) / Complex::from(2.0)*self.a;
        let x2 = (d_sqrt + self.b) / Complex::from(2.0)*self.a;
        (x1, x2)
    }
}