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

// Function: sub_003CA220
// Address: 0x3ca220 - 0x3ca3c4
void sub_003CA220_0x3ca220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA220_0x3ca220");
#endif

    switch (ctx->pc) {
        case 0x3ca220u: goto label_3ca220;
        case 0x3ca224u: goto label_3ca224;
        case 0x3ca228u: goto label_3ca228;
        case 0x3ca22cu: goto label_3ca22c;
        case 0x3ca230u: goto label_3ca230;
        case 0x3ca234u: goto label_3ca234;
        case 0x3ca238u: goto label_3ca238;
        case 0x3ca23cu: goto label_3ca23c;
        case 0x3ca240u: goto label_3ca240;
        case 0x3ca244u: goto label_3ca244;
        case 0x3ca248u: goto label_3ca248;
        case 0x3ca24cu: goto label_3ca24c;
        case 0x3ca250u: goto label_3ca250;
        case 0x3ca254u: goto label_3ca254;
        case 0x3ca258u: goto label_3ca258;
        case 0x3ca25cu: goto label_3ca25c;
        case 0x3ca260u: goto label_3ca260;
        case 0x3ca264u: goto label_3ca264;
        case 0x3ca268u: goto label_3ca268;
        case 0x3ca26cu: goto label_3ca26c;
        case 0x3ca270u: goto label_3ca270;
        case 0x3ca274u: goto label_3ca274;
        case 0x3ca278u: goto label_3ca278;
        case 0x3ca27cu: goto label_3ca27c;
        case 0x3ca280u: goto label_3ca280;
        case 0x3ca284u: goto label_3ca284;
        case 0x3ca288u: goto label_3ca288;
        case 0x3ca28cu: goto label_3ca28c;
        case 0x3ca290u: goto label_3ca290;
        case 0x3ca294u: goto label_3ca294;
        case 0x3ca298u: goto label_3ca298;
        case 0x3ca29cu: goto label_3ca29c;
        case 0x3ca2a0u: goto label_3ca2a0;
        case 0x3ca2a4u: goto label_3ca2a4;
        case 0x3ca2a8u: goto label_3ca2a8;
        case 0x3ca2acu: goto label_3ca2ac;
        case 0x3ca2b0u: goto label_3ca2b0;
        case 0x3ca2b4u: goto label_3ca2b4;
        case 0x3ca2b8u: goto label_3ca2b8;
        case 0x3ca2bcu: goto label_3ca2bc;
        case 0x3ca2c0u: goto label_3ca2c0;
        case 0x3ca2c4u: goto label_3ca2c4;
        case 0x3ca2c8u: goto label_3ca2c8;
        case 0x3ca2ccu: goto label_3ca2cc;
        case 0x3ca2d0u: goto label_3ca2d0;
        case 0x3ca2d4u: goto label_3ca2d4;
        case 0x3ca2d8u: goto label_3ca2d8;
        case 0x3ca2dcu: goto label_3ca2dc;
        case 0x3ca2e0u: goto label_3ca2e0;
        case 0x3ca2e4u: goto label_3ca2e4;
        case 0x3ca2e8u: goto label_3ca2e8;
        case 0x3ca2ecu: goto label_3ca2ec;
        case 0x3ca2f0u: goto label_3ca2f0;
        case 0x3ca2f4u: goto label_3ca2f4;
        case 0x3ca2f8u: goto label_3ca2f8;
        case 0x3ca2fcu: goto label_3ca2fc;
        case 0x3ca300u: goto label_3ca300;
        case 0x3ca304u: goto label_3ca304;
        case 0x3ca308u: goto label_3ca308;
        case 0x3ca30cu: goto label_3ca30c;
        case 0x3ca310u: goto label_3ca310;
        case 0x3ca314u: goto label_3ca314;
        case 0x3ca318u: goto label_3ca318;
        case 0x3ca31cu: goto label_3ca31c;
        case 0x3ca320u: goto label_3ca320;
        case 0x3ca324u: goto label_3ca324;
        case 0x3ca328u: goto label_3ca328;
        case 0x3ca32cu: goto label_3ca32c;
        case 0x3ca330u: goto label_3ca330;
        case 0x3ca334u: goto label_3ca334;
        case 0x3ca338u: goto label_3ca338;
        case 0x3ca33cu: goto label_3ca33c;
        case 0x3ca340u: goto label_3ca340;
        case 0x3ca344u: goto label_3ca344;
        case 0x3ca348u: goto label_3ca348;
        case 0x3ca34cu: goto label_3ca34c;
        case 0x3ca350u: goto label_3ca350;
        case 0x3ca354u: goto label_3ca354;
        case 0x3ca358u: goto label_3ca358;
        case 0x3ca35cu: goto label_3ca35c;
        case 0x3ca360u: goto label_3ca360;
        case 0x3ca364u: goto label_3ca364;
        case 0x3ca368u: goto label_3ca368;
        case 0x3ca36cu: goto label_3ca36c;
        case 0x3ca370u: goto label_3ca370;
        case 0x3ca374u: goto label_3ca374;
        case 0x3ca378u: goto label_3ca378;
        case 0x3ca37cu: goto label_3ca37c;
        case 0x3ca380u: goto label_3ca380;
        case 0x3ca384u: goto label_3ca384;
        case 0x3ca388u: goto label_3ca388;
        case 0x3ca38cu: goto label_3ca38c;
        case 0x3ca390u: goto label_3ca390;
        case 0x3ca394u: goto label_3ca394;
        case 0x3ca398u: goto label_3ca398;
        case 0x3ca39cu: goto label_3ca39c;
        case 0x3ca3a0u: goto label_3ca3a0;
        case 0x3ca3a4u: goto label_3ca3a4;
        case 0x3ca3a8u: goto label_3ca3a8;
        case 0x3ca3acu: goto label_3ca3ac;
        case 0x3ca3b0u: goto label_3ca3b0;
        case 0x3ca3b4u: goto label_3ca3b4;
        case 0x3ca3b8u: goto label_3ca3b8;
        case 0x3ca3bcu: goto label_3ca3bc;
        case 0x3ca3c0u: goto label_3ca3c0;
        default: break;
    }

    ctx->pc = 0x3ca220u;

