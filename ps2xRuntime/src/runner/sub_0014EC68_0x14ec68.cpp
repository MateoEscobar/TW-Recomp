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

// Function: sub_0014EC68
// Address: 0x14ec68 - 0x14ee30
void sub_0014EC68_0x14ec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EC68_0x14ec68");
#endif

    switch (ctx->pc) {
        case 0x14eca8u: goto label_14eca8;
        case 0x14ecb8u: goto label_14ecb8;
        case 0x14ecc4u: goto label_14ecc4;
        case 0x14ece4u: goto label_14ece4;
        case 0x14ecf4u: goto label_14ecf4;
        case 0x14ed00u: goto label_14ed00;
        case 0x14ed30u: goto label_14ed30;
        case 0x14ed40u: goto label_14ed40;
        case 0x14ed68u: goto label_14ed68;
        case 0x14ed78u: goto label_14ed78;
        case 0x14ed88u: goto label_14ed88;
        case 0x14edacu: goto label_14edac;
        case 0x14edc4u: goto label_14edc4;
        case 0x14edd0u: goto label_14edd0;
        case 0x14edd8u: goto label_14edd8;
        case 0x14ede0u: goto label_14ede0;
        case 0x14ede8u: goto label_14ede8;
        case 0x14edf8u: goto label_14edf8;
        case 0x14ee0cu: goto label_14ee0c;
        default: break;
    }

    ctx->pc = 0x14ec68u;

    // 0x14ec68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14ec68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14ec6c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14ec70: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x14ec70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x14ec74: 0x8c62c20c  lw          $v0, -0x3DF4($v1)
    ctx->pc = 0x14ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x14ec78: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14ec78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14ec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14ec80: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14ec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14ec84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14ec84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec88: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14ec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14ec8c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x14ec8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ec90: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14ec90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14ec94: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14EC94u;
    {
        const bool branch_taken_0x14ec94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC94u;
        // 0x14ec98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec94) {
            ctx->pc = 0x14ECCCu;
            goto label_14eccc;
        }
    }
    ctx->pc = 0x14EC9Cu;
    // 0x14ec9c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14eca0: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14ECA0u;
    SET_GPR_U32(ctx, 31, 0x14ECA8u);
    ctx->pc = 0x14ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ECA0u;
    // 0x14eca4: 0x2484bd48  addiu       $a0, $a0, -0x42B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14ECA0u, 0x14ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECA8u;
label_14eca8:
    // 0x14eca8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ecac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14ecacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ecb0: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14ECB0u;
    SET_GPR_U32(ctx, 31, 0x14ECB8u);
    ctx->pc = 0x14ECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ECB0u;
    // 0x14ecb4: 0x2484ba38  addiu       $a0, $a0, -0x45C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14ECB0u, 0x14ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECB8u;
label_14ecb8:
    // 0x14ecb8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ecbc: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14ECBCu;
    SET_GPR_U32(ctx, 31, 0x14ECC4u);
    ctx->pc = 0x14ECC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ECBCu;
    // 0x14ecc0: 0x2484ba58  addiu       $a0, $a0, -0x45A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14ECBCu, 0x14ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECC4u;
label_14ecc4:
    // 0x14ecc4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x14ECC4u;
    {
        const bool branch_taken_0x14ecc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECC4u;
        // 0x14ecc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ecc4) {
            ctx->pc = 0x14EE10u;
            goto label_14ee10;
        }
    }
    ctx->pc = 0x14ECCCu;
label_14eccc:
    // 0x14eccc: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x14ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x14ecd0: 0x2c4203ff  sltiu       $v0, $v0, 0x3FF
    ctx->pc = 0x14ecd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1023) ? 1 : 0);
    // 0x14ecd4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14ECD4u;
    {
        const bool branch_taken_0x14ecd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECD4u;
        // 0x14ecd8: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ecd4) {
            ctx->pc = 0x14ED08u;
            goto label_14ed08;
        }
    }
    ctx->pc = 0x14ECDCu;
    // 0x14ecdc: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14ECDCu;
    SET_GPR_U32(ctx, 31, 0x14ECE4u);
    ctx->pc = 0x14ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ECDCu;
    // 0x14ece0: 0x2484bd70  addiu       $a0, $a0, -0x4290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14ECDCu, 0x14ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECE4u;
