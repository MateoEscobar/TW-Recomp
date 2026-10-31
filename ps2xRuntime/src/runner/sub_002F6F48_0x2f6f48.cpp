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

// Function: sub_002F6F48
// Address: 0x2f6f48 - 0x2f6f88
void sub_002F6F48_0x2f6f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6F48_0x2f6f48");
#endif

    switch (ctx->pc) {
        case 0x2f6f48u: goto label_2f6f48;
        case 0x2f6f4cu: goto label_2f6f4c;
        case 0x2f6f50u: goto label_2f6f50;
        case 0x2f6f54u: goto label_2f6f54;
        case 0x2f6f58u: goto label_2f6f58;
        case 0x2f6f5cu: goto label_2f6f5c;
        case 0x2f6f60u: goto label_2f6f60;
        case 0x2f6f64u: goto label_2f6f64;
        case 0x2f6f68u: goto label_2f6f68;
        case 0x2f6f6cu: goto label_2f6f6c;
        case 0x2f6f70u: goto label_2f6f70;
        case 0x2f6f74u: goto label_2f6f74;
        case 0x2f6f78u: goto label_2f6f78;
        case 0x2f6f7cu: goto label_2f6f7c;
        case 0x2f6f80u: goto label_2f6f80;
        case 0x2f6f84u: goto label_2f6f84;
        default: break;
    }

    ctx->pc = 0x2f6f48u;

label_2f6f48:
    // 0x2f6f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f6f4c:
    // 0x2f6f4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f6f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f6f50:
    // 0x2f6f50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f6f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f6f54:
    // 0x2f6f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f6f58:
    // 0x2f6f58: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f6f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f6f5c:
    // 0x2f6f5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f6f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6f60:
    // 0x2f6f60: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2f6f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f6f64:
    // 0x2f6f64: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f6f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f6f68:
    // 0x2f6f68: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x2f6f68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_2f6f6c:
    // 0x2f6f6c: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x2f6f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_2f6f70:
    // 0x2f6f70: 0x60f809  jalr        $v1
label_2f6f74:
    if (ctx->pc == 0x2F6F74u) {
        ctx->pc = 0x2F6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F70u;
        // 0x2f6f74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6F78u;
        goto label_2f6f78;
    }
    ctx->pc = 0x2F6F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F6F78u);
        ctx->pc = 0x2F6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F70u;
        // 0x2f6f74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6F70u, 0x2F6F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F6F78u;
label_2f6f78:
    // 0x2f6f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f6f7c:
    // 0x2f6f7c: 0x3e00008  jr          $ra
label_2f6f80:
    if (ctx->pc == 0x2F6F80u) {
        ctx->pc = 0x2F6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F7Cu;
        // 0x2f6f80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6F84u;
        goto label_2f6f84;
    }
    ctx->pc = 0x2F6F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F7Cu;
        // 0x2f6f80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6F84u;
label_2f6f84:
    // 0x2f6f84: 0x0  nop
    ctx->pc = 0x2f6f84u;
    // NOP
    ctx->pc = 0x2f6f88u;
}