label_3ca220:
    // 0x3ca220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ca220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ca224:
    // 0x3ca224: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3ca224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3ca228:
    // 0x3ca228: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3ca228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3ca22c:
    // 0x3ca22c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ca22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ca230:
    // 0x3ca230: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3ca230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3ca234:
    // 0x3ca234: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ca234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ca238:
    // 0x3ca238: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ca238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ca23c:
    // 0x3ca23c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3ca23cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ca240:
    // 0x3ca240: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ca240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ca244:
    // 0x3ca244: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ca244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ca248:
    // 0x3ca248: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ca248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ca24c:
    // 0x3ca24c: 0x40f809  jalr        $v0
label_3ca250:
    if (ctx->pc == 0x3CA250u) {
        ctx->pc = 0x3CA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA24Cu;
        // 0x3ca250: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA254u;
        goto label_3ca254;
    }
    ctx->pc = 0x3CA24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA254u);
        ctx->pc = 0x3CA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA24Cu;
        // 0x3ca250: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA24Cu, 0x3CA254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA254u;
label_3ca254:
    // 0x3ca254: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x3ca254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_3ca258:
    // 0x3ca258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ca258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ca25c:
    // 0x3ca25c: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x3ca25cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_3ca260:
    // 0x3ca260: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_3ca264:
    if (ctx->pc == 0x3CA264u) {
        ctx->pc = 0x3CA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA260u;
        // 0x3ca264: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA268u;
        goto label_3ca268;
    }
    ctx->pc = 0x3CA260u;
    {
        const bool branch_taken_0x3ca260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA260u;
        // 0x3ca264: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca260) {
            ctx->pc = 0x3CA3C4u;
            return;
        }
    }
    ctx->pc = 0x3CA268u;
