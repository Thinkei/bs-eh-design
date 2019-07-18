[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~title: React.element,
    ~overlay: React.element=?,
    ~className: string=?,
    ~placement: [@bs.string] [
                  | `top
                  | `left
                  | `right
                  | `bottom
                  | `topLeft
                  | `topRight
                  | `bottomLeft
                  | `bottomRight
                  | `leftTop
                  | `leftBottom
                  | `rightTop
                  | `rightBottom
                ]
                  =?,
    ~children: React.element=?
  ) =>
  React.element =
  "Tooltip";
