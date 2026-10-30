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

// Function: sub_00237A98
// Address: 0x237a98 - 0x237b00
void sub_00237A98_0x237a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237A98_0x237a98");
#endif

    switch (ctx->pc) {
        case 0x237ab4u: goto label_237ab4;
        case 0x237abcu: goto label_237abc;
        default: break;
    }

    ctx->pc = 0x237a98u;

    // 0x237a98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237a9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x237a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237aa0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237aa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237aac: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237AACu;
    SET_GPR_U32(ctx, 31, 0x237AB4u);
    ctx->pc = 0x237AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237AACu;
    // 0x237ab0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237AACu, 0x237AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237AB4u;
label_237ab4:
    // 0x237ab4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237AB4u;
    SET_GPR_U32(ctx, 31, 0x237ABCu);
    ctx->pc = 0x237AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237AB4u;
    // 0x237ab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237AB4u, 0x237ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237ABCu;
label_237abc:
    // 0x237abc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ac0: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x237AC0u;
    {
        const bool branch_taken_0x237ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237ac0) {
            ctx->pc = 0x237AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237AC0u;
            // 0x237ac4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237AF4u;
            goto label_237af4;
        }
    }
    ctx->pc = 0x237AC8u;
    // 0x237ac8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237AC8u;
    {
        const bool branch_taken_0x237ac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AC8u;
        // 0x237acc: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ac8) {
            ctx->pc = 0x237ADCu;
            goto label_237adc;
        }
    }
    ctx->pc = 0x237AD0u;
    // 0x237ad0: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x237ad0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x237ad4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x237AD4u;
    {
        const bool branch_taken_0x237ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AD4u;
        // 0x237ad8: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ad4) {
            ctx->pc = 0x237AECu;
            goto label_237aec;
        }
    }
    ctx->pc = 0x237ADCu;
label_237adc:
    // 0x237adc: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x237adcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x237ae0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x237ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x237ae4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x237ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x237ae8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_237aec:
    // 0x237aec: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x237aecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x237af0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_237af4:
    // 0x237af4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237af8: 0x3e00008  jr          $ra
    ctx->pc = 0x237AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AF8u;
        // 0x237afc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237B00u;
}