label_14ece4:
    // 0x14ece4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ece4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ece8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ece8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ecec: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14ECECu;
    SET_GPR_U32(ctx, 31, 0x14ECF4u);
    ctx->pc = 0x14ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ECECu;
    // 0x14ecf0: 0x2484bd98  addiu       $a0, $a0, -0x4268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14ECECu, 0x14ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECF4u;
label_14ecf4:
    // 0x14ecf4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ecf8: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14ECF8u;
    SET_GPR_U32(ctx, 31, 0x14ED00u);
    ctx->pc = 0x14ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ECF8u;
    // 0x14ecfc: 0x2484bdb0  addiu       $a0, $a0, -0x4250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14ECF8u, 0x14ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED00u;
label_14ed00:
    // 0x14ed00: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x14ED00u;
    {
        const bool branch_taken_0x14ed00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED00u;
        // 0x14ed04: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed00) {
            ctx->pc = 0x14EE10u;
            goto label_14ee10;
        }
    }
    ctx->pc = 0x14ED08u;
label_14ed08:
    // 0x14ed08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14ed0c: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x14ed0cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x14ed10: 0x2442bf58  addiu       $v0, $v0, -0x40A8
    ctx->pc = 0x14ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950744));
    // 0x14ed14: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x14ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x14ed18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ed1c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14ED1Cu;
    {
        const bool branch_taken_0x14ed1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED1Cu;
        // 0x14ed20: 0x2643003f  addiu       $v1, $s2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed1c) {
            ctx->pc = 0x14ED48u;
            goto label_14ed48;
        }
    }
    ctx->pc = 0x14ED24u;
    // 0x14ed24: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ed28: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14ED28u;
    SET_GPR_U32(ctx, 31, 0x14ED30u);
    ctx->pc = 0x14ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED28u;
    // 0x14ed2c: 0x2484bd70  addiu       $a0, $a0, -0x4290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14ED28u, 0x14ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED30u;
label_14ed30:
    // 0x14ed30: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ed34: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14ed34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed38: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14ED38u;
    SET_GPR_U32(ctx, 31, 0x14ED40u);
    ctx->pc = 0x14ED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED38u;
    // 0x14ed3c: 0x2484bdd8  addiu       $a0, $a0, -0x4228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14ED38u, 0x14ED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED40u;
label_14ed40:
    // 0x14ed40: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x14ED40u;
    {
        const bool branch_taken_0x14ed40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED40u;
        // 0x14ed44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed40) {
            ctx->pc = 0x14EE10u;
            goto label_14ee10;
        }
    }
    ctx->pc = 0x14ED48u;
label_14ed48:
    // 0x14ed48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14ed4c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x14ed4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x14ed50: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x14ed50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14ed54: 0x1250000d  beq         $s2, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x14ED54u;
    {
        const bool branch_taken_0x14ed54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x14ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED54u;
        // 0x14ed58: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed54) {
            ctx->pc = 0x14ED8Cu;
            goto label_14ed8c;
        }
    }
    ctx->pc = 0x14ED5Cu;
    // 0x14ed5c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ed60: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14ED60u;
    SET_GPR_U32(ctx, 31, 0x14ED68u);
    ctx->pc = 0x14ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED60u;
    // 0x14ed64: 0x2484be18  addiu       $a0, $a0, -0x41E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14ED60u, 0x14ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED68u;
label_14ed68:
    // 0x14ed68: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ed6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ed6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed70: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14ED70u;
    SET_GPR_U32(ctx, 31, 0x14ED78u);
    ctx->pc = 0x14ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED70u;
    // 0x14ed74: 0x2484be40  addiu       $a0, $a0, -0x41C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14ED70u, 0x14ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED78u;
