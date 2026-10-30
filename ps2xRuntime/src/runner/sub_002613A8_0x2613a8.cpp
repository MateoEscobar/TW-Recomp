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

// Function: sub_002613A8
// Address: 0x2613a8 - 0x261578
void sub_002613A8_0x2613a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002613A8_0x2613a8");
#endif

    switch (ctx->pc) {
        case 0x2613a8u: goto label_2613a8;
        case 0x2613acu: goto label_2613ac;
        case 0x2613b0u: goto label_2613b0;
        case 0x2613b4u: goto label_2613b4;
        case 0x2613b8u: goto label_2613b8;
        case 0x2613bcu: goto label_2613bc;
        case 0x2613c0u: goto label_2613c0;
        case 0x2613c4u: goto label_2613c4;
        case 0x2613c8u: goto label_2613c8;
        case 0x2613ccu: goto label_2613cc;
        case 0x2613d0u: goto label_2613d0;
        case 0x2613d4u: goto label_2613d4;
        case 0x2613d8u: goto label_2613d8;
        case 0x2613dcu: goto label_2613dc;
        case 0x2613e0u: goto label_2613e0;
        case 0x2613e4u: goto label_2613e4;
        case 0x2613e8u: goto label_2613e8;
        case 0x2613ecu: goto label_2613ec;
        case 0x2613f0u: goto label_2613f0;
        case 0x2613f4u: goto label_2613f4;
        case 0x2613f8u: goto label_2613f8;
        case 0x2613fcu: goto label_2613fc;
        case 0x261400u: goto label_261400;
        case 0x261404u: goto label_261404;
        case 0x261408u: goto label_261408;
        case 0x26140cu: goto label_26140c;
        case 0x261410u: goto label_261410;
        case 0x261414u: goto label_261414;
        case 0x261418u: goto label_261418;
        case 0x26141cu: goto label_26141c;
        case 0x261420u: goto label_261420;
        case 0x261424u: goto label_261424;
        case 0x261428u: goto label_261428;
        case 0x26142cu: goto label_26142c;
        case 0x261430u: goto label_261430;
        case 0x261434u: goto label_261434;
        case 0x261438u: goto label_261438;
        case 0x26143cu: goto label_26143c;
        case 0x261440u: goto label_261440;
        case 0x261444u: goto label_261444;
        case 0x261448u: goto label_261448;
        case 0x26144cu: goto label_26144c;
        case 0x261450u: goto label_261450;
        case 0x261454u: goto label_261454;
        case 0x261458u: goto label_261458;
        case 0x26145cu: goto label_26145c;
        case 0x261460u: goto label_261460;
        case 0x261464u: goto label_261464;
        case 0x261468u: goto label_261468;
        case 0x26146cu: goto label_26146c;
        case 0x261470u: goto label_261470;
        case 0x261474u: goto label_261474;
        case 0x261478u: goto label_261478;
        case 0x26147cu: goto label_26147c;
        case 0x261480u: goto label_261480;
        case 0x261484u: goto label_261484;
        case 0x261488u: goto label_261488;
        case 0x26148cu: goto label_26148c;
        case 0x261490u: goto label_261490;
        case 0x261494u: goto label_261494;
        case 0x261498u: goto label_261498;
        case 0x26149cu: goto label_26149c;
        case 0x2614a0u: goto label_2614a0;
        case 0x2614a4u: goto label_2614a4;
        case 0x2614a8u: goto label_2614a8;
        case 0x2614acu: goto label_2614ac;
        case 0x2614b0u: goto label_2614b0;
        case 0x2614b4u: goto label_2614b4;
        case 0x2614b8u: goto label_2614b8;
        case 0x2614bcu: goto label_2614bc;
        case 0x2614c0u: goto label_2614c0;
        case 0x2614c4u: goto label_2614c4;
        case 0x2614c8u: goto label_2614c8;
        case 0x2614ccu: goto label_2614cc;
        case 0x2614d0u: goto label_2614d0;
        case 0x2614d4u: goto label_2614d4;
        case 0x2614d8u: goto label_2614d8;
        case 0x2614dcu: goto label_2614dc;
        case 0x2614e0u: goto label_2614e0;
        case 0x2614e4u: goto label_2614e4;
        case 0x2614e8u: goto label_2614e8;
        case 0x2614ecu: goto label_2614ec;
        case 0x2614f0u: goto label_2614f0;
        case 0x2614f4u: goto label_2614f4;
        case 0x2614f8u: goto label_2614f8;
        case 0x2614fcu: goto label_2614fc;
        case 0x261500u: goto label_261500;
        case 0x261504u: goto label_261504;
        case 0x261508u: goto label_261508;
        case 0x26150cu: goto label_26150c;
        case 0x261510u: goto label_261510;
        case 0x261514u: goto label_261514;
        case 0x261518u: goto label_261518;
        case 0x26151cu: goto label_26151c;
        case 0x261520u: goto label_261520;
        case 0x261524u: goto label_261524;
        case 0x261528u: goto label_261528;
        case 0x26152cu: goto label_26152c;
        case 0x261530u: goto label_261530;
        case 0x261534u: goto label_261534;
        case 0x261538u: goto label_261538;
        case 0x26153cu: goto label_26153c;
        case 0x261540u: goto label_261540;
        case 0x261544u: goto label_261544;
        case 0x261548u: goto label_261548;
        case 0x26154cu: goto label_26154c;
        case 0x261550u: goto label_261550;
        case 0x261554u: goto label_261554;
        case 0x261558u: goto label_261558;
        case 0x26155cu: goto label_26155c;
        case 0x261560u: goto label_261560;
        case 0x261564u: goto label_261564;
        case 0x261568u: goto label_261568;
        case 0x26156cu: goto label_26156c;
        case 0x261570u: goto label_261570;
        case 0x261574u: goto label_261574;
        default: break;
    }

    ctx->pc = 0x2613a8u;

