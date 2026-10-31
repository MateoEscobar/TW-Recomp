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

// Function: sub_00235E70
// Address: 0x235e70 - 0x235f10
void sub_00235E70_0x235e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235E70_0x235e70");
#endif

    switch (ctx->pc) {
        case 0x235e70u: goto label_235e70;
        case 0x235e74u: goto label_235e74;
        case 0x235e78u: goto label_235e78;
        case 0x235e7cu: goto label_235e7c;
        case 0x235e80u: goto label_235e80;
        case 0x235e84u: goto label_235e84;
        case 0x235e88u: goto label_235e88;
        case 0x235e8cu: goto label_235e8c;
        case 0x235e90u: goto label_235e90;
        case 0x235e94u: goto label_235e94;
        case 0x235e98u: goto label_235e98;
        case 0x235e9cu: goto label_235e9c;
        case 0x235ea0u: goto label_235ea0;
        case 0x235ea4u: goto label_235ea4;
        case 0x235ea8u: goto label_235ea8;
        case 0x235eacu: goto label_235eac;
        case 0x235eb0u: goto label_235eb0;
        case 0x235eb4u: goto label_235eb4;
        case 0x235eb8u: goto label_235eb8;
        case 0x235ebcu: goto label_235ebc;
        case 0x235ec0u: goto label_235ec0;
        case 0x235ec4u: goto label_235ec4;
        case 0x235ec8u: goto label_235ec8;
        case 0x235eccu: goto label_235ecc;
        case 0x235ed0u: goto label_235ed0;
        case 0x235ed4u: goto label_235ed4;
        case 0x235ed8u: goto label_235ed8;
        case 0x235edcu: goto label_235edc;
        case 0x235ee0u: goto label_235ee0;
        case 0x235ee4u: goto label_235ee4;
        case 0x235ee8u: goto label_235ee8;
        case 0x235eecu: goto label_235eec;
        case 0x235ef0u: goto label_235ef0;
        case 0x235ef4u: goto label_235ef4;
        case 0x235ef8u: goto label_235ef8;
        case 0x235efcu: goto label_235efc;
        case 0x235f00u: goto label_235f00;
        case 0x235f04u: goto label_235f04;
        case 0x235f08u: goto label_235f08;
        case 0x235f0cu: goto label_235f0c;
        default: break;
    }

    ctx->pc = 0x235e70u;

label_235e70:
    // 0x235e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_235e74:
    // 0x235e74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_235e78:
    // 0x235e78: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_235e7c:
    // 0x235e7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235e80:
    // 0x235e80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_235e84:
    // 0x235e84: 0xc0e4060  jal         func_390180
label_235e88:
    if (ctx->pc == 0x235E88u) {
        ctx->pc = 0x235E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E84u;
        // 0x235e88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E8Cu;
        goto label_235e8c;
    }
    ctx->pc = 0x235E84u;
    SET_GPR_U32(ctx, 31, 0x235E8Cu);
    ctx->pc = 0x235E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E84u;
    // 0x235e88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235E84u, 0x235E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E8Cu;
label_235e8c:
    // 0x235e8c: 0xc08a61a  jal         func_229868
label_235e90:
    if (ctx->pc == 0x235E90u) {
        ctx->pc = 0x235E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E8Cu;
        // 0x235e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E94u;
        goto label_235e94;
    }
    ctx->pc = 0x235E8Cu;
    SET_GPR_U32(ctx, 31, 0x235E94u);
    ctx->pc = 0x235E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E8Cu;
    // 0x235e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235E8Cu, 0x235E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E94u;
label_235e94:
    // 0x235e94: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x235e94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235e98:
    // 0x235e98: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
label_235e9c:
    if (ctx->pc == 0x235E9Cu) {
        ctx->pc = 0x235E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E98u;
        // 0x235e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EA0u;
        goto label_235ea0;
    }
    ctx->pc = 0x235E98u;
    {
        const bool branch_taken_0x235e98 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E98u;
        // 0x235e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e98) {
            ctx->pc = 0x235F00u;
            goto label_235f00;
        }
    }
    ctx->pc = 0x235EA0u;