label_14ed78:
    // 0x14ed78: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ed7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ed7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed80: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14ED80u;
    SET_GPR_U32(ctx, 31, 0x14ED88u);
    ctx->pc = 0x14ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED80u;
    // 0x14ed84: 0x2484be68  addiu       $a0, $a0, -0x4198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14ED80u, 0x14ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED88u;
label_14ed88:
    // 0x14ed88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_14ed8c:
    // 0x14ed8c: 0x2442c018  addiu       $v0, $v0, -0x3FE8
    ctx->pc = 0x14ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950936));
    // 0x14ed90: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x14ed90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x14ed94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14ed94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14ed98: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x14ed98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14ed9c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x14ED9Cu;
    {
        const bool branch_taken_0x14ed9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED9Cu;
        // 0x14eda0: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed9c) {
            ctx->pc = 0x14EDF0u;
            goto label_14edf0;
        }
    }
    ctx->pc = 0x14EDA4u;
    // 0x14eda4: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14EDA4u;
    SET_GPR_U32(ctx, 31, 0x14EDACu);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14EDA4u, 0x14EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDACu;
label_14edac:
    // 0x14edac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14edacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14edb0: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x14edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x14edb4: 0x2442c0d8  addiu       $v0, $v0, -0x3F28
    ctx->pc = 0x14edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951128));
    // 0x14edb8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x14edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x14edbc: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14EDBCu;
    SET_GPR_U32(ctx, 31, 0x14EDC4u);
    ctx->pc = 0x14EDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDBCu;
    // 0x14edc0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14EDBCu, 0x14EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDC4u;
label_14edc4:
    // 0x14edc4: 0x142400  sll         $a0, $s4, 16
    ctx->pc = 0x14edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x14edc8: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14EDC8u;
    SET_GPR_U32(ctx, 31, 0x14EDD0u);
    ctx->pc = 0x14EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDC8u;
    // 0x14edcc: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14EDC8u, 0x14EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDD0u;
label_14edd0:
    // 0x14edd0: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x14EDD0u;
    SET_GPR_U32(ctx, 31, 0x14EDD8u);
    ctx->pc = 0x14EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDD0u;
    // 0x14edd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x14EDD0u, 0x14EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDD8u;
label_14edd8:
    // 0x14edd8: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14EDD8u;
    SET_GPR_U32(ctx, 31, 0x14EDE0u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14EDD8u, 0x14EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDE0u;
label_14ede0:
    // 0x14ede0: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14EDE0u;
    SET_GPR_U32(ctx, 31, 0x14EDE8u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14EDE0u, 0x14EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDE8u;
label_14ede8:
    // 0x14ede8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14EDE8u;
    {
        const bool branch_taken_0x14ede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDE8u;
        // 0x14edec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ede8) {
            ctx->pc = 0x14EE10u;
            goto label_14ee10;
        }
    }
    ctx->pc = 0x14EDF0u;
label_14edf0:
    // 0x14edf0: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14EDF0u;
    SET_GPR_U32(ctx, 31, 0x14EDF8u);
    ctx->pc = 0x14EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDF0u;
    // 0x14edf4: 0x2484bd70  addiu       $a0, $a0, -0x4290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14EDF0u, 0x14EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDF8u;
label_14edf8:
    // 0x14edf8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x14edf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14edfc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ee00: 0x2484be80  addiu       $a0, $a0, -0x4180
    ctx->pc = 0x14ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950528));
    // 0x14ee04: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14EE04u;
    SET_GPR_U32(ctx, 31, 0x14EE0Cu);
    ctx->pc = 0x14EE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE04u;
    // 0x14ee08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14EE04u, 0x14EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE0Cu;
label_14ee0c:
    // 0x14ee0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14ee10:
    // 0x14ee10: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14ee10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ee14: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14ee14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ee18: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14ee18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ee1c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14ee1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ee20: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14ee20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ee24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ee24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ee28: 0x3e00008  jr          $ra
    ctx->pc = 0x14EE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE28u;
        // 0x14ee2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EE30u;
}
