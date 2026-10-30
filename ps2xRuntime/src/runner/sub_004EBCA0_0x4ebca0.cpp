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

// Function: sub_004EBCA0
// Address: 0x4ebca0 - 0x4ebd20
void sub_004EBCA0_0x4ebca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBCA0_0x4ebca0");
#endif

    switch (ctx->pc) {
        case 0x4ebca0u: goto label_4ebca0;
        case 0x4ebca4u: goto label_4ebca4;
        case 0x4ebca8u: goto label_4ebca8;
        case 0x4ebcacu: goto label_4ebcac;
        case 0x4ebcb0u: goto label_4ebcb0;
        case 0x4ebcb4u: goto label_4ebcb4;
        case 0x4ebcb8u: goto label_4ebcb8;
        case 0x4ebcbcu: goto label_4ebcbc;
        case 0x4ebcc0u: goto label_4ebcc0;
        case 0x4ebcc4u: goto label_4ebcc4;
        case 0x4ebcc8u: goto label_4ebcc8;
        case 0x4ebcccu: goto label_4ebccc;
        case 0x4ebcd0u: goto label_4ebcd0;
        case 0x4ebcd4u: goto label_4ebcd4;
        case 0x4ebcd8u: goto label_4ebcd8;
        case 0x4ebcdcu: goto label_4ebcdc;
        case 0x4ebce0u: goto label_4ebce0;
        case 0x4ebce4u: goto label_4ebce4;
        case 0x4ebce8u: goto label_4ebce8;
        case 0x4ebcecu: goto label_4ebcec;
        case 0x4ebcf0u: goto label_4ebcf0;
        case 0x4ebcf4u: goto label_4ebcf4;
        case 0x4ebcf8u: goto label_4ebcf8;
        case 0x4ebcfcu: goto label_4ebcfc;
        case 0x4ebd00u: goto label_4ebd00;
        case 0x4ebd04u: goto label_4ebd04;
        case 0x4ebd08u: goto label_4ebd08;
        case 0x4ebd0cu: goto label_4ebd0c;
        case 0x4ebd10u: goto label_4ebd10;
        case 0x4ebd14u: goto label_4ebd14;
        case 0x4ebd18u: goto label_4ebd18;
        case 0x4ebd1cu: goto label_4ebd1c;
        default: break;
    }

    ctx->pc = 0x4ebca0u;

label_4ebca0:
    // 0x4ebca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ebca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ebca4:
    // 0x4ebca4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ebca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ebca8:
    // 0x4ebca8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ebca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ebcac:
    // 0x4ebcac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ebcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebcb0:
    // 0x4ebcb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ebcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ebcb4:
    // 0x4ebcb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ebcb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ebcb8:
    // 0x4ebcb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ebcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ebcbc:
    // 0x4ebcbc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ebcc0:
    if (ctx->pc == 0x4EBCC0u) {
        ctx->pc = 0x4EBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBCBCu;
        // 0x4ebcc0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBCC4u;
        goto label_4ebcc4;
    }
    ctx->pc = 0x4EBCBCu;
    {
        const bool branch_taken_0x4ebcbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBCBCu;
        // 0x4ebcc0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebcbc) {
            ctx->pc = 0x4EBD04u;
            goto label_4ebd04;
        }
    }
    ctx->pc = 0x4EBCC4u;
label_4ebcc4:
    // 0x4ebcc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ebcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebcc8:
    // 0x4ebcc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ebcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ebccc:
    // 0x4ebccc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ebcccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ebcd0:
    // 0x4ebcd0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ebcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ebcd4:
    // 0x4ebcd4: 0x60f809  jalr        $v1
label_4ebcd8:
    if (ctx->pc == 0x4EBCD8u) {
        ctx->pc = 0x4EBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBCD4u;
        // 0x4ebcd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBCDCu;
        goto label_4ebcdc;
    }
    ctx->pc = 0x4EBCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBCDCu);
        ctx->pc = 0x4EBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBCD4u;
        // 0x4ebcd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBCD4u, 0x4EBCDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBCDCu;
label_4ebcdc:
    // 0x4ebcdc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ebcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ebce0:
    // 0x4ebce0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ebce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ebce4:
    // 0x4ebce4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ebce4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ebce8:
    // 0x4ebce8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ebce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ebcec:
    // 0x4ebcec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ebcecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ebcf0:
    // 0x4ebcf0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ebcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ebcf4:
    // 0x4ebcf4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ebcf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ebcf8:
    // 0x4ebcf8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ebcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ebcfc:
    // 0x4ebcfc: 0x60f809  jalr        $v1
label_4ebd00:
    if (ctx->pc == 0x4EBD00u) {
        ctx->pc = 0x4EBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBCFCu;
        // 0x4ebd00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBD04u;
        goto label_4ebd04;
    }
    ctx->pc = 0x4EBCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBD04u);
        ctx->pc = 0x4EBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBCFCu;
        // 0x4ebd00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBCFCu, 0x4EBD04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBD04u;
label_4ebd04:
    // 0x4ebd04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ebd04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ebd08:
    // 0x4ebd08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ebd08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ebd0c:
    // 0x4ebd0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ebd0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebd10:
    // 0x4ebd10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ebd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebd14:
    // 0x4ebd14: 0x3e00008  jr          $ra
label_4ebd18:
    if (ctx->pc == 0x4EBD18u) {
        ctx->pc = 0x4EBD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBD14u;
        // 0x4ebd18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBD1Cu;
        goto label_4ebd1c;
    }
    ctx->pc = 0x4EBD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBD14u;
        // 0x4ebd18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EBD1Cu;
label_4ebd1c:
    // 0x4ebd1c: 0x0  nop
    ctx->pc = 0x4ebd1cu;
    // NOP
    ctx->pc = 0x4ebd20u;
}
