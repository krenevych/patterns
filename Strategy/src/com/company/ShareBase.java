package com.company;

public class ShareBase implements SharingBehaviour{
    @Override
    public void share(String image) {
        System.out.println("ShareBase: Sharing image : " + image);
    }
}
