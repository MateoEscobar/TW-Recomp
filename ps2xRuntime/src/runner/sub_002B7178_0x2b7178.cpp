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

// Function: sub_002B7178
// Address: 0x2b7178 - 0x2b71b8
void sub_002B7178_0x2b7178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7178_0x2b7178");
#endif

    switch (ctx->pc) {
        case 0x2b71a8u: goto label_2b71a8;
        default: break;
    }

    ctx->pc = 0x2b7178u;

    // 0x2b7178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b717c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b717cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7184: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2b7184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b7188: 0x8045000b  lb          $a1, 0xB($v0)
    ctx->pc = 0x2b7188u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2b718c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b718cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7190: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x2b7190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2b7194: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b7194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b7198: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2b7198u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2b719c: 0xa0c30018  sb          $v1, 0x18($a2)
    ctx->pc = 0x2b719cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b71a0: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2B71A0u;
    SET_GPR_U32(ctx, 31, 0x2B71A8u);
    ctx->pc = 0x2B71A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B71A0u;
    // 0x2b71a4: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2B71A0u, 0x2B71A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B71A8u;
label_2b71a8:
    // 0x2b71a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b71a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b71ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B71ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B71B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B71ACu;
        // 0x2b71b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B71ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B71B4u;
    // 0x2b71b4: 0x0  nop
    ctx->pc = 0x2b71b4u;
    // NOP
    ctx->pc = 0x2b71b8u;
}
