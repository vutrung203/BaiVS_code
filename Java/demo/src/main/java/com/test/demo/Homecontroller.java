package com.test.demo;

import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class Homecontroller {
    @RequestMapping("/")
    public String Index()
    {
        return "Hello";
    }
}
