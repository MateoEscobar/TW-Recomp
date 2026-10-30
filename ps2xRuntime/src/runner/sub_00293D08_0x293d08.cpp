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

// Function: sub_00293D08
// Address: 0x293d08 - 0x293e40
void sub_00293D08_0x293d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293D08_0x293d08");
#endif

    switch (ctx->pc) {
        case 0x293d50u: goto label_293d50;
        case 0x293d60u: goto label_293d60;
        case 0x293d88u: goto label_293d88;
        case 0x293d9cu: goto label_293d9c;
        case 0x293dc0u: goto label_293dc0;
        case 0x293df0u: goto label_293df0;
        case 0x293dfcu: goto label_293dfc;
        default: break;
    }

    ctx->pc = 0x293d08u;

    // 0x293d08: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x293d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x293d0c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x293d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x293d10: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x293d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x293d14: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x293d14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d18: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x293d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x293d1c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x293d1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d20: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x293d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x293d24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x293d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d28: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x293d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x293d2c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x293d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x293d30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x293d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d34: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x293d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x293d38: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x293d38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293d3c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x293d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x293d40: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x293d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x293d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x293d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x293d48: 0xc0e409a  jal         func_390268
    ctx->pc = 0x293D48u;
    SET_GPR_U32(ctx, 31, 0x293D50u);
    ctx->pc = 0x293D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D48u;
    // 0x293d4c: 0x3c16006d  lui         $s6, 0x6D (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)109 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x293D48u, 0x293D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D50u;
label_293d50:
    // 0x293d50: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x293d50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d54: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x293d58: 0x2451de30  addiu       $s1, $v0, -0x21D0
    ctx->pc = 0x293d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x293d5c: 0x0  nop
    ctx->pc = 0x293d5cu;
    // NOP
label_293d60:
    // 0x293d60: 0x8ec3e970  lw          $v1, -0x1690($s6)
    ctx->pc = 0x293d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961520)));
    // 0x293d64: 0x3242001f  andi        $v0, $s2, 0x1F
    ctx->pc = 0x293d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
    // 0x293d68: 0x531004  sllv        $v0, $s3, $v0
    ctx->pc = 0x293d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x293d6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x293d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x293d70: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x293d70u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x293d74: 0x5613000b  bnel        $s0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x293D74u;
    {
        const bool branch_taken_0x293d74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x293d74) {
            ctx->pc = 0x293D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293D74u;
            // 0x293d78: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293DA4u;
            goto label_293da4;
        }
    }
    ctx->pc = 0x293D7Cu;
    // 0x293d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d80: 0xc0a6726  jal         func_299C98
    ctx->pc = 0x293D80u;
    SET_GPR_U32(ctx, 31, 0x293D88u);
    ctx->pc = 0x293D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D80u;
    // 0x293d84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299C98u, 0x293D80u, 0x293D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D88u;
label_293d88:
    // 0x293d88: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x293D88u;
    {
        const bool branch_taken_0x293d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x293D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D88u;
        // 0x293d8c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d88) {
            ctx->pc = 0x293DA4u;
            goto label_293da4;
        }
    }
    ctx->pc = 0x293D90u;
    // 0x293d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d94: 0xc0a6748  jal         func_299D20
    ctx->pc = 0x293D94u;
    SET_GPR_U32(ctx, 31, 0x293D9Cu);
    ctx->pc = 0x293D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D94u;
    // 0x293d98: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299D20u, 0x293D94u, 0x293D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D9Cu;
label_293d9c:
    // 0x293d9c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x293D9Cu;
    {
        const bool branch_taken_0x293d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D9Cu;
        // 0x293da0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d9c) {
            ctx->pc = 0x293E18u;
            goto label_293e18;
        }
    }
    ctx->pc = 0x293DA4u;
label_293da4:
    // 0x293da4: 0x2e420014  sltiu       $v0, $s2, 0x14
    ctx->pc = 0x293da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x293da8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x293DA8u;
    {
        const bool branch_taken_0x293da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293DA8u;
        // 0x293dac: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293da8) {
            ctx->pc = 0x293D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293d60;
        }
    }
    ctx->pc = 0x293DB0u;
    // 0x293db0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x293db4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293db8: 0x2450de30  addiu       $s0, $v0, -0x21D0
    ctx->pc = 0x293db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x293dbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x293dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293dc0:
    // 0x293dc0: 0x8ec4e970  lw          $a0, -0x1690($s6)
    ctx->pc = 0x293dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961520)));
    // 0x293dc4: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x293dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x293dc8: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x293dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x293dcc: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x293dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x293dd0: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x293DD0u;
    {
        const bool branch_taken_0x293dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x293dd0) {
            ctx->pc = 0x293DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293DD0u;
            // 0x293dd4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293E04u;
            goto label_293e04;
        }
    }
    ctx->pc = 0x293DD8u;
    // 0x293dd8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x293dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x293ddc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x293ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293de0: 0xaec2e970  sw          $v0, -0x1690($s6)
    ctx->pc = 0x293de0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294961520), GPR_U32(ctx, 2));
    // 0x293de4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x293de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293de8: 0xc0a654e  jal         func_299538
    ctx->pc = 0x293DE8u;
    SET_GPR_U32(ctx, 31, 0x293DF0u);
    ctx->pc = 0x293DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293DE8u;
    // 0x293dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299538u, 0x293DE8u, 0x293DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293DF0u;
label_293df0:
    // 0x293df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x293df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293df4: 0xc0a6748  jal         func_299D20
    ctx->pc = 0x293DF4u;
    SET_GPR_U32(ctx, 31, 0x293DFCu);
    ctx->pc = 0x293DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293DF4u;
    // 0x293df8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299D20u, 0x293DF4u, 0x293DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293DFCu;
label_293dfc:
    // 0x293dfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x293DFCu;
    {
        const bool branch_taken_0x293dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293DFCu;
        // 0x293e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293dfc) {
            ctx->pc = 0x293E14u;
            goto label_293e14;
        }
    }
    ctx->pc = 0x293E04u;
label_293e04:
    // 0x293e04: 0x2ca20014  sltiu       $v0, $a1, 0x14
    ctx->pc = 0x293e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x293e08: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x293E08u;
    {
        const bool branch_taken_0x293e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E08u;
        // 0x293e0c: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e08) {
            ctx->pc = 0x293DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293dc0;
        }
    }
    ctx->pc = 0x293E10u;
    // 0x293e10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x293e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293e14:
    // 0x293e14: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x293e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_293e18:
    // 0x293e18: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x293e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x293e1c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x293e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293e20: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x293e20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293e24: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x293e24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293e28: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x293e28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293e2c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x293e2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293e30: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x293e30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x293e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293e38: 0x3e00008  jr          $ra
    ctx->pc = 0x293E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E38u;
        // 0x293e3c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293E40u;
}
