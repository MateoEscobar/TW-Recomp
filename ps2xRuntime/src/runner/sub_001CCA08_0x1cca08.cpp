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

// Function: sub_001CCA08
// Address: 0x1cca08 - 0x1cca80
void sub_001CCA08_0x1cca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCA08_0x1cca08");
#endif

    switch (ctx->pc) {
        case 0x1cca08u: goto label_1cca08;
        case 0x1cca0cu: goto label_1cca0c;
        case 0x1cca10u: goto label_1cca10;
        case 0x1cca14u: goto label_1cca14;
        case 0x1cca18u: goto label_1cca18;
        case 0x1cca1cu: goto label_1cca1c;
        case 0x1cca20u: goto label_1cca20;
        case 0x1cca24u: goto label_1cca24;
        case 0x1cca28u: goto label_1cca28;
        case 0x1cca2cu: goto label_1cca2c;
        case 0x1cca30u: goto label_1cca30;
        case 0x1cca34u: goto label_1cca34;
        case 0x1cca38u: goto label_1cca38;
        case 0x1cca3cu: goto label_1cca3c;
        case 0x1cca40u: goto label_1cca40;
        case 0x1cca44u: goto label_1cca44;
        case 0x1cca48u: goto label_1cca48;
        case 0x1cca4cu: goto label_1cca4c;
        case 0x1cca50u: goto label_1cca50;
        case 0x1cca54u: goto label_1cca54;
        case 0x1cca58u: goto label_1cca58;
        case 0x1cca5cu: goto label_1cca5c;
        case 0x1cca60u: goto label_1cca60;
        case 0x1cca64u: goto label_1cca64;
        case 0x1cca68u: goto label_1cca68;
        case 0x1cca6cu: goto label_1cca6c;
        case 0x1cca70u: goto label_1cca70;
        case 0x1cca74u: goto label_1cca74;
        case 0x1cca78u: goto label_1cca78;
        case 0x1cca7cu: goto label_1cca7c;
        default: break;
    }

    ctx->pc = 0x1cca08u;

label_1cca08:
    // 0x1cca08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cca08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cca0c:
    // 0x1cca0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1cca10:
    // 0x1cca10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cca14:
    // 0x1cca14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cca14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cca18:
    // 0x1cca18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cca1c:
    // 0x1cca1c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cca20:
    // 0x1cca20: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1cca24:
    if (ctx->pc == 0x1CCA24u) {
        ctx->pc = 0x1CCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA20u;
        // 0x1cca24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA28u;
        goto label_1cca28;
    }
    ctx->pc = 0x1CCA20u;
    {
        const bool branch_taken_0x1cca20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA20u;
        // 0x1cca24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca20) {
            ctx->pc = 0x1CCA64u;
            goto label_1cca64;
        }
    }
    ctx->pc = 0x1CCA28u;
label_1cca28:
    // 0x1cca28: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x1cca28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1cca2c:
    // 0x1cca2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cca30:
    // 0x1cca30: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1cca30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1cca34:
    // 0x1cca34: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1cca34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1cca38:
    // 0x1cca38: 0x40f809  jalr        $v0
label_1cca3c:
    if (ctx->pc == 0x1CCA3Cu) {
        ctx->pc = 0x1CCA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA38u;
        // 0x1cca3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA40u;
        goto label_1cca40;
    }
    ctx->pc = 0x1CCA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CCA40u);
        ctx->pc = 0x1CCA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA38u;
        // 0x1cca3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA38u, 0x1CCA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCA40u;
label_1cca40:
    // 0x1cca40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1cca44:
    if (ctx->pc == 0x1CCA44u) {
        ctx->pc = 0x1CCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA40u;
        // 0x1cca44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA48u;
        goto label_1cca48;
    }
    ctx->pc = 0x1CCA40u;
    {
        const bool branch_taken_0x1cca40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA40u;
        // 0x1cca44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca40) {
            ctx->pc = 0x1CCA68u;
            goto label_1cca68;
        }
    }
    ctx->pc = 0x1CCA48u;
label_1cca48:
    // 0x1cca48: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x1cca48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1cca4c:
    // 0x1cca4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cca50:
    // 0x1cca50: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1cca50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1cca54:
    // 0x1cca54: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1cca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1cca58:
    // 0x1cca58: 0x40f809  jalr        $v0
label_1cca5c:
    if (ctx->pc == 0x1CCA5Cu) {
        ctx->pc = 0x1CCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA58u;
        // 0x1cca5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA60u;
        goto label_1cca60;
    }
    ctx->pc = 0x1CCA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CCA60u);
        ctx->pc = 0x1CCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA58u;
        // 0x1cca5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA58u, 0x1CCA60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCA60u;
label_1cca60:
    // 0x1cca60: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1cca60u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cca64:
    // 0x1cca64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cca64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cca68:
    // 0x1cca68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cca68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cca6c:
    // 0x1cca6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cca6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cca70:
    // 0x1cca70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cca70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cca74:
    // 0x1cca74: 0x3e00008  jr          $ra
label_1cca78:
    if (ctx->pc == 0x1CCA78u) {
        ctx->pc = 0x1CCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA74u;
        // 0x1cca78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA7Cu;
        goto label_1cca7c;
    }
    ctx->pc = 0x1CCA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA74u;
        // 0x1cca78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCA7Cu;
label_1cca7c:
    // 0x1cca7c: 0x0  nop
    ctx->pc = 0x1cca7cu;
    // NOP
    ctx->pc = 0x1cca80u;
}
