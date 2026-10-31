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

// Function: sub_0041FAA8
// Address: 0x41faa8 - 0x41faf8
void sub_0041FAA8_0x41faa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FAA8_0x41faa8");
#endif

    switch (ctx->pc) {
        case 0x41faccu: goto label_41facc;
        default: break;
    }

    ctx->pc = 0x41faa8u;

    // 0x41faa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41faa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41faac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41faacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fab0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41fab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41fab4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41fab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41fab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fabc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41fabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41fac0: 0x2604012c  addiu       $a0, $s0, 0x12C
    ctx->pc = 0x41fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x41fac4: 0xc052910  jal         func_14A440
    ctx->pc = 0x41FAC4u;
    SET_GPR_U32(ctx, 31, 0x41FACCu);
    ctx->pc = 0x41FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FAC4u;
    // 0x41fac8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A440u, 0x41FAC4u, 0x41FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FACCu;
label_41facc:
    // 0x41facc: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x41faccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x41fad0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41FAD0u;
    {
        const bool branch_taken_0x41fad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FAD0u;
        // 0x41fad4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fad0) {
            ctx->pc = 0x41FAE0u;
            goto label_41fae0;
        }
    }
    ctx->pc = 0x41FAD8u;
    // 0x41fad8: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x41fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x41fadc: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x41fadcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41fae0:
    // 0x41fae0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41fae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41fae4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41fae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41fae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41faec: 0x3e00008  jr          $ra
    ctx->pc = 0x41FAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FAECu;
        // 0x41faf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FAF4u;
    // 0x41faf4: 0x0  nop
    ctx->pc = 0x41faf4u;
    // NOP
    ctx->pc = 0x41faf8u;
}
