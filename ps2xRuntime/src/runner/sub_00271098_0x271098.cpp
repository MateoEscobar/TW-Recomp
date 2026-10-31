#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271098
// Address: 0x271098 - 0x271470
void sub_00271098_0x271098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271098_0x271098");
#endif

    switch (ctx->pc) {
        case 0x271098u: goto label_271098;
        case 0x27109cu: goto label_27109c;
        case 0x2710a0u: goto label_2710a0;
        case 0x2710a4u: goto label_2710a4;
        case 0x2710a8u: goto label_2710a8;
        case 0x2710acu: goto label_2710ac;
        case 0x2710b0u: goto label_2710b0;
        case 0x2710b4u: goto label_2710b4;
        case 0x2710b8u: goto label_2710b8;
        case 0x2710bcu: goto label_2710bc;
        case 0x2710c0u: goto label_2710c0;
        case 0x2710c4u: goto label_2710c4;
        case 0x2710c8u: goto label_2710c8;
        case 0x2710ccu: goto label_2710cc;
        case 0x2710d0u: goto label_2710d0;
        case 0x2710d4u: goto label_2710d4;
        case 0x2710d8u: goto label_2710d8;
        case 0x2710dcu: goto label_2710dc;
        case 0x2710e0u: goto label_2710e0;
        case 0x2710e4u: goto label_2710e4;
        case 0x2710e8u: goto label_2710e8;
        case 0x2710ecu: goto label_2710ec;
        case 0x2710f0u: goto label_2710f0;
        case 0x2710f4u: goto label_2710f4;
        case 0x2710f8u: goto label_2710f8;
        case 0x2710fcu: goto label_2710fc;
        case 0x271100u: goto label_271100;
        case 0x271104u: goto label_271104;
        case 0x271108u: goto label_271108;
        case 0x27110cu: goto label_27110c;
        case 0x271110u: goto label_271110;
        case 0x271114u: goto label_271114;
        case 0x271118u: goto label_271118;
        case 0x27111cu: goto label_27111c;
        case 0x271120u: goto label_271120;
        case 0x271124u: goto label_271124;
        case 0x271128u: goto label_271128;
        case 0x27112cu: goto label_27112c;
        case 0x271130u: goto label_271130;
        case 0x271134u: goto label_271134;
        case 0x271138u: goto label_271138;
        case 0x27113cu: goto label_27113c;
        case 0x271140u: goto label_271140;
        case 0x271144u: goto label_271144;
        case 0x271148u: goto label_271148;
        case 0x27114cu: goto label_27114c;
        case 0x271150u: goto label_271150;
        case 0x271154u: goto label_271154;
        case 0x271158u: goto label_271158;
        case 0x27115cu: goto label_27115c;
        case 0x271160u: goto label_271160;
        case 0x271164u: goto label_271164;
        case 0x271168u: goto label_271168;
        case 0x27116cu: goto label_27116c;
        case 0x271170u: goto label_271170;
        case 0x271174u: goto label_271174;
        case 0x271178u: goto label_271178;
        case 0x27117cu: goto label_27117c;
        case 0x271180u: goto label_271180;
        case 0x271184u: goto label_271184;
        case 0x271188u: goto label_271188;
        case 0x27118cu: goto label_27118c;
        case 0x271190u: goto label_271190;
        case 0x271194u: goto label_271194;
        case 0x271198u: goto label_271198;
        case 0x27119cu: goto label_27119c;
        case 0x2711a0u: goto label_2711a0;
        case 0x2711a4u: goto label_2711a4;
        case 0x2711a8u: goto label_2711a8;
        case 0x2711acu: goto label_2711ac;
        case 0x2711b0u: goto label_2711b0;
        case 0x2711b4u: goto label_2711b4;
        case 0x2711b8u: goto label_2711b8;
        case 0x2711bcu: goto label_2711bc;
        case 0x2711c0u: goto label_2711c0;
        case 0x2711c4u: goto label_2711c4;
        case 0x2711c8u: goto label_2711c8;
        case 0x2711ccu: goto label_2711cc;
        case 0x2711d0u: goto label_2711d0;
        case 0x2711d4u: goto label_2711d4;
        case 0x2711d8u: goto label_2711d8;
        case 0x2711dcu: goto label_2711dc;
        case 0x2711e0u: goto label_2711e0;
        case 0x2711e4u: goto label_2711e4;
        case 0x2711e8u: goto label_2711e8;
        case 0x2711ecu: goto label_2711ec;
        case 0x2711f0u: goto label_2711f0;
        case 0x2711f4u: goto label_2711f4;
        case 0x2711f8u: goto label_2711f8;
        case 0x2711fcu: goto label_2711fc;
        case 0x271200u: goto label_271200;
        case 0x271204u: goto label_271204;
        case 0x271208u: goto label_271208;
        case 0x27120cu: goto label_27120c;
        case 0x271210u: goto label_271210;
        case 0x271214u: goto label_271214;
        case 0x271218u: goto label_271218;
        case 0x27121cu: goto label_27121c;
        case 0x271220u: goto label_271220;
        case 0x271224u: goto label_271224;
        case 0x271228u: goto label_271228;
        case 0x27122cu: goto label_27122c;
        case 0x271230u: goto label_271230;
        case 0x271234u: goto label_271234;
        case 0x271238u: goto label_271238;
        case 0x27123cu: goto label_27123c;
        case 0x271240u: goto label_271240;
        case 0x271244u: goto label_271244;
        case 0x271248u: goto label_271248;
        case 0x27124cu: goto label_27124c;
        case 0x271250u: goto label_271250;
        case 0x271254u: goto label_271254;
        case 0x271258u: goto label_271258;
        case 0x27125cu: goto label_27125c;
        case 0x271260u: goto label_271260;
        case 0x271264u: goto label_271264;
        case 0x271268u: goto label_271268;
        case 0x27126cu: goto label_27126c;
        case 0x271270u: goto label_271270;
        case 0x271274u: goto label_271274;
        case 0x271278u: goto label_271278;
        case 0x27127cu: goto label_27127c;
        case 0x271280u: goto label_271280;
        case 0x271284u: goto label_271284;
        case 0x271288u: goto label_271288;
        case 0x27128cu: goto label_27128c;
        case 0x271290u: goto label_271290;
        case 0x271294u: goto label_271294;
        case 0x271298u: goto label_271298;
        case 0x27129cu: goto label_27129c;
        case 0x2712a0u: goto label_2712a0;
        case 0x2712a4u: goto label_2712a4;
        case 0x2712a8u: goto label_2712a8;
        case 0x2712acu: goto label_2712ac;
        case 0x2712b0u: goto label_2712b0;
        case 0x2712b4u: goto label_2712b4;
        case 0x2712b8u: goto label_2712b8;
        case 0x2712bcu: goto label_2712bc;
        case 0x2712c0u: goto label_2712c0;
        case 0x2712c4u: goto label_2712c4;
        case 0x2712c8u: goto label_2712c8;
        case 0x2712ccu: goto label_2712cc;
        case 0x2712d0u: goto label_2712d0;
        case 0x2712d4u: goto label_2712d4;
        case 0x2712d8u: goto label_2712d8;
        case 0x2712dcu: goto label_2712dc;
        case 0x2712e0u: goto label_2712e0;
        case 0x2712e4u: goto label_2712e4;
        case 0x2712e8u: goto label_2712e8;
        case 0x2712ecu: goto label_2712ec;
        case 0x2712f0u: goto label_2712f0;
        case 0x2712f4u: goto label_2712f4;
        case 0x2712f8u: goto label_2712f8;
        case 0x2712fcu: goto label_2712fc;
        case 0x271300u: goto label_271300;
        case 0x271304u: goto label_271304;
        case 0x271308u: goto label_271308;
        case 0x27130cu: goto label_27130c;
        case 0x271310u: goto label_271310;
        case 0x271314u: goto label_271314;
        case 0x271318u: goto label_271318;
        case 0x27131cu: goto label_27131c;
        case 0x271320u: goto label_271320;
        case 0x271324u: goto label_271324;
        case 0x271328u: goto label_271328;
        case 0x27132cu: goto label_27132c;
        case 0x271330u: goto label_271330;
        case 0x271334u: goto label_271334;
        case 0x271338u: goto label_271338;
        case 0x27133cu: goto label_27133c;
        case 0x271340u: goto label_271340;
        case 0x271344u: goto label_271344;
        case 0x271348u: goto label_271348;
        case 0x27134cu: goto label_27134c;
        case 0x271350u: goto label_271350;
        case 0x271354u: goto label_271354;
        case 0x271358u: goto label_271358;
        case 0x27135cu: goto label_27135c;
        case 0x271360u: goto label_271360;
        case 0x271364u: goto label_271364;
        case 0x271368u: goto label_271368;
        case 0x27136cu: goto label_27136c;
        case 0x271370u: goto label_271370;
        case 0x271374u: goto label_271374;
        case 0x271378u: goto label_271378;
        case 0x27137cu: goto label_27137c;
        case 0x271380u: goto label_271380;
        case 0x271384u: goto label_271384;
        case 0x271388u: goto label_271388;
        case 0x27138cu: goto label_27138c;
        case 0x271390u: goto label_271390;
        case 0x271394u: goto label_271394;
        case 0x271398u: goto label_271398;
        case 0x27139cu: goto label_27139c;
        case 0x2713a0u: goto label_2713a0;
        case 0x2713a4u: goto label_2713a4;
        case 0x2713a8u: goto label_2713a8;
        case 0x2713acu: goto label_2713ac;
        case 0x2713b0u: goto label_2713b0;
        case 0x2713b4u: goto label_2713b4;
        case 0x2713b8u: goto label_2713b8;
        case 0x2713bcu: goto label_2713bc;
        case 0x2713c0u: goto label_2713c0;
        case 0x2713c4u: goto label_2713c4;
        case 0x2713c8u: goto label_2713c8;
        case 0x2713ccu: goto label_2713cc;
        case 0x2713d0u: goto label_2713d0;
        case 0x2713d4u: goto label_2713d4;
        case 0x2713d8u: goto label_2713d8;
        case 0x2713dcu: goto label_2713dc;
        case 0x2713e0u: goto label_2713e0;
        case 0x2713e4u: goto label_2713e4;
        case 0x2713e8u: goto label_2713e8;
        case 0x2713ecu: goto label_2713ec;
        case 0x2713f0u: goto label_2713f0;
        case 0x2713f4u: goto label_2713f4;
        case 0x2713f8u: goto label_2713f8;
        case 0x2713fcu: goto label_2713fc;
        case 0x271400u: goto label_271400;
        case 0x271404u: goto label_271404;
        case 0x271408u: goto label_271408;
        case 0x27140cu: goto label_27140c;
        case 0x271410u: goto label_271410;
        case 0x271414u: goto label_271414;
        case 0x271418u: goto label_271418;
        case 0x27141cu: goto label_27141c;
        case 0x271420u: goto label_271420;
        case 0x271424u: goto label_271424;
        case 0x271428u: goto label_271428;
        case 0x27142cu: goto label_27142c;
        case 0x271430u: goto label_271430;
        case 0x271434u: goto label_271434;
        case 0x271438u: goto label_271438;
        case 0x27143cu: goto label_27143c;
        case 0x271440u: goto label_271440;
        case 0x271444u: goto label_271444;
        case 0x271448u: goto label_271448;
        case 0x27144cu: goto label_27144c;
        case 0x271450u: goto label_271450;
        case 0x271454u: goto label_271454;
        case 0x271458u: goto label_271458;
        case 0x27145cu: goto label_27145c;
        case 0x271460u: goto label_271460;
        case 0x271464u: goto label_271464;
        case 0x271468u: goto label_271468;
        case 0x27146cu: goto label_27146c;
        default: break;
    }

    ctx->pc = 0x271098u;

