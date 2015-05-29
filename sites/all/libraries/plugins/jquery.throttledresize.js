/*
 * throttledresize: special jQuery event that happens at a reduced rate compared to "resize"
 *
 * latest version and complete README available on Github:
 * https://github.com/louisremi/jquery-smartresize
 *
 * Copyright 2012 @louis_remi
 * Licensed under the MIT license.
 *
 * This saved you an hour of work? 
 * Send me music http://www.amazon.co.uk/wishlist/HNTU0468LQON
 */
(function(d){var c=d.event,a,e={_:0},f=0,g,b;a=c.special.throttledresize={setup:function(){d(this).on("resize",a.handler)},teardown:function(){d(this).off("resize",a.handler)},handler:function(k,h){var j=this,i=arguments;g=true;if(!b){setInterval(function(){f++;if(f>a.threshold&&g||h){k.type="throttledresize";c.dispatch.apply(j,i);g=false;f=0}if(f>9){d(e).stop();b=false;f=0}},30);b=true}},threshold:0}})(jQuery);