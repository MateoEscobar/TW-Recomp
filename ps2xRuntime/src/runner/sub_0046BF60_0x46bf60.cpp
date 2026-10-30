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

// Function: sub_0046BF60
// Address: 0x46bf60 - 0x46bfe8
void sub_0046BF60_0x46bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BF60_0x46bf60");
#endif

    switch (ctx->pc) {
        case 0x46bf60u: goto label_46bf60;
        case 0x46bf64u: goto label_46bf64;
        case 0x46bf68u: goto label_46bf68;
        case 0x46bf6cu: goto label_46bf6c;
        case 0x46bf70u: goto label_46bf70;
        case 0x46bf74u: goto label_46bf74;
        case 0x46bf78u: goto label_46bf78;
        case 0x46bf7cu: goto label_46bf7c;
        case 0x46bf80u: goto label_46bf80;
        case 0x46bf84u: goto label_46bf84;
        case 0x46bf88u: goto label_46bf88;
        case 0x46bf8cu: goto label_46bf8c;
        case 0x46bf90u: goto label_46bf90;
        case 0x46bf94u: goto label_46bf94;
        case 0x46bf98u: goto label_46bf98;
        case 0x46bf9cu: goto label_46bf9c;
        case 0x46bfa0u: goto label_46bfa0;
        case 0x46bfa4u: goto label_46bfa4;
        case 0x46bfa8u: goto label_46bfa8;
        case 0x46bfacu: goto label_46bfac;
        case 0x46bfb0u: goto label_46bfb0;
        case 0x46bfb4u: goto label_46bfb4;
        case 0x46bfb8u: goto label_46bfb8;
        case 0x46bfbcu: goto label_46bfbc;
        case 0x46bfc0u: goto label_46bfc0;
        case 0x46bfc4u: goto label_46bfc4;
        case 0x46bfc8u: goto label_46bfc8;
        case 0x46bfccu: goto label_46bfcc;
        case 0x46bfd0u: goto label_46bfd0;
        case 0x46bfd4u: goto label_46bfd4;
        case 0x46bfd8u: goto label_46bfd8;
        case 0x46bfdcu: goto label_46bfdc;
        case 0x46bfe0u: goto label_46bfe0;
        case 0x46bfe4u: goto label_46bfe4;
        default: break;
    }

    ctx->pc = 0x46bf60u;

label_46bf60:
    // 0x46bf60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_46bf64:
    // 0x46bf64: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x46bf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_46bf68:
    // 0x46bf68: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x46bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_46bf6c:
    // 0x46bf6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46bf6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46bf70:
    // 0x46bf70: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x46bf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_46bf74:
    // 0x46bf74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x46bf74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46bf78:
    // 0x46bf78: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x46bf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_46bf7c:
    // 0x46bf7c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x46bf7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_46bf80:
    // 0x46bf80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46bf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46bf84:
    // 0x46bf84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x46bf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_46bf88:
    // 0x46bf88: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x46bf88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_46bf8c:
    // 0x46bf8c: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_46bf90:
    if (ctx->pc == 0x46BF90u) {
        ctx->pc = 0x46BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BF8Cu;
        // 0x46bf90: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BF94u;
        goto label_46bf94;
    }
    ctx->pc = 0x46BF8Cu;
    {
        const bool branch_taken_0x46bf8c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x46BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BF8Cu;
        // 0x46bf90: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bf8c) {
            ctx->pc = 0x46BFC0u;
            goto label_46bfc0;
        }
    }
    ctx->pc = 0x46BF94u;
label_46bf94:
    // 0x46bf94: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x46bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_46bf98:
    // 0x46bf98: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x46bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_46bf9c:
    // 0x46bf9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x46bf9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46bfa0:
    // 0x46bfa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46bfa4:
    // 0x46bfa4: 0x280f809  jalr        $s4
label_46bfa8:
    if (ctx->pc == 0x46BFA8u) {
        ctx->pc = 0x46BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BFA4u;
        // 0x46bfa8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BFACu;
        goto label_46bfac;
    }
    ctx->pc = 0x46BFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x46BFACu);
        ctx->pc = 0x46BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BFA4u;
        // 0x46bfa8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BFA4u, 0x46BFACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BFACu;
label_46bfac:
    // 0x46bfac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46bfb0:
    if (ctx->pc == 0x46BFB0u) {
        ctx->pc = 0x46BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BFACu;
        // 0x46bfb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BFB4u;
        goto label_46bfb4;
    }
    ctx->pc = 0x46BFACu;
    {
        const bool branch_taken_0x46bfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BFACu;
        // 0x46bfb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bfac) {
            ctx->pc = 0x46BFC0u;
            goto label_46bfc0;
        }
    }
    ctx->pc = 0x46BFB4u;
label_46bfb4:
    // 0x46bfb4: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x46bfb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_46bfb8:
    // 0x46bfb8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_46bfbc:
    if (ctx->pc == 0x46BFBCu) {
        ctx->pc = 0x46BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BFB8u;
        // 0x46bfbc: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BFC0u;
        goto label_46bfc0;
    }
    ctx->pc = 0x46BFB8u;
    {
        const bool branch_taken_0x46bfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46bfb8) {
            ctx->pc = 0x46BFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46BFB8u;
            // 0x46bfbc: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46BF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46bf98;
        }
    }
    ctx->pc = 0x46BFC0u;
label_46bfc0:
    // 0x46bfc0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46bfc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46bfc4:
    // 0x46bfc4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x46bfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46bfc8:
    // 0x46bfc8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x46bfc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46bfcc:
    // 0x46bfcc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x46bfccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46bfd0:
    // 0x46bfd0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x46bfd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46bfd4:
    // 0x46bfd4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x46bfd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46bfd8:
    // 0x46bfd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46bfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46bfdc:
    // 0x46bfdc: 0x3e00008  jr          $ra
label_46bfe0:
    if (ctx->pc == 0x46BFE0u) {
        ctx->pc = 0x46BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BFDCu;
        // 0x46bfe0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BFE4u;
        goto label_46bfe4;
    }
    ctx->pc = 0x46BFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BFDCu;
        // 0x46bfe0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BFE4u;
label_46bfe4:
    // 0x46bfe4: 0x0  nop
    ctx->pc = 0x46bfe4u;
    // NOP
    ctx->pc = 0x46bfe8u;
}