label_271098:
    // 0x271098: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x271098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_27109c:
    // 0x27109c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x27109cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2710a0:
    // 0x2710a0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2710a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2710a4:
    // 0x2710a4: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2710a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2710a8:
    // 0x2710a8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2710a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_2710ac:
    // 0x2710ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2710acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2710b0:
    // 0x2710b0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2710b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2710b4:
    // 0x2710b4: 0x262400c4  addiu       $a0, $s1, 0xC4
    ctx->pc = 0x2710b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
label_2710b8:
    // 0x2710b8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2710b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2710bc:
    // 0x2710bc: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2710bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2710c0:
    // 0x2710c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2710c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2710c4:
    // 0x2710c4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2710c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2710c8:
    // 0x2710c8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2710c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_2710cc:
    // 0x2710cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2710ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2710d0:
    // 0x2710d0: 0xc0e409a  jal         func_390268
label_2710d4:
    if (ctx->pc == 0x2710D4u) {
        ctx->pc = 0x2710D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710D0u;
        // 0x2710d4: 0x2610e250  addiu       $s0, $s0, -0x1DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2710D8u;
        goto label_2710d8;
    }
    ctx->pc = 0x2710D0u;
    SET_GPR_U32(ctx, 31, 0x2710D8u);
    ctx->pc = 0x2710D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710D0u;
    // 0x2710d4: 0x2610e250  addiu       $s0, $s0, -0x1DB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2710D0u, 0x2710D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710D8u;