label_2613a8:
    // 0x2613a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2613a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2613ac:
    // 0x2613ac: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2613acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2613b0:
    // 0x2613b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2613b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2613b4:
    // 0x2613b4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2613b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2613b8:
    // 0x2613b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2613b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2613bc:
    // 0x2613bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2613bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2613c0:
    // 0x2613c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2613c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2613c4:
    // 0x2613c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2613c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2613c8:
    // 0x2613c8: 0x2454dc40  addiu       $s4, $v0, -0x23C0
    ctx->pc = 0x2613c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
label_2613cc:
    // 0x2613cc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2613ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2613d0:
    // 0x2613d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2613d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2613d4:
    // 0x2613d4: 0xc041532  jal         func_1054C8
label_2613d8:
    if (ctx->pc == 0x2613D8u) {
        ctx->pc = 0x2613D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613D4u;
        // 0x2613d8: 0x8e1300d8  lw          $s3, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2613DCu;
        goto label_2613dc;
    }
    ctx->pc = 0x2613D4u;
    SET_GPR_U32(ctx, 31, 0x2613DCu);
    ctx->pc = 0x2613D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2613D4u;
    // 0x2613d8: 0x8e1300d8  lw          $s3, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2613D4u, 0x2613DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2613DCu;
label_2613dc:
    // 0x2613dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2613dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2613e0:
    // 0x2613e0: 0xc041532  jal         func_1054C8
label_2613e4:
    if (ctx->pc == 0x2613E4u) {
        ctx->pc = 0x2613E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613E0u;
        // 0x2613e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2613E8u;
        goto label_2613e8;
    }
    ctx->pc = 0x2613E0u;
    SET_GPR_U32(ctx, 31, 0x2613E8u);
    ctx->pc = 0x2613E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2613E0u;
    // 0x2613e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2613E0u, 0x2613E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2613E8u;
label_2613e8:
    // 0x2613e8: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2613ec:
    if (ctx->pc == 0x2613ECu) {
        ctx->pc = 0x2613ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613E8u;
        // 0x2613ec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2613F0u;
        goto label_2613f0;
    }
    ctx->pc = 0x2613E8u;
    {
        const bool branch_taken_0x2613e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2613ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613E8u;
        // 0x2613ec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2613e8) {
            ctx->pc = 0x26141Cu;
            goto label_26141c;
        }
    }
    ctx->pc = 0x2613F0u;
label_2613f0:
    // 0x2613f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2613f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2613f4:
    // 0x2613f4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2613f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2613f8:
    // 0x2613f8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2613f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2613fc:
    // 0x2613fc: 0x40f809  jalr        $v0
label_261400:
    if (ctx->pc == 0x261400u) {
        ctx->pc = 0x261400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613FCu;
        // 0x261400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261404u;
        goto label_261404;
    }
    ctx->pc = 0x2613FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261404u);
        ctx->pc = 0x261400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613FCu;
        // 0x261400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2613FCu, 0x261404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261404u;