label_3ca268:
    // 0x3ca268: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ca268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ca26c:
    // 0x3ca26c: 0x244245a0  addiu       $v0, $v0, 0x45A0
    ctx->pc = 0x3ca26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17824));
label_3ca270:
    // 0x3ca270: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ca270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ca274:
    // 0x3ca274: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3ca274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ca278:
    // 0x3ca278: 0x800008  jr          $a0
label_3ca27c:
    if (ctx->pc == 0x3CA27Cu) {
        ctx->pc = 0x3CA280u;
        goto label_3ca280;
    }
    ctx->pc = 0x3CA278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CA280u: goto label_3ca280;
            case 0x3CA290u: goto label_3ca290;
            case 0x3CA2B4u: goto label_3ca2b4;
            case 0x3CA2D0u: goto label_3ca2d0;
            case 0x3CA310u: goto label_3ca310;
            case 0x3CA350u: goto label_3ca350;
            case 0x3CA374u: goto label_3ca374;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA278u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3CA280u;
label_3ca280:
    // 0x3ca280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ca280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ca284:
    // 0x3ca284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ca284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca288:
    // 0x3ca288: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ca28c:
    if (ctx->pc == 0x3CA28Cu) {
        ctx->pc = 0x3CA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA288u;
        // 0x3ca28c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA290u;
        goto label_3ca290;
    }
    ctx->pc = 0x3CA288u;
    {
        const bool branch_taken_0x3ca288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA288u;
        // 0x3ca28c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca288) {
            ctx->pc = 0x3CA2A0u;
            goto label_3ca2a0;
        }
    }
    ctx->pc = 0x3CA290u;
label_3ca290:
    // 0x3ca290: 0xc0ea146  jal         func_3A8518
label_3ca294:
    if (ctx->pc == 0x3CA294u) {
        ctx->pc = 0x3CA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA290u;
        // 0x3ca294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA298u;
        goto label_3ca298;
    }
    ctx->pc = 0x3CA290u;
    SET_GPR_U32(ctx, 31, 0x3CA298u);
    ctx->pc = 0x3CA294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA290u;
    // 0x3ca294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CA290u, 0x3CA298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA298u;
label_3ca298:
    // 0x3ca298: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3ca29c:
    if (ctx->pc == 0x3CA29Cu) {
        ctx->pc = 0x3CA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA298u;
        // 0x3ca29c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA2A0u;
        goto label_3ca2a0;
    }
    ctx->pc = 0x3CA298u;
    {
        const bool branch_taken_0x3ca298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA298u;
        // 0x3ca29c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca298) {
            ctx->pc = 0x3CA2B8u;
            goto label_3ca2b8;
        }
    }
    ctx->pc = 0x3CA2A0u;
label_3ca2a0:
    // 0x3ca2a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ca2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca2a4:
    // 0x3ca2a4: 0xc0f22ca  jal         func_3C8B28
label_3ca2a8:
    if (ctx->pc == 0x3CA2A8u) {
        ctx->pc = 0x3CA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA2A4u;
        // 0x3ca2a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA2ACu;
        goto label_3ca2ac;
    }
    ctx->pc = 0x3CA2A4u;
    SET_GPR_U32(ctx, 31, 0x3CA2ACu);
    ctx->pc = 0x3CA2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA2A4u;
    // 0x3ca2a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C8B28u, 0x3CA2A4u, 0x3CA2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA2ACu;
label_3ca2ac:
    // 0x3ca2ac: 0x10000046  b           . + 4 + (0x46 << 2)
label_3ca2b0:
    if (ctx->pc == 0x3CA2B0u) {
        ctx->pc = 0x3CA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA2ACu;
        // 0x3ca2b0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA2B4u;
        goto label_3ca2b4;
    }
    ctx->pc = 0x3CA2ACu;
    {
        const bool branch_taken_0x3ca2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA2ACu;
        // 0x3ca2b0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca2ac) {
            ctx->pc = 0x3CA3C8u;
            return;
        }
    }
    ctx->pc = 0x3CA2B4u;