label_2710d8:
    // 0x2710d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2710d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2710dc:
    // 0x2710dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2710dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2710e0:
    // 0x2710e0: 0xc041532  jal         func_1054C8
label_2710e4:
    if (ctx->pc == 0x2710E4u) {
        ctx->pc = 0x2710E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710E0u;
        // 0x2710e4: 0x8e3500d8  lw          $s5, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2710E8u;
        goto label_2710e8;
    }
    ctx->pc = 0x2710E0u;
    SET_GPR_U32(ctx, 31, 0x2710E8u);
    ctx->pc = 0x2710E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710E0u;
    // 0x2710e4: 0x8e3500d8  lw          $s5, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2710E0u, 0x2710E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710E8u;
label_2710e8:
    // 0x2710e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2710e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2710ec:
    // 0x2710ec: 0xc041532  jal         func_1054C8
label_2710f0:
    if (ctx->pc == 0x2710F0u) {
        ctx->pc = 0x2710F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710ECu;
        // 0x2710f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2710F4u;
        goto label_2710f4;
    }
    ctx->pc = 0x2710ECu;
    SET_GPR_U32(ctx, 31, 0x2710F4u);
    ctx->pc = 0x2710F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710ECu;
    // 0x2710f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2710ECu, 0x2710F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710F4u;
label_2710f4:
    // 0x2710f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2710f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2710f8:
    // 0x2710f8: 0xc041532  jal         func_1054C8
label_2710fc:
    if (ctx->pc == 0x2710FCu) {
        ctx->pc = 0x2710FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710F8u;
        // 0x2710fc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271100u;
        goto label_271100;
    }
    ctx->pc = 0x2710F8u;
    SET_GPR_U32(ctx, 31, 0x271100u);
    ctx->pc = 0x2710FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710F8u;
    // 0x2710fc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2710F8u, 0x271100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271100u;
label_271100:
    // 0x271100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271104:
    // 0x271104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271108:
    // 0x271108: 0xc089998  jal         func_226660
label_27110c:
    if (ctx->pc == 0x27110Cu) {
        ctx->pc = 0x27110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271108u;
        // 0x27110c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271110u;
        goto label_271110;
    }
    ctx->pc = 0x271108u;
    SET_GPR_U32(ctx, 31, 0x271110u);
    ctx->pc = 0x27110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271108u;
    // 0x27110c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x271108u, 0x271110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271110u;
label_271110:
    // 0x271110: 0x544000cd  bnel        $v0, $zero, . + 4 + (0xCD << 2)
label_271114:
    if (ctx->pc == 0x271114u) {
        ctx->pc = 0x271114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271110u;
        // 0x271114: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271118u;
        goto label_271118;
    }
    ctx->pc = 0x271110u;
    {
        const bool branch_taken_0x271110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271110) {
            ctx->pc = 0x271114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271110u;
            // 0x271114: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271448u;
            goto label_271448;
        }
    }
    ctx->pc = 0x271118u;
label_271118:
    // 0x271118: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
label_27111c:
    if (ctx->pc == 0x27111Cu) {
        ctx->pc = 0x27111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271118u;
        // 0x27111c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271120u;
        goto label_271120;
    }
    ctx->pc = 0x271118u;
    {
        const bool branch_taken_0x271118 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271118u;
        // 0x27111c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271118) {
            ctx->pc = 0x271174u;
            goto label_271174;
        }
    }
    ctx->pc = 0x271120u;
label_271120:
    // 0x271120: 0xc089998  jal         func_226660
label_271124:
    if (ctx->pc == 0x271124u) {
        ctx->pc = 0x271124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271120u;
        // 0x271124: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271128u;
        goto label_271128;
    }
    ctx->pc = 0x271120u;
    SET_GPR_U32(ctx, 31, 0x271128u);
    ctx->pc = 0x271124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271120u;
    // 0x271124: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x271120u, 0x271128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271128u;
label_271128:
    // 0x271128: 0x544000c7  bnel        $v0, $zero, . + 4 + (0xC7 << 2)
label_27112c:
    if (ctx->pc == 0x27112Cu) {
        ctx->pc = 0x27112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271128u;
        // 0x27112c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271130u;
        goto label_271130;
    }
    ctx->pc = 0x271128u;
    {
        const bool branch_taken_0x271128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271128) {
            ctx->pc = 0x27112Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271128u;
            // 0x27112c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271448u;
            goto label_271448;
        }
    }
    ctx->pc = 0x271130u;
label_271130:
    // 0x271130: 0xc089fac  jal         func_227EB0
label_271134:
    if (ctx->pc == 0x271134u) {
        ctx->pc = 0x271134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271130u;
        // 0x271134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271138u;
        goto label_271138;
    }
    ctx->pc = 0x271130u;
    SET_GPR_U32(ctx, 31, 0x271138u);
    ctx->pc = 0x271134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271130u;
    // 0x271134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x271130u, 0x271138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271138u;
label_271138:
    // 0x271138: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_27113c:
    if (ctx->pc == 0x27113Cu) {
        ctx->pc = 0x271140u;
        goto label_271140;
    }
    ctx->pc = 0x271138u;
    {
        const bool branch_taken_0x271138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271138) {
            ctx->pc = 0x271174u;
            goto label_271174;
        }
    }
    ctx->pc = 0x271140u;
label_271140:
    // 0x271140: 0xc089f76  jal         func_227DD8
label_271144:
    if (ctx->pc == 0x271144u) {
        ctx->pc = 0x271144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271140u;
        // 0x271144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271148u;
        goto label_271148;
    }
    ctx->pc = 0x271140u;
    SET_GPR_U32(ctx, 31, 0x271148u);
    ctx->pc = 0x271144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271140u;
    // 0x271144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x271140u, 0x271148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271148u;
