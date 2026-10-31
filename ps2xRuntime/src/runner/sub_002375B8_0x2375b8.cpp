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

// Function: sub_002375B8
// Address: 0x2375b8 - 0x237628
void sub_002375B8_0x2375b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002375B8_0x2375b8");
#endif

    switch (ctx->pc) {
        case 0x2375d4u: goto label_2375d4;
        case 0x2375dcu: goto label_2375dc;
        default: break;
    }

    ctx->pc = 0x2375b8u;

    // 0x2375b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2375b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2375bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2375bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2375c0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2375c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2375c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2375c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2375c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2375cc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2375CCu;
    SET_GPR_U32(ctx, 31, 0x2375D4u);
    ctx->pc = 0x2375D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2375CCu;
    // 0x2375d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2375CCu, 0x2375D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375D4u;
label_2375d4:
    // 0x2375d4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2375D4u;
    SET_GPR_U32(ctx, 31, 0x2375DCu);
    ctx->pc = 0x2375D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2375D4u;
    // 0x2375d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2375D4u, 0x2375DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375DCu;
label_2375dc:
    // 0x2375dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2375dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375e0: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2375E0u;
    {
        const bool branch_taken_0x2375e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2375e0) {
            ctx->pc = 0x2375E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2375E0u;
            // 0x2375e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23761Cu;
            goto label_23761c;
        }
    }
    ctx->pc = 0x2375E8u;
    // 0x2375e8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2375E8u;
    {
        const bool branch_taken_0x2375e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375E8u;
        // 0x2375ec: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375e8) {
            ctx->pc = 0x237600u;
            goto label_237600;
        }
    }
    ctx->pc = 0x2375F0u;
    // 0x2375f0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2375f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2375f4: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x2375f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x2375f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2375F8u;
    {
        const bool branch_taken_0x2375f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375F8u;
        // 0x2375fc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375f8) {
            ctx->pc = 0x237614u;
            goto label_237614;
        }
    }
    ctx->pc = 0x237600u;
label_237600:
    // 0x237600: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x237600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x237604: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x237604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x237608: 0x31978  dsll        $v1, $v1, 5
    ctx->pc = 0x237608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 5);
    // 0x23760c: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x23760cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x237610: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_237614:
    // 0x237614: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x237614u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x237618: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23761c:
    // 0x23761c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23761cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237620: 0x3e00008  jr          $ra
    ctx->pc = 0x237620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237620u;
        // 0x237624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237628u;
}
