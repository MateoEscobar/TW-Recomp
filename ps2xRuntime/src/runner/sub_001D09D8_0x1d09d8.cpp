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

// Function: sub_001D09D8
// Address: 0x1d09d8 - 0x1d0a38
void sub_001D09D8_0x1d09d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D09D8_0x1d09d8");
#endif

    switch (ctx->pc) {
        case 0x1d09fcu: goto label_1d09fc;
        case 0x1d0a04u: goto label_1d0a04;
        case 0x1d0a0cu: goto label_1d0a0c;
        case 0x1d0a24u: goto label_1d0a24;
        default: break;
    }

    ctx->pc = 0x1d09d8u;

    // 0x1d09d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d09d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d09dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d09dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d09e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d09e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d09e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d09e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09e8: 0x8e025ad4  lw          $v0, 0x5AD4($s0)
    ctx->pc = 0x1d09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23252)));
    // 0x1d09ec: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1D09ECu;
    {
        const bool branch_taken_0x1d09ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d09ec) {
            ctx->pc = 0x1D09F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D09ECu;
            // 0x1d09f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D09F4u;
    // 0x1d09f4: 0xc0734a2  jal         func_1CD288
    ctx->pc = 0x1D09F4u;
    SET_GPR_U32(ctx, 31, 0x1D09FCu);
    ctx->pc = 0x1D09F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D09F4u;
    // 0x1d09f8: 0x26045930  addiu       $a0, $s0, 0x5930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1D09F4u, 0x1D09FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D09FCu;
label_1d09fc:
    // 0x1d09fc: 0xc0754b2  jal         func_1D52C8
    ctx->pc = 0x1D09FCu;
    SET_GPR_U32(ctx, 31, 0x1D0A04u);
    ctx->pc = 0x1D0A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D09FCu;
    // 0x1d0a00: 0x26045a00  addiu       $a0, $s0, 0x5A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 23040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D52C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52C8u, 0x1D09FCu, 0x1D0A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A04u;
label_1d0a04:
    // 0x1d0a04: 0xc073b62  jal         func_1CED88
    ctx->pc = 0x1D0A04u;
    SET_GPR_U32(ctx, 31, 0x1D0A0Cu);
    ctx->pc = 0x1D0A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0A04u;
    // 0x1d0a08: 0x26040430  addiu       $a0, $s0, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED88u, 0x1D0A04u, 0x1D0A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A0Cu;
label_1d0a0c:
    // 0x1d0a0c: 0x8e021ba0  lw          $v0, 0x1BA0($s0)
    ctx->pc = 0x1d0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7072)));
    // 0x1d0a10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0A10u;
    {
        const bool branch_taken_0x1d0a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A10u;
        // 0x1d0a14: 0x26041bd0  addiu       $a0, $s0, 0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a10) {
            ctx->pc = 0x1D0A24u;
            goto label_1d0a24;
        }
    }
    ctx->pc = 0x1D0A18u;
    // 0x1d0a18: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1d0a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x1d0a1c: 0xc075ac0  jal         func_1D6B00
    ctx->pc = 0x1D0A1Cu;
    SET_GPR_U32(ctx, 31, 0x1D0A24u);
    ctx->pc = 0x1D0A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0A1Cu;
    // 0x1d0a20: 0x24a5d328  addiu       $a1, $a1, -0x2CD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6B00u, 0x1D0A1Cu, 0x1D0A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A24u;
label_1d0a24:
    // 0x1d0a24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0a28:
    // 0x1d0a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A2Cu;
        // 0x1d0a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0A34u;
    // 0x1d0a34: 0x0  nop
    ctx->pc = 0x1d0a34u;
    // NOP
    ctx->pc = 0x1d0a38u;
}