label_271148:
    // 0x271148: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_27114c:
    if (ctx->pc == 0x27114Cu) {
        ctx->pc = 0x271150u;
        goto label_271150;
    }
    ctx->pc = 0x271148u;
    {
        const bool branch_taken_0x271148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271148) {
            ctx->pc = 0x271174u;
            goto label_271174;
        }
    }
    ctx->pc = 0x271150u;
label_271150:
    // 0x271150: 0xc089f86  jal         func_227E18
label_271154:
    if (ctx->pc == 0x271154u) {
        ctx->pc = 0x271154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271150u;
        // 0x271154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271158u;
        goto label_271158;
    }
    ctx->pc = 0x271150u;
    SET_GPR_U32(ctx, 31, 0x271158u);
    ctx->pc = 0x271154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271150u;
    // 0x271154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x271150u, 0x271158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271158u;
label_271158:
    // 0x271158: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_27115c:
    if (ctx->pc == 0x27115Cu) {
        ctx->pc = 0x27115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271158u;
        // 0x27115c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271160u;
        goto label_271160;
    }
    ctx->pc = 0x271158u;
    {
        const bool branch_taken_0x271158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271158u;
        // 0x27115c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271158) {
            ctx->pc = 0x271174u;
            goto label_271174;
        }
    }
    ctx->pc = 0x271160u;
label_271160:
    // 0x271160: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x271160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271164:
    // 0x271164: 0xc08ae58  jal         func_22B960
label_271168:
    if (ctx->pc == 0x271168u) {
        ctx->pc = 0x271168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271164u;
        // 0x271168: 0x240600f5  addiu       $a2, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27116Cu;
        goto label_27116c;
    }
    ctx->pc = 0x271164u;
    SET_GPR_U32(ctx, 31, 0x27116Cu);
    ctx->pc = 0x271168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271164u;
    // 0x271168: 0x240600f5  addiu       $a2, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B960u, 0x271164u, 0x27116Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27116Cu;
label_27116c:
    // 0x27116c: 0x1000000f  b           . + 4 + (0xF << 2)
label_271170:
    if (ctx->pc == 0x271170u) {
        ctx->pc = 0x271174u;
        goto label_271174;
    }
    ctx->pc = 0x27116Cu;
    {
        const bool branch_taken_0x27116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27116c) {
            ctx->pc = 0x2711ACu;
            goto label_2711ac;
        }
    }
    ctx->pc = 0x271174u;
label_271174:
    // 0x271174: 0xc095018  jal         func_254060
label_271178:
    if (ctx->pc == 0x271178u) {
        ctx->pc = 0x271178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271174u;
        // 0x271178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27117Cu;
        goto label_27117c;
    }
    ctx->pc = 0x271174u;
    SET_GPR_U32(ctx, 31, 0x27117Cu);
    ctx->pc = 0x271178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271174u;
    // 0x271178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x271174u, 0x27117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27117Cu;
label_27117c:
    // 0x27117c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x27117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_271180:
    // 0x271180: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_271184:
    if (ctx->pc == 0x271184u) {
        ctx->pc = 0x271184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271180u;
        // 0x271184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271188u;
        goto label_271188;
    }
    ctx->pc = 0x271180u;
    {
        const bool branch_taken_0x271180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x271184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271180u;
        // 0x271184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271180) {
            ctx->pc = 0x271198u;
            goto label_271198;
        }
    }
    ctx->pc = 0x271188u;
label_271188:
    // 0x271188: 0xc094fca  jal         func_253F28
label_27118c:
    if (ctx->pc == 0x27118Cu) {
        ctx->pc = 0x27118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271188u;
        // 0x27118c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271190u;
        goto label_271190;
    }
    ctx->pc = 0x271188u;
    SET_GPR_U32(ctx, 31, 0x271190u);
    ctx->pc = 0x27118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271188u;
    // 0x27118c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x271188u, 0x271190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271190u;
label_271190:
    // 0x271190: 0x10000004  b           . + 4 + (0x4 << 2)
label_271194:
    if (ctx->pc == 0x271194u) {
        ctx->pc = 0x271194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271190u;
        // 0x271194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271198u;
        goto label_271198;
    }
    ctx->pc = 0x271190u;
    {
        const bool branch_taken_0x271190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271190u;
        // 0x271194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271190) {
            ctx->pc = 0x2711A4u;
            goto label_2711a4;
        }
    }
    ctx->pc = 0x271198u;
label_271198:
    // 0x271198: 0xc094fde  jal         func_253F78
label_27119c:
    if (ctx->pc == 0x27119Cu) {
        ctx->pc = 0x27119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271198u;
        // 0x27119c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2711A0u;
        goto label_2711a0;
    }
    ctx->pc = 0x271198u;
    SET_GPR_U32(ctx, 31, 0x2711A0u);
    ctx->pc = 0x27119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271198u;
    // 0x27119c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x271198u, 0x2711A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711A0u;
label_2711a0:
    // 0x2711a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2711a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2711a4:
    // 0x2711a4: 0xc089988  jal         func_226620
label_2711a8:
    if (ctx->pc == 0x2711A8u) {
        ctx->pc = 0x2711A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711A4u;
        // 0x2711a8: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2711ACu;
        goto label_2711ac;
    }
    ctx->pc = 0x2711A4u;
    SET_GPR_U32(ctx, 31, 0x2711ACu);
    ctx->pc = 0x2711A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2711A4u;
    // 0x2711a8: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x2711A4u, 0x2711ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711ACu;
label_2711ac:
    // 0x2711ac: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_2711b0:
    if (ctx->pc == 0x2711B0u) {
        ctx->pc = 0x2711B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711ACu;
        // 0x2711b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2711B4u;
        goto label_2711b4;
    }
    ctx->pc = 0x2711ACu;
    {
        const bool branch_taken_0x2711ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2711B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711ACu;
        // 0x2711b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711ac) {
            ctx->pc = 0x2711D0u;
            goto label_2711d0;
        }
    }
    ctx->pc = 0x2711B4u;
label_2711b4:
    // 0x2711b4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2711b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2711b8:
    // 0x2711b8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2711b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2711bc:
    // 0x2711bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2711bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2711c0:
    // 0x2711c0: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x2711c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2711c4:
    // 0x2711c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2711c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2711c8:
    // 0x2711c8: 0xc04159e  jal         func_105678
