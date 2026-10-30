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

// Function: sub_0026EBA0
// Address: 0x26eba0 - 0x26ec10
void sub_0026EBA0_0x26eba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EBA0_0x26eba0");
#endif

    switch (ctx->pc) {
        case 0x26ebb8u: goto label_26ebb8;
        case 0x26ebccu: goto label_26ebcc;
        case 0x26ebf0u: goto label_26ebf0;
        case 0x26ec00u: goto label_26ec00;
        default: break;
    }

    ctx->pc = 0x26eba0u;

    // 0x26eba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26eba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26eba4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26eba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26eba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26eba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26ebb0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x26EBB0u;
    SET_GPR_U32(ctx, 31, 0x26EBB8u);
    ctx->pc = 0x26EBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBB0u;
    // 0x26ebb4: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26EBB0u, 0x26EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBB8u;
label_26ebb8:
    // 0x26ebb8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26EBB8u;
    {
        const bool branch_taken_0x26ebb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBB8u;
        // 0x26ebbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ebb8) {
            ctx->pc = 0x26EBD4u;
            goto label_26ebd4;
        }
    }
    ctx->pc = 0x26EBC0u;
    // 0x26ebc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ebc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebc4: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x26EBC4u;
    SET_GPR_U32(ctx, 31, 0x26EBCCu);
    ctx->pc = 0x26EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBC4u;
    // 0x26ebc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x26EBC4u, 0x26EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBCCu;
label_26ebcc:
    // 0x26ebcc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26EBCCu;
    {
        const bool branch_taken_0x26ebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBCCu;
        // 0x26ebd0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ebcc) {
            ctx->pc = 0x26EC04u;
            goto label_26ec04;
        }
    }
    ctx->pc = 0x26EBD4u;
label_26ebd4:
    // 0x26ebd4: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x26ebd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x26ebd8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x26ebd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x26ebdc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ebdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ebe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ebe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebe4: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x26ebe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x26ebe8: 0xc09db66  jal         func_276D98
    ctx->pc = 0x26EBE8u;
    SET_GPR_U32(ctx, 31, 0x26EBF0u);
    ctx->pc = 0x26EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBE8u;
    // 0x26ebec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276D98u, 0x26EBE8u, 0x26EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBF0u;
label_26ebf0:
    // 0x26ebf0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x26ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x26ebf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ebf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebf8: 0xc09b97e  jal         func_26E5F8
    ctx->pc = 0x26EBF8u;
    SET_GPR_U32(ctx, 31, 0x26EC00u);
    ctx->pc = 0x26EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBF8u;
    // 0x26ebfc: 0x8c450068  lw          $a1, 0x68($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E5F8u, 0x26EBF8u, 0x26EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC00u;
label_26ec00:
    // 0x26ec00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26ec00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26ec04:
    // 0x26ec04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ec04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ec08: 0x3e00008  jr          $ra
    ctx->pc = 0x26EC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC08u;
        // 0x26ec0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EC10u;
}
