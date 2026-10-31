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

// Function: sub_00469CC0
// Address: 0x469cc0 - 0x469d68
void sub_00469CC0_0x469cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469CC0_0x469cc0");
#endif

    switch (ctx->pc) {
        case 0x469cf8u: goto label_469cf8;
        case 0x469d14u: goto label_469d14;
        case 0x469d24u: goto label_469d24;
        case 0x469d34u: goto label_469d34;
        default: break;
    }

    ctx->pc = 0x469cc0u;

    // 0x469cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469cc4: 0x8f8288b8  lw          $v0, -0x7748($gp)
    ctx->pc = 0x469cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x469cc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x469cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x469ccc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x469cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x469cd0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x469cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x469cd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x469cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x469cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469cdc: 0x2610ad18  addiu       $s0, $s0, -0x52E8
    ctx->pc = 0x469cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
    // 0x469ce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x469ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469ce4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x469ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x469ce8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x469cec: 0x24a5a890  addiu       $a1, $a1, -0x5770
    ctx->pc = 0x469cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944912));
    // 0x469cf0: 0xc11f7ce  jal         func_47DF38
    ctx->pc = 0x469CF0u;
    SET_GPR_U32(ctx, 31, 0x469CF8u);
    ctx->pc = 0x469CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469CF0u;
    // 0x469cf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DF38u, 0x469CF0u, 0x469CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469CF8u;
label_469cf8:
    // 0x469cf8: 0x8f8388b8  lw          $v1, -0x7748($gp)
    ctx->pc = 0x469cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x469cfc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x469cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x469d00: 0x24a5a8b0  addiu       $a1, $a1, -0x5750
    ctx->pc = 0x469d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944944));
    // 0x469d04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x469d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469d08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x469d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x469d0c: 0xc11f7ce  jal         func_47DF38
    ctx->pc = 0x469D0Cu;
    SET_GPR_U32(ctx, 31, 0x469D14u);
    ctx->pc = 0x469D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469D0Cu;
    // 0x469d10: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DF38u, 0x469D0Cu, 0x469D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469D14u;
label_469d14:
    // 0x469d14: 0x8f8388b8  lw          $v1, -0x7748($gp)
    ctx->pc = 0x469d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x469d18: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x469d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x469d1c: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x469D1Cu;
    SET_GPR_U32(ctx, 31, 0x469D24u);
    ctx->pc = 0x469D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469D1Cu;
    // 0x469d20: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x469D1Cu, 0x469D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469D24u;
label_469d24:
    // 0x469d24: 0x8f8388b8  lw          $v1, -0x7748($gp)
    ctx->pc = 0x469d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x469d28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x469d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x469d2c: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x469D2Cu;
    SET_GPR_U32(ctx, 31, 0x469D34u);
    ctx->pc = 0x469D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469D2Cu;
    // 0x469d30: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x469D2Cu, 0x469D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469D34u;
label_469d34:
    // 0x469d34: 0x8f8488bc  lw          $a0, -0x7744($gp)
    ctx->pc = 0x469d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x469d38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x469d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469d3c: 0x8f8388b8  lw          $v1, -0x7748($gp)
    ctx->pc = 0x469d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x469d40: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x469d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x469d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x469d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469d48: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x469d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x469d4c: 0xaf8488bc  sw          $a0, -0x7744($gp)
    ctx->pc = 0x469d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936764), GPR_U32(ctx, 4));
    // 0x469d50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x469d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469d58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x469d58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x469d5c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x469d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x469d60: 0x3e00008  jr          $ra
    ctx->pc = 0x469D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x469D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469D60u;
        // 0x469d64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469D68u;
}
