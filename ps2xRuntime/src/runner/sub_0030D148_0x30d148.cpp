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

// Function: sub_0030D148
// Address: 0x30d148 - 0x30d188
void sub_0030D148_0x30d148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D148_0x30d148");
#endif

    switch (ctx->pc) {
        case 0x30d148u: goto label_30d148;
        case 0x30d14cu: goto label_30d14c;
        case 0x30d150u: goto label_30d150;
        case 0x30d154u: goto label_30d154;
        case 0x30d158u: goto label_30d158;
        case 0x30d15cu: goto label_30d15c;
        case 0x30d160u: goto label_30d160;
        case 0x30d164u: goto label_30d164;
        case 0x30d168u: goto label_30d168;
        case 0x30d16cu: goto label_30d16c;
        case 0x30d170u: goto label_30d170;
        case 0x30d174u: goto label_30d174;
        case 0x30d178u: goto label_30d178;
        case 0x30d17cu: goto label_30d17c;
        case 0x30d180u: goto label_30d180;
        case 0x30d184u: goto label_30d184;
        default: break;
    }

    ctx->pc = 0x30d148u;

label_30d148:
    // 0x30d148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30d148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30d14c:
    // 0x30d14c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30d150:
    // 0x30d150: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x30d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_30d154:
    // 0x30d154: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x30d154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_30d158:
    // 0x30d158: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_30d15c:
    if (ctx->pc == 0x30D15Cu) {
        ctx->pc = 0x30D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D158u;
        // 0x30d15c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D160u;
        goto label_30d160;
    }
    ctx->pc = 0x30D158u;
    {
        const bool branch_taken_0x30d158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D158u;
        // 0x30d15c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d158) {
            ctx->pc = 0x30D178u;
            goto label_30d178;
        }
    }
    ctx->pc = 0x30D160u;
label_30d160:
    // 0x30d160: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x30d160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_30d164:
    // 0x30d164: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x30d164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30d168:
    // 0x30d168: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30d168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30d16c:
    // 0x30d16c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30d170:
    // 0x30d170: 0x60f809  jalr        $v1
label_30d174:
    if (ctx->pc == 0x30D174u) {
        ctx->pc = 0x30D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D170u;
        // 0x30d174: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D178u;
        goto label_30d178;
    }
    ctx->pc = 0x30D170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30D178u);
        ctx->pc = 0x30D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D170u;
        // 0x30d174: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D170u, 0x30D178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30D178u;
label_30d178:
    // 0x30d178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30d17c:
    // 0x30d17c: 0x3e00008  jr          $ra
label_30d180:
    if (ctx->pc == 0x30D180u) {
        ctx->pc = 0x30D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D17Cu;
        // 0x30d180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D184u;
        goto label_30d184;
    }
    ctx->pc = 0x30D17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D17Cu;
        // 0x30d180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D184u;
label_30d184:
    // 0x30d184: 0x0  nop
    ctx->pc = 0x30d184u;
    // NOP
    ctx->pc = 0x30d188u;
}
