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

// Function: sub_001E0A58
// Address: 0x1e0a58 - 0x1e0a90
void sub_001E0A58_0x1e0a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0A58_0x1e0a58");
#endif

    switch (ctx->pc) {
        case 0x1e0a58u: goto label_1e0a58;
        case 0x1e0a5cu: goto label_1e0a5c;
        case 0x1e0a60u: goto label_1e0a60;
        case 0x1e0a64u: goto label_1e0a64;
        case 0x1e0a68u: goto label_1e0a68;
        case 0x1e0a6cu: goto label_1e0a6c;
        case 0x1e0a70u: goto label_1e0a70;
        case 0x1e0a74u: goto label_1e0a74;
        case 0x1e0a78u: goto label_1e0a78;
        case 0x1e0a7cu: goto label_1e0a7c;
        case 0x1e0a80u: goto label_1e0a80;
        case 0x1e0a84u: goto label_1e0a84;
        case 0x1e0a88u: goto label_1e0a88;
        case 0x1e0a8cu: goto label_1e0a8c;
        default: break;
    }

    ctx->pc = 0x1e0a58u;

label_1e0a58:
    // 0x1e0a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e0a5c:
    // 0x1e0a5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e0a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e0a60:
    // 0x1e0a60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e0a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e0a64:
    // 0x1e0a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e0a68:
    // 0x1e0a68: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x1e0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
label_1e0a6c:
    // 0x1e0a6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e0a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e0a70:
    // 0x1e0a70: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x1e0a70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1e0a74:
    // 0x1e0a74: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x1e0a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1e0a78:
    // 0x1e0a78: 0xa0f809  jalr        $a1
label_1e0a7c:
    if (ctx->pc == 0x1E0A7Cu) {
        ctx->pc = 0x1E0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A78u;
        // 0x1e0a7c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0A80u;
        goto label_1e0a80;
    }
    ctx->pc = 0x1E0A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1E0A80u);
        ctx->pc = 0x1E0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A78u;
        // 0x1e0a7c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0A78u, 0x1E0A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0A80u;
label_1e0a80:
    // 0x1e0a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0a84:
    // 0x1e0a84: 0x3e00008  jr          $ra
label_1e0a88:
    if (ctx->pc == 0x1E0A88u) {
        ctx->pc = 0x1E0A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A84u;
        // 0x1e0a88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0A8Cu;
        goto label_1e0a8c;
    }
    ctx->pc = 0x1E0A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A84u;
        // 0x1e0a88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0A8Cu;
label_1e0a8c:
    // 0x1e0a8c: 0x0  nop
    ctx->pc = 0x1e0a8cu;
    // NOP
    ctx->pc = 0x1e0a90u;
}
