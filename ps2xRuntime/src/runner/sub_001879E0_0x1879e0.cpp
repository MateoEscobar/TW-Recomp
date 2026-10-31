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

// Function: sub_001879E0
// Address: 0x1879e0 - 0x187a48
void sub_001879E0_0x1879e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001879E0_0x1879e0");
#endif

    switch (ctx->pc) {
        case 0x1879f4u: goto label_1879f4;
        case 0x187a00u: goto label_187a00;
        case 0x187a2cu: goto label_187a2c;
        default: break;
    }

    ctx->pc = 0x1879e0u;

    // 0x1879e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1879e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1879e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1879e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1879e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1879e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1879ec: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1879ECu;
    SET_GPR_U32(ctx, 31, 0x1879F4u);
    ctx->pc = 0x1879F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879ECu;
    // 0x1879f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1879ECu, 0x1879F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879F4u;
label_1879f4:
    // 0x1879f4: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x1879f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1879f8: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1879f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1879fc: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x1879fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_187a00:
    // 0x187a00: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x187a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x187a04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187A04u;
    {
        const bool branch_taken_0x187a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187a04) {
            ctx->pc = 0x187A24u;
            goto label_187a24;
        }
    }
    ctx->pc = 0x187A0Cu;
    // 0x187a0c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x187a0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187a10: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187A10u;
    {
        const bool branch_taken_0x187a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x187a10) {
            ctx->pc = 0x187A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187A10u;
            // 0x187a14: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187A24u;
            goto label_187a24;
        }
    }
    ctx->pc = 0x187A18u;
    // 0x187a18: 0x5443fff9  bnel        $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x187A18u;
    {
        const bool branch_taken_0x187a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x187a18) {
            ctx->pc = 0x187A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187A18u;
            // 0x187a1c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187a00;
        }
    }
    ctx->pc = 0x187A20u;
    // 0x187a20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x187a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_187a24:
    // 0x187a24: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x187A24u;
    SET_GPR_U32(ctx, 31, 0x187A2Cu);
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x187A24u, 0x187A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A2Cu;
label_187a2c:
    // 0x187a2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x187a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187a30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x187a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x187a34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x187a34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x187a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x187A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A3Cu;
        // 0x187a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187A44u;
    // 0x187a44: 0x0  nop
    ctx->pc = 0x187a44u;
    // NOP
    ctx->pc = 0x187a48u;
}
