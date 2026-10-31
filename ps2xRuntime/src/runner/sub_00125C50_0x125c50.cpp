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

// Function: sub_00125C50
// Address: 0x125c50 - 0x125cc0
void sub_00125C50_0x125c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125C50_0x125c50");
#endif

    switch (ctx->pc) {
        case 0x125c50u: goto label_125c50;
        case 0x125c54u: goto label_125c54;
        case 0x125c58u: goto label_125c58;
        case 0x125c5cu: goto label_125c5c;
        case 0x125c60u: goto label_125c60;
        case 0x125c64u: goto label_125c64;
        case 0x125c68u: goto label_125c68;
        case 0x125c6cu: goto label_125c6c;
        case 0x125c70u: goto label_125c70;
        case 0x125c74u: goto label_125c74;
        case 0x125c78u: goto label_125c78;
        case 0x125c7cu: goto label_125c7c;
        case 0x125c80u: goto label_125c80;
        case 0x125c84u: goto label_125c84;
        case 0x125c88u: goto label_125c88;
        case 0x125c8cu: goto label_125c8c;
        case 0x125c90u: goto label_125c90;
        case 0x125c94u: goto label_125c94;
        case 0x125c98u: goto label_125c98;
        case 0x125c9cu: goto label_125c9c;
        case 0x125ca0u: goto label_125ca0;
        case 0x125ca4u: goto label_125ca4;
        case 0x125ca8u: goto label_125ca8;
        case 0x125cacu: goto label_125cac;
        case 0x125cb0u: goto label_125cb0;
        case 0x125cb4u: goto label_125cb4;
        case 0x125cb8u: goto label_125cb8;
        case 0x125cbcu: goto label_125cbc;
        default: break;
    }

    ctx->pc = 0x125c50u;

label_125c50:
    // 0x125c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x125c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_125c54:
    // 0x125c54: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x125c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_125c58:
    // 0x125c58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x125c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_125c5c:
    // 0x125c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125c60:
    // 0x125c60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x125c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_125c64:
    // 0x125c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x125c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_125c68:
    // 0x125c68: 0xc049f52  jal         func_127D48
label_125c6c:
    if (ctx->pc == 0x125C6Cu) {
        ctx->pc = 0x125C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C68u;
        // 0x125c6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C70u;
        goto label_125c70;
    }
    ctx->pc = 0x125C68u;
    SET_GPR_U32(ctx, 31, 0x125C70u);
    ctx->pc = 0x125C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C68u;
    // 0x125c6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D48u, 0x125C68u, 0x125C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C70u;
label_125c70:
    // 0x125c70: 0x7a030180  lq          $v1, 0x180($s0)
    ctx->pc = 0x125c70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 384)));
label_125c74:
    // 0x125c74: 0x26050260  addiu       $a1, $s0, 0x260
    ctx->pc = 0x125c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
label_125c78:
    // 0x125c78: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x125c78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_125c7c:
    // 0x125c7c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x125c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_125c80:
    // 0x125c80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x125c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_125c84:
    // 0x125c84: 0x7e020260  sq          $v0, 0x260($s0)
    ctx->pc = 0x125c84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), GPR_VEC(ctx, 2));
label_125c88:
    // 0x125c88: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x125c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_125c8c:
    // 0x125c8c: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x125c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_125c90:
    // 0x125c90: 0x40f809  jalr        $v0
label_125c94:
    if (ctx->pc == 0x125C94u) {
        ctx->pc = 0x125C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C90u;
        // 0x125c94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C98u;
        goto label_125c98;
    }
    ctx->pc = 0x125C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125C98u);
        ctx->pc = 0x125C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C90u;
        // 0x125c94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125C90u, 0x125C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125C98u;
label_125c98:
    // 0x125c98: 0x7a030260  lq          $v1, 0x260($s0)
    ctx->pc = 0x125c98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 608)));
label_125c9c:
    // 0x125c9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x125c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125ca0:
    // 0x125ca0: 0x7e0302b0  sq          $v1, 0x2B0($s0)
    ctx->pc = 0x125ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 688), GPR_VEC(ctx, 3));
label_125ca4:
    // 0x125ca4: 0x7e0301e0  sq          $v1, 0x1E0($s0)
    ctx->pc = 0x125ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 480), GPR_VEC(ctx, 3));
label_125ca8:
    // 0x125ca8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x125ca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_125cac:
    // 0x125cac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x125cacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_125cb0:
    // 0x125cb0: 0x7e020250  sq          $v0, 0x250($s0)
    ctx->pc = 0x125cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 592), GPR_VEC(ctx, 2));
label_125cb4:
    // 0x125cb4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x125cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_125cb8:
    // 0x125cb8: 0x3e00008  jr          $ra
label_125cbc:
    if (ctx->pc == 0x125CBCu) {
        ctx->pc = 0x125CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CB8u;
        // 0x125cbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CC0u;
        goto label_fallthrough_0x125cb8;
    }
    ctx->pc = 0x125CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CB8u;
        // 0x125cbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x125cb8:
    ctx->pc = 0x125CC0u;
}
