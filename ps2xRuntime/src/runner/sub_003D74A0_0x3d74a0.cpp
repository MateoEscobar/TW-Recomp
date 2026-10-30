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

// Function: sub_003D74A0
// Address: 0x3d74a0 - 0x3d7568
void sub_003D74A0_0x3d74a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D74A0_0x3d74a0");
#endif

    switch (ctx->pc) {
        case 0x3d74a0u: goto label_3d74a0;
        case 0x3d74a4u: goto label_3d74a4;
        case 0x3d74a8u: goto label_3d74a8;
        case 0x3d74acu: goto label_3d74ac;
        case 0x3d74b0u: goto label_3d74b0;
        case 0x3d74b4u: goto label_3d74b4;
        case 0x3d74b8u: goto label_3d74b8;
        case 0x3d74bcu: goto label_3d74bc;
        case 0x3d74c0u: goto label_3d74c0;
        case 0x3d74c4u: goto label_3d74c4;
        case 0x3d74c8u: goto label_3d74c8;
        case 0x3d74ccu: goto label_3d74cc;
        case 0x3d74d0u: goto label_3d74d0;
        case 0x3d74d4u: goto label_3d74d4;
        case 0x3d74d8u: goto label_3d74d8;
        case 0x3d74dcu: goto label_3d74dc;
        case 0x3d74e0u: goto label_3d74e0;
        case 0x3d74e4u: goto label_3d74e4;
        case 0x3d74e8u: goto label_3d74e8;
        case 0x3d74ecu: goto label_3d74ec;
        case 0x3d74f0u: goto label_3d74f0;
        case 0x3d74f4u: goto label_3d74f4;
        case 0x3d74f8u: goto label_3d74f8;
        case 0x3d74fcu: goto label_3d74fc;
        case 0x3d7500u: goto label_3d7500;
        case 0x3d7504u: goto label_3d7504;
        case 0x3d7508u: goto label_3d7508;
        case 0x3d750cu: goto label_3d750c;
        case 0x3d7510u: goto label_3d7510;
        case 0x3d7514u: goto label_3d7514;
        case 0x3d7518u: goto label_3d7518;
        case 0x3d751cu: goto label_3d751c;
        case 0x3d7520u: goto label_3d7520;
        case 0x3d7524u: goto label_3d7524;
        case 0x3d7528u: goto label_3d7528;
        case 0x3d752cu: goto label_3d752c;
        case 0x3d7530u: goto label_3d7530;
        case 0x3d7534u: goto label_3d7534;
        case 0x3d7538u: goto label_3d7538;
        case 0x3d753cu: goto label_3d753c;
        case 0x3d7540u: goto label_3d7540;
        case 0x3d7544u: goto label_3d7544;
        case 0x3d7548u: goto label_3d7548;
        case 0x3d754cu: goto label_3d754c;
        case 0x3d7550u: goto label_3d7550;
        case 0x3d7554u: goto label_3d7554;
        case 0x3d7558u: goto label_3d7558;
        case 0x3d755cu: goto label_3d755c;
        case 0x3d7560u: goto label_3d7560;
        case 0x3d7564u: goto label_3d7564;
        default: break;
    }

    ctx->pc = 0x3d74a0u;

label_3d74a0:
    // 0x3d74a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d74a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d74a4:
    // 0x3d74a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3d74a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3d74a8:
    // 0x3d74a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d74a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3d74ac:
    // 0x3d74ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d74acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d74b0:
    // 0x3d74b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d74b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d74b4:
    // 0x3d74b4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3d74b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3d74b8:
    // 0x3d74b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d74b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d74bc:
    // 0x3d74bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d74bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d74c0:
    // 0x3d74c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3d74c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d74c4:
    // 0x3d74c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d74c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d74c8:
    // 0x3d74c8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d74c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d74cc:
    // 0x3d74cc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d74d0:
    // 0x3d74d0: 0x40f809  jalr        $v0
label_3d74d4:
    if (ctx->pc == 0x3D74D4u) {
        ctx->pc = 0x3D74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74D0u;
        // 0x3d74d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D74D8u;
        goto label_3d74d8;
    }
    ctx->pc = 0x3D74D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D74D8u);
        ctx->pc = 0x3D74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74D0u;
        // 0x3d74d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D74D0u, 0x3D74D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D74D8u;
label_3d74d8:
    // 0x3d74d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d74d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d74dc:
    // 0x3d74dc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3d74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d74e0:
    // 0x3d74e0: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_3d74e4:
    if (ctx->pc == 0x3D74E4u) {
        ctx->pc = 0x3D74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74E0u;
        // 0x3d74e4: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D74E8u;
        goto label_3d74e8;
    }
    ctx->pc = 0x3D74E0u;
    {
        const bool branch_taken_0x3d74e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74E0u;
        // 0x3d74e4: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d74e0) {
            ctx->pc = 0x3D74F8u;
            goto label_3d74f8;
        }
    }
    ctx->pc = 0x3D74E8u;
label_3d74e8:
    // 0x3d74e8: 0x12420012  beq         $s2, $v0, . + 4 + (0x12 << 2)
