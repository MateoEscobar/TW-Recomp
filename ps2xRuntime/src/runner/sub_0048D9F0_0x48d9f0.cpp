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

// Function: sub_0048D9F0
// Address: 0x48d9f0 - 0x48db20
void sub_0048D9F0_0x48d9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D9F0_0x48d9f0");
#endif

    switch (ctx->pc) {
        case 0x48da1cu: goto label_48da1c;
        case 0x48da40u: goto label_48da40;
        case 0x48da54u: goto label_48da54;
        case 0x48da6cu: goto label_48da6c;
        case 0x48da88u: goto label_48da88;
        case 0x48da94u: goto label_48da94;
        case 0x48daa0u: goto label_48daa0;
        case 0x48daf4u: goto label_48daf4;
        case 0x48db04u: goto label_48db04;
        default: break;
    }

    ctx->pc = 0x48d9f0u;

    // 0x48d9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48d9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48d9f4: 0x27828a14  addiu       $v0, $gp, -0x75EC
    ctx->pc = 0x48d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937108));
    // 0x48d9f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x48d9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x48d9fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48d9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48da00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48da00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48da04: 0xac5c0000  sw          $gp, 0x0($v0)
    ctx->pc = 0x48da04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 28));
    // 0x48da08: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x48da08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x48da0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48da10: 0x24a5bdb0  addiu       $a1, $a1, -0x4250
    ctx->pc = 0x48da10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950320));
    // 0x48da14: 0xc10f360  jal         func_43CD80
    ctx->pc = 0x48DA14u;
    SET_GPR_U32(ctx, 31, 0x48DA1Cu);
    ctx->pc = 0x48DA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DA14u;
    // 0x48da18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CD80u, 0x48DA14u, 0x48DA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DA1Cu;
label_48da1c:
    // 0x48da1c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x48da1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48da20: 0x10510039  beq         $v0, $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x48DA20u;
    {
        const bool branch_taken_0x48da20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x48DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DA20u;
        // 0x48da24: 0xaf82868c  sw          $v0, -0x7974($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48da20) {
            ctx->pc = 0x48DB08u;
            goto label_48db08;
        }
    }
    ctx->pc = 0x48DA28u;
    // 0x48da28: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x48da28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x48da2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48da30: 0x2450b708  addiu       $s0, $v0, -0x48F8
    ctx->pc = 0x48da30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948616));
    // 0x48da34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48da34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48da38: 0xc10f36c  jal         func_43CDB0
    ctx->pc = 0x48DA38u;
    SET_GPR_U32(ctx, 31, 0x48DA40u);
    ctx->pc = 0x48DA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DA38u;
    // 0x48da3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDB0u, 0x48DA38u, 0x48DA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DA40u;
label_48da40:
    // 0x48da40: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x48DA40u;
    {
        const bool branch_taken_0x48da40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x48DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DA40u;
        // 0x48da44: 0xaf828690  sw          $v0, -0x7970($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48da40) {
            ctx->pc = 0x48DA5Cu;
            goto label_48da5c;
        }
    }
    ctx->pc = 0x48DA48u;
    // 0x48da48: 0x8f85868c  lw          $a1, -0x7974($gp)
    ctx->pc = 0x48da48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
    // 0x48da4c: 0xc10f368  jal         func_43CDA0
    ctx->pc = 0x48DA4Cu;
    SET_GPR_U32(ctx, 31, 0x48DA54u);
    ctx->pc = 0x48DA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DA4Cu;
    // 0x48da50: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDA0u, 0x48DA4Cu, 0x48DA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DA54u;
label_48da54:
    // 0x48da54: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x48DA54u;
    {
        const bool branch_taken_0x48da54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DA54u;
        // 0x48da58: 0xaf91868c  sw          $s1, -0x7974($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936204), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48da54) {
            ctx->pc = 0x48DB08u;
            goto label_48db08;
        }
    }
    ctx->pc = 0x48DA5Cu;
label_48da5c:
    // 0x48da5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x48da5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48da60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48da60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48da64: 0xc10f36c  jal         func_43CDB0
    ctx->pc = 0x48DA64u;
    SET_GPR_U32(ctx, 31, 0x48DA6Cu);
    ctx->pc = 0x48DA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DA64u;
    // 0x48da68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDB0u, 0x48DA64u, 0x48DA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DA6Cu;
