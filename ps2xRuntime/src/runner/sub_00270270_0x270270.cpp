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

// Function: sub_00270270
// Address: 0x270270 - 0x270560
void sub_00270270_0x270270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270270_0x270270");
#endif

    switch (ctx->pc) {
        case 0x270270u: goto label_270270;
        case 0x270274u: goto label_270274;
        case 0x270278u: goto label_270278;
        case 0x27027cu: goto label_27027c;
        case 0x270280u: goto label_270280;
        case 0x270284u: goto label_270284;
        case 0x270288u: goto label_270288;
        case 0x27028cu: goto label_27028c;
        case 0x270290u: goto label_270290;
        case 0x270294u: goto label_270294;
        case 0x270298u: goto label_270298;
        case 0x27029cu: goto label_27029c;
        case 0x2702a0u: goto label_2702a0;
        case 0x2702a4u: goto label_2702a4;
        case 0x2702a8u: goto label_2702a8;
        case 0x2702acu: goto label_2702ac;
        case 0x2702b0u: goto label_2702b0;
        case 0x2702b4u: goto label_2702b4;
        case 0x2702b8u: goto label_2702b8;
        case 0x2702bcu: goto label_2702bc;
        case 0x2702c0u: goto label_2702c0;
        case 0x2702c4u: goto label_2702c4;
        case 0x2702c8u: goto label_2702c8;
        case 0x2702ccu: goto label_2702cc;
        case 0x2702d0u: goto label_2702d0;
        case 0x2702d4u: goto label_2702d4;
        case 0x2702d8u: goto label_2702d8;
        case 0x2702dcu: goto label_2702dc;
        case 0x2702e0u: goto label_2702e0;
        case 0x2702e4u: goto label_2702e4;
        case 0x2702e8u: goto label_2702e8;
        case 0x2702ecu: goto label_2702ec;
        case 0x2702f0u: goto label_2702f0;
        case 0x2702f4u: goto label_2702f4;
        case 0x2702f8u: goto label_2702f8;
        case 0x2702fcu: goto label_2702fc;
        case 0x270300u: goto label_270300;
        case 0x270304u: goto label_270304;
        case 0x270308u: goto label_270308;
        case 0x27030cu: goto label_27030c;
        case 0x270310u: goto label_270310;
        case 0x270314u: goto label_270314;
        case 0x270318u: goto label_270318;
        case 0x27031cu: goto label_27031c;
        case 0x270320u: goto label_270320;
        case 0x270324u: goto label_270324;
        case 0x270328u: goto label_270328;
        case 0x27032cu: goto label_27032c;
        case 0x270330u: goto label_270330;
        case 0x270334u: goto label_270334;
        case 0x270338u: goto label_270338;
        case 0x27033cu: goto label_27033c;
        case 0x270340u: goto label_270340;
        case 0x270344u: goto label_270344;
        case 0x270348u: goto label_270348;
        case 0x27034cu: goto label_27034c;
        case 0x270350u: goto label_270350;
        case 0x270354u: goto label_270354;
        case 0x270358u: goto label_270358;
        case 0x27035cu: goto label_27035c;
        case 0x270360u: goto label_270360;
        case 0x270364u: goto label_270364;
        case 0x270368u: goto label_270368;
        case 0x27036cu: goto label_27036c;
        case 0x270370u: goto label_270370;
        case 0x270374u: goto label_270374;
        case 0x270378u: goto label_270378;
        case 0x27037cu: goto label_27037c;
        case 0x270380u: goto label_270380;
        case 0x270384u: goto label_270384;
        case 0x270388u: goto label_270388;
        case 0x27038cu: goto label_27038c;
        case 0x270390u: goto label_270390;
        case 0x270394u: goto label_270394;
        case 0x270398u: goto label_270398;
        case 0x27039cu: goto label_27039c;
        case 0x2703a0u: goto label_2703a0;
        case 0x2703a4u: goto label_2703a4;
        case 0x2703a8u: goto label_2703a8;
        case 0x2703acu: goto label_2703ac;
        case 0x2703b0u: goto label_2703b0;
        case 0x2703b4u: goto label_2703b4;
        case 0x2703b8u: goto label_2703b8;
        case 0x2703bcu: goto label_2703bc;
        case 0x2703c0u: goto label_2703c0;
        case 0x2703c4u: goto label_2703c4;
        case 0x2703c8u: goto label_2703c8;
        case 0x2703ccu: goto label_2703cc;
        case 0x2703d0u: goto label_2703d0;
        case 0x2703d4u: goto label_2703d4;
        case 0x2703d8u: goto label_2703d8;
        case 0x2703dcu: goto label_2703dc;
        case 0x2703e0u: goto label_2703e0;
        case 0x2703e4u: goto label_2703e4;
        case 0x2703e8u: goto label_2703e8;
        case 0x2703ecu: goto label_2703ec;
        case 0x2703f0u: goto label_2703f0;
        case 0x2703f4u: goto label_2703f4;
        case 0x2703f8u: goto label_2703f8;
        case 0x2703fcu: goto label_2703fc;
        case 0x270400u: goto label_270400;
        case 0x270404u: goto label_270404;
        case 0x270408u: goto label_270408;
        case 0x27040cu: goto label_27040c;
        case 0x270410u: goto label_270410;
        case 0x270414u: goto label_270414;
        case 0x270418u: goto label_270418;
        case 0x27041cu: goto label_27041c;
        case 0x270420u: goto label_270420;
        case 0x270424u: goto label_270424;
        case 0x270428u: goto label_270428;
        case 0x27042cu: goto label_27042c;
        case 0x270430u: goto label_270430;
        case 0x270434u: goto label_270434;
        case 0x270438u: goto label_270438;
        case 0x27043cu: goto label_27043c;
        case 0x270440u: goto label_270440;
        case 0x270444u: goto label_270444;
        case 0x270448u: goto label_270448;
        case 0x27044cu: goto label_27044c;
        case 0x270450u: goto label_270450;
        case 0x270454u: goto label_270454;
        case 0x270458u: goto label_270458;
        case 0x27045cu: goto label_27045c;
        case 0x270460u: goto label_270460;
        case 0x270464u: goto label_270464;
        case 0x270468u: goto label_270468;
        case 0x27046cu: goto label_27046c;
        case 0x270470u: goto label_270470;
        case 0x270474u: goto label_270474;
        case 0x270478u: goto label_270478;
        case 0x27047cu: goto label_27047c;
        case 0x270480u: goto label_270480;
        case 0x270484u: goto label_270484;
        case 0x270488u: goto label_270488;
        case 0x27048cu: goto label_27048c;
        case 0x270490u: goto label_270490;
        case 0x270494u: goto label_270494;
        case 0x270498u: goto label_270498;
        case 0x27049cu: goto label_27049c;
        case 0x2704a0u: goto label_2704a0;
        case 0x2704a4u: goto label_2704a4;
        case 0x2704a8u: goto label_2704a8;
        case 0x2704acu: goto label_2704ac;
        case 0x2704b0u: goto label_2704b0;
        case 0x2704b4u: goto label_2704b4;
        case 0x2704b8u: goto label_2704b8;
        case 0x2704bcu: goto label_2704bc;
        case 0x2704c0u: goto label_2704c0;
        case 0x2704c4u: goto label_2704c4;
        case 0x2704c8u: goto label_2704c8;
        case 0x2704ccu: goto label_2704cc;
        case 0x2704d0u: goto label_2704d0;
        case 0x2704d4u: goto label_2704d4;
        case 0x2704d8u: goto label_2704d8;
        case 0x2704dcu: goto label_2704dc;
        case 0x2704e0u: goto label_2704e0;
        case 0x2704e4u: goto label_2704e4;
        case 0x2704e8u: goto label_2704e8;
        case 0x2704ecu: goto label_2704ec;
        case 0x2704f0u: goto label_2704f0;
        case 0x2704f4u: goto label_2704f4;
        case 0x2704f8u: goto label_2704f8;
        case 0x2704fcu: goto label_2704fc;
        case 0x270500u: goto label_270500;
        case 0x270504u: goto label_270504;
        case 0x270508u: goto label_270508;
        case 0x27050cu: goto label_27050c;
        case 0x270510u: goto label_270510;
        case 0x270514u: goto label_270514;
        case 0x270518u: goto label_270518;
        case 0x27051cu: goto label_27051c;
        case 0x270520u: goto label_270520;
        case 0x270524u: goto label_270524;
        case 0x270528u: goto label_270528;
        case 0x27052cu: goto label_27052c;
        case 0x270530u: goto label_270530;
        case 0x270534u: goto label_270534;
        case 0x270538u: goto label_270538;
        case 0x27053cu: goto label_27053c;
        case 0x270540u: goto label_270540;
        case 0x270544u: goto label_270544;
        case 0x270548u: goto label_270548;
        case 0x27054cu: goto label_27054c;
        case 0x270550u: goto label_270550;
        case 0x270554u: goto label_270554;
        case 0x270558u: goto label_270558;
        case 0x27055cu: goto label_27055c;
        default: break;
    }

    ctx->pc = 0x270270u;

