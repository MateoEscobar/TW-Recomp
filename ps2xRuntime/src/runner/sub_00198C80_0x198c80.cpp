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

// Function: sub_00198C80
// Address: 0x198c80 - 0x198d40
void sub_00198C80_0x198c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198C80_0x198c80");
#endif

    switch (ctx->pc) {
        case 0x198c80u: goto label_198c80;
        case 0x198c84u: goto label_198c84;
        case 0x198c88u: goto label_198c88;
        case 0x198c8cu: goto label_198c8c;
        case 0x198c90u: goto label_198c90;
        case 0x198c94u: goto label_198c94;
        case 0x198c98u: goto label_198c98;
        case 0x198c9cu: goto label_198c9c;
        case 0x198ca0u: goto label_198ca0;
        case 0x198ca4u: goto label_198ca4;
        case 0x198ca8u: goto label_198ca8;
        case 0x198cacu: goto label_198cac;
        case 0x198cb0u: goto label_198cb0;
        case 0x198cb4u: goto label_198cb4;
        case 0x198cb8u: goto label_198cb8;
        case 0x198cbcu: goto label_198cbc;
        case 0x198cc0u: goto label_198cc0;
        case 0x198cc4u: goto label_198cc4;
        case 0x198cc8u: goto label_198cc8;
        case 0x198cccu: goto label_198ccc;
        case 0x198cd0u: goto label_198cd0;
        case 0x198cd4u: goto label_198cd4;
        case 0x198cd8u: goto label_198cd8;
        case 0x198cdcu: goto label_198cdc;
        case 0x198ce0u: goto label_198ce0;
        case 0x198ce4u: goto label_198ce4;
        case 0x198ce8u: goto label_198ce8;
        case 0x198cecu: goto label_198cec;
        case 0x198cf0u: goto label_198cf0;
        case 0x198cf4u: goto label_198cf4;
        case 0x198cf8u: goto label_198cf8;
        case 0x198cfcu: goto label_198cfc;
        case 0x198d00u: goto label_198d00;
        case 0x198d04u: goto label_198d04;
        case 0x198d08u: goto label_198d08;
        case 0x198d0cu: goto label_198d0c;
        case 0x198d10u: goto label_198d10;
        case 0x198d14u: goto label_198d14;
        case 0x198d18u: goto label_198d18;
        case 0x198d1cu: goto label_198d1c;
        case 0x198d20u: goto label_198d20;
        case 0x198d24u: goto label_198d24;
        case 0x198d28u: goto label_198d28;
        case 0x198d2cu: goto label_198d2c;
        case 0x198d30u: goto label_198d30;
        case 0x198d34u: goto label_198d34;
        case 0x198d38u: goto label_198d38;
        case 0x198d3cu: goto label_198d3c;
        default: break;
    }

    ctx->pc = 0x198c80u;

label_198c80:
    // 0x198c80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x198c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_198c84:
    // 0x198c84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x198c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_198c88:
    // 0x198c88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x198c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_198c8c:
    // 0x198c8c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x198c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_198c90:
    // 0x198c90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x198c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_198c94:
    // 0x198c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_198c98:
    // 0x198c98: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x198c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_198c9c:
    // 0x198c9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x198c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_198ca0:
    // 0x198ca0: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x198ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_198ca4:
    // 0x198ca4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x198ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_198ca8:
    // 0x198ca8: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x198ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_198cac:
    // 0x198cac: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
label_198cb0:
    if (ctx->pc == 0x198CB0u) {
        ctx->pc = 0x198CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CACu;
        // 0x198cb0: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198CB4u;
        goto label_198cb4;
    }
    ctx->pc = 0x198CACu;
    {
        const bool branch_taken_0x198cac = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x198CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CACu;
        // 0x198cb0: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cac) {
            ctx->pc = 0x198CC0u;
            goto label_198cc0;
        }
    }
    ctx->pc = 0x198CB4u;
label_198cb4:
    // 0x198cb4: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x198cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_198cb8:
    // 0x198cb8: 0x5c400015  bgtzl       $v0, . + 4 + (0x15 << 2)
