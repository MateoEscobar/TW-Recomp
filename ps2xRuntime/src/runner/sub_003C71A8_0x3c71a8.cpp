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

// Function: sub_003C71A8
// Address: 0x3c71a8 - 0x3c72d8
void sub_003C71A8_0x3c71a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C71A8_0x3c71a8");
#endif

    switch (ctx->pc) {
        case 0x3c71a8u: goto label_3c71a8;
        case 0x3c71acu: goto label_3c71ac;
        case 0x3c71b0u: goto label_3c71b0;
        case 0x3c71b4u: goto label_3c71b4;
        case 0x3c71b8u: goto label_3c71b8;
        case 0x3c71bcu: goto label_3c71bc;
        case 0x3c71c0u: goto label_3c71c0;
        case 0x3c71c4u: goto label_3c71c4;
        case 0x3c71c8u: goto label_3c71c8;
        case 0x3c71ccu: goto label_3c71cc;
        case 0x3c71d0u: goto label_3c71d0;
        case 0x3c71d4u: goto label_3c71d4;
        case 0x3c71d8u: goto label_3c71d8;
        case 0x3c71dcu: goto label_3c71dc;
        case 0x3c71e0u: goto label_3c71e0;
        case 0x3c71e4u: goto label_3c71e4;
        case 0x3c71e8u: goto label_3c71e8;
        case 0x3c71ecu: goto label_3c71ec;
        case 0x3c71f0u: goto label_3c71f0;
        case 0x3c71f4u: goto label_3c71f4;
        case 0x3c71f8u: goto label_3c71f8;
        case 0x3c71fcu: goto label_3c71fc;
        case 0x3c7200u: goto label_3c7200;
        case 0x3c7204u: goto label_3c7204;
        case 0x3c7208u: goto label_3c7208;
        case 0x3c720cu: goto label_3c720c;
        case 0x3c7210u: goto label_3c7210;
        case 0x3c7214u: goto label_3c7214;
        case 0x3c7218u: goto label_3c7218;
        case 0x3c721cu: goto label_3c721c;
        case 0x3c7220u: goto label_3c7220;
        case 0x3c7224u: goto label_3c7224;
        case 0x3c7228u: goto label_3c7228;
        case 0x3c722cu: goto label_3c722c;
        case 0x3c7230u: goto label_3c7230;
        case 0x3c7234u: goto label_3c7234;
        case 0x3c7238u: goto label_3c7238;
        case 0x3c723cu: goto label_3c723c;
        case 0x3c7240u: goto label_3c7240;
        case 0x3c7244u: goto label_3c7244;
        case 0x3c7248u: goto label_3c7248;
        case 0x3c724cu: goto label_3c724c;
        case 0x3c7250u: goto label_3c7250;
        case 0x3c7254u: goto label_3c7254;
        case 0x3c7258u: goto label_3c7258;
        case 0x3c725cu: goto label_3c725c;
        case 0x3c7260u: goto label_3c7260;
        case 0x3c7264u: goto label_3c7264;
        case 0x3c7268u: goto label_3c7268;
        case 0x3c726cu: goto label_3c726c;
        case 0x3c7270u: goto label_3c7270;
        case 0x3c7274u: goto label_3c7274;
        case 0x3c7278u: goto label_3c7278;
        case 0x3c727cu: goto label_3c727c;
        case 0x3c7280u: goto label_3c7280;
        case 0x3c7284u: goto label_3c7284;
        case 0x3c7288u: goto label_3c7288;
        case 0x3c728cu: goto label_3c728c;
        case 0x3c7290u: goto label_3c7290;
        case 0x3c7294u: goto label_3c7294;
        case 0x3c7298u: goto label_3c7298;
        case 0x3c729cu: goto label_3c729c;
        case 0x3c72a0u: goto label_3c72a0;
        case 0x3c72a4u: goto label_3c72a4;
        case 0x3c72a8u: goto label_3c72a8;
        case 0x3c72acu: goto label_3c72ac;
        case 0x3c72b0u: goto label_3c72b0;
        case 0x3c72b4u: goto label_3c72b4;
        case 0x3c72b8u: goto label_3c72b8;
        case 0x3c72bcu: goto label_3c72bc;
        case 0x3c72c0u: goto label_3c72c0;
        case 0x3c72c4u: goto label_3c72c4;
        case 0x3c72c8u: goto label_3c72c8;
        case 0x3c72ccu: goto label_3c72cc;
        case 0x3c72d0u: goto label_3c72d0;
        case 0x3c72d4u: goto label_3c72d4;
        default: break;
    }

    ctx->pc = 0x3c71a8u;

label_3c71a8:
    // 0x3c71a8: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x3c71a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_3c71ac:
    // 0x3c71ac: 0x7fb10430  sq          $s1, 0x430($sp)
    ctx->pc = 0x3c71acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 17));
