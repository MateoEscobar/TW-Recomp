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

// Function: sub_001B9290
// Address: 0x1b9290 - 0x1b9370
void sub_001B9290_0x1b9290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9290_0x1b9290");
#endif

    switch (ctx->pc) {
        case 0x1b9290u: goto label_1b9290;
        case 0x1b9294u: goto label_1b9294;
        case 0x1b9298u: goto label_1b9298;
        case 0x1b929cu: goto label_1b929c;
        case 0x1b92a0u: goto label_1b92a0;
        case 0x1b92a4u: goto label_1b92a4;
        case 0x1b92a8u: goto label_1b92a8;
        case 0x1b92acu: goto label_1b92ac;
        case 0x1b92b0u: goto label_1b92b0;
        case 0x1b92b4u: goto label_1b92b4;
        case 0x1b92b8u: goto label_1b92b8;
        case 0x1b92bcu: goto label_1b92bc;
        case 0x1b92c0u: goto label_1b92c0;
        case 0x1b92c4u: goto label_1b92c4;
        case 0x1b92c8u: goto label_1b92c8;
        case 0x1b92ccu: goto label_1b92cc;
        case 0x1b92d0u: goto label_1b92d0;
        case 0x1b92d4u: goto label_1b92d4;
        case 0x1b92d8u: goto label_1b92d8;
        case 0x1b92dcu: goto label_1b92dc;
        case 0x1b92e0u: goto label_1b92e0;
        case 0x1b92e4u: goto label_1b92e4;
        case 0x1b92e8u: goto label_1b92e8;
        case 0x1b92ecu: goto label_1b92ec;
        case 0x1b92f0u: goto label_1b92f0;
        case 0x1b92f4u: goto label_1b92f4;
        case 0x1b92f8u: goto label_1b92f8;
        case 0x1b92fcu: goto label_1b92fc;
        case 0x1b9300u: goto label_1b9300;
        case 0x1b9304u: goto label_1b9304;
        case 0x1b9308u: goto label_1b9308;
        case 0x1b930cu: goto label_1b930c;
        case 0x1b9310u: goto label_1b9310;
        case 0x1b9314u: goto label_1b9314;
        case 0x1b9318u: goto label_1b9318;
        case 0x1b931cu: goto label_1b931c;
        case 0x1b9320u: goto label_1b9320;
        case 0x1b9324u: goto label_1b9324;
        case 0x1b9328u: goto label_1b9328;
        case 0x1b932cu: goto label_1b932c;
        case 0x1b9330u: goto label_1b9330;
        case 0x1b9334u: goto label_1b9334;
        case 0x1b9338u: goto label_1b9338;
        case 0x1b933cu: goto label_1b933c;
        case 0x1b9340u: goto label_1b9340;
        case 0x1b9344u: goto label_1b9344;
        case 0x1b9348u: goto label_1b9348;
        case 0x1b934cu: goto label_1b934c;
        case 0x1b9350u: goto label_1b9350;
        case 0x1b9354u: goto label_1b9354;
        case 0x1b9358u: goto label_1b9358;
        case 0x1b935cu: goto label_1b935c;
        case 0x1b9360u: goto label_1b9360;
        case 0x1b9364u: goto label_1b9364;
        case 0x1b9368u: goto label_1b9368;
        case 0x1b936cu: goto label_1b936c;
        default: break;
    }

    ctx->pc = 0x1b9290u;

label_1b9290:
    // 0x1b9290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b9290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b9294:
    // 0x1b9294: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b9294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1b9298:
    // 0x1b9298: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b9298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b929c:
    // 0x1b929c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b929cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b92a0:
    // 0x1b92a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b92a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1b92a4:
    // 0x1b92a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b92a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b92a8:
    // 0x1b92a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b92ac:
    // 0x1b92ac: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_1b92b0:
    if (ctx->pc == 0x1B92B0u) {
        ctx->pc = 0x1B92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92ACu;
        // 0x1b92b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B92B4u;
        goto label_1b92b4;
    }
    ctx->pc = 0x1B92ACu;
    {
        const bool branch_taken_0x1b92ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b92ac) {
            ctx->pc = 0x1B92B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B92ACu;
            // 0x1b92b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B935Cu;
            goto label_1b935c;
        }
    }
    ctx->pc = 0x1B92B4u;
