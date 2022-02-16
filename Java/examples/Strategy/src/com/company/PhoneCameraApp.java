package com.company;

import java.text.SimpleDateFormat;
import java.util.Date;

public abstract class PhoneCameraApp {

    protected SharingBehaviour behaviour;
    protected String image;

    abstract void edit();

    public String take() {
        System.out.println("Taking picture...");

        String timestamp = new SimpleDateFormat("yyyyMMDD_HHmmss").format(new Date());
        image = timestamp + ".jpg";
        System.out.println("Picture " + image + " is taken!");
        return image;
    }

    public boolean save() {
        if (image == null){
            return false;
        }

        System.out.println("Picture " + image + ", bas been saved!");

        return true;
    }

    public void performSharing(){
        if (behaviour == null){
            return;
        }

        behaviour.share(image);
    }

}
