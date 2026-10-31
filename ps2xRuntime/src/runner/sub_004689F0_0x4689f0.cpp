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

// Function: sub_004689F0
// Address: 0x4689f0 - 0x468a60
void sub_004689F0_0x4689f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004689F0_0x4689f0");
#endif

    switch (ctx->pc) {
        case 0x468a14u: goto label_468a14;
        case 0x468a3cu: goto label_468a3c;
        default: break;
    }

    ctx->pc = 0x4689f0u;

    // 0x4689f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4689f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4689f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4689f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4689f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4689f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4689fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4689fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x468a00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x468a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x468a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x468a08: 0x278588b0  addiu       $a1, $gp, -0x7750
    ctx->pc = 0x468a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936752));
    // 0x468a0c: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x468A0Cu;
    SET_GPR_U32(ctx, 31, 0x468A14u);
    ctx->pc = 0x468A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468A0Cu;
    // 0x468a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x468A0Cu, 0x468A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468A14u;
label_468a14:
    // 0x468a14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x468A14u;
    {
        const bool branch_taken_0x468a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x468A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468A14u;
        // 0x468a18: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468a14) {
            ctx->pc = 0x468A24u;
            goto label_468a24;
        }
    }
    ctx->pc = 0x468A1Cu;
    // 0x468a1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x468A1Cu;
    {
        const bool branch_taken_0x468a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468A1Cu;
        // 0x468a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468a1c) {
            ctx->pc = 0x468A4Cu;
            goto label_468a4c;
        }
    }
    ctx->pc = 0x468A24u;
label_468a24:
    // 0x468a24: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x468A24u;
    {
        const bool branch_taken_0x468a24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x468a24) {
            ctx->pc = 0x468A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x468A24u;
            // 0x468a28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x468A4Cu;
            goto label_468a4c;
        }
    }
    ctx->pc = 0x468A2Cu;
    // 0x468a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x468a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468a30: 0x278588b4  addiu       $a1, $gp, -0x774C
    ctx->pc = 0x468a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936756));
    // 0x468a34: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x468A34u;
    SET_GPR_U32(ctx, 31, 0x468A3Cu);
    ctx->pc = 0x468A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468A34u;
    // 0x468a38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x468A34u, 0x468A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468A3Cu;
label_468a3c:
    // 0x468a3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x468a3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468a40: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x468A40u;
    {
        const bool branch_taken_0x468a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x468A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468A40u;
        // 0x468a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468a40) {
            ctx->pc = 0x468A4Cu;
            goto label_468a4c;
        }
    }
    ctx->pc = 0x468A48u;
    // 0x468a48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x468a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_468a4c:
    // 0x468a4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x468a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x468a50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x468a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x468a58: 0x3e00008  jr          $ra
    ctx->pc = 0x468A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x468A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468A58u;
        // 0x468a5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468A60u;
}
