package com.company;

public class ShareSocial implements SharingBehaviour {

    @Override
    public void share(String image) {
        System.out.println("ShareSocial: Sharing image : " + image);
    }
}
