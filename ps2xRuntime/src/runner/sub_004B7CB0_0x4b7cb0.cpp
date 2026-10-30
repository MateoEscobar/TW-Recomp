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

// Function: sub_004B7CB0
// Address: 0x4b7cb0 - 0x4b7d08
void sub_004B7CB0_0x4b7cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7CB0_0x4b7cb0");
#endif

    switch (ctx->pc) {
        case 0x4b7ce4u: goto label_4b7ce4;
        case 0x4b7cf0u: goto label_4b7cf0;
        default: break;
    }

    ctx->pc = 0x4b7cb0u;

    // 0x4b7cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b7cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b7cb4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b7cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b7cb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b7cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b7cbc: 0x24420e08  addiu       $v0, $v0, 0xE08
    ctx->pc = 0x4b7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3592));
    // 0x4b7cc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b7cc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b7cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7cc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b7cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b7ccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b7cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7cd0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x4b7cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x4b7cd4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4b7cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4b7cd8: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x4b7cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4b7cdc: 0xc12dc58  jal         func_4B7160
    ctx->pc = 0x4B7CDCu;
    SET_GPR_U32(ctx, 31, 0x4B7CE4u);
    ctx->pc = 0x4B7CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7CDCu;
    // 0x4b7ce0: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7160u, 0x4B7CDCu, 0x4B7CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7CE4u;
label_4b7ce4:
    // 0x4b7ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b7ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7ce8: 0xc12cd08  jal         func_4B3420
    ctx->pc = 0x4B7CE8u;
    SET_GPR_U32(ctx, 31, 0x4B7CF0u);
    ctx->pc = 0x4B7CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7CE8u;
    // 0x4b7cec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3420u, 0x4B7CE8u, 0x4B7CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7CF0u;
label_4b7cf0:
    // 0x4b7cf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b7cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b7cf4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b7cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7cf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7CFCu;
        // 0x4b7d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7D04u;
    // 0x4b7d04: 0x0  nop
    ctx->pc = 0x4b7d04u;
    // NOP
    ctx->pc = 0x4b7d08u;
}
