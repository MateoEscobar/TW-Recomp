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

// Function: sub_00207D48
// Address: 0x207d48 - 0x207da0
void sub_00207D48_0x207d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207D48_0x207d48");
#endif

    switch (ctx->pc) {
        case 0x207d48u: goto label_207d48;
        case 0x207d4cu: goto label_207d4c;
        case 0x207d50u: goto label_207d50;
        case 0x207d54u: goto label_207d54;
        case 0x207d58u: goto label_207d58;
        case 0x207d5cu: goto label_207d5c;
        case 0x207d60u: goto label_207d60;
        case 0x207d64u: goto label_207d64;
        case 0x207d68u: goto label_207d68;
        case 0x207d6cu: goto label_207d6c;
        case 0x207d70u: goto label_207d70;
        case 0x207d74u: goto label_207d74;
        case 0x207d78u: goto label_207d78;
        case 0x207d7cu: goto label_207d7c;
        case 0x207d80u: goto label_207d80;
        case 0x207d84u: goto label_207d84;
        case 0x207d88u: goto label_207d88;
        case 0x207d8cu: goto label_207d8c;
        case 0x207d90u: goto label_207d90;
        case 0x207d94u: goto label_207d94;
        case 0x207d98u: goto label_207d98;
        case 0x207d9cu: goto label_207d9c;
        default: break;
    }

    ctx->pc = 0x207d48u;

label_207d48:
    // 0x207d48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_207d4c:
    // 0x207d4c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x207d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_207d50:
    // 0x207d50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x207d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_207d54:
    // 0x207d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207d58:
    // 0x207d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_207d5c:
    // 0x207d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207d60:
    // 0x207d60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x207d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207d64:
    // 0x207d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207d68:
    // 0x207d68: 0xc05159c  jal         func_145670
label_207d6c:
    if (ctx->pc == 0x207D6Cu) {
        ctx->pc = 0x207D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D68u;
        // 0x207d6c: 0xac62ecc0  sw          $v0, -0x1340($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D70u;
        goto label_207d70;
    }
    ctx->pc = 0x207D68u;
    SET_GPR_U32(ctx, 31, 0x207D70u);
    ctx->pc = 0x207D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D68u;
    // 0x207d6c: 0xac62ecc0  sw          $v0, -0x1340($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962368), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145670u, 0x207D68u, 0x207D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D70u;
label_207d70:
    // 0x207d70: 0xae110070  sw          $s1, 0x70($s0)
    ctx->pc = 0x207d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
label_207d74:
    // 0x207d74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207d78:
    // 0x207d78: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x207d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_207d7c:
    // 0x207d7c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x207d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_207d80:
    // 0x207d80: 0x60f809  jalr        $v1
label_207d84:
    if (ctx->pc == 0x207D84u) {
        ctx->pc = 0x207D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D80u;
        // 0x207d84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D88u;
        goto label_207d88;
    }
    ctx->pc = 0x207D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207D88u);
        ctx->pc = 0x207D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D80u;
        // 0x207d84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207D80u, 0x207D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207D88u;
label_207d88:
    // 0x207d88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x207d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207d8c:
    // 0x207d8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x207d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207d90:
    // 0x207d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207d94:
    // 0x207d94: 0x3e00008  jr          $ra
label_207d98:
    if (ctx->pc == 0x207D98u) {
        ctx->pc = 0x207D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D94u;
        // 0x207d98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D9Cu;
        goto label_207d9c;
    }
    ctx->pc = 0x207D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D94u;
        // 0x207d98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207D9Cu;
label_207d9c:
    // 0x207d9c: 0x0  nop
    ctx->pc = 0x207d9cu;
    // NOP
    ctx->pc = 0x207da0u;
}
