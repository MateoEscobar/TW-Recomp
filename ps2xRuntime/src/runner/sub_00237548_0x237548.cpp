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

// Function: sub_00237548
// Address: 0x237548 - 0x2375b8
void sub_00237548_0x237548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237548_0x237548");
#endif

    switch (ctx->pc) {
        case 0x237564u: goto label_237564;
        case 0x23756cu: goto label_23756c;
        default: break;
    }

    ctx->pc = 0x237548u;

    // 0x237548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23754c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23754cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237550: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237554: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23755c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23755Cu;
    SET_GPR_U32(ctx, 31, 0x237564u);
    ctx->pc = 0x237560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23755Cu;
    // 0x237560: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23755Cu, 0x237564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237564u;
label_237564:
    // 0x237564: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237564u;
    SET_GPR_U32(ctx, 31, 0x23756Cu);
    ctx->pc = 0x237568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237564u;
    // 0x237568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237564u, 0x23756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23756Cu;
label_23756c:
    // 0x23756c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23756cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237570: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x237570u;
    {
        const bool branch_taken_0x237570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237570) {
            ctx->pc = 0x237574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237570u;
            // 0x237574: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2375ACu;
            goto label_2375ac;
        }
    }
    ctx->pc = 0x237578u;
    // 0x237578: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237578u;
    {
        const bool branch_taken_0x237578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237578u;
        // 0x23757c: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237578) {
            ctx->pc = 0x237590u;
            goto label_237590;
        }
    }
    ctx->pc = 0x237580u;
    // 0x237580: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x237580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x237584: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x237584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x237588: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x237588u;
    {
        const bool branch_taken_0x237588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237588u;
        // 0x23758c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237588) {
            ctx->pc = 0x2375A4u;
            goto label_2375a4;
        }
    }
    ctx->pc = 0x237590u;
label_237590:
    // 0x237590: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x237590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x237594: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x237594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x237598: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x237598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x23759c: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x23759cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x2375a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2375a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2375a4:
    // 0x2375a4: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2375a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x2375a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2375a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2375ac:
    // 0x2375ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2375acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2375b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2375B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2375B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375B0u;
        // 0x2375b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2375B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2375B8u;
}
