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

// Function: sub_001C49D0
// Address: 0x1c49d0 - 0x1c4a40
void sub_001C49D0_0x1c49d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C49D0_0x1c49d0");
#endif

    switch (ctx->pc) {
        case 0x1c49fcu: goto label_1c49fc;
        case 0x1c4a10u: goto label_1c4a10;
        case 0x1c4a28u: goto label_1c4a28;
        default: break;
    }

    ctx->pc = 0x1c49d0u;

    // 0x1c49d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c49d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c49d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c49d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c49d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c49d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c49dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c49dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c49e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c49e4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c49e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1c49e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c49e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c49ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C49ECu;
    {
        const bool branch_taken_0x1c49ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49ECu;
        // 0x1c49f0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49ec) {
            ctx->pc = 0x1C4A28u;
            goto label_1c4a28;
        }
    }
    ctx->pc = 0x1C49F4u;
    // 0x1c49f4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C49F4u;
    SET_GPR_U32(ctx, 31, 0x1C49FCu);
    ctx->pc = 0x1C49F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49F4u;
    // 0x1c49f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C49F4u, 0x1C49FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49FCu;
label_1c49fc:
    // 0x1c49fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C49FCu;
    {
        const bool branch_taken_0x1c49fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49FCu;
        // 0x1c4a00: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49fc) {
            ctx->pc = 0x1C4A28u;
            goto label_1c4a28;
        }
    }
    ctx->pc = 0x1C4A04u;
    // 0x1c4a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a08: 0xc071462  jal         func_1C5188
    ctx->pc = 0x1C4A08u;
    SET_GPR_U32(ctx, 31, 0x1C4A10u);
    ctx->pc = 0x1C4A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A08u;
    // 0x1c4a0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x1C4A08u, 0x1C4A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A10u;
label_1c4a10:
    // 0x1c4a10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c4a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4a18: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4A18u;
    {
        const bool branch_taken_0x1c4a18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A18u;
        // 0x1c4a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a18) {
            ctx->pc = 0x1C4A28u;
            goto label_1c4a28;
        }
    }
    ctx->pc = 0x1C4A20u;
    // 0x1c4a20: 0xc071258  jal         func_1C4960
    ctx->pc = 0x1C4A20u;
    SET_GPR_U32(ctx, 31, 0x1C4A28u);
    ctx->pc = 0x1C4A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A20u;
    // 0x1c4a24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4960u, 0x1C4A20u, 0x1C4A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A28u;
label_1c4a28:
    // 0x1c4a28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c4a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4a2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c4a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4a30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4a34: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A34u;
        // 0x1c4a38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4A3Cu;
    // 0x1c4a3c: 0x0  nop
    ctx->pc = 0x1c4a3cu;
    // NOP
    ctx->pc = 0x1c4a40u;
}