label_2711cc:
    if (ctx->pc == 0x2711CCu) {
        ctx->pc = 0x2711CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711C8u;
        // 0x2711cc: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2711D0u;
        goto label_2711d0;
    }
    ctx->pc = 0x2711C8u;
    SET_GPR_U32(ctx, 31, 0x2711D0u);
    ctx->pc = 0x2711CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2711C8u;
    // 0x2711cc: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2711C8u, 0x2711D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711D0u;
label_2711d0:
    // 0x2711d0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x2711d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2711d4:
    // 0x2711d4: 0x2416000b  addiu       $s6, $zero, 0xB
    ctx->pc = 0x2711d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2711d8:
    // 0x2711d8: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
label_2711dc:
    if (ctx->pc == 0x2711DCu) {
        ctx->pc = 0x2711DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711D8u;
        // 0x2711dc: 0xac560018  sw          $s6, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2711E0u;
        goto label_2711e0;
    }
    ctx->pc = 0x2711D8u;
    {
        const bool branch_taken_0x2711d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2711DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711D8u;
        // 0x2711dc: 0xac560018  sw          $s6, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711d8) {
            ctx->pc = 0x271224u;
            goto label_271224;
        }
    }
    ctx->pc = 0x2711E0u;
label_2711e0:
    // 0x2711e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2711e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2711e4:
    // 0x2711e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2711e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2711e8:
    // 0x2711e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2711e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2711ec:
    // 0x2711ec: 0x40f809  jalr        $v0
label_2711f0:
    if (ctx->pc == 0x2711F0u) {
        ctx->pc = 0x2711F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711ECu;
        // 0x2711f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2711F4u;
        goto label_2711f4;
    }
    ctx->pc = 0x2711ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2711F4u);
        ctx->pc = 0x2711F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711ECu;
        // 0x2711f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2711ECu, 0x2711F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2711F4u;
label_2711f4:
    // 0x2711f4: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x2711f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_2711f8:
    // 0x2711f8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2711f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2711fc:
    // 0x2711fc: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x2711fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_271200:
    // 0x271200: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_271204:
    // 0x271204: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x271204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271208:
    // 0x271208: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x271208u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27120c:
    // 0x27120c: 0x254a1028  addiu       $t2, $t2, 0x1028
    ctx->pc = 0x27120cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4136));
label_271210:
    // 0x271210: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271214:
    // 0x271214: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x271214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_271218:
    // 0x271218: 0x240600f4  addiu       $a2, $zero, 0xF4
    ctx->pc = 0x271218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_27121c:
    // 0x27121c: 0xc041664  jal         func_105990
label_271220:
    if (ctx->pc == 0x271220u) {
        ctx->pc = 0x271220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27121Cu;
        // 0x271220: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271224u;
        goto label_271224;
    }
    ctx->pc = 0x27121Cu;
    SET_GPR_U32(ctx, 31, 0x271224u);
    ctx->pc = 0x271220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27121Cu;
    // 0x271220: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x27121Cu, 0x271224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271224u;
label_271224:
    // 0x271224: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_271228:
    if (ctx->pc == 0x271228u) {
        ctx->pc = 0x271228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271224u;
        // 0x271228: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27122Cu;
        goto label_27122c;
    }
    ctx->pc = 0x271224u;
    {
        const bool branch_taken_0x271224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x271228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271224u;
        // 0x271228: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271224) {
            ctx->pc = 0x27124Cu;
            goto label_27124c;
        }
    }
    ctx->pc = 0x27122Cu;
label_27122c:
    // 0x27122c: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x27122cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_271230:
    // 0x271230: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x271230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_271234:
    // 0x271234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271238:
    // 0x271238: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x271238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_27123c:
    // 0x27123c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27123cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_271240:
    // 0x271240: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_271244:
    // 0x271244: 0xc041b20  jal         func_106C80
label_271248:
    if (ctx->pc == 0x271248u) {
        ctx->pc = 0x271248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271244u;
        // 0x271248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27124Cu;
        goto label_27124c;
    }
    ctx->pc = 0x271244u;
    SET_GPR_U32(ctx, 31, 0x27124Cu);
    ctx->pc = 0x271248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271244u;
    // 0x271248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x271244u, 0x27124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27124Cu;
label_27124c:
    // 0x27124c: 0xc05d484  jal         func_175210
label_271250:
    if (ctx->pc == 0x271250u) {
        ctx->pc = 0x271250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27124Cu;
        // 0x271250: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271254u;
        goto label_271254;
    }
    ctx->pc = 0x27124Cu;
    SET_GPR_U32(ctx, 31, 0x271254u);
    ctx->pc = 0x271250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27124Cu;
    // 0x271250: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x27124Cu, 0x271254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271254u;
label_271254:
    // 0x271254: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x271254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_271258:
    // 0x271258: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x271258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_27125c:
    // 0x27125c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x27125cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_271260:
    // 0x271260: 0xa0f809  jalr        $a1
label_271264:
    if (ctx->pc == 0x271264u) {
        ctx->pc = 0x271264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271260u;
        // 0x271264: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271268u;
        goto label_271268;
    }
    ctx->pc = 0x271260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x271268u);
        ctx->pc = 0x271264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271260u;
        // 0x271264: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271260u, 0x271268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271268u;
label_271268:
    // 0x271268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27126c:
    // 0x27126c: 0xc087016  jal         func_21C058
label_271270:
    if (ctx->pc == 0x271270u) {
        ctx->pc = 0x271270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27126Cu;
        // 0x271270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271274u;
        goto label_271274;
    }
    ctx->pc = 0x27126Cu;
    SET_GPR_U32(ctx, 31, 0x271274u);
    ctx->pc = 0x271270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27126Cu;
    // 0x271270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x27126Cu, 0x271274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271274u;
label_271274:
    // 0x271274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271278:
    // 0x271278: 0xc089990  jal         func_226640
label_27127c:
    if (ctx->pc == 0x27127Cu) {
        ctx->pc = 0x27127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271278u;
        // 0x27127c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271280u;
        goto label_271280;
    }
    ctx->pc = 0x271278u;
    SET_GPR_U32(ctx, 31, 0x271280u);
    ctx->pc = 0x27127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271278u;
    // 0x27127c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x271278u, 0x271280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271280u;
label_271280:
    // 0x271280: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x271280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271284:
    // 0x271284: 0xc05d53a  jal         func_1754E8
