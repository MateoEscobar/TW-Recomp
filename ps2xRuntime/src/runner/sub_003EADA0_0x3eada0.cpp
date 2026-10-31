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

// Function: sub_003EADA0
// Address: 0x3eada0 - 0x3eade8
void sub_003EADA0_0x3eada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EADA0_0x3eada0");
#endif

    switch (ctx->pc) {
        case 0x3eada0u: goto label_3eada0;
        case 0x3eada4u: goto label_3eada4;
        case 0x3eada8u: goto label_3eada8;
        case 0x3eadacu: goto label_3eadac;
        case 0x3eadb0u: goto label_3eadb0;
        case 0x3eadb4u: goto label_3eadb4;
        case 0x3eadb8u: goto label_3eadb8;
        case 0x3eadbcu: goto label_3eadbc;
        case 0x3eadc0u: goto label_3eadc0;
        case 0x3eadc4u: goto label_3eadc4;
        case 0x3eadc8u: goto label_3eadc8;
        case 0x3eadccu: goto label_3eadcc;
        case 0x3eadd0u: goto label_3eadd0;
        case 0x3eadd4u: goto label_3eadd4;
        case 0x3eadd8u: goto label_3eadd8;
        case 0x3eaddcu: goto label_3eaddc;
        case 0x3eade0u: goto label_3eade0;
        case 0x3eade4u: goto label_3eade4;
        default: break;
    }

    ctx->pc = 0x3eada0u;

label_3eada0:
    // 0x3eada0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eada4:
    // 0x3eada4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3eada4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3eada8:
    // 0x3eada8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3eada8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3eadac:
    // 0x3eadac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3eadacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eadb0:
    // 0x3eadb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3eadb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3eadb4:
    // 0x3eadb4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eadb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eadb8:
    // 0x3eadb8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eadbc:
    // 0x3eadbc: 0x40f809  jalr        $v0
label_3eadc0:
    if (ctx->pc == 0x3EADC0u) {
        ctx->pc = 0x3EADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADBCu;
        // 0x3eadc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EADC4u;
        goto label_3eadc4;
    }
    ctx->pc = 0x3EADBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EADC4u);
        ctx->pc = 0x3EADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADBCu;
        // 0x3eadc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EADBCu, 0x3EADC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EADC4u;
label_3eadc4:
    // 0x3eadc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eadc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eadc8:
    // 0x3eadc8: 0xc0e858c  jal         func_3A1630
label_3eadcc:
    if (ctx->pc == 0x3EADCCu) {
        ctx->pc = 0x3EADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADC8u;
        // 0x3eadcc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EADD0u;
        goto label_3eadd0;
    }
    ctx->pc = 0x3EADC8u;
    SET_GPR_U32(ctx, 31, 0x3EADD0u);
    ctx->pc = 0x3EADCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EADC8u;
    // 0x3eadcc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EADC8u, 0x3EADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EADD0u;
label_3eadd0:
    // 0x3eadd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3eadd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eadd4:
    // 0x3eadd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3eadd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eadd8:
    // 0x3eadd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eadd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eaddc:
    // 0x3eaddc: 0x3e00008  jr          $ra
label_3eade0:
    if (ctx->pc == 0x3EADE0u) {
        ctx->pc = 0x3EADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADDCu;
        // 0x3eade0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EADE4u;
        goto label_3eade4;
    }
    ctx->pc = 0x3EADDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADDCu;
        // 0x3eade0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EADDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EADE4u;
label_3eade4:
    // 0x3eade4: 0x0  nop
    ctx->pc = 0x3eade4u;
    // NOP
    ctx->pc = 0x3eade8u;
}
