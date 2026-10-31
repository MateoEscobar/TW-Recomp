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

// Function: sub_004229C0
// Address: 0x4229c0 - 0x422a40
void sub_004229C0_0x4229c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004229C0_0x4229c0");
#endif

    switch (ctx->pc) {
        case 0x4229f0u: goto label_4229f0;
        case 0x4229fcu: goto label_4229fc;
        case 0x422a14u: goto label_422a14;
        default: break;
    }

    ctx->pc = 0x4229c0u;

    // 0x4229c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4229c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4229c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4229c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4229c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4229c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4229cc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4229ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4229d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4229d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4229d4: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x4229d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x4229d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4229d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4229dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4229dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4229e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4229e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4229e4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x4229e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x4229e8: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x4229e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x4229ec: 0x0  nop
    ctx->pc = 0x4229ecu;
    // NOP
label_4229f0:
    // 0x4229f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4229f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4229f4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x4229F4u;
    SET_GPR_U32(ctx, 31, 0x4229FCu);
    ctx->pc = 0x4229F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4229F4u;
    // 0x4229f8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x4229F4u, 0x4229FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4229FCu;
label_4229fc:
    // 0x4229fc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4229fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x422a00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x422a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422a04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x422A04u;
    {
        const bool branch_taken_0x422a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x422A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422A04u;
        // 0x422a08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422a04) {
            ctx->pc = 0x422A18u;
            goto label_422a18;
        }
    }
    ctx->pc = 0x422A0Cu;
    // 0x422a0c: 0xc108a28  jal         func_4228A0
    ctx->pc = 0x422A0Cu;
    SET_GPR_U32(ctx, 31, 0x422A14u);
    ctx->pc = 0x4228A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228A0u, 0x422A0Cu, 0x422A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422A14u;
label_422a14:
    // 0x422a14: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x422a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_422a18:
    // 0x422a18: 0x601fff5  bgez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x422A18u;
    {
        const bool branch_taken_0x422a18 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x422A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422A18u;
        // 0x422a1c: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422a18) {
            ctx->pc = 0x4229F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4229f0;
        }
    }
    ctx->pc = 0x422A20u;
    // 0x422a20: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x422a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x422a24: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x422a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x422a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x422a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x422a2c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x422a2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x422a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x422a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x422a34: 0x3e00008  jr          $ra
    ctx->pc = 0x422A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422A34u;
        // 0x422a38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422A3Cu;
    // 0x422a3c: 0x0  nop
    ctx->pc = 0x422a3cu;
    // NOP
    ctx->pc = 0x422a40u;
}