label_271288:
    if (ctx->pc == 0x271288u) {
        ctx->pc = 0x271288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271284u;
        // 0x271288: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27128Cu;
        goto label_27128c;
    }
    ctx->pc = 0x271284u;
    SET_GPR_U32(ctx, 31, 0x27128Cu);
    ctx->pc = 0x271288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271284u;
    // 0x271288: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x271284u, 0x27128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27128Cu;
label_27128c:
    // 0x27128c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27128cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_271290:
    // 0x271290: 0xc05d4f6  jal         func_1753D8
label_271294:
    if (ctx->pc == 0x271294u) {
        ctx->pc = 0x271294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271290u;
        // 0x271294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271298u;
        goto label_271298;
    }
    ctx->pc = 0x271290u;
    SET_GPR_U32(ctx, 31, 0x271298u);
    ctx->pc = 0x271294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271290u;
    // 0x271294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x271290u, 0x271298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271298u;
label_271298:
    // 0x271298: 0x5240006b  beql        $s2, $zero, . + 4 + (0x6B << 2)
label_27129c:
    if (ctx->pc == 0x27129Cu) {
        ctx->pc = 0x27129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271298u;
        // 0x27129c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2712A0u;
        goto label_2712a0;
    }
    ctx->pc = 0x271298u;
    {
        const bool branch_taken_0x271298 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x271298) {
            ctx->pc = 0x27129Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271298u;
            // 0x27129c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271448u;
            goto label_271448;
        }
    }
    ctx->pc = 0x2712A0u;
label_2712a0:
    // 0x2712a0: 0xc089fac  jal         func_227EB0
label_2712a4:
    if (ctx->pc == 0x2712A4u) {
        ctx->pc = 0x2712A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712A0u;
        // 0x2712a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2712A8u;
        goto label_2712a8;
    }
    ctx->pc = 0x2712A0u;
    SET_GPR_U32(ctx, 31, 0x2712A8u);
    ctx->pc = 0x2712A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2712A0u;
    // 0x2712a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2712A0u, 0x2712A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2712A8u;
label_2712a8:
    // 0x2712a8: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_2712ac:
    if (ctx->pc == 0x2712ACu) {
        ctx->pc = 0x2712B0u;
        goto label_2712b0;
    }
    ctx->pc = 0x2712A8u;
    {
        const bool branch_taken_0x2712a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2712a8) {
            ctx->pc = 0x271434u;
            goto label_271434;
        }
    }
    ctx->pc = 0x2712B0u;
label_2712b0:
    // 0x2712b0: 0xc089f76  jal         func_227DD8
label_2712b4:
    if (ctx->pc == 0x2712B4u) {
        ctx->pc = 0x2712B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712B0u;
        // 0x2712b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2712B8u;
        goto label_2712b8;
    }
    ctx->pc = 0x2712B0u;
    SET_GPR_U32(ctx, 31, 0x2712B8u);
    ctx->pc = 0x2712B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2712B0u;
    // 0x2712b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2712B0u, 0x2712B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2712B8u;
label_2712b8:
    // 0x2712b8: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
label_2712bc:
    if (ctx->pc == 0x2712BCu) {
        ctx->pc = 0x2712C0u;
        goto label_2712c0;
    }
    ctx->pc = 0x2712B8u;
    {
        const bool branch_taken_0x2712b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2712b8) {
            ctx->pc = 0x271434u;
            goto label_271434;
        }
    }
    ctx->pc = 0x2712C0u;
label_2712c0:
    // 0x2712c0: 0xc089f86  jal         func_227E18
label_2712c4:
    if (ctx->pc == 0x2712C4u) {
        ctx->pc = 0x2712C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712C0u;
        // 0x2712c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2712C8u;
        goto label_2712c8;
    }
    ctx->pc = 0x2712C0u;
    SET_GPR_U32(ctx, 31, 0x2712C8u);
    ctx->pc = 0x2712C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2712C0u;
    // 0x2712c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x2712C0u, 0x2712C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2712C8u;
label_2712c8:
    // 0x2712c8: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
label_2712cc:
    if (ctx->pc == 0x2712CCu) {
        ctx->pc = 0x2712CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712C8u;
        // 0x2712cc: 0x26f0e250  addiu       $s0, $s7, -0x1DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2712D0u;
        goto label_2712d0;
    }
    ctx->pc = 0x2712C8u;
    {
        const bool branch_taken_0x2712c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2712CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712C8u;
        // 0x2712cc: 0x26f0e250  addiu       $s0, $s7, -0x1DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712c8) {
            ctx->pc = 0x271434u;
            goto label_271434;
        }
    }
    ctx->pc = 0x2712D0u;
label_2712d0:
    // 0x2712d0: 0x8e5400d8  lw          $s4, 0xD8($s2)
    ctx->pc = 0x2712d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2712d4:
    // 0x2712d4: 0xc041532  jal         func_1054C8
label_2712d8:
    if (ctx->pc == 0x2712D8u) {
        ctx->pc = 0x2712D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712D4u;
        // 0x2712d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2712DCu;
        goto label_2712dc;
    }
    ctx->pc = 0x2712D4u;
    SET_GPR_U32(ctx, 31, 0x2712DCu);
    ctx->pc = 0x2712D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2712D4u;
    // 0x2712d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2712D4u, 0x2712DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2712DCu;
label_2712dc:
    // 0x2712dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2712dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2712e0:
    // 0x2712e0: 0xc041532  jal         func_1054C8
label_2712e4:
    if (ctx->pc == 0x2712E4u) {
        ctx->pc = 0x2712E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712E0u;
        // 0x2712e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2712E8u;
        goto label_2712e8;
    }
    ctx->pc = 0x2712E0u;
    SET_GPR_U32(ctx, 31, 0x2712E8u);
    ctx->pc = 0x2712E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2712E0u;
    // 0x2712e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2712E0u, 0x2712E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2712E8u;
label_2712e8:
    // 0x2712e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2712e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2712ec:
    // 0x2712ec: 0xc041532  jal         func_1054C8
label_2712f0:
    if (ctx->pc == 0x2712F0u) {
        ctx->pc = 0x2712F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712ECu;
        // 0x2712f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2712F4u;
        goto label_2712f4;
    }
    ctx->pc = 0x2712ECu;
    SET_GPR_U32(ctx, 31, 0x2712F4u);
    ctx->pc = 0x2712F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2712ECu;
    // 0x2712f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2712ECu, 0x2712F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2712F4u;
label_2712f4:
    // 0x2712f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2712f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2712f8:
    // 0x2712f8: 0xc041532  jal         func_1054C8