label_270270:
    // 0x270270: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x270270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_270274:
    // 0x270274: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x270274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_270278:
    // 0x270278: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x270278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_27027c:
    // 0x27027c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27027cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_270280:
    // 0x270280: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x270280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_270284:
    // 0x270284: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x270284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_270288:
    // 0x270288: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x270288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27028c:
    // 0x27028c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x27028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_270290:
    // 0x270290: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x270290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_270294:
    // 0x270294: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x270294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_270298:
    // 0x270298: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x270298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_27029c:
    // 0x27029c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2702a0:
    // 0x2702a0: 0xc089b98  jal         func_226E60
label_2702a4:
    if (ctx->pc == 0x2702A4u) {
        ctx->pc = 0x2702A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702A0u;
        // 0x2702a4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2702A8u;
        goto label_2702a8;
    }
    ctx->pc = 0x2702A0u;
    SET_GPR_U32(ctx, 31, 0x2702A8u);
    ctx->pc = 0x2702A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2702A0u;
    // 0x2702a4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x2702A0u, 0x2702A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702A8u;
label_2702a8:
    // 0x2702a8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_2702ac:
    if (ctx->pc == 0x2702ACu) {
        ctx->pc = 0x2702ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702A8u;
        // 0x2702ac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2702B0u;
        goto label_2702b0;
    }
    ctx->pc = 0x2702A8u;
    {
        const bool branch_taken_0x2702a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702A8u;
        // 0x2702ac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702a8) {
            ctx->pc = 0x2702C0u;
            goto label_2702c0;
        }
    }
    ctx->pc = 0x2702B0u;
