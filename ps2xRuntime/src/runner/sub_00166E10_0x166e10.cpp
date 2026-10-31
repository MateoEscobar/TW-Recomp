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

// Function: sub_00166E10
// Address: 0x166e10 - 0x166fc8
void sub_00166E10_0x166e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166E10_0x166e10");
#endif

    switch (ctx->pc) {
        case 0x166e60u: goto label_166e60;
        case 0x166e78u: goto label_166e78;
        case 0x166e84u: goto label_166e84;
        case 0x166ec0u: goto label_166ec0;
        case 0x166ec8u: goto label_166ec8;
        case 0x166ed0u: goto label_166ed0;
        case 0x166ef8u: goto label_166ef8;
        case 0x166f10u: goto label_166f10;
        case 0x166f24u: goto label_166f24;
        case 0x166f5cu: goto label_166f5c;
        case 0x166f78u: goto label_166f78;
        default: break;
    }

    ctx->pc = 0x166e10u;

    // 0x166e10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x166e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x166e14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x166e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x166e18: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x166e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x166e1c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x166e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x166e20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x166e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e24: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x166e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x166e28: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x166e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x166e2c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x166e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x166e30: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x166e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x166e34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x166e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x166e38: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x166e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x166e3c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x166e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x166e40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166e44: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x166e44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x166e48: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x166e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x166e4c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x166e4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x166e50: 0x18400050  blez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x166E50u;
    {
        const bool branch_taken_0x166e50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x166E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E50u;
        // 0x166e54: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e50) {
            ctx->pc = 0x166F94u;
            goto label_166f94;
        }
    }
    ctx->pc = 0x166E58u;
    // 0x166e58: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x166e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x166e5c: 0x0  nop
    ctx->pc = 0x166e5cu;
    // NOP
label_166e60:
    // 0x166e60: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x166e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x166e64: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x166e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    // 0x166e68: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x166e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x166e6c: 0x261e0001  addiu       $fp, $s0, 0x1
    ctx->pc = 0x166e6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x166e70: 0xc0e409a  jal         func_390268
    ctx->pc = 0x166E70u;
    SET_GPR_U32(ctx, 31, 0x166E78u);
    ctx->pc = 0x166E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E70u;
    // 0x166e74: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x166E70u, 0x166E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E78u;
label_166e78:
    // 0x166e78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x166e78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e7c: 0xc087502  jal         func_21D408
    ctx->pc = 0x166E7Cu;
    SET_GPR_U32(ctx, 31, 0x166E84u);
    ctx->pc = 0x166E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E7Cu;
    // 0x166e80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x166E7Cu, 0x166E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E84u;
label_166e84:
    // 0x166e84: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x166e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x166e88: 0x1477003c  bne         $v1, $s7, . + 4 + (0x3C << 2)
    ctx->pc = 0x166E88u;
    {
        const bool branch_taken_0x166e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x166E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E88u;
        // 0x166e8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e88) {
            ctx->pc = 0x166F7Cu;
            goto label_166f7c;
        }
    }
    ctx->pc = 0x166E90u;
    // 0x166e90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x166e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166e94: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x166E94u;
    {
        const bool branch_taken_0x166e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E94u;
        // 0x166e98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e94) {
            ctx->pc = 0x166F7Cu;
            goto label_166f7c;
        }
    }
    ctx->pc = 0x166E9Cu;
    // 0x166e9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166ea0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x166ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ea4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x166ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x166ea8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x166ea8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166eac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x166eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166eb0: 0x26f50048  addiu       $s5, $s7, 0x48
    ctx->pc = 0x166eb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 72));
    // 0x166eb4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x166eb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166eb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x166eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ebc: 0x0  nop
    ctx->pc = 0x166ebcu;
    // NOP
label_166ec0:
    // 0x166ec0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x166EC0u;
    SET_GPR_U32(ctx, 31, 0x166EC8u);
    ctx->pc = 0x166EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166EC0u;
    // 0x166ec4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x166EC0u, 0x166EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166EC8u;
label_166ec8:
    // 0x166ec8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x166EC8u;
    SET_GPR_U32(ctx, 31, 0x166ED0u);
    ctx->pc = 0x166ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166EC8u;
    // 0x166ecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x166EC8u, 0x166ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166ED0u;