label_1b92b4:
    // 0x1b92b4: 0xc0687c4  jal         func_1A1F10
label_1b92b8:
    if (ctx->pc == 0x1B92B8u) {
        ctx->pc = 0x1B92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92B4u;
        // 0x1b92b8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B92BCu;
        goto label_1b92bc;
    }
    ctx->pc = 0x1B92B4u;
    SET_GPR_U32(ctx, 31, 0x1B92BCu);
    ctx->pc = 0x1B92B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92B4u;
    // 0x1b92b8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1B92B4u, 0x1B92BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B92BCu;
label_1b92bc:
    // 0x1b92bc: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1b92bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1b92c0:
    // 0x1b92c0: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1b92c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_1b92c4:
    // 0x1b92c4: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_1b92c8:
    if (ctx->pc == 0x1B92C8u) {
        ctx->pc = 0x1B92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92C4u;
        // 0x1b92c8: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B92CCu;
        goto label_1b92cc;
    }
    ctx->pc = 0x1B92C4u;
    {
        const bool branch_taken_0x1b92c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92C4u;
        // 0x1b92c8: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92c4) {
            ctx->pc = 0x1B92F8u;
            goto label_1b92f8;
        }
    }
    ctx->pc = 0x1B92CCu;
label_1b92cc:
    // 0x1b92cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b92d0:
    // 0x1b92d0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1b92d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1b92d4:
    // 0x1b92d4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x1b92d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1b92d8:
    // 0x1b92d8: 0x24c64968  addiu       $a2, $a2, 0x4968
    ctx->pc = 0x1b92d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18792));
label_1b92dc:
    // 0x1b92dc: 0x2407011a  addiu       $a3, $zero, 0x11A
    ctx->pc = 0x1b92dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
label_1b92e0:
    // 0x1b92e0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1b92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1b92e4:
    // 0x1b92e4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1b92e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1b92e8:
    // 0x1b92e8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1b92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1b92ec:
    // 0x1b92ec: 0x60f809  jalr        $v1
label_1b92f0:
    if (ctx->pc == 0x1B92F0u) {
        ctx->pc = 0x1B92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92ECu;
        // 0x1b92f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B92F4u;
        goto label_1b92f4;
    }
    ctx->pc = 0x1B92ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B92F4u);
        ctx->pc = 0x1B92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92ECu;
        // 0x1b92f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B92ECu, 0x1B92F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B92F4u;
label_1b92f4:
    // 0x1b92f4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1b92f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_1b92f8:
    // 0x1b92f8: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x1b92f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_1b92fc:
    // 0x1b92fc: 0x8e050190  lw          $a1, 0x190($s0)
    ctx->pc = 0x1b92fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_1b9300:
    // 0x1b9300: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x1b9300u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
label_1b9304:
    // 0x1b9304: 0x10b1000c  beq         $a1, $s1, . + 4 + (0xC << 2)
label_1b9308:
    if (ctx->pc == 0x1B9308u) {
        ctx->pc = 0x1B9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9304u;
        // 0x1b9308: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B930Cu;
        goto label_1b930c;
    }
    ctx->pc = 0x1B9304u;
    {
        const bool branch_taken_0x1b9304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9304u;
        // 0x1b9308: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9304) {
            ctx->pc = 0x1B9338u;
            goto label_1b9338;
        }
    }
    ctx->pc = 0x1B930Cu;
label_1b930c:
    // 0x1b930c: 0xc0616ac  jal         func_185AB0
label_1b9310:
    if (ctx->pc == 0x1B9310u) {
        ctx->pc = 0x1B9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B930Cu;
        // 0x1b9310: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9314u;
        goto label_1b9314;
    }
    ctx->pc = 0x1B930Cu;
    SET_GPR_U32(ctx, 31, 0x1B9314u);
    ctx->pc = 0x1B9310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B930Cu;
    // 0x1b9310: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1B930Cu, 0x1B9314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9314u;
