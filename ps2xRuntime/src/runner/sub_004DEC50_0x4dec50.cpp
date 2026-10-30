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

// Function: sub_004DEC50
// Address: 0x4dec50 - 0x4decd0
void sub_004DEC50_0x4dec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DEC50_0x4dec50");
#endif

    switch (ctx->pc) {
        case 0x4dec50u: goto label_4dec50;
        case 0x4dec54u: goto label_4dec54;
        case 0x4dec58u: goto label_4dec58;
        case 0x4dec5cu: goto label_4dec5c;
        case 0x4dec60u: goto label_4dec60;
        case 0x4dec64u: goto label_4dec64;
        case 0x4dec68u: goto label_4dec68;
        case 0x4dec6cu: goto label_4dec6c;
        case 0x4dec70u: goto label_4dec70;
        case 0x4dec74u: goto label_4dec74;
        case 0x4dec78u: goto label_4dec78;
        case 0x4dec7cu: goto label_4dec7c;
        case 0x4dec80u: goto label_4dec80;
        case 0x4dec84u: goto label_4dec84;
        case 0x4dec88u: goto label_4dec88;
        case 0x4dec8cu: goto label_4dec8c;
        case 0x4dec90u: goto label_4dec90;
        case 0x4dec94u: goto label_4dec94;
        case 0x4dec98u: goto label_4dec98;
        case 0x4dec9cu: goto label_4dec9c;
        case 0x4deca0u: goto label_4deca0;
        case 0x4deca4u: goto label_4deca4;
        case 0x4deca8u: goto label_4deca8;
        case 0x4decacu: goto label_4decac;
        case 0x4decb0u: goto label_4decb0;
        case 0x4decb4u: goto label_4decb4;
        case 0x4decb8u: goto label_4decb8;
        case 0x4decbcu: goto label_4decbc;
        case 0x4decc0u: goto label_4decc0;
        case 0x4decc4u: goto label_4decc4;
        case 0x4decc8u: goto label_4decc8;
        case 0x4decccu: goto label_4deccc;
        default: break;
    }

    ctx->pc = 0x4dec50u;

label_4dec50:
    // 0x4dec50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4dec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4dec54:
    // 0x4dec54: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4dec54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4dec58:
    // 0x4dec58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4dec58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4dec5c:
    // 0x4dec5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dec5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dec60:
    // 0x4dec60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4dec60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4dec64:
    // 0x4dec64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4dec64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dec68:
    // 0x4dec68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dec6c:
    // 0x4dec6c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4dec70:
    if (ctx->pc == 0x4DEC70u) {
        ctx->pc = 0x4DEC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEC6Cu;
        // 0x4dec70: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEC74u;
        goto label_4dec74;
    }
    ctx->pc = 0x4DEC6Cu;
    {
        const bool branch_taken_0x4dec6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DEC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEC6Cu;
        // 0x4dec70: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dec6c) {
            ctx->pc = 0x4DECB4u;
            goto label_4decb4;
        }
    }
    ctx->pc = 0x4DEC74u;
label_4dec74:
    // 0x4dec74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4dec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dec78:
    // 0x4dec78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4dec78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4dec7c:
    // 0x4dec7c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4dec7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4dec80:
    // 0x4dec80: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4dec80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4dec84:
    // 0x4dec84: 0x60f809  jalr        $v1
label_4dec88:
    if (ctx->pc == 0x4DEC88u) {
        ctx->pc = 0x4DEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEC84u;
        // 0x4dec88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEC8Cu;
        goto label_4dec8c;
    }
    ctx->pc = 0x4DEC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DEC8Cu);
        ctx->pc = 0x4DEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEC84u;
        // 0x4dec88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEC84u, 0x4DEC8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DEC8Cu;
label_4dec8c:
    // 0x4dec8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4dec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4dec90:
    // 0x4dec90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dec90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dec94:
    // 0x4dec94: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4dec94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4dec98:
    // 0x4dec98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4dec98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dec9c:
    // 0x4dec9c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4dec9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4deca0:
    // 0x4deca0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4deca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4deca4:
    // 0x4deca4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4deca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4deca8:
    // 0x4deca8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4deca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4decac:
    // 0x4decac: 0x60f809  jalr        $v1
label_4decb0:
    if (ctx->pc == 0x4DECB0u) {
        ctx->pc = 0x4DECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DECACu;
        // 0x4decb0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DECB4u;
        goto label_4decb4;
    }
    ctx->pc = 0x4DECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DECB4u);
        ctx->pc = 0x4DECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DECACu;
        // 0x4decb0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DECACu, 0x4DECB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DECB4u;
label_4decb4:
    // 0x4decb4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4decb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4decb8:
    // 0x4decb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4decb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4decbc:
    // 0x4decbc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4decbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4decc0:
    // 0x4decc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4decc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4decc4:
    // 0x4decc4: 0x3e00008  jr          $ra
label_4decc8:
    if (ctx->pc == 0x4DECC8u) {
        ctx->pc = 0x4DECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DECC4u;
        // 0x4decc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DECCCu;
        goto label_4deccc;
    }
    ctx->pc = 0x4DECC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DECC4u;
        // 0x4decc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DECC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DECCCu;
label_4deccc:
    // 0x4deccc: 0x0  nop
    ctx->pc = 0x4decccu;
    // NOP
    ctx->pc = 0x4decd0u;
}