label_2702b0:
    // 0x2702b0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2702b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2702b4:
    // 0x2702b4: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x2702b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_2702b8:
    // 0x2702b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2702bc:
    if (ctx->pc == 0x2702BCu) {
        ctx->pc = 0x2702BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702B8u;
        // 0x2702bc: 0x24730002  addiu       $s3, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2702C0u;
        goto label_2702c0;
    }
    ctx->pc = 0x2702B8u;
    {
        const bool branch_taken_0x2702b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702B8u;
        // 0x2702bc: 0x24730002  addiu       $s3, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702b8) {
            ctx->pc = 0x2702C8u;
            goto label_2702c8;
        }
    }
    ctx->pc = 0x2702C0u;
label_2702c0:
    // 0x2702c0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2702c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2702c4:
    // 0x2702c4: 0x8c5300b4  lw          $s3, 0xB4($v0)
    ctx->pc = 0x2702c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_2702c8:
    // 0x2702c8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_2702cc:
    if (ctx->pc == 0x2702CCu) {
        ctx->pc = 0x2702CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702C8u;
        // 0x2702cc: 0x8c4200b4  lw          $v0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2702D0u;
        goto label_2702d0;
    }
    ctx->pc = 0x2702C8u;
    {
        const bool branch_taken_0x2702c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702C8u;
        // 0x2702cc: 0x8c4200b4  lw          $v0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702c8) {
            ctx->pc = 0x2702D8u;
            goto label_2702d8;
        }
    }
    ctx->pc = 0x2702D0u;
label_2702d0:
    // 0x2702d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2702d4:
    if (ctx->pc == 0x2702D4u) {
        ctx->pc = 0x2702D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702D0u;
        // 0x2702d4: 0x245e0003  addiu       $fp, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2702D8u;
        goto label_2702d8;
    }
    ctx->pc = 0x2702D0u;
    {
        const bool branch_taken_0x2702d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702D0u;
        // 0x2702d4: 0x245e0003  addiu       $fp, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702d0) {
            ctx->pc = 0x2702DCu;
            goto label_2702dc;
        }
    }
    ctx->pc = 0x2702D8u;
label_2702d8:
    // 0x2702d8: 0x245e0001  addiu       $fp, $v0, 0x1
    ctx->pc = 0x2702d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2702dc:
    // 0x2702dc: 0x12400093  beqz        $s2, . + 4 + (0x93 << 2)
label_2702e0:
    if (ctx->pc == 0x2702E0u) {
        ctx->pc = 0x2702E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702DCu;
        // 0x2702e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2702E4u;
        goto label_2702e4;
    }
    ctx->pc = 0x2702DCu;
    {
        const bool branch_taken_0x2702dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702DCu;
        // 0x2702e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702dc) {
            ctx->pc = 0x27052Cu;
            goto label_27052c;
        }
    }
    ctx->pc = 0x2702E4u;