label_48da6c:
    // 0x48da6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48da6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48da70: 0x1211001d  beq         $s0, $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x48DA70u;
    {
        const bool branch_taken_0x48da70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x48DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DA70u;
        // 0x48da74: 0xaf908694  sw          $s0, -0x796C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48da70) {
            ctx->pc = 0x48DAE8u;
            goto label_48dae8;
        }
    }
    ctx->pc = 0x48DA78u;
    // 0x48da78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48da78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48da7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48da80: 0xc10f6d0  jal         func_43DB40
    ctx->pc = 0x48DA80u;
    SET_GPR_U32(ctx, 31, 0x48DA88u);
    ctx->pc = 0x48DA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DA80u;
    // 0x48da84: 0xa3828a09  sb          $v0, -0x75F7($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937097), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DB40u, 0x48DA80u, 0x48DA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DA88u;
label_48da88:
    // 0x48da88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48da88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48da8c: 0xc10f704  jal         func_43DC10
    ctx->pc = 0x48DA8Cu;
    SET_GPR_U32(ctx, 31, 0x48DA94u);
    ctx->pc = 0x48DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DA8Cu;
    // 0x48da90: 0xa3828698  sb          $v0, -0x7968($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936216), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DC10u, 0x48DA8Cu, 0x48DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DA94u;
label_48da94:
    // 0x48da94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48da94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48da98: 0xc10f704  jal         func_43DC10
    ctx->pc = 0x48DA98u;
    SET_GPR_U32(ctx, 31, 0x48DAA0u);
    ctx->pc = 0x48DA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DA98u;
    // 0x48da9c: 0xa3828699  sb          $v0, -0x7967($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936217), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DC10u, 0x48DA98u, 0x48DAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DAA0u;
label_48daa0:
    // 0x48daa0: 0xa382869a  sb          $v0, -0x7966($gp)
    ctx->pc = 0x48daa0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936218), (uint8_t)GPR_U32(ctx, 2));
    // 0x48daa4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x48daa8: 0x34633820  ori         $v1, $v1, 0x3820
    ctx->pc = 0x48daa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14368);
    // 0x48daac: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x48daacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x48dab0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48dab0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10003820u)); // MMIO: 0x10000000
    // 0x48dab4: 0x34c6e000  ori         $a2, $a2, 0xE000
    ctx->pc = 0x48dab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57344);
    // 0x48dab8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x48dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x48dabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48dac0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x48dac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x48dac4: 0x34a5f8fd  ori         $a1, $a1, 0xF8FD
    ctx->pc = 0x48dac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63741);
    // 0x48dac8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x48dac8u;
    runtime->Store32(rdram, ctx, 0x10003820u, GPR_U32(ctx, 4));
    // 0x48dacc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x48daccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x48dad0: 0xac243c20  sw          $a0, 0x3C20($at)
    ctx->pc = 0x48dad0u;
    runtime->Store32(rdram, ctx, 0x10003C20u, GPR_U32(ctx, 4)); // MMIO: 0x10003c20
    // 0x48dad4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x48dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u));
    // 0x48dad8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x48dad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x48dadc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x48dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x48dae0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x48DAE0u;
    {
        const bool branch_taken_0x48dae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DAE0u;
        // 0x48dae4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dae0) {
            ctx->pc = 0x48DB10u;
            goto label_48db10;
        }
    }
    ctx->pc = 0x48DAE8u;
label_48dae8:
    // 0x48dae8: 0x8f858690  lw          $a1, -0x7970($gp)
    ctx->pc = 0x48dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x48daec: 0xc10f374  jal         func_43CDD0
    ctx->pc = 0x48DAECu;
    SET_GPR_U32(ctx, 31, 0x48DAF4u);
    ctx->pc = 0x48DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DAECu;
    // 0x48daf0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDD0u, 0x48DAECu, 0x48DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DAF4u;
label_48daf4:
    // 0x48daf4: 0x8f85868c  lw          $a1, -0x7974($gp)
    ctx->pc = 0x48daf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
    // 0x48daf8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48dafc: 0xc10f368  jal         func_43CDA0
    ctx->pc = 0x48DAFCu;
    SET_GPR_U32(ctx, 31, 0x48DB04u);
    ctx->pc = 0x48DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DAFCu;
    // 0x48db00: 0xaf908690  sw          $s0, -0x7970($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936208), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDA0u, 0x48DAFCu, 0x48DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DB04u;
label_48db04:
    // 0x48db04: 0xaf90868c  sw          $s0, -0x7974($gp)
    ctx->pc = 0x48db04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936204), GPR_U32(ctx, 16));
label_48db08:
    // 0x48db08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48db08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48db0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x48db0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48db10:
    // 0x48db10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48db10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48db14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48db14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48db18: 0x3e00008  jr          $ra
    ctx->pc = 0x48DB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DB18u;
        // 0x48db1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DB20u;
}