label_3ca2b4:
    // 0x3ca2b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3ca2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3ca2b8:
    // 0x3ca2b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ca2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca2bc:
    // 0x3ca2bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ca2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca2c0:
    // 0x3ca2c0: 0xc0f27de  jal         func_3C9F78
label_3ca2c4:
    if (ctx->pc == 0x3CA2C4u) {
        ctx->pc = 0x3CA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA2C0u;
        // 0x3ca2c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA2C8u;
        goto label_3ca2c8;
    }
    ctx->pc = 0x3CA2C0u;
    SET_GPR_U32(ctx, 31, 0x3CA2C8u);
    ctx->pc = 0x3CA2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA2C0u;
    // 0x3ca2c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9F78u, 0x3CA2C0u, 0x3CA2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA2C8u;
label_3ca2c8:
    // 0x3ca2c8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_3ca2cc:
    if (ctx->pc == 0x3CA2CCu) {
        ctx->pc = 0x3CA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA2C8u;
        // 0x3ca2cc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA2D0u;
        goto label_3ca2d0;
    }
    ctx->pc = 0x3CA2C8u;
    {
        const bool branch_taken_0x3ca2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA2C8u;
        // 0x3ca2cc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca2c8) {
            ctx->pc = 0x3CA3C8u;
            return;
        }
    }
    ctx->pc = 0x3CA2D0u;
label_3ca2d0:
    // 0x3ca2d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ca2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca2d4:
    // 0x3ca2d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ca2d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ca2d8:
    // 0x3ca2d8: 0xc0f27de  jal         func_3C9F78
label_3ca2dc:
    if (ctx->pc == 0x3CA2DCu) {
        ctx->pc = 0x3CA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA2D8u;
        // 0x3ca2dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA2E0u;
        goto label_3ca2e0;
    }
    ctx->pc = 0x3CA2D8u;
    SET_GPR_U32(ctx, 31, 0x3CA2E0u);
    ctx->pc = 0x3CA2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA2D8u;
    // 0x3ca2dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9F78u, 0x3CA2D8u, 0x3CA2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA2E0u;
label_3ca2e0:
    // 0x3ca2e0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3ca2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3ca2e4:
    // 0x3ca2e4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3ca2e8:
    if (ctx->pc == 0x3CA2E8u) {
        ctx->pc = 0x3CA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA2E4u;
        // 0x3ca2e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA2ECu;
        goto label_3ca2ec;
    }
    ctx->pc = 0x3CA2E4u;
    {
        const bool branch_taken_0x3ca2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca2e4) {
            ctx->pc = 0x3CA2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CA2E4u;
            // 0x3ca2e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA2F8u;
            goto label_3ca2f8;
        }
    }
    ctx->pc = 0x3CA2ECu;
label_3ca2ec:
    // 0x3ca2ec: 0xc045cfa  jal         func_1173E8
label_3ca2f0:
    if (ctx->pc == 0x3CA2F0u) {
        ctx->pc = 0x3CA2F4u;
        goto label_3ca2f4;
    }
    ctx->pc = 0x3CA2ECu;
    SET_GPR_U32(ctx, 31, 0x3CA2F4u);
    ctx->pc = 0x1173E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1173E8u, 0x3CA2ECu, 0x3CA2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA2F4u;
label_3ca2f4:
    // 0x3ca2f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ca2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ca2f8:
    // 0x3ca2f8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3ca2f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3ca2fc:
    // 0x3ca2fc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3ca2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3ca300:
    // 0x3ca300: 0x60f809  jalr        $v1
label_3ca304:
    if (ctx->pc == 0x3CA304u) {
        ctx->pc = 0x3CA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA300u;
        // 0x3ca304: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA308u;
        goto label_3ca308;
    }
    ctx->pc = 0x3CA300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CA308u);
        ctx->pc = 0x3CA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA300u;
        // 0x3ca304: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA300u, 0x3CA308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA308u;
label_3ca308:
    // 0x3ca308: 0x1000002f  b           . + 4 + (0x2F << 2)
