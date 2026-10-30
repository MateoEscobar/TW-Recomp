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

// Function: sub_001ABF60
// Address: 0x1abf60 - 0x1ac000
void sub_001ABF60_0x1abf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABF60_0x1abf60");
#endif

    switch (ctx->pc) {
        case 0x1abf60u: goto label_1abf60;
        case 0x1abf64u: goto label_1abf64;
        case 0x1abf68u: goto label_1abf68;
        case 0x1abf6cu: goto label_1abf6c;
        case 0x1abf70u: goto label_1abf70;
        case 0x1abf74u: goto label_1abf74;
        case 0x1abf78u: goto label_1abf78;
        case 0x1abf7cu: goto label_1abf7c;
        case 0x1abf80u: goto label_1abf80;
        case 0x1abf84u: goto label_1abf84;
        case 0x1abf88u: goto label_1abf88;
        case 0x1abf8cu: goto label_1abf8c;
        case 0x1abf90u: goto label_1abf90;
        case 0x1abf94u: goto label_1abf94;
        case 0x1abf98u: goto label_1abf98;
        case 0x1abf9cu: goto label_1abf9c;
        case 0x1abfa0u: goto label_1abfa0;
        case 0x1abfa4u: goto label_1abfa4;
        case 0x1abfa8u: goto label_1abfa8;
        case 0x1abfacu: goto label_1abfac;
        case 0x1abfb0u: goto label_1abfb0;
        case 0x1abfb4u: goto label_1abfb4;
        case 0x1abfb8u: goto label_1abfb8;
        case 0x1abfbcu: goto label_1abfbc;
        case 0x1abfc0u: goto label_1abfc0;
        case 0x1abfc4u: goto label_1abfc4;
        case 0x1abfc8u: goto label_1abfc8;
        case 0x1abfccu: goto label_1abfcc;
        case 0x1abfd0u: goto label_1abfd0;
        case 0x1abfd4u: goto label_1abfd4;
        case 0x1abfd8u: goto label_1abfd8;
        case 0x1abfdcu: goto label_1abfdc;
        case 0x1abfe0u: goto label_1abfe0;
        case 0x1abfe4u: goto label_1abfe4;
        case 0x1abfe8u: goto label_1abfe8;
        case 0x1abfecu: goto label_1abfec;
        case 0x1abff0u: goto label_1abff0;
        case 0x1abff4u: goto label_1abff4;
        case 0x1abff8u: goto label_1abff8;
        case 0x1abffcu: goto label_1abffc;
        default: break;
    }

    ctx->pc = 0x1abf60u;

label_1abf60:
    // 0x1abf60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1abf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1abf64:
    // 0x1abf64: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x1abf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1abf68:
    // 0x1abf68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1abf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1abf6c:
    // 0x1abf6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1abf70:
    // 0x1abf70: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1abf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1abf74:
    // 0x1abf74: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1abf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1abf78:
    // 0x1abf78: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1abf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1abf7c:
    // 0x1abf7c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1abf7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1abf80:
    // 0x1abf80: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1abf80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1abf84:
    // 0x1abf84: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1abf88:
    if (ctx->pc == 0x1ABF88u) {
        ctx->pc = 0x1ABF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF84u;
        // 0x1abf88: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF8Cu;
        goto label_1abf8c;
    }
    ctx->pc = 0x1ABF84u;
    {
        const bool branch_taken_0x1abf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF84u;
        // 0x1abf88: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf84) {
            ctx->pc = 0x1ABFECu;
            goto label_1abfec;
        }
    }
    ctx->pc = 0x1ABF8Cu;
label_1abf8c:
    // 0x1abf8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1abf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1abf90:
    // 0x1abf90: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1abf90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1abf94:
    // 0x1abf94: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_1abf98:
    if (ctx->pc == 0x1ABF98u) {
        ctx->pc = 0x1ABF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF94u;
        // 0x1abf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF9Cu;
        goto label_1abf9c;
    }
    ctx->pc = 0x1ABF94u;
    {
        const bool branch_taken_0x1abf94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF94u;
        // 0x1abf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf94) {
            ctx->pc = 0x1ABFF0u;
            goto label_1abff0;
        }
    }
    ctx->pc = 0x1ABF9Cu;
