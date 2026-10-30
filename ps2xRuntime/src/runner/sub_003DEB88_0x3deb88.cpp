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

// Function: sub_003DEB88
// Address: 0x3deb88 - 0x3debd0
void sub_003DEB88_0x3deb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEB88_0x3deb88");
#endif

    switch (ctx->pc) {
        case 0x3deb88u: goto label_3deb88;
        case 0x3deb8cu: goto label_3deb8c;
        case 0x3deb90u: goto label_3deb90;
        case 0x3deb94u: goto label_3deb94;
        case 0x3deb98u: goto label_3deb98;
        case 0x3deb9cu: goto label_3deb9c;
        case 0x3deba0u: goto label_3deba0;
        case 0x3deba4u: goto label_3deba4;
        case 0x3deba8u: goto label_3deba8;
        case 0x3debacu: goto label_3debac;
        case 0x3debb0u: goto label_3debb0;
        case 0x3debb4u: goto label_3debb4;
        case 0x3debb8u: goto label_3debb8;
        case 0x3debbcu: goto label_3debbc;
        case 0x3debc0u: goto label_3debc0;
        case 0x3debc4u: goto label_3debc4;
        case 0x3debc8u: goto label_3debc8;
        case 0x3debccu: goto label_3debcc;
        default: break;
    }

    ctx->pc = 0x3deb88u;

label_3deb88:
    // 0x3deb88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3deb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3deb8c:
    // 0x3deb8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3deb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3deb90:
    // 0x3deb90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3deb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3deb94:
    // 0x3deb94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3deb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3deb98:
    // 0x3deb98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3deb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3deb9c:
    // 0x3deb9c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3deb9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3deba0:
    // 0x3deba0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3deba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3deba4:
    // 0x3deba4: 0x40f809  jalr        $v0
label_3deba8:
    if (ctx->pc == 0x3DEBA8u) {
        ctx->pc = 0x3DEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEBA4u;
        // 0x3deba8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEBACu;
        goto label_3debac;
    }
    ctx->pc = 0x3DEBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DEBACu);
        ctx->pc = 0x3DEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEBA4u;
        // 0x3deba8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEBA4u, 0x3DEBACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DEBACu;
label_3debac:
    // 0x3debac: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3debacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3debb0:
    // 0x3debb0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3debb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3debb4:
    // 0x3debb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3debb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3debb8:
    // 0x3debb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3debb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3debbc:
    // 0x3debbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3debbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3debc0:
    // 0x3debc0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3debc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3debc4:
    // 0x3debc4: 0x3e00008  jr          $ra
label_3debc8:
    if (ctx->pc == 0x3DEBC8u) {
        ctx->pc = 0x3DEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEBC4u;
        // 0x3debc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEBCCu;
        goto label_3debcc;
    }
    ctx->pc = 0x3DEBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEBC4u;
        // 0x3debc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DEBCCu;
label_3debcc:
    // 0x3debcc: 0x0  nop
    ctx->pc = 0x3debccu;
    // NOP
    ctx->pc = 0x3debd0u;
}