label_2712fc:
    if (ctx->pc == 0x2712FCu) {
        ctx->pc = 0x2712FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712F8u;
        // 0x2712fc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271300u;
        goto label_271300;
    }
    ctx->pc = 0x2712F8u;
    SET_GPR_U32(ctx, 31, 0x271300u);
    ctx->pc = 0x2712FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2712F8u;
    // 0x2712fc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2712F8u, 0x271300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271300u;
label_271300:
    // 0x271300: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_271304:
    if (ctx->pc == 0x271304u) {
        ctx->pc = 0x271304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271300u;
        // 0x271304: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271308u;
        goto label_271308;
    }
    ctx->pc = 0x271300u;
    {
        const bool branch_taken_0x271300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x271304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271300u;
        // 0x271304: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271300) {
            ctx->pc = 0x271328u;
            goto label_271328;
        }
    }
    ctx->pc = 0x271308u;
label_271308:
    // 0x271308: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x271308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_27130c:
    // 0x27130c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x27130cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_271310:
    // 0x271310: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x271310u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_271314:
    // 0x271314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271318:
    // 0x271318: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x271318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_27131c:
    // 0x27131c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27131cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271320:
    // 0x271320: 0xc04159e  jal         func_105678
label_271324:
    if (ctx->pc == 0x271324u) {
        ctx->pc = 0x271324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271320u;
        // 0x271324: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271328u;
        goto label_271328;
    }
    ctx->pc = 0x271320u;
    SET_GPR_U32(ctx, 31, 0x271328u);
    ctx->pc = 0x271324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271320u;
    // 0x271324: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x271320u, 0x271328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271328u;
label_271328:
    // 0x271328: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x271328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_27132c:
    // 0x27132c: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_271330:
    if (ctx->pc == 0x271330u) {
        ctx->pc = 0x271330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27132Cu;
        // 0x271330: 0xac560018  sw          $s6, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271334u;
        goto label_271334;
    }
    ctx->pc = 0x27132Cu;
    {
        const bool branch_taken_0x27132c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x271330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27132Cu;
        // 0x271330: 0xac560018  sw          $s6, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27132c) {
            ctx->pc = 0x271374u;
            goto label_271374;
        }
    }
    ctx->pc = 0x271334u;
label_271334:
    // 0x271334: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x271334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_271338:
    // 0x271338: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x271338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_27133c:
    // 0x27133c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x27133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_271340:
    // 0x271340: 0x40f809  jalr        $v0
label_271344:
    if (ctx->pc == 0x271344u) {
        ctx->pc = 0x271344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271340u;
        // 0x271344: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271348u;
        goto label_271348;
    }
    ctx->pc = 0x271340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x271348u);
        ctx->pc = 0x271344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271340u;
        // 0x271344: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271340u, 0x271348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271348u;
label_271348:
    // 0x271348: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x271348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_27134c:
    // 0x27134c: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x27134cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_271350:
    // 0x271350: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_271354:
    // 0x271354: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x271354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271358:
    // 0x271358: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x271358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27135c:
    // 0x27135c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27135cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271360:
    // 0x271360: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x271360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271364:
    // 0x271364: 0x240600c7  addiu       $a2, $zero, 0xC7
    ctx->pc = 0x271364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
label_271368:
    // 0x271368: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x271368u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_27136c:
    // 0x27136c: 0xc041664  jal         func_105990
label_271370:
    if (ctx->pc == 0x271370u) {
        ctx->pc = 0x271370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27136Cu;
        // 0x271370: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271374u;
        goto label_271374;
    }
    ctx->pc = 0x27136Cu;
    SET_GPR_U32(ctx, 31, 0x271374u);
    ctx->pc = 0x271370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27136Cu;
    // 0x271370: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x27136Cu, 0x271374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271374u;
label_271374:
    // 0x271374: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
label_271378:
    if (ctx->pc == 0x271378u) {
        ctx->pc = 0x27137Cu;
        goto label_27137c;
    }
    ctx->pc = 0x271374u;
    {
        const bool branch_taken_0x271374 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x271374) {
            ctx->pc = 0x2713B8u;
            goto label_2713b8;
        }
    }
    ctx->pc = 0x27137Cu;
label_27137c:
    // 0x27137c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x27137cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_271380:
    // 0x271380: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x271380u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_271384:
    // 0x271384: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x271384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_271388:
    // 0x271388: 0x40f809  jalr        $v0
label_27138c:
    if (ctx->pc == 0x27138Cu) {
        ctx->pc = 0x27138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271388u;
        // 0x27138c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271390u;
        goto label_271390;
    }
    ctx->pc = 0x271388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x271390u);
        ctx->pc = 0x27138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271388u;
        // 0x27138c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271388u, 0x271390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271390u;
label_271390:
    // 0x271390: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x271390u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_271394:
    // 0x271394: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x271394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_271398:
    // 0x271398: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x271398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27139c:
    // 0x27139c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x27139cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2713a0:
    // 0x2713a0: 0x254a1060  addiu       $t2, $t2, 0x1060
    ctx->pc = 0x2713a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4192));
label_2713a4:
    // 0x2713a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2713a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2713a8:
    // 0x2713a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2713a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2713ac:
    // 0x2713ac: 0x240600f5  addiu       $a2, $zero, 0xF5
    ctx->pc = 0x2713acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
label_2713b0:
    // 0x2713b0: 0xc041664  jal         func_105990
label_2713b4:
    if (ctx->pc == 0x2713B4u) {
        ctx->pc = 0x2713B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713B0u;
        // 0x2713b4: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2713B8u;
        goto label_2713b8;
    }
    ctx->pc = 0x2713B0u;
    SET_GPR_U32(ctx, 31, 0x2713B8u);
    ctx->pc = 0x2713B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713B0u;
    // 0x2713b4: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2713B0u, 0x2713B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713B8u;
label_2713b8:
    // 0x2713b8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2713bc:
    if (ctx->pc == 0x2713BCu) {
        ctx->pc = 0x2713BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713B8u;
        // 0x2713bc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2713C0u;
        goto label_2713c0;
    }
    ctx->pc = 0x2713B8u;
    {
        const bool branch_taken_0x2713b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2713BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713B8u;
        // 0x2713bc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713b8) {
            ctx->pc = 0x2713E0u;
            goto label_2713e0;
        }
    }
    ctx->pc = 0x2713C0u;