label_261404:
    // 0x261404: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x261404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261408:
    // 0x261408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26140c:
    // 0x26140c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26140cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_261410:
    // 0x261410: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x261410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_261414:
    // 0x261414: 0xc04159e  jal         func_105678
label_261418:
    if (ctx->pc == 0x261418u) {
        ctx->pc = 0x261418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261414u;
        // 0x261418: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26141Cu;
        goto label_26141c;
    }
    ctx->pc = 0x261414u;
    SET_GPR_U32(ctx, 31, 0x26141Cu);
    ctx->pc = 0x261418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261414u;
    // 0x261418: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x261414u, 0x26141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26141Cu;
label_26141c:
    // 0x26141c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_261420:
    if (ctx->pc == 0x261420u) {
        ctx->pc = 0x261420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26141Cu;
        // 0x261420: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261424u;
        goto label_261424;
    }
    ctx->pc = 0x26141Cu;
    {
        const bool branch_taken_0x26141c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x261420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26141Cu;
        // 0x261420: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26141c) {
            ctx->pc = 0x261444u;
            goto label_261444;
        }
    }
    ctx->pc = 0x261424u;
label_261424:
    // 0x261424: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x261424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_261428:
    // 0x261428: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x261428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26142c:
    // 0x26142c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26142cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261430:
    // 0x261430: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x261430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_261434:
    // 0x261434: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x261434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_261438:
    // 0x261438: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x261438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26143c:
    // 0x26143c: 0xc041b20  jal         func_106C80
label_261440:
    if (ctx->pc == 0x261440u) {
        ctx->pc = 0x261440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26143Cu;
        // 0x261440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261444u;
        goto label_261444;
    }
    ctx->pc = 0x26143Cu;
    SET_GPR_U32(ctx, 31, 0x261444u);
    ctx->pc = 0x261440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26143Cu;
    // 0x261440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26143Cu, 0x261444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261444u;
label_261444:
    // 0x261444: 0xc05d484  jal         func_175210
label_261448:
    if (ctx->pc == 0x261448u) {
        ctx->pc = 0x261448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261444u;
        // 0x261448: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26144Cu;
        goto label_26144c;
    }
    ctx->pc = 0x261444u;
    SET_GPR_U32(ctx, 31, 0x26144Cu);
    ctx->pc = 0x261448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261444u;
    // 0x261448: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x261444u, 0x26144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26144Cu;
label_26144c:
    // 0x26144c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26144cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261450:
    // 0x261450: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x261450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_261454:
    // 0x261454: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x261454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_261458:
    // 0x261458: 0xa0f809  jalr        $a1
label_26145c:
    if (ctx->pc == 0x26145Cu) {
        ctx->pc = 0x26145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261458u;
        // 0x26145c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261460u;
        goto label_261460;
    }
    ctx->pc = 0x261458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x261460u);
        ctx->pc = 0x26145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261458u;
        // 0x26145c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261458u, 0x261460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261460u;
label_261460:
    // 0x261460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261464:
    // 0x261464: 0xc087016  jal         func_21C058
label_261468:
    if (ctx->pc == 0x261468u) {
        ctx->pc = 0x261468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261464u;
        // 0x261468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26146Cu;
        goto label_26146c;
    }
    ctx->pc = 0x261464u;
    SET_GPR_U32(ctx, 31, 0x26146Cu);
    ctx->pc = 0x261468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261464u;
    // 0x261468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x261464u, 0x26146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26146Cu;
label_26146c:
    // 0x26146c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26146cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261470:
    // 0x261470: 0xc05d53a  jal         func_1754E8
label_261474:
    if (ctx->pc == 0x261474u) {
        ctx->pc = 0x261474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261470u;
        // 0x261474: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261478u;
        goto label_261478;
    }
    ctx->pc = 0x261470u;
    SET_GPR_U32(ctx, 31, 0x261478u);
    ctx->pc = 0x261474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261470u;
    // 0x261474: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x261470u, 0x261478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261478u;
label_261478:
    // 0x261478: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x261478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26147c:
    // 0x26147c: 0xc05d4f6  jal         func_1753D8
label_261480:
    if (ctx->pc == 0x261480u) {
        ctx->pc = 0x261480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26147Cu;
        // 0x261480: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261484u;
        goto label_261484;
    }
    ctx->pc = 0x26147Cu;
    SET_GPR_U32(ctx, 31, 0x261484u);
    ctx->pc = 0x261480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26147Cu;
    // 0x261480: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26147Cu, 0x261484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261484u;