label_2702e4:
    // 0x2702e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2702e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2702e8:
    // 0x2702e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2702e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2702ec:
    // 0x2702ec: 0xc09da66  jal         func_276998
label_2702f0:
    if (ctx->pc == 0x2702F0u) {
        ctx->pc = 0x2702F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702ECu;
        // 0x2702f0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2702F4u;
        goto label_2702f4;
    }
    ctx->pc = 0x2702ECu;
    SET_GPR_U32(ctx, 31, 0x2702F4u);
    ctx->pc = 0x2702F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2702ECu;
    // 0x2702f0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276998u, 0x2702ECu, 0x2702F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702F4u;
label_2702f4:
    // 0x2702f4: 0x5040008e  beql        $v0, $zero, . + 4 + (0x8E << 2)
label_2702f8:
    if (ctx->pc == 0x2702F8u) {
        ctx->pc = 0x2702F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702F4u;
        // 0x2702f8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2702FCu;
        goto label_2702fc;
    }
    ctx->pc = 0x2702F4u;
    {
        const bool branch_taken_0x2702f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2702f4) {
            ctx->pc = 0x2702F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2702F4u;
            // 0x2702f8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270530u;
            goto label_270530;
        }
    }
    ctx->pc = 0x2702FCu;
label_2702fc:
    // 0x2702fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2702fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270300:
    // 0x270300: 0xc08aff4  jal         func_22BFD0
label_270304:
    if (ctx->pc == 0x270304u) {
        ctx->pc = 0x270304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270300u;
        // 0x270304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270308u;
        goto label_270308;
    }
    ctx->pc = 0x270300u;
    SET_GPR_U32(ctx, 31, 0x270308u);
    ctx->pc = 0x270304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270300u;
    // 0x270304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFD0u, 0x270300u, 0x270308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270308u;
label_270308:
    // 0x270308: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x270308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_27030c:
    // 0x27030c: 0x8e1600d8  lw          $s6, 0xD8($s0)
    ctx->pc = 0x27030cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_270310:
    // 0x270310: 0x2457e250  addiu       $s7, $v0, -0x1DB0
    ctx->pc = 0x270310u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
label_270314:
    // 0x270314: 0xc041532  jal         func_1054C8
label_270318:
    if (ctx->pc == 0x270318u) {
        ctx->pc = 0x270318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270314u;
        // 0x270318: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27031Cu;
        goto label_27031c;
    }
    ctx->pc = 0x270314u;
    SET_GPR_U32(ctx, 31, 0x27031Cu);
    ctx->pc = 0x270318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270314u;
    // 0x270318: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x270314u, 0x27031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27031Cu;
label_27031c:
    // 0x27031c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27031cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_270320:
    // 0x270320: 0xc041532  jal         func_1054C8
label_270324:
    if (ctx->pc == 0x270324u) {
        ctx->pc = 0x270324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270320u;
        // 0x270324: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270328u;
        goto label_270328;
    }
    ctx->pc = 0x270320u;
    SET_GPR_U32(ctx, 31, 0x270328u);
    ctx->pc = 0x270324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270320u;
    // 0x270324: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x270320u, 0x270328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270328u;
label_270328:
    // 0x270328: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x270328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27032c:
    // 0x27032c: 0xc041532  jal         func_1054C8
label_270330:
    if (ctx->pc == 0x270330u) {
        ctx->pc = 0x270330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27032Cu;
        // 0x270330: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270334u;
        goto label_270334;
    }
    ctx->pc = 0x27032Cu;
    SET_GPR_U32(ctx, 31, 0x270334u);
    ctx->pc = 0x270330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27032Cu;
    // 0x270330: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27032Cu, 0x270334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270334u;
label_270334:
    // 0x270334: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_270338:
    if (ctx->pc == 0x270338u) {
        ctx->pc = 0x270338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270334u;
        // 0x270338: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27033Cu;
        goto label_27033c;
    }
    ctx->pc = 0x270334u;
    {
        const bool branch_taken_0x270334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x270338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270334u;
        // 0x270338: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270334) {
            ctx->pc = 0x27035Cu;
            goto label_27035c;
        }
    }
    ctx->pc = 0x27033Cu;
label_27033c:
    // 0x27033c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x27033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_270340:
    // 0x270340: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x270340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_270344:
    // 0x270344: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x270344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_270348:
    // 0x270348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27034c:
    // 0x27034c: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x27034cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_270350:
    // 0x270350: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x270350u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270354:
    // 0x270354: 0xc04159e  jal         func_105678