label_235ea0:
    // 0x235ea0: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_235ea4:
    if (ctx->pc == 0x235EA4u) {
        ctx->pc = 0x235EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EA0u;
        // 0x235ea4: 0xdd2200e0  ld          $v0, 0xE0($t1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EA8u;
        goto label_235ea8;
    }
    ctx->pc = 0x235EA0u;
    {
        const bool branch_taken_0x235ea0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x235EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EA0u;
        // 0x235ea4: 0xdd2200e0  ld          $v0, 0xE0($t1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ea0) {
            ctx->pc = 0x235EDCu;
            goto label_235edc;
        }
    }
    ctx->pc = 0x235EA8u;
label_235ea8:
    // 0x235ea8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x235ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_235eac:
    // 0x235eac: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x235eacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_235eb0:
    // 0x235eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235eb4:
    // 0x235eb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x235eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_235eb8:
    // 0x235eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x235eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235ebc:
    // 0x235ebc: 0xfd2200e0  sd          $v0, 0xE0($t1)
    ctx->pc = 0x235ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 224), GPR_U64(ctx, 2));
label_235ec0:
    // 0x235ec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x235ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235ec4:
    // 0x235ec4: 0x85040120  lh          $a0, 0x120($t0)
    ctx->pc = 0x235ec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 288)));
label_235ec8:
    // 0x235ec8: 0x8d020124  lw          $v0, 0x124($t0)
    ctx->pc = 0x235ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 292)));
label_235ecc:
    // 0x235ecc: 0x40f809  jalr        $v0
label_235ed0:
    if (ctx->pc == 0x235ED0u) {
        ctx->pc = 0x235ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235ECCu;
        // 0x235ed0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235ED4u;
        goto label_235ed4;
    }
    ctx->pc = 0x235ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235ED4u);
        ctx->pc = 0x235ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235ECCu;
        // 0x235ed0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235ECCu, 0x235ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235ED4u;
label_235ed4:
    // 0x235ed4: 0x1000000b  b           . + 4 + (0xB << 2)
label_235ed8:
    if (ctx->pc == 0x235ED8u) {
        ctx->pc = 0x235ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235ED4u;
        // 0x235ed8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EDCu;
        goto label_235edc;
    }
    ctx->pc = 0x235ED4u;
    {
        const bool branch_taken_0x235ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235ED4u;
        // 0x235ed8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ed4) {
            ctx->pc = 0x235F04u;
            goto label_235f04;
        }
    }
    ctx->pc = 0x235EDCu;
label_235edc:
    // 0x235edc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x235edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_235ee0:
    // 0x235ee0: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x235ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
label_235ee4:
    // 0x235ee4: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x235ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_235ee8:
    // 0x235ee8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_235eec:
    // 0x235eec: 0xfd2200e0  sd          $v0, 0xE0($t1)
    ctx->pc = 0x235eecu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 224), GPR_U64(ctx, 2));
label_235ef0:
    // 0x235ef0: 0x84a40128  lh          $a0, 0x128($a1)
    ctx->pc = 0x235ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 296)));
label_235ef4:
    // 0x235ef4: 0x8ca2012c  lw          $v0, 0x12C($a1)
    ctx->pc = 0x235ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 300)));
label_235ef8:
    // 0x235ef8: 0x40f809  jalr        $v0
label_235efc:
    if (ctx->pc == 0x235EFCu) {
        ctx->pc = 0x235EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EF8u;
        // 0x235efc: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F00u;
        goto label_235f00;
    }
    ctx->pc = 0x235EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235F00u);
        ctx->pc = 0x235EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EF8u;
        // 0x235efc: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235EF8u, 0x235F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235F00u;
label_235f00:
    // 0x235f00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_235f04:
    // 0x235f04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235f08:
    // 0x235f08: 0x3e00008  jr          $ra
label_235f0c:
    if (ctx->pc == 0x235F0Cu) {
        ctx->pc = 0x235F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F08u;
        // 0x235f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F10u;
        goto label_fallthrough_0x235f08;
    }
    ctx->pc = 0x235F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F08u;
        // 0x235f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x235f08:
    ctx->pc = 0x235F10u;
}
