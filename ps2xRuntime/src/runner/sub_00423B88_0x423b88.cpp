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

// Function: sub_00423B88
// Address: 0x423b88 - 0x423c30
void sub_00423B88_0x423b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423B88_0x423b88");
#endif

    switch (ctx->pc) {
        case 0x423b88u: goto label_423b88;
        case 0x423b8cu: goto label_423b8c;
        case 0x423b90u: goto label_423b90;
        case 0x423b94u: goto label_423b94;
        case 0x423b98u: goto label_423b98;
        case 0x423b9cu: goto label_423b9c;
        case 0x423ba0u: goto label_423ba0;
        case 0x423ba4u: goto label_423ba4;
        case 0x423ba8u: goto label_423ba8;
        case 0x423bacu: goto label_423bac;
        case 0x423bb0u: goto label_423bb0;
        case 0x423bb4u: goto label_423bb4;
        case 0x423bb8u: goto label_423bb8;
        case 0x423bbcu: goto label_423bbc;
        case 0x423bc0u: goto label_423bc0;
        case 0x423bc4u: goto label_423bc4;
        case 0x423bc8u: goto label_423bc8;
        case 0x423bccu: goto label_423bcc;
        case 0x423bd0u: goto label_423bd0;
        case 0x423bd4u: goto label_423bd4;
        case 0x423bd8u: goto label_423bd8;
        case 0x423bdcu: goto label_423bdc;
        case 0x423be0u: goto label_423be0;
        case 0x423be4u: goto label_423be4;
        case 0x423be8u: goto label_423be8;
        case 0x423becu: goto label_423bec;
        case 0x423bf0u: goto label_423bf0;
        case 0x423bf4u: goto label_423bf4;
        case 0x423bf8u: goto label_423bf8;
        case 0x423bfcu: goto label_423bfc;
        case 0x423c00u: goto label_423c00;
        case 0x423c04u: goto label_423c04;
        case 0x423c08u: goto label_423c08;
        case 0x423c0cu: goto label_423c0c;
        case 0x423c10u: goto label_423c10;
        case 0x423c14u: goto label_423c14;
        case 0x423c18u: goto label_423c18;
        case 0x423c1cu: goto label_423c1c;
        case 0x423c20u: goto label_423c20;
        case 0x423c24u: goto label_423c24;
        case 0x423c28u: goto label_423c28;
        case 0x423c2cu: goto label_423c2c;
        default: break;
    }

    ctx->pc = 0x423b88u;

label_423b88:
    // 0x423b88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x423b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_423b8c:
    // 0x423b8c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x423b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_423b90:
    // 0x423b90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x423b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_423b94:
    // 0x423b94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x423b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423b98:
    // 0x423b98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x423b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_423b9c:
    // 0x423b9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_423ba0:
    // 0x423ba0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x423ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_423ba4:
    // 0x423ba4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_423ba8:
    if (ctx->pc == 0x423BA8u) {
        ctx->pc = 0x423BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423BA4u;
        // 0x423ba8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423BACu;
        goto label_423bac;
    }
    ctx->pc = 0x423BA4u;
    {
        const bool branch_taken_0x423ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423BA4u;
        // 0x423ba8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423ba4) {
            ctx->pc = 0x423C14u;
            goto label_423c14;
        }
    }
    ctx->pc = 0x423BACu;
label_423bac:
    // 0x423bac: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x423bacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_423bb0:
    // 0x423bb0: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x423bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_423bb4:
    // 0x423bb4: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x423bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_423bb8:
    // 0x423bb8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x423bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_423bbc:
    // 0x423bbc: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x423bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_423bc0:
    // 0x423bc0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x423bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_423bc4:
    // 0x423bc4: 0x60f809  jalr        $v1
label_423bc8:
    if (ctx->pc == 0x423BC8u) {
        ctx->pc = 0x423BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423BC4u;
        // 0x423bc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423BCCu;
        goto label_423bcc;
    }
    ctx->pc = 0x423BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x423BCCu);
        ctx->pc = 0x423BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423BC4u;
        // 0x423bc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423BC4u, 0x423BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423BCCu;
label_423bcc:
    // 0x423bcc: 0x8e0827e4  lw          $t0, 0x27E4($s0)
    ctx->pc = 0x423bccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_423bd0:
    // 0x423bd0: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x423bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_423bd4:
    // 0x423bd4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x423bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_423bd8:
    // 0x423bd8: 0x24c6bb20  addiu       $a2, $a2, -0x44E0
    ctx->pc = 0x423bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949664));
label_423bdc:
    // 0x423bdc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x423bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_423be0:
    // 0x423be0: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x423be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_423be4:
    // 0x423be4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x423be4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_423be8:
    // 0x423be8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x423be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_423bec:
    // 0x423bec: 0x60f809  jalr        $v1
label_423bf0:
    if (ctx->pc == 0x423BF0u) {
        ctx->pc = 0x423BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423BECu;
        // 0x423bf0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423BF4u;
        goto label_423bf4;
    }
    ctx->pc = 0x423BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x423BF4u);
        ctx->pc = 0x423BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423BECu;
        // 0x423bf0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423BECu, 0x423BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423BF4u;
label_423bf4:
    // 0x423bf4: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x423bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_423bf8:
    // 0x423bf8: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x423bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_423bfc:
    // 0x423bfc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x423bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_423c00:
    // 0x423c00: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x423c00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_423c04:
    // 0x423c04: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x423c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_423c08:
    // 0x423c08: 0x60f809  jalr        $v1
label_423c0c:
    if (ctx->pc == 0x423C0Cu) {
        ctx->pc = 0x423C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C08u;
        // 0x423c0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423C10u;
        goto label_423c10;
    }
    ctx->pc = 0x423C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x423C10u);
        ctx->pc = 0x423C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C08u;
        // 0x423c0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423C08u, 0x423C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423C10u;
label_423c10:
    // 0x423c10: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x423c10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_423c14:
    // 0x423c14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x423c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_423c18:
    // 0x423c18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x423c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_423c1c:
    // 0x423c1c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x423c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_423c20:
    // 0x423c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_423c24:
    // 0x423c24: 0x3e00008  jr          $ra
label_423c28:
    if (ctx->pc == 0x423C28u) {
        ctx->pc = 0x423C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C24u;
        // 0x423c28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423C2Cu;
        goto label_423c2c;
    }
    ctx->pc = 0x423C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C24u;
        // 0x423c28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423C2Cu;
label_423c2c:
    // 0x423c2c: 0x0  nop
    ctx->pc = 0x423c2cu;
    // NOP
    ctx->pc = 0x423c30u;
}