label_270358:
    if (ctx->pc == 0x270358u) {
        ctx->pc = 0x270358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270354u;
        // 0x270358: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27035Cu;
        goto label_27035c;
    }
    ctx->pc = 0x270354u;
    SET_GPR_U32(ctx, 31, 0x27035Cu);
    ctx->pc = 0x270358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270354u;
    // 0x270358: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x270354u, 0x27035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27035Cu;
label_27035c:
    // 0x27035c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x27035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_270360:
    // 0x270360: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_270364:
    if (ctx->pc == 0x270364u) {
        ctx->pc = 0x270364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270360u;
        // 0x270364: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270368u;
        goto label_270368;
    }
    ctx->pc = 0x270360u;
    {
        const bool branch_taken_0x270360 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x270364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270360u;
        // 0x270364: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270360) {
            ctx->pc = 0x2703A4u;
            goto label_2703a4;
        }
    }
    ctx->pc = 0x270368u;
label_270368:
    // 0x270368: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x270368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27036c:
    // 0x27036c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x27036cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_270370:
    // 0x270370: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x270370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_270374:
    // 0x270374: 0x40f809  jalr        $v0
label_270378:
    if (ctx->pc == 0x270378u) {
        ctx->pc = 0x270378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270374u;
        // 0x270378: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27037Cu;
        goto label_27037c;
    }
    ctx->pc = 0x270374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27037Cu);
        ctx->pc = 0x270378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270374u;
        // 0x270378: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270374u, 0x27037Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27037Cu;
label_27037c:
    // 0x27037c: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x27037cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_270380:
    // 0x270380: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_270384:
    // 0x270384: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x270384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270388:
    // 0x270388: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x270388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27038c:
    // 0x27038c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x27038cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270390:
    // 0x270390: 0x254a00a8  addiu       $t2, $t2, 0xA8
    ctx->pc = 0x270390u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 168));
label_270394:
    // 0x270394: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x270394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270398:
    // 0x270398: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x270398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27039c:
    // 0x27039c: 0xc041664  jal         func_105990
label_2703a0:
    if (ctx->pc == 0x2703A0u) {
        ctx->pc = 0x2703A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27039Cu;
        // 0x2703a0: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703A4u;
        goto label_2703a4;
    }
    ctx->pc = 0x27039Cu;
    SET_GPR_U32(ctx, 31, 0x2703A4u);
    ctx->pc = 0x2703A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27039Cu;
    // 0x2703a0: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x27039Cu, 0x2703A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2703A4u;
label_2703a4:
    // 0x2703a4: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_2703a8:
    if (ctx->pc == 0x2703A8u) {
        ctx->pc = 0x2703A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703A4u;
        // 0x2703a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703ACu;
        goto label_2703ac;
    }
    ctx->pc = 0x2703A4u;
    {
        const bool branch_taken_0x2703a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703A4u;
        // 0x2703a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703a4) {
            ctx->pc = 0x2703C4u;
            goto label_2703c4;
        }
    }
    ctx->pc = 0x2703ACu;
label_2703ac:
    // 0x2703ac: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x2703acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2703b0:
    // 0x2703b0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2703b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2703b4:
    // 0x2703b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2703b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2703b8:
    // 0x2703b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2703b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2703bc:
    // 0x2703bc: 0xc041b20  jal         func_106C80
label_2703c0:
    if (ctx->pc == 0x2703C0u) {
        ctx->pc = 0x2703C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703BCu;
        // 0x2703c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703C4u;
        goto label_2703c4;
    }
    ctx->pc = 0x2703BCu;
    SET_GPR_U32(ctx, 31, 0x2703C4u);
    ctx->pc = 0x2703C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2703BCu;
    // 0x2703c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2703BCu, 0x2703C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2703C4u;
label_2703c4:
    // 0x2703c4: 0xc05d484  jal         func_175210
label_2703c8:
    if (ctx->pc == 0x2703C8u) {
        ctx->pc = 0x2703C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703C4u;
        // 0x2703c8: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703CCu;
        goto label_2703cc;
    }
    ctx->pc = 0x2703C4u;
    SET_GPR_U32(ctx, 31, 0x2703CCu);
    ctx->pc = 0x2703C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2703C4u;
    // 0x2703c8: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2703C4u, 0x2703CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2703CCu;
label_2703cc:
    // 0x2703cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2703ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2703d0:
    // 0x2703d0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2703d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2703d4:
    // 0x2703d4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2703d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2703d8:
    // 0x2703d8: 0xa0f809  jalr        $a1
