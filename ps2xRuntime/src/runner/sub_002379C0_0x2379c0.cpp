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

// Function: sub_002379C0
// Address: 0x2379c0 - 0x237a28
void sub_002379C0_0x2379c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002379C0_0x2379c0");
#endif

    switch (ctx->pc) {
        case 0x2379dcu: goto label_2379dc;
        case 0x2379e4u: goto label_2379e4;
        default: break;
    }

    ctx->pc = 0x2379c0u;

    // 0x2379c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2379c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2379c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2379c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2379c8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2379c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2379cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2379ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2379d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2379d4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2379D4u;
    SET_GPR_U32(ctx, 31, 0x2379DCu);
    ctx->pc = 0x2379D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379D4u;
    // 0x2379d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2379D4u, 0x2379DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2379DCu;
label_2379dc:
    // 0x2379dc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2379DCu;
    SET_GPR_U32(ctx, 31, 0x2379E4u);
    ctx->pc = 0x2379E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379DCu;
    // 0x2379e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2379DCu, 0x2379E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2379E4u;
label_2379e4:
    // 0x2379e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2379e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379e8: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2379E8u;
    {
        const bool branch_taken_0x2379e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2379e8) {
            ctx->pc = 0x2379ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2379E8u;
            // 0x2379ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237A1Cu;
            goto label_237a1c;
        }
    }
    ctx->pc = 0x2379F0u;
    // 0x2379f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2379F0u;
    {
        const bool branch_taken_0x2379f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379F0u;
        // 0x2379f4: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379f0) {
            ctx->pc = 0x237A04u;
            goto label_237a04;
        }
    }
    ctx->pc = 0x2379F8u;
    // 0x2379f8: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2379f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2379fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2379FCu;
    {
        const bool branch_taken_0x2379fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379FCu;
        // 0x237a00: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379fc) {
            ctx->pc = 0x237A14u;
            goto label_237a14;
        }
    }
    ctx->pc = 0x237A04u;
label_237a04:
    // 0x237a04: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x237a04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x237a08: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x237a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x237a0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x237a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x237a10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_237a14:
    // 0x237a14: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x237a14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x237a18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_237a1c:
    // 0x237a1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237a20: 0x3e00008  jr          $ra
    ctx->pc = 0x237A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A20u;
        // 0x237a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237A28u;
}
