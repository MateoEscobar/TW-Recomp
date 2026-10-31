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

// Function: sub_004F3B40
// Address: 0x4f3b40 - 0x4f3b88
void sub_004F3B40_0x4f3b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3B40_0x4f3b40");
#endif

    switch (ctx->pc) {
        case 0x4f3b40u: goto label_4f3b40;
        case 0x4f3b44u: goto label_4f3b44;
        case 0x4f3b48u: goto label_4f3b48;
        case 0x4f3b4cu: goto label_4f3b4c;
        case 0x4f3b50u: goto label_4f3b50;
        case 0x4f3b54u: goto label_4f3b54;
        case 0x4f3b58u: goto label_4f3b58;
        case 0x4f3b5cu: goto label_4f3b5c;
        case 0x4f3b60u: goto label_4f3b60;
        case 0x4f3b64u: goto label_4f3b64;
        case 0x4f3b68u: goto label_4f3b68;
        case 0x4f3b6cu: goto label_4f3b6c;
        case 0x4f3b70u: goto label_4f3b70;
        case 0x4f3b74u: goto label_4f3b74;
        case 0x4f3b78u: goto label_4f3b78;
        case 0x4f3b7cu: goto label_4f3b7c;
        case 0x4f3b80u: goto label_4f3b80;
        case 0x4f3b84u: goto label_4f3b84;
        default: break;
    }

    ctx->pc = 0x4f3b40u;

label_4f3b40:
    // 0x4f3b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f3b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f3b44:
    // 0x4f3b44: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f3b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f3b48:
    // 0x4f3b48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f3b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f3b4c:
    // 0x4f3b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f3b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3b50:
    // 0x4f3b50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f3b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4f3b54:
    // 0x4f3b54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f3b58:
    // 0x4f3b58: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x4f3b58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_4f3b5c:
    // 0x4f3b5c: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x4f3b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_4f3b60:
    // 0x4f3b60: 0xc0f809  jalr        $a2
label_4f3b64:
    if (ctx->pc == 0x4F3B64u) {
        ctx->pc = 0x4F3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3B60u;
        // 0x4f3b64: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3B68u;
        goto label_4f3b68;
    }
    ctx->pc = 0x4F3B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x4F3B68u);
        ctx->pc = 0x4F3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3B60u;
        // 0x4f3b64: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3B60u, 0x4F3B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3B68u;
label_4f3b68:
    // 0x4f3b68: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x4f3b68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3b6c:
    // 0x4f3b6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f3b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3b70:
    // 0x4f3b70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f3b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f3b74:
    // 0x4f3b74: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x4f3b74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_4f3b78:
    // 0x4f3b78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f3b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f3b7c:
    // 0x4f3b7c: 0x3e00008  jr          $ra
label_4f3b80:
    if (ctx->pc == 0x4F3B80u) {
        ctx->pc = 0x4F3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3B7Cu;
        // 0x4f3b80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3B84u;
        goto label_4f3b84;
    }
    ctx->pc = 0x4F3B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3B7Cu;
        // 0x4f3b80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3B84u;
label_4f3b84:
    // 0x4f3b84: 0x0  nop
    ctx->pc = 0x4f3b84u;
    // NOP
    ctx->pc = 0x4f3b88u;
}
