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

// Function: sub_0016CB78
// Address: 0x16cb78 - 0x16cc60
void sub_0016CB78_0x16cb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CB78_0x16cb78");
#endif

    switch (ctx->pc) {
        case 0x16cba0u: goto label_16cba0;
        case 0x16cba8u: goto label_16cba8;
        case 0x16cbd0u: goto label_16cbd0;
        default: break;
    }

    ctx->pc = 0x16cb78u;

    // 0x16cb78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16cb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16cb7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16cb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16cb80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16cb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16cb84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16cb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cb88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16cb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16cb8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16cb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cb90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16cb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16cb94: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x16cb94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x16cb98: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x16cb98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
    // 0x16cb9c: 0x0  nop
    ctx->pc = 0x16cb9cu;
    // NOP
label_16cba0:
    // 0x16cba0: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16CBA0u;
    SET_GPR_U32(ctx, 31, 0x16CBA8u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16CBA0u, 0x16CBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CBA8u;
label_16cba8:
    // 0x16cba8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16cba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cbac: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x16cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x16cbb0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16CBB0u;
    {
        const bool branch_taken_0x16cbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBB0u;
        // 0x16cbb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbb0) {
            ctx->pc = 0x16CC2Cu;
            goto label_16cc2c;
        }
    }
    ctx->pc = 0x16CBB8u;
    // 0x16cbb8: 0x24090130  addiu       $t1, $zero, 0x130
    ctx->pc = 0x16cbb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x16cbbc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x16cbbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cbc0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x16cbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16cbc4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x16cbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16cbc8: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x16cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16cbcc: 0x0  nop
    ctx->pc = 0x16cbccu;
    // NOP
label_16cbd0:
    // 0x16cbd0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16cbd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16cbd4: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x16cbd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16cbd8: 0x24420640  addiu       $v0, $v0, 0x640
    ctx->pc = 0x16cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x16cbdc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16cbe0: 0x90430050  lbu         $v1, 0x50($v0)
    ctx->pc = 0x16cbe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x16cbe4: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x16CBE4u;
    {
        const bool branch_taken_0x16cbe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cbe4) {
            ctx->pc = 0x16CBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CBE4u;
            // 0x16cbe8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CC20u;
            goto label_16cc20;
        }
    }
    ctx->pc = 0x16CBECu;
    // 0x16cbec: 0x16080007  bne         $s0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16CBECu;
    {
        const bool branch_taken_0x16cbec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 8));
        ctx->pc = 0x16CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBECu;
        // 0x16cbf0: 0x84420052  lh          $v0, 0x52($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbec) {
            ctx->pc = 0x16CC0Cu;
            goto label_16cc0c;
        }
    }
    ctx->pc = 0x16CBF4u;
    // 0x16cbf4: 0x50470013  beql        $v0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x16CBF4u;
    {
        const bool branch_taken_0x16cbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x16cbf4) {
            ctx->pc = 0x16CBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CBF4u;
            // 0x16cbf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CC44u;
            goto label_16cc44;
        }
    }
    ctx->pc = 0x16CBFCu;
    // 0x16cbfc: 0x54460008  bnel        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x16CBFCu;
    {
        const bool branch_taken_0x16cbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x16cbfc) {
            ctx->pc = 0x16CC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CBFCu;
            // 0x16cc00: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CC20u;
            goto label_16cc20;
        }
    }
    ctx->pc = 0x16CC04u;
    // 0x16cc04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16CC04u;
    {
        const bool branch_taken_0x16cc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC04u;
        // 0x16cc08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc04) {
            ctx->pc = 0x16CC44u;
            goto label_16cc44;
        }
    }
    ctx->pc = 0x16CC0Cu;
label_16cc0c:
    // 0x16cc0c: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x16cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x16cc10: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x16cc10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x16cc14: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16CC14u;
    {
        const bool branch_taken_0x16cc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC14u;
        // 0x16cc18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc14) {
            ctx->pc = 0x16CC44u;
            goto label_16cc44;
        }
    }
    ctx->pc = 0x16CC1Cu;
    // 0x16cc1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16cc20:
    // 0x16cc20: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x16cc20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x16cc24: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x16CC24u;
    {
        const bool branch_taken_0x16cc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC24u;
        // 0x16cc28: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc24) {
            ctx->pc = 0x16CBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cbd0;
        }
    }
    ctx->pc = 0x16CC2Cu;
label_16cc2c:
    // 0x16cc2c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16cc2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc30: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x16cc30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16cc34: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x16cc34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16cc38: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x16CC38u;
    {
        const bool branch_taken_0x16cc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC38u;
        // 0x16cc3c: 0x2328821  addu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc38) {
            ctx->pc = 0x16CBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cba0;
        }
    }
    ctx->pc = 0x16CC40u;
    // 0x16cc40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16cc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cc44:
    // 0x16cc44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16cc44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cc48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16cc48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16cc4c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16cc4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cc50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16cc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cc54: 0x3e00008  jr          $ra
    ctx->pc = 0x16CC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC54u;
        // 0x16cc58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CC5Cu;
    // 0x16cc5c: 0x0  nop
    ctx->pc = 0x16cc5cu;
    // NOP
    ctx->pc = 0x16cc60u;
}