label_1abf9c:
    // 0x1abf9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1abf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1abfa0:
    // 0x1abfa0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1abfa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1abfa4:
    // 0x1abfa4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1abfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1abfa8:
    // 0x1abfa8: 0x40f809  jalr        $v0
label_1abfac:
    if (ctx->pc == 0x1ABFACu) {
        ctx->pc = 0x1ABFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFA8u;
        // 0x1abfac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFB0u;
        goto label_1abfb0;
    }
    ctx->pc = 0x1ABFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ABFB0u);
        ctx->pc = 0x1ABFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFA8u;
        // 0x1abfac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABFA8u, 0x1ABFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABFB0u;
label_1abfb0:
    // 0x1abfb0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_1abfb4:
    if (ctx->pc == 0x1ABFB4u) {
        ctx->pc = 0x1ABFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFB0u;
        // 0x1abfb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFB8u;
        goto label_1abfb8;
    }
    ctx->pc = 0x1ABFB0u;
    {
        const bool branch_taken_0x1abfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abfb0) {
            ctx->pc = 0x1ABFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABFB0u;
            // 0x1abfb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABFF0u;
            goto label_1abff0;
        }
    }
    ctx->pc = 0x1ABFB8u;
label_1abfb8:
    // 0x1abfb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1abfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1abfbc:
    // 0x1abfbc: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1abfbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1abfc0:
    // 0x1abfc0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1abfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1abfc4:
    // 0x1abfc4: 0x40f809  jalr        $v0
label_1abfc8:
    if (ctx->pc == 0x1ABFC8u) {
        ctx->pc = 0x1ABFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFC4u;
        // 0x1abfc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFCCu;
        goto label_1abfcc;
    }
    ctx->pc = 0x1ABFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ABFCCu);
        ctx->pc = 0x1ABFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFC4u;
        // 0x1abfc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABFC4u, 0x1ABFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABFCCu;
label_1abfcc:
    // 0x1abfcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1abfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1abfd0:
    // 0x1abfd0: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1abfd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1abfd4:
    // 0x1abfd4: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x1abfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1abfd8:
    // 0x1abfd8: 0xa0f809  jalr        $a1
label_1abfdc:
    if (ctx->pc == 0x1ABFDCu) {
        ctx->pc = 0x1ABFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFD8u;
        // 0x1abfdc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFE0u;
        goto label_1abfe0;
    }
    ctx->pc = 0x1ABFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1ABFE0u);
        ctx->pc = 0x1ABFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFD8u;
        // 0x1abfdc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABFD8u, 0x1ABFE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABFE0u;
label_1abfe0:
    // 0x1abfe0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1abfe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1abfe4:
    // 0x1abfe4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1abfe8:
    if (ctx->pc == 0x1ABFE8u) {
        ctx->pc = 0x1ABFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFE4u;
        // 0x1abfe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFECu;
        goto label_1abfec;
    }
    ctx->pc = 0x1ABFE4u;
    {
        const bool branch_taken_0x1abfe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFE4u;
        // 0x1abfe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfe4) {
            ctx->pc = 0x1ABFF0u;
            goto label_1abff0;
        }
    }
    ctx->pc = 0x1ABFECu;
label_1abfec:
    // 0x1abfec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1abfecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abff0:
    // 0x1abff0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1abff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1abff4:
    // 0x1abff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1abff8:
    // 0x1abff8: 0x3e00008  jr          $ra
label_1abffc:
    if (ctx->pc == 0x1ABFFCu) {
        ctx->pc = 0x1ABFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFF8u;
        // 0x1abffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC000u;
        goto label_fallthrough_0x1abff8;
    }
    ctx->pc = 0x1ABFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFF8u;
        // 0x1abffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1abff8:
    ctx->pc = 0x1AC000u;
}
