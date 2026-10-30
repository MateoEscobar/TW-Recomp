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

// Function: sub_004B2B70
// Address: 0x4b2b70 - 0x4b2bd0
void sub_004B2B70_0x4b2b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2B70_0x4b2b70");
#endif

    switch (ctx->pc) {
        case 0x4b2b70u: goto label_4b2b70;
        case 0x4b2b74u: goto label_4b2b74;
        case 0x4b2b78u: goto label_4b2b78;
        case 0x4b2b7cu: goto label_4b2b7c;
        case 0x4b2b80u: goto label_4b2b80;
        case 0x4b2b84u: goto label_4b2b84;
        case 0x4b2b88u: goto label_4b2b88;
        case 0x4b2b8cu: goto label_4b2b8c;
        case 0x4b2b90u: goto label_4b2b90;
        case 0x4b2b94u: goto label_4b2b94;
        case 0x4b2b98u: goto label_4b2b98;
        case 0x4b2b9cu: goto label_4b2b9c;
        case 0x4b2ba0u: goto label_4b2ba0;
        case 0x4b2ba4u: goto label_4b2ba4;
        case 0x4b2ba8u: goto label_4b2ba8;
        case 0x4b2bacu: goto label_4b2bac;
        case 0x4b2bb0u: goto label_4b2bb0;
        case 0x4b2bb4u: goto label_4b2bb4;
        case 0x4b2bb8u: goto label_4b2bb8;
        case 0x4b2bbcu: goto label_4b2bbc;
        case 0x4b2bc0u: goto label_4b2bc0;
        case 0x4b2bc4u: goto label_4b2bc4;
        case 0x4b2bc8u: goto label_4b2bc8;
        case 0x4b2bccu: goto label_4b2bcc;
        default: break;
    }

    ctx->pc = 0x4b2b70u;

label_4b2b70:
    // 0x4b2b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b2b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4b2b74:
    // 0x4b2b74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b2b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4b2b78:
    // 0x4b2b78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b2b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4b2b7c:
    // 0x4b2b7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4b2b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b2b80:
    // 0x4b2b80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b2b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b2b84:
    // 0x4b2b84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b2b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4b2b88:
    // 0x4b2b88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b2b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b2b8c:
    // 0x4b2b8c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x4b2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4b2b90:
    // 0x4b2b90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4b2b94:
    if (ctx->pc == 0x4B2B94u) {
        ctx->pc = 0x4B2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2B90u;
        // 0x4b2b94: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2B98u;
        goto label_4b2b98;
    }
    ctx->pc = 0x4B2B90u;
    {
        const bool branch_taken_0x4b2b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2B90u;
        // 0x4b2b94: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2b90) {
            ctx->pc = 0x4B2BA0u;
            goto label_4b2ba0;
        }
    }
    ctx->pc = 0x4B2B98u;
label_4b2b98:
    // 0x4b2b98: 0xc12c2a0  jal         func_4B0A80
label_4b2b9c:
    if (ctx->pc == 0x4B2B9Cu) {
        ctx->pc = 0x4B2BA0u;
        goto label_4b2ba0;
    }
    ctx->pc = 0x4B2B98u;
    SET_GPR_U32(ctx, 31, 0x4B2BA0u);
    ctx->pc = 0x4B0A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0A80u, 0x4B2B98u, 0x4B2BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2BA0u;
label_4b2ba0:
    // 0x4b2ba0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b2ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b2ba4:
    // 0x4b2ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b2ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b2ba8:
    // 0x4b2ba8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b2ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b2bac:
    // 0x4b2bac: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x4b2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_4b2bb0:
    // 0x4b2bb0: 0x40f809  jalr        $v0
label_4b2bb4:
    if (ctx->pc == 0x4B2BB4u) {
        ctx->pc = 0x4B2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2BB0u;
        // 0x4b2bb4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2BB8u;
        goto label_4b2bb8;
    }
    ctx->pc = 0x4B2BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B2BB8u);
        ctx->pc = 0x4B2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2BB0u;
        // 0x4b2bb4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2BB0u, 0x4B2BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B2BB8u;
label_4b2bb8:
    // 0x4b2bb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b2bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4b2bbc:
    // 0x4b2bbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b2bbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b2bc0:
    // 0x4b2bc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b2bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b2bc4:
    // 0x4b2bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b2bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b2bc8:
    // 0x4b2bc8: 0x3e00008  jr          $ra
label_4b2bcc:
    if (ctx->pc == 0x4B2BCCu) {
        ctx->pc = 0x4B2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2BC8u;
        // 0x4b2bcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2BD0u;
        goto label_fallthrough_0x4b2bc8;
    }
    ctx->pc = 0x4B2BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2BC8u;
        // 0x4b2bcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b2bc8:
    ctx->pc = 0x4B2BD0u;
}