label_2703dc:
    if (ctx->pc == 0x2703DCu) {
        ctx->pc = 0x2703DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703D8u;
        // 0x2703dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703E0u;
        goto label_2703e0;
    }
    ctx->pc = 0x2703D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2703E0u);
        ctx->pc = 0x2703DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703D8u;
        // 0x2703dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2703D8u, 0x2703E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2703E0u;
label_2703e0:
    // 0x2703e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2703e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2703e4:
    // 0x2703e4: 0xc087016  jal         func_21C058
label_2703e8:
    if (ctx->pc == 0x2703E8u) {
        ctx->pc = 0x2703E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703E4u;
        // 0x2703e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703ECu;
        goto label_2703ec;
    }
    ctx->pc = 0x2703E4u;
    SET_GPR_U32(ctx, 31, 0x2703ECu);
    ctx->pc = 0x2703E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2703E4u;
    // 0x2703e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2703E4u, 0x2703ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2703ECu;
label_2703ec:
    // 0x2703ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2703ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2703f0:
    // 0x2703f0: 0xc089990  jal         func_226640
label_2703f4:
    if (ctx->pc == 0x2703F4u) {
        ctx->pc = 0x2703F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703F0u;
        // 0x2703f4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703F8u;
        goto label_2703f8;
    }
    ctx->pc = 0x2703F0u;
    SET_GPR_U32(ctx, 31, 0x2703F8u);
    ctx->pc = 0x2703F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2703F0u;
    // 0x2703f4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2703F0u, 0x2703F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2703F8u;
label_2703f8:
    // 0x2703f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2703f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2703fc:
    // 0x2703fc: 0xc05d53a  jal         func_1754E8
label_270400:
    if (ctx->pc == 0x270400u) {
        ctx->pc = 0x270400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703FCu;
        // 0x270400: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270404u;
        goto label_270404;
    }
    ctx->pc = 0x2703FCu;
    SET_GPR_U32(ctx, 31, 0x270404u);
    ctx->pc = 0x270400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2703FCu;
    // 0x270400: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2703FCu, 0x270404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270404u;
label_270404:
    // 0x270404: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x270404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_270408:
    // 0x270408: 0xc05d4f6  jal         func_1753D8
label_27040c:
    if (ctx->pc == 0x27040Cu) {
        ctx->pc = 0x27040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270408u;
        // 0x27040c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270410u;
        goto label_270410;
    }
    ctx->pc = 0x270408u;
    SET_GPR_U32(ctx, 31, 0x270410u);
    ctx->pc = 0x27040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270408u;
    // 0x27040c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x270408u, 0x270410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270410u;
label_270410:
    // 0x270410: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x270410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_270414:
    // 0x270414: 0xc041532  jal         func_1054C8
label_270418:
    if (ctx->pc == 0x270418u) {
        ctx->pc = 0x270418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270414u;
        // 0x270418: 0x8e5500d8  lw          $s5, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27041Cu;
        goto label_27041c;
    }
    ctx->pc = 0x270414u;
    SET_GPR_U32(ctx, 31, 0x27041Cu);
    ctx->pc = 0x270418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270414u;
    // 0x270418: 0x8e5500d8  lw          $s5, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x270414u, 0x27041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27041Cu;
label_27041c:
    // 0x27041c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27041cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_270420:
    // 0x270420: 0xc041532  jal         func_1054C8
label_270424:
    if (ctx->pc == 0x270424u) {
        ctx->pc = 0x270424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270420u;
        // 0x270424: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270428u;
        goto label_270428;
    }
    ctx->pc = 0x270420u;
    SET_GPR_U32(ctx, 31, 0x270428u);
    ctx->pc = 0x270424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270420u;
    // 0x270424: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x270420u, 0x270428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270428u;
label_270428:
    // 0x270428: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x270428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27042c:
    // 0x27042c: 0xc041532  jal         func_1054C8
label_270430:
    if (ctx->pc == 0x270430u) {
        ctx->pc = 0x270430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27042Cu;
        // 0x270430: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270434u;
        goto label_270434;
    }
    ctx->pc = 0x27042Cu;
    SET_GPR_U32(ctx, 31, 0x270434u);
    ctx->pc = 0x270430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27042Cu;
    // 0x270430: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27042Cu, 0x270434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270434u;
label_270434:
    // 0x270434: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_270438:
    if (ctx->pc == 0x270438u) {
        ctx->pc = 0x270438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270434u;
        // 0x270438: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27043Cu;
        goto label_27043c;
    }
    ctx->pc = 0x270434u;
    {
        const bool branch_taken_0x270434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x270438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270434u;
        // 0x270438: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270434) {
            ctx->pc = 0x27045Cu;
            goto label_27045c;
        }
    }
    ctx->pc = 0x27043Cu;
