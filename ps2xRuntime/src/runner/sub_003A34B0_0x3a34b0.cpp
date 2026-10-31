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

// Function: sub_003A34B0
// Address: 0x3a34b0 - 0x3a3588
void sub_003A34B0_0x3a34b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A34B0_0x3a34b0");
#endif

    switch (ctx->pc) {
        case 0x3a3500u: goto label_3a3500;
        case 0x3a3528u: goto label_3a3528;
        case 0x3a3530u: goto label_3a3530;
        case 0x3a353cu: goto label_3a353c;
        case 0x3a3550u: goto label_3a3550;
        default: break;
    }

    ctx->pc = 0x3a34b0u;

    // 0x3a34b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a34b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a34b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a34b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3a34b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a34b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a34bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a34bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a34c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a34c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3a34c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a34c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3a34c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a34c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a34cc: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3a34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3a34d0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3a34d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3a34d4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A34D4u;
    {
        const bool branch_taken_0x3a34d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A34D4u;
        // 0x3a34d8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a34d4) {
            ctx->pc = 0x3A3568u;
            goto label_3a3568;
        }
    }
    ctx->pc = 0x3A34DCu;
    // 0x3a34dc: 0x86230062  lh          $v1, 0x62($s1)
    ctx->pc = 0x3a34dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 98)));
    // 0x3a34e0: 0x26530008  addiu       $s3, $s2, 0x8
    ctx->pc = 0x3a34e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3a34e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a34e8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3a34e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3a34ec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3a34ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a34f0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A34F0u;
    {
        const bool branch_taken_0x3a34f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a34f0) {
            ctx->pc = 0x3A3504u;
            goto label_3a3504;
        }
    }
    ctx->pc = 0x3A34F8u;
    // 0x3a34f8: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A34F8u;
    SET_GPR_U32(ctx, 31, 0x3A3500u);
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A34F8u, 0x3A3500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3500u;
label_3a3500:
    // 0x3a3500: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a3500u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a3504:
    // 0x3a3504: 0x5611000f  bnel        $s0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x3A3504u;
    {
        const bool branch_taken_0x3a3504 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x3a3504) {
            ctx->pc = 0x3A3508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3504u;
            // 0x3a3508: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3544u;
            goto label_3a3544;
        }
    }
    ctx->pc = 0x3A350Cu;
    // 0x3a350c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a350cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a3510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a3510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3514: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x3a3514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x3a3518: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3a3518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3a351c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a351cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3520: 0xc0e8d02  jal         func_3A3408
    ctx->pc = 0x3A3520u;
    SET_GPR_U32(ctx, 31, 0x3A3528u);
    ctx->pc = 0x3A3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3520u;
    // 0x3a3524: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3408u, 0x3A3520u, 0x3A3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3528u;
label_3a3528:
    // 0x3a3528: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A3528u;
    {
        const bool branch_taken_0x3a3528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3528u;
        // 0x3a352c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3528) {
            ctx->pc = 0x3A356Cu;
            goto label_3a356c;
        }
    }
    ctx->pc = 0x3A3530u;
label_3a3530:
    // 0x3a3530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a3530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3534: 0xc0e8d02  jal         func_3A3408
    ctx->pc = 0x3A3534u;
    SET_GPR_U32(ctx, 31, 0x3A353Cu);
    ctx->pc = 0x3A3538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3534u;
    // 0x3a3538: 0xac62005c  sw          $v0, 0x5C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3408u, 0x3A3534u, 0x3A353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A353Cu;
label_3a353c:
    // 0x3a353c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A353Cu;
    {
        const bool branch_taken_0x3a353c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A353Cu;
        // 0x3a3540: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a353c) {
            ctx->pc = 0x3A356Cu;
            goto label_3a356c;
        }
    }
    ctx->pc = 0x3A3544u;
label_3a3544:
    // 0x3a3544: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A3544u;
    {
        const bool branch_taken_0x3a3544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3544) {
            ctx->pc = 0x3A3548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3544u;
            // 0x3a3548: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A356Cu;
            goto label_3a356c;
        }
    }
    ctx->pc = 0x3A354Cu;
    // 0x3a354c: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x3a354cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_3a3550:
    // 0x3a3550: 0x50b1fff7  beql        $a1, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3A3550u;
    {
        const bool branch_taken_0x3a3550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x3a3550) {
            ctx->pc = 0x3A3554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3550u;
            // 0x3a3554: 0x8ca2005c  lw          $v0, 0x5C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3530;
        }
    }
    ctx->pc = 0x3A3558u;
    // 0x3a3558: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3a3558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a355c: 0x0  nop
    ctx->pc = 0x3a355cu;
    // NOP
    // 0x3a3560: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A3560u;
    {
        const bool branch_taken_0x3a3560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3560) {
            ctx->pc = 0x3A3564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3560u;
            // 0x3a3564: 0x8c65005c  lw          $a1, 0x5C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3550;
        }
    }
    ctx->pc = 0x3A3568u;
label_3a3568:
    // 0x3a3568: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a3568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a356c:
    // 0x3a356c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a356cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a3570: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a3570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a3574: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a3574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a357c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A357Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A357Cu;
        // 0x3a3580: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A357Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3584u;
    // 0x3a3584: 0x0  nop
    ctx->pc = 0x3a3584u;
    // NOP
    ctx->pc = 0x3a3588u;
}