label_261484:
    // 0x261484: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x261484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_261488:
    // 0x261488: 0x260400c4  addiu       $a0, $s0, 0xC4
    ctx->pc = 0x261488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
label_26148c:
    // 0x26148c: 0xc0e409a  jal         func_390268
label_261490:
    if (ctx->pc == 0x261490u) {
        ctx->pc = 0x261490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26148Cu;
        // 0x261490: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261494u;
        goto label_261494;
    }
    ctx->pc = 0x26148Cu;
    SET_GPR_U32(ctx, 31, 0x261494u);
    ctx->pc = 0x261490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26148Cu;
    // 0x261490: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26148Cu, 0x261494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261494u;
label_261494:
    // 0x261494: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x261494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261498:
    // 0x261498: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x261498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26149c:
    // 0x26149c: 0xc041532  jal         func_1054C8
label_2614a0:
    if (ctx->pc == 0x2614A0u) {
        ctx->pc = 0x2614A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26149Cu;
        // 0x2614a0: 0x8e1300d8  lw          $s3, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614A4u;
        goto label_2614a4;
    }
    ctx->pc = 0x26149Cu;
    SET_GPR_U32(ctx, 31, 0x2614A4u);
    ctx->pc = 0x2614A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26149Cu;
    // 0x2614a0: 0x8e1300d8  lw          $s3, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26149Cu, 0x2614A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614A4u;
label_2614a4:
    // 0x2614a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2614a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2614a8:
    // 0x2614a8: 0xc041532  jal         func_1054C8
label_2614ac:
    if (ctx->pc == 0x2614ACu) {
        ctx->pc = 0x2614ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614A8u;
        // 0x2614ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614B0u;
        goto label_2614b0;
    }
    ctx->pc = 0x2614A8u;
    SET_GPR_U32(ctx, 31, 0x2614B0u);
    ctx->pc = 0x2614ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2614A8u;
    // 0x2614ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2614A8u, 0x2614B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614B0u;
label_2614b0:
    // 0x2614b0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2614b4:
    if (ctx->pc == 0x2614B4u) {
        ctx->pc = 0x2614B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614B0u;
        // 0x2614b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614B8u;
        goto label_2614b8;
    }
    ctx->pc = 0x2614B0u;
    {
        const bool branch_taken_0x2614b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2614B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614B0u;
        // 0x2614b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2614b0) {
            ctx->pc = 0x2614E4u;
            goto label_2614e4;
        }
    }
    ctx->pc = 0x2614B8u;
label_2614b8:
    // 0x2614b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2614b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2614bc:
    // 0x2614bc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2614bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2614c0:
    // 0x2614c0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2614c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2614c4:
    // 0x2614c4: 0x40f809  jalr        $v0
label_2614c8:
    if (ctx->pc == 0x2614C8u) {
        ctx->pc = 0x2614C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614C4u;
        // 0x2614c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614CCu;
        goto label_2614cc;
    }
    ctx->pc = 0x2614C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2614CCu);
        ctx->pc = 0x2614C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614C4u;
        // 0x2614c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2614C4u, 0x2614CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2614CCu;
label_2614cc:
    // 0x2614cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2614ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2614d0:
    // 0x2614d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2614d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2614d4:
    // 0x2614d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2614d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2614d8:
    // 0x2614d8: 0x24060101  addiu       $a2, $zero, 0x101
    ctx->pc = 0x2614d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_2614dc:
    // 0x2614dc: 0xc04159e  jal         func_105678
label_2614e0:
    if (ctx->pc == 0x2614E0u) {
        ctx->pc = 0x2614E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614DCu;
        // 0x2614e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614E4u;
        goto label_2614e4;
    }
    ctx->pc = 0x2614DCu;
    SET_GPR_U32(ctx, 31, 0x2614E4u);
    ctx->pc = 0x2614E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2614DCu;
    // 0x2614e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2614DCu, 0x2614E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614E4u;
label_2614e4:
    // 0x2614e4: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2614e8:
    if (ctx->pc == 0x2614E8u) {
        ctx->pc = 0x2614E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614E4u;
        // 0x2614e8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614ECu;
        goto label_2614ec;
    }
    ctx->pc = 0x2614E4u;
    {
        const bool branch_taken_0x2614e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2614E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614E4u;
        // 0x2614e8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2614e4) {
            ctx->pc = 0x26150Cu;
            goto label_26150c;
        }
    }
    ctx->pc = 0x2614ECu;