label_27043c:
    // 0x27043c: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x27043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_270440:
    // 0x270440: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x270440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_270444:
    // 0x270444: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x270444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_270448:
    // 0x270448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27044c:
    // 0x27044c: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x27044cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_270450:
    // 0x270450: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x270450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270454:
    // 0x270454: 0xc04159e  jal         func_105678
label_270458:
    if (ctx->pc == 0x270458u) {
        ctx->pc = 0x270458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270454u;
        // 0x270458: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27045Cu;
        goto label_27045c;
    }
    ctx->pc = 0x270454u;
    SET_GPR_U32(ctx, 31, 0x27045Cu);
    ctx->pc = 0x270458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270454u;
    // 0x270458: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x270454u, 0x27045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27045Cu;
label_27045c:
    // 0x27045c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x27045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_270460:
    // 0x270460: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
label_270464:
    if (ctx->pc == 0x270464u) {
        ctx->pc = 0x270464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270460u;
        // 0x270464: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270468u;
        goto label_270468;
    }
    ctx->pc = 0x270460u;
    {
        const bool branch_taken_0x270460 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x270464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270460u;
        // 0x270464: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270460) {
            ctx->pc = 0x2704C0u;
            goto label_2704c0;
        }
    }
    ctx->pc = 0x270468u;
label_270468:
    // 0x270468: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x270468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27046c:
    // 0x27046c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x27046cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_270470:
    // 0x270470: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x270470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_270474:
    // 0x270474: 0x40f809  jalr        $v0
label_270478:
    if (ctx->pc == 0x270478u) {
        ctx->pc = 0x270478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270474u;
        // 0x270478: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27047Cu;
        goto label_27047c;
    }
    ctx->pc = 0x270474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27047Cu);
        ctx->pc = 0x270478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270474u;
        // 0x270478: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270474u, 0x27047Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27047Cu;
label_27047c:
    // 0x27047c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x27047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_270480:
    // 0x270480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270484:
    // 0x270484: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x270484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_270488:
    // 0x270488: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x270488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_27048c:
    // 0x27048c: 0x40f809  jalr        $v0
label_270490:
    if (ctx->pc == 0x270490u) {
        ctx->pc = 0x270490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27048Cu;
        // 0x270490: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270494u;
        goto label_270494;
    }
    ctx->pc = 0x27048Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x270494u);
        ctx->pc = 0x270490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27048Cu;
        // 0x270490: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27048Cu, 0x270494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270494u;
label_270494:
    // 0x270494: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x270494u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_270498:
    // 0x270498: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27049c:
    // 0x27049c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27049cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2704a0:
    // 0x2704a0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2704a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2704a4:
    // 0x2704a4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2704a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2704a8:
    // 0x2704a8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2704a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2704ac:
    // 0x2704ac: 0x256b0028  addiu       $t3, $t3, 0x28
    ctx->pc = 0x2704acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
label_2704b0:
    // 0x2704b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2704b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2704b4:
    // 0x2704b4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2704b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2704b8:
    // 0x2704b8: 0xc04229e  jal         func_108A78
label_2704bc:
    if (ctx->pc == 0x2704BCu) {
        ctx->pc = 0x2704BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704B8u;
        // 0x2704bc: 0x3c090001  lui         $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2704C0u;
        goto label_2704c0;
    }
    ctx->pc = 0x2704B8u;
    SET_GPR_U32(ctx, 31, 0x2704C0u);
    ctx->pc = 0x2704BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2704B8u;
    // 0x2704bc: 0x3c090001  lui         $t1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x2704B8u, 0x2704C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704C0u;
label_2704c0:
    // 0x2704c0: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_2704c4:
    if (ctx->pc == 0x2704C4u) {
        ctx->pc = 0x2704C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704C0u;
        // 0x2704c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2704C8u;
        goto label_2704c8;
    }
    ctx->pc = 0x2704C0u;
    {
        const bool branch_taken_0x2704c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2704C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704C0u;
        // 0x2704c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704c0) {
            ctx->pc = 0x2704E0u;
            goto label_2704e0;
        }
    }
    ctx->pc = 0x2704C8u;
label_2704c8:
    // 0x2704c8: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x2704c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2704cc:
    // 0x2704cc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2704ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2704d0:
    // 0x2704d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2704d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2704d4:
    // 0x2704d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2704d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2704d8:
    // 0x2704d8: 0xc041b20  jal         func_106C80
