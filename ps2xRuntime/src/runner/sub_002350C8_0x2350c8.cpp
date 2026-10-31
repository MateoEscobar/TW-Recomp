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

// Function: sub_002350C8
// Address: 0x2350c8 - 0x235130
void sub_002350C8_0x2350c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002350C8_0x2350c8");
#endif

    switch (ctx->pc) {
        case 0x2350e4u: goto label_2350e4;
        case 0x2350ecu: goto label_2350ec;
        default: break;
    }

    ctx->pc = 0x2350c8u;

    // 0x2350c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2350c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2350cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2350ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2350d0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2350d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2350d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2350d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2350d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2350d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2350dc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2350DCu;
    SET_GPR_U32(ctx, 31, 0x2350E4u);
    ctx->pc = 0x2350E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350DCu;
    // 0x2350e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2350DCu, 0x2350E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2350E4u;
label_2350e4:
    // 0x2350e4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2350E4u;
    SET_GPR_U32(ctx, 31, 0x2350ECu);
    ctx->pc = 0x2350E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350E4u;
    // 0x2350e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2350E4u, 0x2350ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2350ECu;
label_2350ec:
    // 0x2350ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2350ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2350f0: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2350F0u;
    {
        const bool branch_taken_0x2350f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2350f0) {
            ctx->pc = 0x2350F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2350F0u;
            // 0x2350f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235124u;
            goto label_235124;
        }
    }
    ctx->pc = 0x2350F8u;
    // 0x2350f8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2350F8u;
    {
        const bool branch_taken_0x2350f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2350FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350F8u;
        // 0x2350fc: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2350f8) {
            ctx->pc = 0x23510Cu;
            goto label_23510c;
        }
    }
    ctx->pc = 0x235100u;
    // 0x235100: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x235100u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x235104: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x235104u;
    {
        const bool branch_taken_0x235104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235104u;
        // 0x235108: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235104) {
            ctx->pc = 0x23511Cu;
            goto label_23511c;
        }
    }
    ctx->pc = 0x23510Cu;
label_23510c:
    // 0x23510c: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x23510cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x235110: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x235110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x235114: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x235114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x235118: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23511c:
    // 0x23511c: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x23511cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x235120: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_235124:
    // 0x235124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235128: 0x3e00008  jr          $ra
    ctx->pc = 0x235128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235128u;
        // 0x23512c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235130u;
}
