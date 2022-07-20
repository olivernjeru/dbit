package racecarstest;

public class Engine {
    int piston_number;
    int carburetor_number;
    int plug_number;
    int cylinder_number;

    public void setPiston_number(int piston_number) {
        this.piston_number = piston_number;
    }

    public void setCarburetor_number(int carburetor_number) {
        this.carburetor_number = carburetor_number;
    }

    public void setPlug_number(int plug_number) {
        this.plug_number = plug_number;
    }

    public void setCylinder_number(int cylinder_number) {
        this.cylinder_number = cylinder_number;
    }

    public int getPiston_number() {
        return piston_number;
    }

    public int getCarburetor_number() {
        return carburetor_number;
    }

    public int getPlug_number() {
        return plug_number;
    }

    public int getCylinder_number() {
        return cylinder_number;
    }
    
}