label_166ed0:
    // 0x166ed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ed4: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x166ED4u;
    {
        const bool branch_taken_0x166ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x166ed4) {
            ctx->pc = 0x166ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166ED4u;
            // 0x166ed8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166F34u;
            goto label_166f34;
        }
    }
    ctx->pc = 0x166EDCu;
    // 0x166edc: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x166edcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x166ee0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x166ee0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x166ee4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x166ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x166ee8: 0x50560012  beql        $v0, $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x166EE8u;
    {
        const bool branch_taken_0x166ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x166ee8) {
            ctx->pc = 0x166EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166EE8u;
            // 0x166eec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166F34u;
            goto label_166f34;
        }
    }
    ctx->pc = 0x166EF0u;
    // 0x166ef0: 0xc087502  jal         func_21D408
    ctx->pc = 0x166EF0u;
    SET_GPR_U32(ctx, 31, 0x166EF8u);
    ctx->pc = 0x166EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166EF0u;
    // 0x166ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x166EF0u, 0x166EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166EF8u;
label_166ef8:
    // 0x166ef8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x166efc: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x166efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x166f00: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x166F00u;
    {
        const bool branch_taken_0x166f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x166f00) {
            ctx->pc = 0x166F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166F00u;
            // 0x166f04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166F34u;
            goto label_166f34;
        }
    }
    ctx->pc = 0x166F08u;
    // 0x166f08: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x166F08u;
    SET_GPR_U32(ctx, 31, 0x166F10u);
    ctx->pc = 0x166F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F08u;
    // 0x166f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x166F08u, 0x166F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F10u;
label_166f10:
    // 0x166f10: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x166f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x166f14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x166f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x166f18: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x166f18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x166f1c: 0xc088edc  jal         func_223B70
    ctx->pc = 0x166F1Cu;
    SET_GPR_U32(ctx, 31, 0x166F24u);
    ctx->pc = 0x166F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F1Cu;
    // 0x166f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x166F1Cu, 0x166F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F24u;
label_166f24:
    // 0x166f24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x166f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x166f28: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x166f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x166f2c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x166f2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x166f30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x166f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_166f34:
    // 0x166f34: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x166f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x166f38: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x166F38u;
    {
        const bool branch_taken_0x166f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166f38) {
            ctx->pc = 0x166F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166F38u;
            // 0x166f3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166ec0;
        }
    }
    ctx->pc = 0x166F40u;
    // 0x166f40: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x166F40u;
    {
        const bool branch_taken_0x166f40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F40u;
        // 0x166f44: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f40) {
            ctx->pc = 0x166F5Cu;
            goto label_166f5c;
        }
    }
    ctx->pc = 0x166F48u;
    // 0x166f48: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x166f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f4c: 0x2444e490  addiu       $a0, $v0, -0x1B70
    ctx->pc = 0x166f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960272));
    // 0x166f50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x166f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f54: 0xc137894  jal         func_4DE250
    ctx->pc = 0x166F54u;
    SET_GPR_U32(ctx, 31, 0x166F5Cu);
    ctx->pc = 0x166F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F54u;
    // 0x166f58: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE250u, 0x166F54u, 0x166F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F5Cu;
label_166f5c:
    // 0x166f5c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x166F5Cu;
    {
        const bool branch_taken_0x166f5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F5Cu;
        // 0x166f60: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f5c) {
            ctx->pc = 0x166F78u;
            goto label_166f78;
        }
    }
    ctx->pc = 0x166F64u;
    // 0x166f64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x166f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f68: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x166f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f6c: 0x2464e490  addiu       $a0, $v1, -0x1B70
    ctx->pc = 0x166f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960272));
    // 0x166f70: 0xc137894  jal         func_4DE250
    ctx->pc = 0x166F70u;
    SET_GPR_U32(ctx, 31, 0x166F78u);
    ctx->pc = 0x166F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F70u;
    // 0x166f74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE250u, 0x166F70u, 0x166F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F78u;
label_166f78:
    // 0x166f78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x166f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_166f7c:
    // 0x166f7c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x166f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f80: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x166f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x166f84: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x166f84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x166f88: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x166f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x166f8c: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x166F8Cu;
    {
        const bool branch_taken_0x166f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F8Cu;
        // 0x166f90: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f8c) {
            ctx->pc = 0x166E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166e60;
        }
    }
    ctx->pc = 0x166F94u;
label_166f94:
    // 0x166f94: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x166f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x166f98: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x166f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x166f9c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x166f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x166fa0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x166fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x166fa4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x166fa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x166fa8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x166fa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x166fac: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x166facu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166fb0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x166fb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166fb4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x166fb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x166FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FBCu;
        // 0x166fc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166FC4u;
    // 0x166fc4: 0x0  nop
    ctx->pc = 0x166fc4u;
    // NOP
    ctx->pc = 0x166fc8u;
}