label_198cbc:
    if (ctx->pc == 0x198CBCu) {
        ctx->pc = 0x198CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CB8u;
        // 0x198cbc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198CC0u;
        goto label_198cc0;
    }
    ctx->pc = 0x198CB8u;
    {
        const bool branch_taken_0x198cb8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x198cb8) {
            ctx->pc = 0x198CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198CB8u;
            // 0x198cbc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198D10u;
            goto label_198d10;
        }
    }
    ctx->pc = 0x198CC0u;
label_198cc0:
    // 0x198cc0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x198cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_198cc4:
    // 0x198cc4: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x198cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_198cc8:
    // 0x198cc8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x198cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_198ccc:
    // 0x198ccc: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x198cccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_198cd0:
    // 0x198cd0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x198cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_198cd4:
    // 0x198cd4: 0x60f809  jalr        $v1
label_198cd8:
    if (ctx->pc == 0x198CD8u) {
        ctx->pc = 0x198CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CD4u;
        // 0x198cd8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198CDCu;
        goto label_198cdc;
    }
    ctx->pc = 0x198CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x198CDCu);
        ctx->pc = 0x198CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CD4u;
        // 0x198cd8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198CD4u, 0x198CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198CDCu;
label_198cdc:
    // 0x198cdc: 0xc10b1c6  jal         func_42C718
label_198ce0:
    if (ctx->pc == 0x198CE0u) {
        ctx->pc = 0x198CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CDCu;
        // 0x198ce0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x198CE4u;
        goto label_198ce4;
    }
    ctx->pc = 0x198CDCu;
    SET_GPR_U32(ctx, 31, 0x198CE4u);
    ctx->pc = 0x198CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198CDCu;
    // 0x198ce0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x198CDCu, 0x198CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198CE4u;
label_198ce4:
    // 0x198ce4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x198ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_198ce8:
    // 0x198ce8: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x198ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_198cec:
    // 0x198cec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x198cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_198cf0:
    // 0x198cf0: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x198cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_198cf4:
    // 0x198cf4: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x198cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_198cf8:
    // 0x198cf8: 0x60f809  jalr        $v1
label_198cfc:
    if (ctx->pc == 0x198CFCu) {
        ctx->pc = 0x198CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CF8u;
        // 0x198cfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D00u;
        goto label_198d00;
    }
    ctx->pc = 0x198CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x198D00u);
        ctx->pc = 0x198CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CF8u;
        // 0x198cfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198CF8u, 0x198D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198D00u;
label_198d00:
    // 0x198d00: 0xc10b1c6  jal         func_42C718
label_198d04:
    if (ctx->pc == 0x198D04u) {
        ctx->pc = 0x198D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D00u;
        // 0x198d04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D08u;
        goto label_198d08;
    }
    ctx->pc = 0x198D00u;
    SET_GPR_U32(ctx, 31, 0x198D08u);
    ctx->pc = 0x198D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D00u;
    // 0x198d04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x198D00u, 0x198D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198D08u;
label_198d08:
    // 0x198d08: 0x10000003  b           . + 4 + (0x3 << 2)
label_198d0c:
    if (ctx->pc == 0x198D0Cu) {
        ctx->pc = 0x198D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D08u;
        // 0x198d0c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D10u;
        goto label_198d10;
    }
    ctx->pc = 0x198D08u;
    {
        const bool branch_taken_0x198d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D08u;
        // 0x198d0c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d08) {
            ctx->pc = 0x198D18u;
            goto label_198d18;
        }
    }
    ctx->pc = 0x198D10u;
label_198d10:
    // 0x198d10: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x198d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_198d14:
    // 0x198d14: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x198d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_198d18:
    // 0x198d18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x198d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_198d1c:
    // 0x198d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198d20:
    // 0x198d20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x198d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_198d24:
    // 0x198d24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x198d24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_198d28:
    // 0x198d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198d2c:
    // 0x198d2c: 0x3e00008  jr          $ra
label_198d30:
    if (ctx->pc == 0x198D30u) {
        ctx->pc = 0x198D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D2Cu;
        // 0x198d30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D34u;
        goto label_198d34;
    }
    ctx->pc = 0x198D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D2Cu;
        // 0x198d30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198D34u;
label_198d34:
    // 0x198d34: 0x0  nop
    ctx->pc = 0x198d34u;
    // NOP
label_198d38:
    // 0x198d38: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x198d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_198d3c:
    // 0x198d3c: 0x0  nop
    ctx->pc = 0x198d3cu;
    // NOP
    ctx->pc = 0x198d40u;
}