label_3d74ec:
    if (ctx->pc == 0x3D74ECu) {
        ctx->pc = 0x3D74F0u;
        goto label_3d74f0;
    }
    ctx->pc = 0x3D74E8u;
    {
        const bool branch_taken_0x3d74e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d74e8) {
            ctx->pc = 0x3D7534u;
            goto label_3d7534;
        }
    }
    ctx->pc = 0x3D74F0u;
label_3d74f0:
    // 0x3d74f0: 0x10000017  b           . + 4 + (0x17 << 2)
label_3d74f4:
    if (ctx->pc == 0x3D74F4u) {
        ctx->pc = 0x3D74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74F0u;
        // 0x3d74f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D74F8u;
        goto label_3d74f8;
    }
    ctx->pc = 0x3D74F0u;
    {
        const bool branch_taken_0x3d74f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74F0u;
        // 0x3d74f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d74f0) {
            ctx->pc = 0x3D7550u;
            goto label_3d7550;
        }
    }
    ctx->pc = 0x3D74F8u;
label_3d74f8:
    // 0x3d74f8: 0xc0ea146  jal         func_3A8518
label_3d74fc:
    if (ctx->pc == 0x3D74FCu) {
        ctx->pc = 0x3D74FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74F8u;
        // 0x3d74fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7500u;
        goto label_3d7500;
    }
    ctx->pc = 0x3D74F8u;
    SET_GPR_U32(ctx, 31, 0x3D7500u);
    ctx->pc = 0x3D74FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D74F8u;
    // 0x3d74fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D74F8u, 0x3D7500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7500u;
label_3d7500:
    // 0x3d7500: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3d7504:
    if (ctx->pc == 0x3D7504u) {
        ctx->pc = 0x3D7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7500u;
        // 0x3d7504: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7508u;
        goto label_3d7508;
    }
    ctx->pc = 0x3D7500u;
    {
        const bool branch_taken_0x3d7500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7500) {
            ctx->pc = 0x3D7504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7500u;
            // 0x3d7504: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7520u;
            goto label_3d7520;
        }
    }
    ctx->pc = 0x3D7508u;
label_3d7508:
    // 0x3d7508: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d7508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d750c:
    // 0x3d750c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d750cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d7510:
    // 0x3d7510: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3d7510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d7514:
    // 0x3d7514: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3d7514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3d7518:
    // 0x3d7518: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d751c:
    if (ctx->pc == 0x3D751Cu) {
        ctx->pc = 0x3D751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7518u;
        // 0x3d751c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7520u;
        goto label_3d7520;
    }
    ctx->pc = 0x3D7518u;
    {
        const bool branch_taken_0x3d7518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7518u;
        // 0x3d751c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7518) {
            ctx->pc = 0x3D754Cu;
            goto label_3d754c;
        }
    }
    ctx->pc = 0x3D7520u;
label_3d7520:
    // 0x3d7520: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3d7520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d7524:
    // 0x3d7524: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3d7524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3d7528:
    // 0x3d7528: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3d7528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_3d752c:
    // 0x3d752c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d7530:
    if (ctx->pc == 0x3D7530u) {
        ctx->pc = 0x3D7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D752Cu;
        // 0x3d7530: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7534u;
        goto label_3d7534;
    }
    ctx->pc = 0x3D752Cu;
    {
        const bool branch_taken_0x3d752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D752Cu;
        // 0x3d7530: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d752c) {
            ctx->pc = 0x3D754Cu;
            goto label_3d754c;
        }
    }
    ctx->pc = 0x3D7534u;
label_3d7534:
    // 0x3d7534: 0xc0e95f6  jal         func_3A57D8
label_3d7538:
    if (ctx->pc == 0x3D7538u) {
        ctx->pc = 0x3D7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7534u;
        // 0x3d7538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D753Cu;
        goto label_3d753c;
    }
    ctx->pc = 0x3D7534u;
    SET_GPR_U32(ctx, 31, 0x3D753Cu);
    ctx->pc = 0x3D7538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7534u;
    // 0x3d7538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3D7534u, 0x3D753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D753Cu;
label_3d753c:
    // 0x3d753c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3d753cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d7540:
    // 0x3d7540: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3d7540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3d7544:
    // 0x3d7544: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d7544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d7548:
    // 0x3d7548: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3d7548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3d754c:
    // 0x3d754c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3d754cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d7550:
    // 0x3d7550: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3d7550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7554:
    // 0x3d7554: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d7554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7558:
    // 0x3d7558: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3d7558u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d755c:
    // 0x3d755c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d755cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7560:
    // 0x3d7560: 0x3e00008  jr          $ra
label_3d7564:
    if (ctx->pc == 0x3D7564u) {
        ctx->pc = 0x3D7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7560u;
        // 0x3d7564: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7568u;
        goto label_fallthrough_0x3d7560;
    }
    ctx->pc = 0x3D7560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7560u;
        // 0x3d7564: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d7560:
    ctx->pc = 0x3D7568u;
}
