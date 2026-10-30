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

// Function: sub_0011ED60
// Address: 0x11ed60 - 0x11ee08
void sub_0011ED60_0x11ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011ED60_0x11ed60");
#endif

    switch (ctx->pc) {
        case 0x11ed94u: goto label_11ed94;
        case 0x11edb4u: goto label_11edb4;
        case 0x11edd4u: goto label_11edd4;
        default: break;
    }

    ctx->pc = 0x11ed60u;

    // 0x11ed60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ed64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11ed64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11ed68: 0x4800022  bltz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x11ED68u;
    {
        const bool branch_taken_0x11ed68 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED68u;
        // 0x11ed6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed68) {
            ctx->pc = 0x11EDF4u;
            goto label_11edf4;
        }
    }
    ctx->pc = 0x11ED70u;
    // 0x11ed70: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x11ed74: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x11ed74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11ed78: 0x24429158  addiu       $v0, $v0, -0x6EA8
    ctx->pc = 0x11ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938968));
    // 0x11ed7c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11ed80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11ed80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ed84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11ED84u;
    {
        const bool branch_taken_0x11ed84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED84u;
        // 0x11ed88: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed84) {
            ctx->pc = 0x11ED98u;
            goto label_11ed98;
        }
    }
    ctx->pc = 0x11ED8Cu;
    // 0x11ed8c: 0xc047910  jal         func_11E440
    ctx->pc = 0x11ED8Cu;
    SET_GPR_U32(ctx, 31, 0x11ED94u);
    ctx->pc = 0x11ED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ED8Cu;
    // 0x11ed90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E440u, 0x11ED8Cu, 0x11ED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED94u;
label_11ed94:
    // 0x11ed94: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_11ed98:
    // 0x11ed98: 0x24429160  addiu       $v0, $v0, -0x6EA0
    ctx->pc = 0x11ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938976));
    // 0x11ed9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11eda0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11eda4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EDA4u;
    {
        const bool branch_taken_0x11eda4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDA4u;
        // 0x11eda8: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eda4) {
            ctx->pc = 0x11EDB8u;
            goto label_11edb8;
        }
    }
    ctx->pc = 0x11EDACu;
    // 0x11edac: 0xc047910  jal         func_11E440
    ctx->pc = 0x11EDACu;
    SET_GPR_U32(ctx, 31, 0x11EDB4u);
    ctx->pc = 0x11EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EDACu;
    // 0x11edb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E440u, 0x11EDACu, 0x11EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EDB4u;
label_11edb4:
    // 0x11edb4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_11edb8:
    // 0x11edb8: 0x24429168  addiu       $v0, $v0, -0x6E98
    ctx->pc = 0x11edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938984));
    // 0x11edbc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11edc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11edc4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EDC4u;
    {
        const bool branch_taken_0x11edc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDC4u;
        // 0x11edc8: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11edc4) {
            ctx->pc = 0x11EDD8u;
            goto label_11edd8;
        }
    }
    ctx->pc = 0x11EDCCu;
    // 0x11edcc: 0xc047910  jal         func_11E440
    ctx->pc = 0x11EDCCu;
    SET_GPR_U32(ctx, 31, 0x11EDD4u);
    ctx->pc = 0x11EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EDCCu;
    // 0x11edd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E440u, 0x11EDCCu, 0x11EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EDD4u;
label_11edd4:
    // 0x11edd4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_11edd8:
    // 0x11edd8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x11eddc: 0x24429148  addiu       $v0, $v0, -0x6EB8
    ctx->pc = 0x11eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938952));
    // 0x11ede0: 0x24639150  addiu       $v1, $v1, -0x6EB0
    ctx->pc = 0x11ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938960));
    // 0x11ede4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11ede8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x11ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11edec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11edecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x11edf0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_11edf4:
    // 0x11edf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11edf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11edf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11edf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11edfc: 0x3e00008  jr          $ra
    ctx->pc = 0x11EDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDFCu;
        // 0x11ee00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EE04u;
    // 0x11ee04: 0x0  nop
    ctx->pc = 0x11ee04u;
    // NOP
    ctx->pc = 0x11ee08u;
}
