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

// Function: sub_00450F70
// Address: 0x450f70 - 0x451010
void sub_00450F70_0x450f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450F70_0x450f70");
#endif

    switch (ctx->pc) {
        case 0x450f70u: goto label_450f70;
        case 0x450f74u: goto label_450f74;
        case 0x450f78u: goto label_450f78;
        case 0x450f7cu: goto label_450f7c;
        case 0x450f80u: goto label_450f80;
        case 0x450f84u: goto label_450f84;
        case 0x450f88u: goto label_450f88;
        case 0x450f8cu: goto label_450f8c;
        case 0x450f90u: goto label_450f90;
        case 0x450f94u: goto label_450f94;
        case 0x450f98u: goto label_450f98;
        case 0x450f9cu: goto label_450f9c;
        case 0x450fa0u: goto label_450fa0;
        case 0x450fa4u: goto label_450fa4;
        case 0x450fa8u: goto label_450fa8;
        case 0x450facu: goto label_450fac;
        case 0x450fb0u: goto label_450fb0;
        case 0x450fb4u: goto label_450fb4;
        case 0x450fb8u: goto label_450fb8;
        case 0x450fbcu: goto label_450fbc;
        case 0x450fc0u: goto label_450fc0;
        case 0x450fc4u: goto label_450fc4;
        case 0x450fc8u: goto label_450fc8;
        case 0x450fccu: goto label_450fcc;
        case 0x450fd0u: goto label_450fd0;
        case 0x450fd4u: goto label_450fd4;
        case 0x450fd8u: goto label_450fd8;
        case 0x450fdcu: goto label_450fdc;
        case 0x450fe0u: goto label_450fe0;
        case 0x450fe4u: goto label_450fe4;
        case 0x450fe8u: goto label_450fe8;
        case 0x450fecu: goto label_450fec;
        case 0x450ff0u: goto label_450ff0;
        case 0x450ff4u: goto label_450ff4;
        case 0x450ff8u: goto label_450ff8;
        case 0x450ffcu: goto label_450ffc;
        case 0x451000u: goto label_451000;
        case 0x451004u: goto label_451004;
        case 0x451008u: goto label_451008;
        case 0x45100cu: goto label_45100c;
        default: break;
    }

    ctx->pc = 0x450f70u;

label_450f70:
    // 0x450f70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x450f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_450f74:
    // 0x450f74: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x450f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_450f78:
    // 0x450f78: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x450f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_450f7c:
    // 0x450f7c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x450f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_450f80:
    // 0x450f80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x450f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_450f84:
    // 0x450f84: 0x34a5012f  ori         $a1, $a1, 0x12F
    ctx->pc = 0x450f84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
label_450f88:
    // 0x450f88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x450f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_450f8c:
    // 0x450f8c: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x450f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_450f90:
    // 0x450f90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x450f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_450f94:
    // 0x450f94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x450f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_450f98:
    // 0x450f98: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x450f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_450f9c:
    // 0x450f9c: 0x40f809  jalr        $v0
label_450fa0:
    if (ctx->pc == 0x450FA0u) {
        ctx->pc = 0x450FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450F9Cu;
        // 0x450fa0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x450FA4u;
        goto label_450fa4;
    }
    ctx->pc = 0x450F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x450FA4u);
        ctx->pc = 0x450FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450F9Cu;
        // 0x450fa0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450F9Cu, 0x450FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x450FA4u;
label_450fa4:
    // 0x450fa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x450fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_450fa8:
    // 0x450fa8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_450fac:
    if (ctx->pc == 0x450FACu) {
        ctx->pc = 0x450FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450FA8u;
        // 0x450fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x450FB0u;
        goto label_450fb0;
    }
    ctx->pc = 0x450FA8u;
    {
        const bool branch_taken_0x450fa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x450FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450FA8u;
        // 0x450fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450fa8) {
            ctx->pc = 0x450FF8u;
            goto label_450ff8;
        }
    }
    ctx->pc = 0x450FB0u;
label_450fb0:
    // 0x450fb0: 0x8f82841c  lw          $v0, -0x7BE4($gp)
    ctx->pc = 0x450fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935580)));
label_450fb4:
    // 0x450fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x450fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_450fb8:
    // 0x450fb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x450fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_450fbc:
    // 0x450fbc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x450fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_450fc0:
    // 0x450fc0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x450fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_450fc4:
    // 0x450fc4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x450fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_450fc8:
    // 0x450fc8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x450fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_450fcc:
    // 0x450fcc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x450fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_450fd0:
    // 0x450fd0: 0xc114e64  jal         func_453990
label_450fd4:
    if (ctx->pc == 0x450FD4u) {
        ctx->pc = 0x450FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450FD0u;
        // 0x450fd4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x450FD8u;
        goto label_450fd8;
    }
    ctx->pc = 0x450FD0u;
    SET_GPR_U32(ctx, 31, 0x450FD8u);
    ctx->pc = 0x450FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x450FD0u;
    // 0x450fd4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x453990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x453990u, 0x450FD0u, 0x450FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450FD8u;
label_450fd8:
    // 0x450fd8: 0xc114882  jal         func_452208
label_450fdc:
    if (ctx->pc == 0x450FDCu) {
        ctx->pc = 0x450FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450FD8u;
        // 0x450fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x450FE0u;
        goto label_450fe0;
    }
    ctx->pc = 0x450FD8u;
    SET_GPR_U32(ctx, 31, 0x450FE0u);
    ctx->pc = 0x450FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x450FD8u;
    // 0x450fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x452208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452208u, 0x450FD8u, 0x450FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450FE0u;
label_450fe0:
    // 0x450fe0: 0xc11508a  jal         func_454228
label_450fe4:
    if (ctx->pc == 0x450FE4u) {
        ctx->pc = 0x450FE8u;
        goto label_450fe8;
    }
    ctx->pc = 0x450FE0u;
    SET_GPR_U32(ctx, 31, 0x450FE8u);
    ctx->pc = 0x454228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x454228u, 0x450FE0u, 0x450FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450FE8u;
label_450fe8:
    // 0x450fe8: 0xc115210  jal         func_454840
label_450fec:
    if (ctx->pc == 0x450FECu) {
        ctx->pc = 0x450FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450FE8u;
        // 0x450fec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x450FF0u;
        goto label_450ff0;
    }
    ctx->pc = 0x450FE8u;
    SET_GPR_U32(ctx, 31, 0x450FF0u);
    ctx->pc = 0x450FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x450FE8u;
    // 0x450fec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x454840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x454840u, 0x450FE8u, 0x450FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450FF0u;
label_450ff0:
    // 0x450ff0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x450ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_450ff4:
    // 0x450ff4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x450ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_450ff8:
    // 0x450ff8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x450ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_450ffc:
    // 0x450ffc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x450ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_451000:
    // 0x451000: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x451000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_451004:
    // 0x451004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x451004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_451008:
    // 0x451008: 0x3e00008  jr          $ra
label_45100c:
    if (ctx->pc == 0x45100Cu) {
        ctx->pc = 0x45100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451008u;
        // 0x45100c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x451010u;
        goto label_fallthrough_0x451008;
    }
    ctx->pc = 0x451008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451008u;
        // 0x45100c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x451008:
    ctx->pc = 0x451010u;
}
