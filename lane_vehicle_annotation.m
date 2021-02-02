function In = lane_vehicle_annotation(bboxes, scores, In)
% Copyright 2020 The MathWorks, Inc.
if ~isempty(bboxes)
    In = insertObjectAnnotation(In, 'rectangle', bboxes,scores);
end
end