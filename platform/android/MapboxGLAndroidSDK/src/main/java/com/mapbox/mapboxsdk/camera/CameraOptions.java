package com.mapbox.mapboxsdk.camera;

import com.mapbox.mapboxsdk.geometry.LatLng;

public class CameraOptions {

  private LatLng center;
//  private double[] padding;
  private double zoom;
  private double angle;
  private double pitch;

  public CameraOptions(double latitude, double longitude, double zoom, double angle, double pitch) {
    this.center = new LatLng(latitude, longitude);
//    this.padding = new double[] {paddingLeft, paddingTop, paddingRight, paddingBottom};
    this.zoom = zoom;
    this.angle = angle;
    this.pitch = pitch;
  }

  public LatLng getCenter() {
    return center;
  }

  public double[] getPadding() {
    return null;
  }

  public double getZoom() {
    return zoom;
  }

  public double getAngle() {
    return angle;
  }

  public double getPitch() {
    return pitch;
  }
}
