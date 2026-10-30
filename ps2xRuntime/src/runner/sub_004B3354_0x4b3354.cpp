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

// Function: sub_004B3354
// Address: 0x4b3354 - 0x4b33fc
void sub_004B3354_0x4b3354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3354_0x4b3354");
#endif

    switch (ctx->pc) {
        case 0x4b335cu: goto label_4b335c;
        case 0x4b33a0u: goto label_4b33a0;
        case 0x4b33b4u: goto label_4b33b4;
        case 0x4b33c0u: goto label_4b33c0;
        case 0x4b33d0u: goto label_4b33d0;
        case 0x4b33d8u: goto label_4b33d8;
        case 0x4b33e0u: goto label_4b33e0;
        case 0x4b33f4u: goto label_4b33f4;
        default: break;
    }

    ctx->pc = 0x4b3354u;

    // 0x4b3354: 0xc10b61a  jal         func_42D868
    ctx->pc = 0x4B3354u;
    SET_GPR_U32(ctx, 31, 0x4B335Cu);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x4B3354u, 0x4B335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B335Cu;
label_4b335c:
    // 0x4b335c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b335cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b3360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3364: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3364u;
        // 0x4b3368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B336Cu;
    // 0x4b336c: 0x0  nop
    ctx->pc = 0x4b336cu;
    // NOP
    // 0x4b3370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b3370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b3374: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b3374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b3378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b3378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b337c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b337cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3380: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b3380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b3384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b3384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3388: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b3388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b338c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4b338cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3390: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4b3390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3394: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b3394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b3398: 0xc12bea2  jal         func_4AFA88
    ctx->pc = 0x4B3398u;
    SET_GPR_U32(ctx, 31, 0x4B33A0u);
    ctx->pc = 0x4B339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3398u;
    // 0x4b339c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFA88u, 0x4B3398u, 0x4B33A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B33A0u;
label_4b33a0:
    // 0x4b33a0: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4b33a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4b33a4: 0x24630548  addiu       $v1, $v1, 0x548
    ctx->pc = 0x4b33a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1352));
    // 0x4b33a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b33a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b33ac: 0xc12db7e  jal         func_4B6DF8
    ctx->pc = 0x4B33ACu;
    SET_GPR_U32(ctx, 31, 0x4B33B4u);
    ctx->pc = 0x4B33B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B33ACu;
    // 0x4b33b0: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6DF8u, 0x4B33ACu, 0x4B33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B33B4u;
label_4b33b4:
    // 0x4b33b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b33b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b33b8: 0xc12dc1e  jal         func_4B7078
    ctx->pc = 0x4B33B8u;
    SET_GPR_U32(ctx, 31, 0x4B33C0u);
    ctx->pc = 0x4B33BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B33B8u;
    // 0x4b33bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7078u, 0x4B33B8u, 0x4B33C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B33C0u;
label_4b33c0:
    // 0x4b33c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b33c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b33c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4b33c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b33c8: 0xc12cd90  jal         func_4B3640
    ctx->pc = 0x4B33C8u;
    SET_GPR_U32(ctx, 31, 0x4B33D0u);
    ctx->pc = 0x4B33CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B33C8u;
    // 0x4b33cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3640u, 0x4B33C8u, 0x4B33D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B33D0u;
label_4b33d0:
    // 0x4b33d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B33D0u;
    {
        const bool branch_taken_0x4b33d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B33D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B33D0u;
        // 0x4b33d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b33d0) {
            ctx->pc = 0x4B33E0u;
            goto label_4b33e0;
        }
    }
    ctx->pc = 0x4B33D8u;
label_4b33d8:
    // 0x4b33d8: 0xc10b510  jal         func_42D440
    ctx->pc = 0x4B33D8u;
    SET_GPR_U32(ctx, 31, 0x4B33E0u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4B33D8u, 0x4B33E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B33E0u;
label_4b33e0:
    // 0x4b33e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B33E0u;
    {
        const bool branch_taken_0x4b33e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B33E0u;
        // 0x4b33e4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b33e0) {
            ctx->pc = 0x4B3404u;
            return;
        }
    }
    ctx->pc = 0x4B33E8u;
    // 0x4b33e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b33e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b33ec: 0xc12beb0  jal         func_4AFAC0
    ctx->pc = 0x4B33ECu;
    SET_GPR_U32(ctx, 31, 0x4B33F4u);
    ctx->pc = 0x4B33F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B33ECu;
    // 0x4b33f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFAC0u, 0x4B33ECu, 0x4B33F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B33F4u;
label_4b33f4:
    // 0x4b33f4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x4B33F4u;
    {
        const bool branch_taken_0x4b33f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b33f4) {
            ctx->pc = 0x4B33D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b33d8;
        }
    }
    ctx->pc = 0x4B33FCu;
}