label_2704dc:
    if (ctx->pc == 0x2704DCu) {
        ctx->pc = 0x2704DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704D8u;
        // 0x2704dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2704E0u;
        goto label_2704e0;
    }
    ctx->pc = 0x2704D8u;
    SET_GPR_U32(ctx, 31, 0x2704E0u);
    ctx->pc = 0x2704DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2704D8u;
    // 0x2704dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2704D8u, 0x2704E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704E0u;
label_2704e0:
    // 0x2704e0: 0xc05d484  jal         func_175210
label_2704e4:
    if (ctx->pc == 0x2704E4u) {
        ctx->pc = 0x2704E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704E0u;
        // 0x2704e4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2704E8u;
        goto label_2704e8;
    }
    ctx->pc = 0x2704E0u;
    SET_GPR_U32(ctx, 31, 0x2704E8u);
    ctx->pc = 0x2704E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2704E0u;
    // 0x2704e4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2704E0u, 0x2704E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704E8u;
label_2704e8:
    // 0x2704e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2704e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2704ec:
    // 0x2704ec: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2704ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2704f0:
    // 0x2704f0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2704f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2704f4:
    // 0x2704f4: 0xa0f809  jalr        $a1
label_2704f8:
    if (ctx->pc == 0x2704F8u) {
        ctx->pc = 0x2704F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704F4u;
        // 0x2704f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2704FCu;
        goto label_2704fc;
    }
    ctx->pc = 0x2704F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2704FCu);
        ctx->pc = 0x2704F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704F4u;
        // 0x2704f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2704F4u, 0x2704FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2704FCu;
label_2704fc:
    // 0x2704fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2704fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270500:
    // 0x270500: 0xc087016  jal         func_21C058
label_270504:
    if (ctx->pc == 0x270504u) {
        ctx->pc = 0x270504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270500u;
        // 0x270504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270508u;
        goto label_270508;
    }
    ctx->pc = 0x270500u;
    SET_GPR_U32(ctx, 31, 0x270508u);
    ctx->pc = 0x270504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270500u;
    // 0x270504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x270500u, 0x270508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270508u;
label_270508:
    // 0x270508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27050c:
    // 0x27050c: 0xc089990  jal         func_226640
label_270510:
    if (ctx->pc == 0x270510u) {
        ctx->pc = 0x270510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27050Cu;
        // 0x270510: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270514u;
        goto label_270514;
    }
    ctx->pc = 0x27050Cu;
    SET_GPR_U32(ctx, 31, 0x270514u);
    ctx->pc = 0x270510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27050Cu;
    // 0x270510: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x27050Cu, 0x270514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270514u;
label_270514:
    // 0x270514: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x270514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270518:
    // 0x270518: 0xc05d53a  jal         func_1754E8
label_27051c:
    if (ctx->pc == 0x27051Cu) {
        ctx->pc = 0x27051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270518u;
        // 0x27051c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270520u;
        goto label_270520;
    }
    ctx->pc = 0x270518u;
    SET_GPR_U32(ctx, 31, 0x270520u);
    ctx->pc = 0x27051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270518u;
    // 0x27051c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x270518u, 0x270520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270520u;
label_270520:
    // 0x270520: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_270524:
    // 0x270524: 0xc05d4f6  jal         func_1753D8
label_270528:
    if (ctx->pc == 0x270528u) {
        ctx->pc = 0x270528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270524u;
        // 0x270528: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27052Cu;
        goto label_27052c;
    }
    ctx->pc = 0x270524u;
    SET_GPR_U32(ctx, 31, 0x27052Cu);
    ctx->pc = 0x270528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270524u;
    // 0x270528: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x270524u, 0x27052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27052Cu;
label_27052c:
    // 0x27052c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x27052cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_270530:
    // 0x270530: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x270530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_270534:
    // 0x270534: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x270534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_270538:
    // 0x270538: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x270538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27053c:
    // 0x27053c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27053cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_270540:
    // 0x270540: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x270540u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_270544:
    // 0x270544: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x270544u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_270548:
    // 0x270548: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x270548u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27054c:
    // 0x27054c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x27054cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_270550:
    // 0x270550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_270554:
    // 0x270554: 0x3e00008  jr          $ra
label_270558:
    if (ctx->pc == 0x270558u) {
        ctx->pc = 0x270558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270554u;
        // 0x270558: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27055Cu;
        goto label_27055c;
    }
    ctx->pc = 0x270554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270554u;
        // 0x270558: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27055Cu;
label_27055c:
    // 0x27055c: 0x0  nop
    ctx->pc = 0x27055cu;
    // NOP
    ctx->pc = 0x270560u;
}