label_2713c0:
    // 0x2713c0: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x2713c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2713c4:
    // 0x2713c4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2713c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2713c8:
    // 0x2713c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2713c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2713cc:
    // 0x2713cc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2713ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2713d0:
    // 0x2713d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2713d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2713d4:
    // 0x2713d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2713d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2713d8:
    // 0x2713d8: 0xc041b20  jal         func_106C80
label_2713dc:
    if (ctx->pc == 0x2713DCu) {
        ctx->pc = 0x2713DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713D8u;
        // 0x2713dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2713E0u;
        goto label_2713e0;
    }
    ctx->pc = 0x2713D8u;
    SET_GPR_U32(ctx, 31, 0x2713E0u);
    ctx->pc = 0x2713DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713D8u;
    // 0x2713dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2713D8u, 0x2713E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713E0u;
label_2713e0:
    // 0x2713e0: 0xc05d484  jal         func_175210
label_2713e4:
    if (ctx->pc == 0x2713E4u) {
        ctx->pc = 0x2713E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713E0u;
        // 0x2713e4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2713E8u;
        goto label_2713e8;
    }
    ctx->pc = 0x2713E0u;
    SET_GPR_U32(ctx, 31, 0x2713E8u);
    ctx->pc = 0x2713E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713E0u;
    // 0x2713e4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2713E0u, 0x2713E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713E8u;
label_2713e8:
    // 0x2713e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2713e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2713ec:
    // 0x2713ec: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2713ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2713f0:
    // 0x2713f0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2713f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2713f4:
    // 0x2713f4: 0xa0f809  jalr        $a1
label_2713f8:
    if (ctx->pc == 0x2713F8u) {
        ctx->pc = 0x2713F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713F4u;
        // 0x2713f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2713FCu;
        goto label_2713fc;
    }
    ctx->pc = 0x2713F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2713FCu);
        ctx->pc = 0x2713F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713F4u;
        // 0x2713f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2713F4u, 0x2713FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2713FCu;
label_2713fc:
    // 0x2713fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2713fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271400:
    // 0x271400: 0xc087016  jal         func_21C058
label_271404:
    if (ctx->pc == 0x271404u) {
        ctx->pc = 0x271404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271400u;
        // 0x271404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271408u;
        goto label_271408;
    }
    ctx->pc = 0x271400u;
    SET_GPR_U32(ctx, 31, 0x271408u);
    ctx->pc = 0x271404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271400u;
    // 0x271404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x271400u, 0x271408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271408u;
label_271408:
    // 0x271408: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27140c:
    // 0x27140c: 0xc089990  jal         func_226640
label_271410:
    if (ctx->pc == 0x271410u) {
        ctx->pc = 0x271410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27140Cu;
        // 0x271410: 0x3405a000  ori         $a1, $zero, 0xA000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271414u;
        goto label_271414;
    }
    ctx->pc = 0x27140Cu;
    SET_GPR_U32(ctx, 31, 0x271414u);
    ctx->pc = 0x271410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27140Cu;
    // 0x271410: 0x3405a000  ori         $a1, $zero, 0xA000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x27140Cu, 0x271414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271414u;
label_271414:
    // 0x271414: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x271414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_271418:
    // 0x271418: 0xc05d53a  jal         func_1754E8
label_27141c:
    if (ctx->pc == 0x27141Cu) {
        ctx->pc = 0x27141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271418u;
        // 0x27141c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271420u;
        goto label_271420;
    }
    ctx->pc = 0x271418u;
    SET_GPR_U32(ctx, 31, 0x271420u);
    ctx->pc = 0x27141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271418u;
    // 0x27141c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x271418u, 0x271420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271420u;
label_271420:
    // 0x271420: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271424:
    // 0x271424: 0xc05d4f6  jal         func_1753D8
label_271428:
    if (ctx->pc == 0x271428u) {
        ctx->pc = 0x271428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271424u;
        // 0x271428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27142Cu;
        goto label_27142c;
    }
    ctx->pc = 0x271424u;
    SET_GPR_U32(ctx, 31, 0x27142Cu);
    ctx->pc = 0x271428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271424u;
    // 0x271428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x271424u, 0x27142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27142Cu;
label_27142c:
    // 0x27142c: 0x10000006  b           . + 4 + (0x6 << 2)
label_271430:
    if (ctx->pc == 0x271430u) {
        ctx->pc = 0x271430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27142Cu;
        // 0x271430: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271434u;
        goto label_271434;
    }
    ctx->pc = 0x27142Cu;
    {
        const bool branch_taken_0x27142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27142Cu;
        // 0x271430: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27142c) {
            ctx->pc = 0x271448u;
            goto label_271448;
        }
    }
    ctx->pc = 0x271434u;
label_271434:
    // 0x271434: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_271438:
    if (ctx->pc == 0x271438u) {
        ctx->pc = 0x271438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271434u;
        // 0x271438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27143Cu;
        goto label_27143c;
    }
    ctx->pc = 0x271434u;
    {
        const bool branch_taken_0x271434 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x271438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271434u;
        // 0x271438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271434) {
            ctx->pc = 0x271444u;
            goto label_271444;
        }
    }
    ctx->pc = 0x27143Cu;
label_27143c:
    // 0x27143c: 0xc089974  jal         func_2265D0
label_271440:
    if (ctx->pc == 0x271440u) {
        ctx->pc = 0x271440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27143Cu;
        // 0x271440: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271444u;
        goto label_271444;
    }
    ctx->pc = 0x27143Cu;
    SET_GPR_U32(ctx, 31, 0x271444u);
    ctx->pc = 0x271440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27143Cu;
    // 0x271440: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x27143Cu, 0x271444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271444u;
label_271444:
    // 0x271444: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x271444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_271448:
    // 0x271448: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x271448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27144c:
    // 0x27144c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x27144cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_271450:
    // 0x271450: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x271450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_271454:
    // 0x271454: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x271454u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_271458:
    // 0x271458: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x271458u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27145c:
    // 0x27145c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x27145cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_271460:
    // 0x271460: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x271460u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_271464:
    // 0x271464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x271464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_271468:
    // 0x271468: 0x3e00008  jr          $ra
label_27146c:
    if (ctx->pc == 0x27146Cu) {
        ctx->pc = 0x27146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271468u;
        // 0x27146c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271470u;
        goto label_fallthrough_0x271468;
    }
    ctx->pc = 0x271468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271468u;
        // 0x27146c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x271468:
    ctx->pc = 0x271470u;
}