label_1b9314:
    // 0x1b9314: 0x8e44cd4c  lw          $a0, -0x32B4($s2)
    ctx->pc = 0x1b9314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
label_1b9318:
    // 0x1b9318: 0xc0616ac  jal         func_185AB0
label_1b931c:
    if (ctx->pc == 0x1B931Cu) {
        ctx->pc = 0x1B931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9318u;
        // 0x1b931c: 0x8e050190  lw          $a1, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9320u;
        goto label_1b9320;
    }
    ctx->pc = 0x1B9318u;
    SET_GPR_U32(ctx, 31, 0x1B9320u);
    ctx->pc = 0x1B931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9318u;
    // 0x1b931c: 0x8e050190  lw          $a1, 0x190($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1B9318u, 0x1B9320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9320u;
label_1b9320:
    // 0x1b9320: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b9324:
    if (ctx->pc == 0x1B9324u) {
        ctx->pc = 0x1B9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9320u;
        // 0x1b9324: 0xae110190  sw          $s1, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9328u;
        goto label_1b9328;
    }
    ctx->pc = 0x1B9320u;
    {
        const bool branch_taken_0x1b9320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9320) {
            ctx->pc = 0x1B9324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9320u;
            // 0x1b9324: 0xae110190  sw          $s1, 0x190($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9338u;
            goto label_1b9338;
        }
    }
    ctx->pc = 0x1B9328u;
label_1b9328:
    // 0x1b9328: 0x8e44cd4c  lw          $a0, -0x32B4($s2)
    ctx->pc = 0x1b9328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
label_1b932c:
    // 0x1b932c: 0xc062be2  jal         func_18AF88
label_1b9330:
    if (ctx->pc == 0x1B9330u) {
        ctx->pc = 0x1B9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B932Cu;
        // 0x1b9330: 0x96050190  lhu         $a1, 0x190($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9334u;
        goto label_1b9334;
    }
    ctx->pc = 0x1B932Cu;
    SET_GPR_U32(ctx, 31, 0x1B9334u);
    ctx->pc = 0x1B9330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B932Cu;
    // 0x1b9330: 0x96050190  lhu         $a1, 0x190($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x1B932Cu, 0x1B9334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9334u;
label_1b9334:
    // 0x1b9334: 0xae110190  sw          $s1, 0x190($s0)
    ctx->pc = 0x1b9334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 17));
label_1b9338:
    // 0x1b9338: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b9338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b933c:
    // 0x1b933c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b933cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9340:
    // 0x1b9340: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1b9340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1b9344:
    // 0x1b9344: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1b9344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1b9348:
    // 0x1b9348: 0x60f809  jalr        $v1
label_1b934c:
    if (ctx->pc == 0x1B934Cu) {
        ctx->pc = 0x1B934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9348u;
        // 0x1b934c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9350u;
        goto label_1b9350;
    }
    ctx->pc = 0x1B9348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9350u);
        ctx->pc = 0x1B934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9348u;
        // 0x1b934c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9348u, 0x1B9350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9350u;
label_1b9350:
    // 0x1b9350: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x1b9350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_1b9354:
    // 0x1b9354: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x1b9354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
label_1b9358:
    // 0x1b9358: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b9358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b935c:
    // 0x1b935c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b935cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9360:
    // 0x1b9360: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b9360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9364:
    // 0x1b9364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9368:
    // 0x1b9368: 0x3e00008  jr          $ra
label_1b936c:
    if (ctx->pc == 0x1B936Cu) {
        ctx->pc = 0x1B936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9368u;
        // 0x1b936c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9370u;
        goto label_fallthrough_0x1b9368;
    }
    ctx->pc = 0x1B9368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9368u;
        // 0x1b936c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b9368:
    ctx->pc = 0x1B9370u;
}
