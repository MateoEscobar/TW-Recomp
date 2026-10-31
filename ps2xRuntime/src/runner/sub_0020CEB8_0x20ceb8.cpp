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

// Function: sub_0020CEB8
// Address: 0x20ceb8 - 0x20cf30
void sub_0020CEB8_0x20ceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CEB8_0x20ceb8");
#endif

    switch (ctx->pc) {
        case 0x20ceb8u: goto label_20ceb8;
        case 0x20cebcu: goto label_20cebc;
        case 0x20cec0u: goto label_20cec0;
        case 0x20cec4u: goto label_20cec4;
        case 0x20cec8u: goto label_20cec8;
        case 0x20ceccu: goto label_20cecc;
        case 0x20ced0u: goto label_20ced0;
        case 0x20ced4u: goto label_20ced4;
        case 0x20ced8u: goto label_20ced8;
        case 0x20cedcu: goto label_20cedc;
        case 0x20cee0u: goto label_20cee0;
        case 0x20cee4u: goto label_20cee4;
        case 0x20cee8u: goto label_20cee8;
        case 0x20ceecu: goto label_20ceec;
        case 0x20cef0u: goto label_20cef0;
        case 0x20cef4u: goto label_20cef4;
        case 0x20cef8u: goto label_20cef8;
        case 0x20cefcu: goto label_20cefc;
        case 0x20cf00u: goto label_20cf00;
        case 0x20cf04u: goto label_20cf04;
        case 0x20cf08u: goto label_20cf08;
        case 0x20cf0cu: goto label_20cf0c;
        case 0x20cf10u: goto label_20cf10;
        case 0x20cf14u: goto label_20cf14;
        case 0x20cf18u: goto label_20cf18;
        case 0x20cf1cu: goto label_20cf1c;
        case 0x20cf20u: goto label_20cf20;
        case 0x20cf24u: goto label_20cf24;
        case 0x20cf28u: goto label_20cf28;
        case 0x20cf2cu: goto label_20cf2c;
        default: break;
    }

    ctx->pc = 0x20ceb8u;

label_20ceb8:
    // 0x20ceb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20ceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20cebc:
    // 0x20cebc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20cec0:
    // 0x20cec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20cec4:
    // 0x20cec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20cec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20cec8:
    // 0x20cec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20cecc:
    // 0x20cecc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_20ced0:
    // 0x20ced0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_20ced4:
    if (ctx->pc == 0x20CED4u) {
        ctx->pc = 0x20CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CED0u;
        // 0x20ced4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CED8u;
        goto label_20ced8;
    }
    ctx->pc = 0x20CED0u;
    {
        const bool branch_taken_0x20ced0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CED0u;
        // 0x20ced4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ced0) {
            ctx->pc = 0x20CF14u;
            goto label_20cf14;
        }
    }
    ctx->pc = 0x20CED8u;
label_20ced8:
    // 0x20ced8: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20ced8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20cedc:
    // 0x20cedc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20cee0:
    // 0x20cee0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20cee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20cee4:
    // 0x20cee4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20cee8:
    // 0x20cee8: 0x40f809  jalr        $v0
label_20ceec:
    if (ctx->pc == 0x20CEECu) {
        ctx->pc = 0x20CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEE8u;
        // 0x20ceec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEF0u;
        goto label_20cef0;
    }
    ctx->pc = 0x20CEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CEF0u);
        ctx->pc = 0x20CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEE8u;
        // 0x20ceec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CEE8u, 0x20CEF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CEF0u;
label_20cef0:
    // 0x20cef0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20cef4:
    if (ctx->pc == 0x20CEF4u) {
        ctx->pc = 0x20CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEF0u;
        // 0x20cef4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEF8u;
        goto label_20cef8;
    }
    ctx->pc = 0x20CEF0u;
    {
        const bool branch_taken_0x20cef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEF0u;
        // 0x20cef4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cef0) {
            ctx->pc = 0x20CF18u;
            goto label_20cf18;
        }
    }
    ctx->pc = 0x20CEF8u;
label_20cef8:
    // 0x20cef8: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20cefc:
    // 0x20cefc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20cf00:
    // 0x20cf00: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20cf00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20cf04:
    // 0x20cf04: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20cf08:
    // 0x20cf08: 0x40f809  jalr        $v0
label_20cf0c:
    if (ctx->pc == 0x20CF0Cu) {
        ctx->pc = 0x20CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF08u;
        // 0x20cf0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CF10u;
        goto label_20cf10;
    }
    ctx->pc = 0x20CF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CF10u);
        ctx->pc = 0x20CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF08u;
        // 0x20cf0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CF08u, 0x20CF10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CF10u;
label_20cf10:
    // 0x20cf10: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x20cf10u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20cf14:
    // 0x20cf14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20cf14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20cf18:
    // 0x20cf18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20cf18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20cf1c:
    // 0x20cf1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20cf1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20cf20:
    // 0x20cf20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20cf24:
    // 0x20cf24: 0x3e00008  jr          $ra
label_20cf28:
    if (ctx->pc == 0x20CF28u) {
        ctx->pc = 0x20CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF24u;
        // 0x20cf28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CF2Cu;
        goto label_20cf2c;
    }
    ctx->pc = 0x20CF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF24u;
        // 0x20cf28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CF2Cu;
label_20cf2c:
    // 0x20cf2c: 0x0  nop
    ctx->pc = 0x20cf2cu;
    // NOP
    ctx->pc = 0x20cf30u;
}
