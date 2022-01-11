package com.company;

public class CameraPlusApp extends PhoneCameraApp {
    public CameraPlusApp() {
        behaviour = new ShareSocial();
    }

    @Override
    void edit() {
        if (image == null){
            System.out.println("Nothing to edit");
            return;
        }

        System.out.println("CameraPlusApp edit: performed advanced edit of picture " + image);
    }
}