label_3ca30c:
    if (ctx->pc == 0x3CA30Cu) {
        ctx->pc = 0x3CA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA308u;
        // 0x3ca30c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA310u;
        goto label_3ca310;
    }
    ctx->pc = 0x3CA308u;
    {
        const bool branch_taken_0x3ca308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA308u;
        // 0x3ca30c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca308) {
            ctx->pc = 0x3CA3C8u;
            return;
        }
    }
    ctx->pc = 0x3CA310u;
label_3ca310:
    // 0x3ca310: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ca310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ca314:
    // 0x3ca314: 0xc0e90ca  jal         func_3A4328
label_3ca318:
    if (ctx->pc == 0x3CA318u) {
        ctx->pc = 0x3CA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA314u;
        // 0x3ca318: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA31Cu;
        goto label_3ca31c;
    }
    ctx->pc = 0x3CA314u;
    SET_GPR_U32(ctx, 31, 0x3CA31Cu);
    ctx->pc = 0x3CA318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA314u;
    // 0x3ca318: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3CA314u, 0x3CA31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA31Cu;
label_3ca31c:
    // 0x3ca31c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x3ca31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3ca320:
    // 0x3ca320: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3ca320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ca324:
    // 0x3ca324: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ca324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ca328:
    // 0x3ca328: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ca328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca32c:
    // 0x3ca32c: 0xc0e911e  jal         func_3A4478
label_3ca330:
    if (ctx->pc == 0x3CA330u) {
        ctx->pc = 0x3CA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA32Cu;
        // 0x3ca330: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA334u;
        goto label_3ca334;
    }
    ctx->pc = 0x3CA32Cu;
    SET_GPR_U32(ctx, 31, 0x3CA334u);
    ctx->pc = 0x3CA330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA32Cu;
    // 0x3ca330: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3CA32Cu, 0x3CA334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA334u;
label_3ca334:
    // 0x3ca334: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3ca334u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ca338:
    // 0x3ca338: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x3ca338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_3ca33c:
    // 0x3ca33c: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3ca33cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3ca340:
    // 0x3ca340: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3ca340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3ca344:
    // 0x3ca344: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3ca344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3ca348:
    // 0x3ca348: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3ca34c:
    if (ctx->pc == 0x3CA34Cu) {
        ctx->pc = 0x3CA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA348u;
        // 0x3ca34c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA350u;
        goto label_3ca350;
    }
    ctx->pc = 0x3CA348u;
    {
        const bool branch_taken_0x3ca348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA348u;
        // 0x3ca34c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca348) {
            ctx->pc = 0x3CA3C4u;
            return;
        }
    }
    ctx->pc = 0x3CA350u;
label_3ca350:
    // 0x3ca350: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ca350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ca354:
    // 0x3ca354: 0xc0ea12a  jal         func_3A84A8
label_3ca358:
    if (ctx->pc == 0x3CA358u) {
        ctx->pc = 0x3CA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA354u;
        // 0x3ca358: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA35Cu;
        goto label_3ca35c;
    }
    ctx->pc = 0x3CA354u;
    SET_GPR_U32(ctx, 31, 0x3CA35Cu);
    ctx->pc = 0x3CA358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA354u;
    // 0x3ca358: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CA354u, 0x3CA35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA35Cu;
label_3ca35c:
    // 0x3ca35c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ca35cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ca360:
    // 0x3ca360: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ca360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ca364:
    // 0x3ca364: 0xc0ea14c  jal         func_3A8530
label_3ca368:
    if (ctx->pc == 0x3CA368u) {
        ctx->pc = 0x3CA368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA364u;
        // 0x3ca368: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA36Cu;
        goto label_3ca36c;
    }
    ctx->pc = 0x3CA364u;
    SET_GPR_U32(ctx, 31, 0x3CA36Cu);
    ctx->pc = 0x3CA368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA364u;
    // 0x3ca368: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CA364u, 0x3CA36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA36Cu;
label_3ca36c:
    // 0x3ca36c: 0x10000016  b           . + 4 + (0x16 << 2)