label_3c71b0:
    // 0x3c71b0: 0x7fb20420  sq          $s2, 0x420($sp)
    ctx->pc = 0x3c71b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 18));
label_3c71b4:
    // 0x3c71b4: 0x7fb00440  sq          $s0, 0x440($sp)
    ctx->pc = 0x3c71b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 16));
label_3c71b8:
    // 0x3c71b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c71b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c71bc:
    // 0x3c71bc: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3c71bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3c71c0:
    // 0x3c71c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c71c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c71c4:
    // 0x3c71c4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c71c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c71c8:
    // 0x3c71c8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c71c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c71cc:
    // 0x3c71cc: 0x40f809  jalr        $v0
label_3c71d0:
    if (ctx->pc == 0x3C71D0u) {
        ctx->pc = 0x3C71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C71CCu;
        // 0x3c71d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C71D4u;
        goto label_3c71d4;
    }
    ctx->pc = 0x3C71CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C71D4u);
        ctx->pc = 0x3C71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C71CCu;
        // 0x3c71d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C71CCu, 0x3C71D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C71D4u;
label_3c71d4:
    // 0x3c71d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c71d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c71d8:
    // 0x3c71d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c71d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c71dc:
    // 0x3c71dc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3c71dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c71e0:
    // 0x3c71e0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3c71e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c71e4:
    // 0x3c71e4: 0x0  nop
    ctx->pc = 0x3c71e4u;
    // NOP
label_3c71e8:
    // 0x3c71e8: 0x45010034  bc1t        . + 4 + (0x34 << 2)
label_3c71ec:
    if (ctx->pc == 0x3C71ECu) {
        ctx->pc = 0x3C71ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C71E8u;
        // 0x3c71ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C71F0u;
        goto label_3c71f0;
    }
    ctx->pc = 0x3C71E8u;
    {
        const bool branch_taken_0x3c71e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C71ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C71E8u;
        // 0x3c71ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c71e8) {
            ctx->pc = 0x3C72BCu;
            goto label_3c72bc;
        }
    }
    ctx->pc = 0x3C71F0u;
label_3c71f0:
    // 0x3c71f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c71f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c71f4:
    // 0x3c71f4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3c71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3c71f8:
    // 0x3c71f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c71fc:
    // 0x3c71fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c7200:
    // 0x3c7200: 0x0  nop
    ctx->pc = 0x3c7200u;
    // NOP
label_3c7204:
    // 0x3c7204: 0x0  nop
    ctx->pc = 0x3c7204u;
    // NOP
label_3c7208:
    // 0x3c7208: 0x0  nop
    ctx->pc = 0x3c7208u;
    // NOP
label_3c720c:
    // 0x3c720c: 0x0  nop
    ctx->pc = 0x3c720cu;
    // NOP
label_3c7210:
    // 0x3c7210: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3c7214:
    if (ctx->pc == 0x3C7214u) {
        ctx->pc = 0x3C7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7210u;
        // 0x3c7214: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7218u;
        goto label_3c7218;
    }
    ctx->pc = 0x3C7210u;
    {
        const bool branch_taken_0x3c7210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7210u;
        // 0x3c7214: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7210) {
            ctx->pc = 0x3C7200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7200;
        }
    }
    ctx->pc = 0x3C7218u;
label_3c7218:
    // 0x3c7218: 0xc138ddc  jal         func_4E3770
label_3c721c:
    if (ctx->pc == 0x3C721Cu) {
        ctx->pc = 0x3C721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7218u;
        // 0x3c721c: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7220u;
        goto label_3c7220;
    }
    ctx->pc = 0x3C7218u;
    SET_GPR_U32(ctx, 31, 0x3C7220u);
    ctx->pc = 0x3C721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7218u;
    // 0x3c721c: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3C7218u, 0x3C7220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7220u;
label_3c7220:
    // 0x3c7220: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3c7220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3c7224:
    // 0x3c7224: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3c7224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3c7228:
    // 0x3c7228: 0xc0cd4ee  jal         func_3353B8
label_3c722c:
    if (ctx->pc == 0x3C722Cu) {
        ctx->pc = 0x3C722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7228u;
        // 0x3c722c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7230u;
        goto label_3c7230;
    }
    ctx->pc = 0x3C7228u;
    SET_GPR_U32(ctx, 31, 0x3C7230u);
    ctx->pc = 0x3C722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7228u;
    // 0x3c722c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C7228u, 0x3C7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7230u;
label_3c7230:
    // 0x3c7230: 0x24450005  addiu       $a1, $v0, 0x5
    ctx->pc = 0x3c7230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_3c7234:
    // 0x3c7234: 0xc0e858c  jal         func_3A1630
