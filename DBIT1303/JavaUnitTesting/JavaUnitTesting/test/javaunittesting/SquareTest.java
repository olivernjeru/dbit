
package javaunittesting;

import org.junit.Test;
import static org.junit.Assert.*;

public class SquareTest {
    
    public SquareTest() {
    }

    @Test
    public void testSomeMethod() {
    }

    /**
     * Test of area method, of class Square.
     */
    @Test
    public void testArea() {
        Square s=new Square(2);
        double expected=4;
        double actual=s.area();
        assertEquals(expected, actual, 0.00001);
    }

    /**
     * Test of setSideLength method, of class Square.
     */
    @Test
    public void testSetSideLength() {
    }
    
}