label_3ca370:
    if (ctx->pc == 0x3CA370u) {
        ctx->pc = 0x3CA370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA36Cu;
        // 0x3ca370: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA374u;
        goto label_3ca374;
    }
    ctx->pc = 0x3CA36Cu;
    {
        const bool branch_taken_0x3ca36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA36Cu;
        // 0x3ca370: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca36c) {
            ctx->pc = 0x3CA3C8u;
            return;
        }
    }
    ctx->pc = 0x3CA374u;
label_3ca374:
    // 0x3ca374: 0xc0ea146  jal         func_3A8518
label_3ca378:
    if (ctx->pc == 0x3CA378u) {
        ctx->pc = 0x3CA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA374u;
        // 0x3ca378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA37Cu;
        goto label_3ca37c;
    }
    ctx->pc = 0x3CA374u;
    SET_GPR_U32(ctx, 31, 0x3CA37Cu);
    ctx->pc = 0x3CA378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA374u;
    // 0x3ca378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CA374u, 0x3CA37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA37Cu;
label_3ca37c:
    // 0x3ca37c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ca37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ca380:
    // 0x3ca380: 0xc0ea12a  jal         func_3A84A8
label_3ca384:
    if (ctx->pc == 0x3CA384u) {
        ctx->pc = 0x3CA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA380u;
        // 0x3ca384: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA388u;
        goto label_3ca388;
    }
    ctx->pc = 0x3CA380u;
    SET_GPR_U32(ctx, 31, 0x3CA388u);
    ctx->pc = 0x3CA384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA380u;
    // 0x3ca384: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CA380u, 0x3CA388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA388u;
label_3ca388:
    // 0x3ca388: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ca388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ca38c:
    // 0x3ca38c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ca38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ca390:
    // 0x3ca390: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ca390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ca394:
    // 0x3ca394: 0xc0ea12a  jal         func_3A84A8
label_3ca398:
    if (ctx->pc == 0x3CA398u) {
        ctx->pc = 0x3CA398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA394u;
        // 0x3ca398: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA39Cu;
        goto label_3ca39c;
    }
    ctx->pc = 0x3CA394u;
    SET_GPR_U32(ctx, 31, 0x3CA39Cu);
    ctx->pc = 0x3CA398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA394u;
    // 0x3ca398: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CA394u, 0x3CA39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA39Cu;
label_3ca39c:
    // 0x3ca39c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ca39cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ca3a0:
    // 0x3ca3a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ca3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ca3a4:
    // 0x3ca3a4: 0xc0ea146  jal         func_3A8518
label_3ca3a8:
    if (ctx->pc == 0x3CA3A8u) {
        ctx->pc = 0x3CA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA3A4u;
        // 0x3ca3a8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA3ACu;
        goto label_3ca3ac;
    }
    ctx->pc = 0x3CA3A4u;
    SET_GPR_U32(ctx, 31, 0x3CA3ACu);
    ctx->pc = 0x3CA3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA3A4u;
    // 0x3ca3a8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CA3A4u, 0x3CA3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA3ACu;
label_3ca3ac:
    // 0x3ca3ac: 0xc0ea14c  jal         func_3A8530
label_3ca3b0:
    if (ctx->pc == 0x3CA3B0u) {
        ctx->pc = 0x3CA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA3ACu;
        // 0x3ca3b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA3B4u;
        goto label_3ca3b4;
    }
    ctx->pc = 0x3CA3ACu;
    SET_GPR_U32(ctx, 31, 0x3CA3B4u);
    ctx->pc = 0x3CA3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA3ACu;
    // 0x3ca3b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CA3ACu, 0x3CA3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA3B4u;
label_3ca3b4:
    // 0x3ca3b4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3ca3b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ca3b8:
    // 0x3ca3b8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ca3b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ca3bc:
    // 0x3ca3bc: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3ca3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3ca3c0:
    // 0x3ca3c0: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3ca3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    ctx->pc = 0x3ca3c4u;
}
