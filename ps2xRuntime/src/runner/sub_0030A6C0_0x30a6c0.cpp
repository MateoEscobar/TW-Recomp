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

// Function: sub_0030A6C0
// Address: 0x30a6c0 - 0x30a710
void sub_0030A6C0_0x30a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A6C0_0x30a6c0");
#endif

    switch (ctx->pc) {
        case 0x30a6d4u: goto label_30a6d4;
        case 0x30a6dcu: goto label_30a6dc;
        case 0x30a6e4u: goto label_30a6e4;
        case 0x30a700u: goto label_30a700;
        default: break;
    }

    ctx->pc = 0x30a6c0u;

    // 0x30a6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30a6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30a6c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30a6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30a6c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30a6cc: 0xc0c277e  jal         func_309DF8
    ctx->pc = 0x30A6CCu;
    SET_GPR_U32(ctx, 31, 0x30A6D4u);
    ctx->pc = 0x30A6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A6CCu;
    // 0x30a6d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309DF8u, 0x30A6CCu, 0x30A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A6D4u;
label_30a6d4:
    // 0x30a6d4: 0xc05a53a  jal         func_1694E8
    ctx->pc = 0x30A6D4u;
    SET_GPR_U32(ctx, 31, 0x30A6DCu);
    ctx->pc = 0x30A6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A6D4u;
    // 0x30a6d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1694E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1694E8u, 0x30A6D4u, 0x30A6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A6DCu;
label_30a6dc:
    // 0x30a6dc: 0xc05a55c  jal         func_169570
    ctx->pc = 0x30A6DCu;
    SET_GPR_U32(ctx, 31, 0x30A6E4u);
    ctx->pc = 0x30A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A6DCu;
    // 0x30a6e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169570u, 0x30A6DCu, 0x30A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A6E4u;
label_30a6e4:
    // 0x30a6e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a6e8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x30a6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x30a6ec: 0x24c61360  addiu       $a2, $a2, 0x1360
    ctx->pc = 0x30a6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4960));
    // 0x30a6f0: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x30a6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x30a6f4: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x30a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x30a6f8: 0xc05905e  jal         func_164178
    ctx->pc = 0x30A6F8u;
    SET_GPR_U32(ctx, 31, 0x30A700u);
    ctx->pc = 0x30A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A6F8u;
    // 0x30a6fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x30A6F8u, 0x30A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A700u;
label_30a700:
    // 0x30a700: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30a700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30a704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a708: 0x3e00008  jr          $ra
    ctx->pc = 0x30A708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A708u;
        // 0x30a70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A710u;
}