label_3c7238:
    if (ctx->pc == 0x3C7238u) {
        ctx->pc = 0x3C7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7234u;
        // 0x3c7238: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C723Cu;
        goto label_3c723c;
    }
    ctx->pc = 0x3C7234u;
    SET_GPR_U32(ctx, 31, 0x3C723Cu);
    ctx->pc = 0x3C7238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7234u;
    // 0x3c7238: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C7234u, 0x3C723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C723Cu;
label_3c723c:
    // 0x3c723c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3c723cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3c7240:
    // 0x3c7240: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c7240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c7244:
    // 0x3c7244: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c7244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c7248:
    // 0x3c7248: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c7248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c724c:
    // 0x3c724c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c724cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c7250:
    // 0x3c7250: 0xc0cd518  jal         func_335460
label_3c7254:
    if (ctx->pc == 0x3C7254u) {
        ctx->pc = 0x3C7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7250u;
        // 0x3c7254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7258u;
        goto label_3c7258;
    }
    ctx->pc = 0x3C7250u;
    SET_GPR_U32(ctx, 31, 0x3C7258u);
    ctx->pc = 0x3C7254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7250u;
    // 0x3c7254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C7250u, 0x3C7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7258u;
label_3c7258:
    // 0x3c7258: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3c7258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c725c:
    // 0x3c725c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c725cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7260:
    // 0x3c7260: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x3c7260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_3c7264:
    // 0x3c7264: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c7264u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c7268:
    // 0x3c7268: 0xc0cd4ee  jal         func_3353B8
label_3c726c:
    if (ctx->pc == 0x3C726Cu) {
        ctx->pc = 0x3C726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7268u;
        // 0x3c726c: 0xe6410090  swc1        $f1, 0x90($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7270u;
        goto label_3c7270;
    }
    ctx->pc = 0x3C7268u;
    SET_GPR_U32(ctx, 31, 0x3C7270u);
    ctx->pc = 0x3C726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7268u;
    // 0x3c726c: 0xe6410090  swc1        $f1, 0x90($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C7268u, 0x3C7270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7270u;
label_3c7270:
    // 0x3c7270: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c7270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c7274:
    // 0x3c7274: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3c7274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3c7278:
    // 0x3c7278: 0x246344a8  addiu       $v1, $v1, 0x44A8
    ctx->pc = 0x3c7278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17576));
label_3c727c:
    // 0x3c727c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3c727cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_3c7280:
    // 0x3c7280: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3c7280u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3c7284:
    // 0x3c7284: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x3c7284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65280);
label_3c7288:
    // 0x3c7288: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3c7288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3c728c:
    // 0x3c728c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3c728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_3c7290:
    // 0x3c7290: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c7290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c7294:
    // 0x3c7294: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3c7294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c7298:
    // 0x3c7298: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3c7298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_3c729c:
    // 0x3c729c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c729cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c72a0:
    // 0x3c72a0: 0xae430084  sw          $v1, 0x84($s2)
    ctx->pc = 0x3c72a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 3));
label_3c72a4:
    // 0x3c72a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c72a8:
    // 0x3c72a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c72ac:
    // 0x3c72ac: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
label_3c72b0:
    if (ctx->pc == 0x3C72B0u) {
        ctx->pc = 0x3C72B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C72ACu;
        // 0x3c72b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C72B4u;
        goto label_3c72b4;
    }
    ctx->pc = 0x3C72ACu;
    {
        const bool branch_taken_0x3c72ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x3C72B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C72ACu;
        // 0x3c72b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c72ac) {
            ctx->pc = 0x3C72B8u;
            goto label_3c72b8;
        }
    }
    ctx->pc = 0x3C72B4u;
label_3c72b4:
    // 0x3c72b4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3c72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3c72b8:
    // 0x3c72b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c72b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c72bc:
    // 0x3c72bc: 0x7bb00440  lq          $s0, 0x440($sp)
    ctx->pc = 0x3c72bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3c72c0:
    // 0x3c72c0: 0x7bb10430  lq          $s1, 0x430($sp)
    ctx->pc = 0x3c72c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3c72c4:
    // 0x3c72c4: 0x7bb20420  lq          $s2, 0x420($sp)
    ctx->pc = 0x3c72c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3c72c8:
    // 0x3c72c8: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3c72c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3c72cc:
    // 0x3c72cc: 0x3e00008  jr          $ra
label_3c72d0:
    if (ctx->pc == 0x3C72D0u) {
        ctx->pc = 0x3C72D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C72CCu;
        // 0x3c72d0: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C72D4u;
        goto label_3c72d4;
    }
    ctx->pc = 0x3C72CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C72D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C72CCu;
        // 0x3c72d0: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C72CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C72D4u;
label_3c72d4:
    // 0x3c72d4: 0x0  nop
    ctx->pc = 0x3c72d4u;
    // NOP
    ctx->pc = 0x3c72d8u;
}
