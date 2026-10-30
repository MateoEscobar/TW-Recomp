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

// Function: sub_004E4A78
// Address: 0x4e4a78 - 0x4e4af8
void sub_004E4A78_0x4e4a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4A78_0x4e4a78");
#endif

    switch (ctx->pc) {
        case 0x4e4a78u: goto label_4e4a78;
        case 0x4e4a7cu: goto label_4e4a7c;
        case 0x4e4a80u: goto label_4e4a80;
        case 0x4e4a84u: goto label_4e4a84;
        case 0x4e4a88u: goto label_4e4a88;
        case 0x4e4a8cu: goto label_4e4a8c;
        case 0x4e4a90u: goto label_4e4a90;
        case 0x4e4a94u: goto label_4e4a94;
        case 0x4e4a98u: goto label_4e4a98;
        case 0x4e4a9cu: goto label_4e4a9c;
        case 0x4e4aa0u: goto label_4e4aa0;
        case 0x4e4aa4u: goto label_4e4aa4;
        case 0x4e4aa8u: goto label_4e4aa8;
        case 0x4e4aacu: goto label_4e4aac;
        case 0x4e4ab0u: goto label_4e4ab0;
        case 0x4e4ab4u: goto label_4e4ab4;
        case 0x4e4ab8u: goto label_4e4ab8;
        case 0x4e4abcu: goto label_4e4abc;
        case 0x4e4ac0u: goto label_4e4ac0;
        case 0x4e4ac4u: goto label_4e4ac4;
        case 0x4e4ac8u: goto label_4e4ac8;
        case 0x4e4accu: goto label_4e4acc;
        case 0x4e4ad0u: goto label_4e4ad0;
        case 0x4e4ad4u: goto label_4e4ad4;
        case 0x4e4ad8u: goto label_4e4ad8;
        case 0x4e4adcu: goto label_4e4adc;
        case 0x4e4ae0u: goto label_4e4ae0;
        case 0x4e4ae4u: goto label_4e4ae4;
        case 0x4e4ae8u: goto label_4e4ae8;
        case 0x4e4aecu: goto label_4e4aec;
        case 0x4e4af0u: goto label_4e4af0;
        case 0x4e4af4u: goto label_4e4af4;
        default: break;
    }

    ctx->pc = 0x4e4a78u;

label_4e4a78:
    // 0x4e4a78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e4a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e4a7c:
    // 0x4e4a7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e4a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e4a80:
    // 0x4e4a80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e4a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e4a84:
    // 0x4e4a84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e4a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4a88:
    // 0x4e4a88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e4a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e4a8c:
    // 0x4e4a8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e4a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e4a90:
    // 0x4e4a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e4a94:
    // 0x4e4a94: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e4a98:
    if (ctx->pc == 0x4E4A98u) {
        ctx->pc = 0x4E4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4A94u;
        // 0x4e4a98: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4A9Cu;
        goto label_4e4a9c;
    }
    ctx->pc = 0x4E4A94u;
    {
        const bool branch_taken_0x4e4a94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4A94u;
        // 0x4e4a98: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4a94) {
            ctx->pc = 0x4E4ADCu;
            goto label_4e4adc;
        }
    }
    ctx->pc = 0x4E4A9Cu;
label_4e4a9c:
    // 0x4e4a9c: 0x8e024120  lw          $v0, 0x4120($s0)
    ctx->pc = 0x4e4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16672)));
label_4e4aa0:
    // 0x4e4aa0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e4aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e4aa4:
    // 0x4e4aa4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4e4aa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4e4aa8:
    // 0x4e4aa8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e4aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e4aac:
    // 0x4e4aac: 0x60f809  jalr        $v1
label_4e4ab0:
    if (ctx->pc == 0x4E4AB0u) {
        ctx->pc = 0x4E4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4AACu;
        // 0x4e4ab0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4AB4u;
        goto label_4e4ab4;
    }
    ctx->pc = 0x4E4AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E4AB4u);
        ctx->pc = 0x4E4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4AACu;
        // 0x4e4ab0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4AACu, 0x4E4AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4AB4u;
label_4e4ab4:
    // 0x4e4ab4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e4ab8:
    // 0x4e4ab8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e4ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e4abc:
    // 0x4e4abc: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e4abcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e4ac0:
    // 0x4e4ac0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e4ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e4ac4:
    // 0x4e4ac4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e4ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4ac8:
    // 0x4e4ac8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e4acc:
    // 0x4e4acc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e4accu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e4ad0:
    // 0x4e4ad0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e4ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e4ad4:
    // 0x4e4ad4: 0x60f809  jalr        $v1
label_4e4ad8:
    if (ctx->pc == 0x4E4AD8u) {
        ctx->pc = 0x4E4AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4AD4u;
        // 0x4e4ad8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4ADCu;
        goto label_4e4adc;
    }
    ctx->pc = 0x4E4AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E4ADCu);
        ctx->pc = 0x4E4AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4AD4u;
        // 0x4e4ad8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4AD4u, 0x4E4ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4ADCu;
label_4e4adc:
    // 0x4e4adc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e4adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4ae0:
    // 0x4e4ae0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e4ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e4ae4:
    // 0x4e4ae4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e4ae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4ae8:
    // 0x4e4ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e4aec:
    // 0x4e4aec: 0x3e00008  jr          $ra
label_4e4af0:
    if (ctx->pc == 0x4E4AF0u) {
        ctx->pc = 0x4E4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4AECu;
        // 0x4e4af0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4AF4u;
        goto label_4e4af4;
    }
    ctx->pc = 0x4E4AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4AECu;
        // 0x4e4af0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E4AF4u;
label_4e4af4:
    // 0x4e4af4: 0x0  nop
    ctx->pc = 0x4e4af4u;
    // NOP
    ctx->pc = 0x4e4af8u;
}
