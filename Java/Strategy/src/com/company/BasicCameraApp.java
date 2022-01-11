package com.company;

public class BasicCameraApp extends PhoneCameraApp{

    public BasicCameraApp() {
        behaviour = new ShareBase();
    }

    @Override
    void edit() {
        if (image == null){
            System.out.println("Nothing to edit");
            return;
        }

        System.out.println("BasicCameraApp edit: performed basic edit of picture " + image);
    }
}
