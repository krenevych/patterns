package com.company;

public class Main {

    public static void main(String[] args) {
        BasicCameraApp basicCameraApp = new BasicCameraApp();
        basicCameraApp.take();
        basicCameraApp.edit();
        basicCameraApp.save();
        basicCameraApp.performSharing();

        CameraPlusApp cameraPlusApp = new CameraPlusApp();
        cameraPlusApp.take();
        cameraPlusApp.edit();
        cameraPlusApp.save();
        cameraPlusApp.performSharing();
    }
}