label_2614ec:
    // 0x2614ec: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x2614ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2614f0:
    // 0x2614f0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2614f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2614f4:
    // 0x2614f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2614f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2614f8:
    // 0x2614f8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2614f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2614fc:
    // 0x2614fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2614fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_261500:
    // 0x261500: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x261500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261504:
    // 0x261504: 0xc041b20  jal         func_106C80
label_261508:
    if (ctx->pc == 0x261508u) {
        ctx->pc = 0x261508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261504u;
        // 0x261508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26150Cu;
        goto label_26150c;
    }
    ctx->pc = 0x261504u;
    SET_GPR_U32(ctx, 31, 0x26150Cu);
    ctx->pc = 0x261508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261504u;
    // 0x261508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x261504u, 0x26150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26150Cu;
label_26150c:
    // 0x26150c: 0xc05d484  jal         func_175210
label_261510:
    if (ctx->pc == 0x261510u) {
        ctx->pc = 0x261510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26150Cu;
        // 0x261510: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261514u;
        goto label_261514;
    }
    ctx->pc = 0x26150Cu;
    SET_GPR_U32(ctx, 31, 0x261514u);
    ctx->pc = 0x261510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26150Cu;
    // 0x261510: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26150Cu, 0x261514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261514u;
label_261514:
    // 0x261514: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261518:
    // 0x261518: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x261518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26151c:
    // 0x26151c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26151cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_261520:
    // 0x261520: 0xa0f809  jalr        $a1
label_261524:
    if (ctx->pc == 0x261524u) {
        ctx->pc = 0x261524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261520u;
        // 0x261524: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261528u;
        goto label_261528;
    }
    ctx->pc = 0x261520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x261528u);
        ctx->pc = 0x261524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261520u;
        // 0x261524: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261520u, 0x261528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261528u;
label_261528:
    // 0x261528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26152c:
    // 0x26152c: 0xc087016  jal         func_21C058
label_261530:
    if (ctx->pc == 0x261530u) {
        ctx->pc = 0x261530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26152Cu;
        // 0x261530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261534u;
        goto label_261534;
    }
    ctx->pc = 0x26152Cu;
    SET_GPR_U32(ctx, 31, 0x261534u);
    ctx->pc = 0x261530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26152Cu;
    // 0x261530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26152Cu, 0x261534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261534u;
label_261534:
    // 0x261534: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x261534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261538:
    // 0x261538: 0xc05d53a  jal         func_1754E8
label_26153c:
    if (ctx->pc == 0x26153Cu) {
        ctx->pc = 0x26153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261538u;
        // 0x26153c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261540u;
        goto label_261540;
    }
    ctx->pc = 0x261538u;
    SET_GPR_U32(ctx, 31, 0x261540u);
    ctx->pc = 0x26153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261538u;
    // 0x26153c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x261538u, 0x261540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261540u;
label_261540:
    // 0x261540: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x261540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_261544:
    // 0x261544: 0xc05d4f6  jal         func_1753D8
label_261548:
    if (ctx->pc == 0x261548u) {
        ctx->pc = 0x261548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261544u;
        // 0x261548: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26154Cu;
        goto label_26154c;
    }
    ctx->pc = 0x261544u;
    SET_GPR_U32(ctx, 31, 0x26154Cu);
    ctx->pc = 0x261548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261544u;
    // 0x261548: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x261544u, 0x26154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26154Cu;
label_26154c:
    // 0x26154c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x26154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_261550:
    // 0x261550: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x261550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_261554:
    // 0x261554: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x261554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_261558:
    // 0x261558: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x261558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26155c:
    // 0x26155c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x26155cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_261560:
    // 0x261560: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x261560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_261564:
    // 0x261564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261568:
    // 0x261568: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x261568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_26156c:
    // 0x26156c: 0x3e00008  jr          $ra
label_261570:
    if (ctx->pc == 0x261570u) {
        ctx->pc = 0x261570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26156Cu;
        // 0x261570: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261574u;
        goto label_261574;
    }
    ctx->pc = 0x26156Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26156Cu;
        // 0x261570: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26156Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261574u;
label_261574:
    // 0x261574: 0x0  nop
    ctx->pc = 0x261574u;
    // NOP
    ctx->pc = 0x261578u;
}
