// This file is automatically compiled by Webpack, along with any other files
// present in this directory. You're encouraged to place your actual application logic in
// a relevant structure within app/javascript and only use these pack files to reference
// that code so it'll be compiled.

require("@rails/ujs").start()
require("turbolinks").start()
require("@rails/activestorage").start()
require("channels")
require("packs/lightbox.js")
require("trix")
require("@rails/actiontext")


// Uncomment to copy all static images under ../images to the output folder and reference
// them with the image_pack_tag helper in views (e.g <%= image_pack_tag 'rails.png' %>)
// or the `imagePath` JavaScript helper below.
//
// const images = require.context('../images', true)
// const imagePath = (name) => images(name, true)
//= require turbolinks
//= require rails-ujs
//= require popper
//= require bootstrap-sprockets
//= require jquery3
//= require jquery_ujs
//= require_tree
//= require activestorage
import "bootstrap";
import "./src/application.scss";
import 'owl.carousel/dist/assets/owl.carousel.css';
import "assets/stylesheets/lightbox.css"
import './lightbox2/lightbox.js'
import 'owl.carousel';

global.$ = jQuery;

import JQuery from 'jquery';
window.$ = window.JQuery = JQuery;



