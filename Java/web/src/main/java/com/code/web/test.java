package com.code.web;

import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class test {
    @RequestMapping("/")
    public String Index()
    {
        return "Web nay la ok";
    }
}
