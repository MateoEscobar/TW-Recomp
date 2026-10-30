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

// Function: sub_0028AAC0
// Address: 0x28aac0 - 0x28ab08
void sub_0028AAC0_0x28aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AAC0_0x28aac0");
#endif

    switch (ctx->pc) {
        case 0x28aadcu: goto label_28aadc;
        case 0x28aaf4u: goto label_28aaf4;
        default: break;
    }

    ctx->pc = 0x28aac0u;

    // 0x28aac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28aac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28aac4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28aac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28aac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28aac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28aacc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28AACCu;
    {
        const bool branch_taken_0x28aacc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AACCu;
        // 0x28aad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aacc) {
            ctx->pc = 0x28AAE4u;
            goto label_28aae4;
        }
    }
    ctx->pc = 0x28AAD4u;
    // 0x28aad4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x28AAD4u;
    SET_GPR_U32(ctx, 31, 0x28AADCu);
    ctx->pc = 0x28AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAD4u;
    // 0x28aad8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x28AAD4u, 0x28AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AADCu;
label_28aadc:
    // 0x28aadc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28AADCu;
    {
        const bool branch_taken_0x28aadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AADCu;
        // 0x28aae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aadc) {
            ctx->pc = 0x28AAECu;
            goto label_28aaec;
        }
    }
    ctx->pc = 0x28AAE4u;
label_28aae4:
    // 0x28aae4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28aae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28aae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28aae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28aaec:
    // 0x28aaec: 0xc0a2aca  jal         func_28AB28
    ctx->pc = 0x28AAECu;
    SET_GPR_U32(ctx, 31, 0x28AAF4u);
    ctx->pc = 0x28AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAECu;
    // 0x28aaf0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB28u, 0x28AAECu, 0x28AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAF4u;
label_28aaf4:
    // 0x28aaf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28aaf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28aaf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28aaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28aafc: 0x3e00008  jr          $ra
    ctx->pc = 0x28AAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAFCu;
        // 0x28ab00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AB04u;
    // 0x28ab04: 0x0  nop
    ctx->pc = 0x28ab04u;
    // NOP
    ctx->pc = 0x28ab08u;
}
