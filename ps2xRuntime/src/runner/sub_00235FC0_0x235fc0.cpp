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

// Function: sub_00235FC0
// Address: 0x235fc0 - 0x236038
void sub_00235FC0_0x235fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235FC0_0x235fc0");
#endif

    switch (ctx->pc) {
        case 0x235fdcu: goto label_235fdc;
        case 0x235fe4u: goto label_235fe4;
        case 0x23600cu: goto label_23600c;
        default: break;
    }

    ctx->pc = 0x235fc0u;

    // 0x235fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235fc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235fc8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235fcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235fd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235fd4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235FD4u;
    SET_GPR_U32(ctx, 31, 0x235FDCu);
    ctx->pc = 0x235FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FD4u;
    // 0x235fd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235FD4u, 0x235FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FDCu;
label_235fdc:
    // 0x235fdc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235FDCu;
    SET_GPR_U32(ctx, 31, 0x235FE4u);
    ctx->pc = 0x235FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FDCu;
    // 0x235fe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235FDCu, 0x235FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FE4u;
label_235fe4:
    // 0x235fe4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x235fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235fe8: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x235FE8u;
    {
        const bool branch_taken_0x235fe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x235fe8) {
            ctx->pc = 0x235FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235FE8u;
            // 0x235fec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23602Cu;
            goto label_23602c;
        }
    }
    ctx->pc = 0x235FF0u;
    // 0x235ff0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x235FF0u;
    {
        const bool branch_taken_0x235ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FF0u;
        // 0x235ff4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ff0) {
            ctx->pc = 0x236014u;
            goto label_236014;
        }
    }
    ctx->pc = 0x235FF8u;
    // 0x235ff8: 0xdca200e0  ld          $v0, 0xE0($a1)
    ctx->pc = 0x235ff8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x235ffc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x235ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236000: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x236000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x236004: 0xc08bf84  jal         func_22FE10
    ctx->pc = 0x236004u;
    SET_GPR_U32(ctx, 31, 0x23600Cu);
    ctx->pc = 0x236008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236004u;
    // 0x236008: 0xfca200e0  sd          $v0, 0xE0($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE10u, 0x236004u, 0x23600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23600Cu;
label_23600c:
    // 0x23600c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23600Cu;
    {
        const bool branch_taken_0x23600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23600Cu;
        // 0x236010: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23600c) {
            ctx->pc = 0x23602Cu;
            goto label_23602c;
        }
    }
    ctx->pc = 0x236014u;
label_236014:
    // 0x236014: 0xdca200e0  ld          $v0, 0xE0($a1)
    ctx->pc = 0x236014u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x236018: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x236018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x23601c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23601cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x236020: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x236020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x236024: 0xfca200e0  sd          $v0, 0xE0($a1)
    ctx->pc = 0x236024u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
    // 0x236028: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x236028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23602c:
    // 0x23602c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23602cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236030: 0x3e00008  jr          $ra
    ctx->pc = 0x236030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236030u;
        // 0x236034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236038u;
}
