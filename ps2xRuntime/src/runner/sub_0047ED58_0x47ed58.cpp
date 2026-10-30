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

// Function: sub_0047ED58
// Address: 0x47ed58 - 0x47eee8
void sub_0047ED58_0x47ed58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047ED58_0x47ed58");
#endif

    switch (ctx->pc) {
        case 0x47ed58u: goto label_47ed58;
        case 0x47ed5cu: goto label_47ed5c;
        case 0x47ed60u: goto label_47ed60;
        case 0x47ed64u: goto label_47ed64;
        case 0x47ed68u: goto label_47ed68;
        case 0x47ed6cu: goto label_47ed6c;
        case 0x47ed70u: goto label_47ed70;
        case 0x47ed74u: goto label_47ed74;
        case 0x47ed78u: goto label_47ed78;
        case 0x47ed7cu: goto label_47ed7c;
        case 0x47ed80u: goto label_47ed80;
        case 0x47ed84u: goto label_47ed84;
        case 0x47ed88u: goto label_47ed88;
        case 0x47ed8cu: goto label_47ed8c;
        case 0x47ed90u: goto label_47ed90;
        case 0x47ed94u: goto label_47ed94;
        case 0x47ed98u: goto label_47ed98;
        case 0x47ed9cu: goto label_47ed9c;
        case 0x47eda0u: goto label_47eda0;
        case 0x47eda4u: goto label_47eda4;
        case 0x47eda8u: goto label_47eda8;
        case 0x47edacu: goto label_47edac;
        case 0x47edb0u: goto label_47edb0;
        case 0x47edb4u: goto label_47edb4;
        case 0x47edb8u: goto label_47edb8;
        case 0x47edbcu: goto label_47edbc;
        case 0x47edc0u: goto label_47edc0;
        case 0x47edc4u: goto label_47edc4;
        case 0x47edc8u: goto label_47edc8;
        case 0x47edccu: goto label_47edcc;
        case 0x47edd0u: goto label_47edd0;
        case 0x47edd4u: goto label_47edd4;
        case 0x47edd8u: goto label_47edd8;
        case 0x47eddcu: goto label_47eddc;
        case 0x47ede0u: goto label_47ede0;
        case 0x47ede4u: goto label_47ede4;
        case 0x47ede8u: goto label_47ede8;
        case 0x47edecu: goto label_47edec;
        case 0x47edf0u: goto label_47edf0;
        case 0x47edf4u: goto label_47edf4;
        case 0x47edf8u: goto label_47edf8;
        case 0x47edfcu: goto label_47edfc;
        case 0x47ee00u: goto label_47ee00;
        case 0x47ee04u: goto label_47ee04;
        case 0x47ee08u: goto label_47ee08;
        case 0x47ee0cu: goto label_47ee0c;
        case 0x47ee10u: goto label_47ee10;
        case 0x47ee14u: goto label_47ee14;
        case 0x47ee18u: goto label_47ee18;
        case 0x47ee1cu: goto label_47ee1c;
        case 0x47ee20u: goto label_47ee20;
        case 0x47ee24u: goto label_47ee24;
        case 0x47ee28u: goto label_47ee28;
        case 0x47ee2cu: goto label_47ee2c;
        case 0x47ee30u: goto label_47ee30;
        case 0x47ee34u: goto label_47ee34;
        case 0x47ee38u: goto label_47ee38;
        case 0x47ee3cu: goto label_47ee3c;
        case 0x47ee40u: goto label_47ee40;
        case 0x47ee44u: goto label_47ee44;
        case 0x47ee48u: goto label_47ee48;
        case 0x47ee4cu: goto label_47ee4c;
        case 0x47ee50u: goto label_47ee50;
        case 0x47ee54u: goto label_47ee54;
        case 0x47ee58u: goto label_47ee58;
        case 0x47ee5cu: goto label_47ee5c;
        case 0x47ee60u: goto label_47ee60;
        case 0x47ee64u: goto label_47ee64;
        case 0x47ee68u: goto label_47ee68;
        case 0x47ee6cu: goto label_47ee6c;
        case 0x47ee70u: goto label_47ee70;
        case 0x47ee74u: goto label_47ee74;
        case 0x47ee78u: goto label_47ee78;
        case 0x47ee7cu: goto label_47ee7c;
        case 0x47ee80u: goto label_47ee80;
        case 0x47ee84u: goto label_47ee84;
        case 0x47ee88u: goto label_47ee88;
        case 0x47ee8cu: goto label_47ee8c;
        case 0x47ee90u: goto label_47ee90;
        case 0x47ee94u: goto label_47ee94;
        case 0x47ee98u: goto label_47ee98;
        case 0x47ee9cu: goto label_47ee9c;
        case 0x47eea0u: goto label_47eea0;
        case 0x47eea4u: goto label_47eea4;
        case 0x47eea8u: goto label_47eea8;
        case 0x47eeacu: goto label_47eeac;
        case 0x47eeb0u: goto label_47eeb0;
        case 0x47eeb4u: goto label_47eeb4;
        case 0x47eeb8u: goto label_47eeb8;
        case 0x47eebcu: goto label_47eebc;
        case 0x47eec0u: goto label_47eec0;
        case 0x47eec4u: goto label_47eec4;
        case 0x47eec8u: goto label_47eec8;
        case 0x47eeccu: goto label_47eecc;
        case 0x47eed0u: goto label_47eed0;
        case 0x47eed4u: goto label_47eed4;
        case 0x47eed8u: goto label_47eed8;
        case 0x47eedcu: goto label_47eedc;
        case 0x47eee0u: goto label_47eee0;
        case 0x47eee4u: goto label_47eee4;
        default: break;
    }

    ctx->pc = 0x47ed58u;

label_47ed58:
    // 0x47ed58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47ed58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_47ed5c:
    // 0x47ed5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x47ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47ed60:
    // 0x47ed60: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x47ed60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_47ed64:
    // 0x47ed64: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x47ed64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_47ed68:
    // 0x47ed68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47ed68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47ed6c:
    // 0x47ed6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47ed6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47ed70:
    // 0x47ed70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x47ed70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47ed74:
    // 0x47ed74: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x47ed74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_47ed78:
    // 0x47ed78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47ed78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47ed7c:
    // 0x47ed7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x47ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47ed80:
    // 0x47ed80: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_47ed84:
    if (ctx->pc == 0x47ED84u) {
        ctx->pc = 0x47ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ED80u;
        // 0x47ed84: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47ED88u;
        goto label_47ed88;
    }
    ctx->pc = 0x47ED80u;
    {
        const bool branch_taken_0x47ed80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x47ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ED80u;
        // 0x47ed84: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ed80) {
            ctx->pc = 0x47EE28u;
            goto label_47ee28;
        }
    }
    ctx->pc = 0x47ED88u;
label_47ed88:
    // 0x47ed88: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x47ed88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_47ed8c:
    // 0x47ed8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_47ed90:
    if (ctx->pc == 0x47ED90u) {
        ctx->pc = 0x47ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ED8Cu;
        // 0x47ed90: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47ED94u;
        goto label_47ed94;
    }
    ctx->pc = 0x47ED8Cu;
    {
        const bool branch_taken_0x47ed8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ED8Cu;
        // 0x47ed90: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ed8c) {
            ctx->pc = 0x47EDA4u;
            goto label_47eda4;
        }
    }
    ctx->pc = 0x47ED94u;
label_47ed94:
    // 0x47ed94: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_47ed98:
    if (ctx->pc == 0x47ED98u) {
        ctx->pc = 0x47ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ED94u;
        // 0x47ed98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47ED9Cu;
        goto label_47ed9c;
    }
    ctx->pc = 0x47ED94u;
    {
        const bool branch_taken_0x47ed94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x47ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ED94u;
        // 0x47ed98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ed94) {
            ctx->pc = 0x47EE8Cu;
            goto label_47ee8c;
        }
    }
    ctx->pc = 0x47ED9Cu;
label_47ed9c:
    // 0x47ed9c: 0x10000044  b           . + 4 + (0x44 << 2)
label_47eda0:
    if (ctx->pc == 0x47EDA0u) {
        ctx->pc = 0x47EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ED9Cu;
        // 0x47eda0: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EDA4u;
        goto label_47eda4;
    }
    ctx->pc = 0x47ED9Cu;
    {
        const bool branch_taken_0x47ed9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ED9Cu;
        // 0x47eda0: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ed9c) {
            ctx->pc = 0x47EEB0u;
            goto label_47eeb0;
        }
    }
    ctx->pc = 0x47EDA4u;
label_47eda4:
    // 0x47eda4: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_47eda8:
    if (ctx->pc == 0x47EDA8u) {
        ctx->pc = 0x47EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EDA4u;
        // 0x47eda8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EDACu;
        goto label_47edac;
    }
    ctx->pc = 0x47EDA4u;
    {
        const bool branch_taken_0x47eda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EDA4u;
        // 0x47eda8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eda4) {
            ctx->pc = 0x47EEA8u;
            goto label_47eea8;
        }
    }
    ctx->pc = 0x47EDACu;
label_47edac:
    // 0x47edac: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x47edacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_47edb0:
    // 0x47edb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x47edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47edb4:
    // 0x47edb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x47edb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47edb8:
    // 0x47edb8: 0xc1305c8  jal         func_4C1720
label_47edbc:
    if (ctx->pc == 0x47EDBCu) {
        ctx->pc = 0x47EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EDB8u;
        // 0x47edbc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EDC0u;
        goto label_47edc0;
    }
    ctx->pc = 0x47EDB8u;
    SET_GPR_U32(ctx, 31, 0x47EDC0u);
    ctx->pc = 0x47EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EDB8u;
    // 0x47edbc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1720u, 0x47EDB8u, 0x47EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EDC0u;
label_47edc0:
    // 0x47edc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x47edc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47edc4:
    // 0x47edc4: 0x12510040  beq         $s2, $s1, . + 4 + (0x40 << 2)
label_47edc8:
    if (ctx->pc == 0x47EDC8u) {
        ctx->pc = 0x47EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EDC4u;
        // 0x47edc8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EDCCu;
        goto label_47edcc;
    }
    ctx->pc = 0x47EDC4u;
    {
        const bool branch_taken_0x47edc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x47EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EDC4u;
        // 0x47edc8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47edc4) {
            ctx->pc = 0x47EEC8u;
            goto label_47eec8;
        }
    }
    ctx->pc = 0x47EDCCu;
label_47edcc:
    // 0x47edcc: 0xc130628  jal         func_4C18A0
label_47edd0:
    if (ctx->pc == 0x47EDD0u) {
        ctx->pc = 0x47EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EDCCu;
        // 0x47edd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EDD4u;
        goto label_47edd4;
    }
    ctx->pc = 0x47EDCCu;
    SET_GPR_U32(ctx, 31, 0x47EDD4u);
    ctx->pc = 0x47EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EDCCu;
    // 0x47edd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C18A0u, 0x47EDCCu, 0x47EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EDD4u;
label_47edd4:
    // 0x47edd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_47edd8:
    if (ctx->pc == 0x47EDD8u) {
        ctx->pc = 0x47EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EDD4u;
        // 0x47edd8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EDDCu;
        goto label_47eddc;
    }
    ctx->pc = 0x47EDD4u;
    {
        const bool branch_taken_0x47edd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EDD4u;
        // 0x47edd8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47edd4) {
            ctx->pc = 0x47EE00u;
            goto label_47ee00;
        }
    }
    ctx->pc = 0x47EDDCu;
label_47eddc:
    // 0x47eddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47ede0:
    // 0x47ede0: 0xc11eff2  jal         func_47BFC8
label_47ede4:
    if (ctx->pc == 0x47EDE4u) {
        ctx->pc = 0x47EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EDE0u;
        // 0x47ede4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EDE8u;
        goto label_47ede8;
    }
    ctx->pc = 0x47EDE0u;
    SET_GPR_U32(ctx, 31, 0x47EDE8u);
    ctx->pc = 0x47EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EDE0u;
    // 0x47ede4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47EDE0u, 0x47EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EDE8u;
label_47ede8:
    // 0x47ede8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47ede8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47edec:
    // 0x47edec: 0xc11f024  jal         func_47C090
label_47edf0:
    if (ctx->pc == 0x47EDF0u) {
        ctx->pc = 0x47EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EDECu;
        // 0x47edf0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EDF4u;
        goto label_47edf4;
    }
    ctx->pc = 0x47EDECu;
    SET_GPR_U32(ctx, 31, 0x47EDF4u);
    ctx->pc = 0x47EDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EDECu;
    // 0x47edf0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47EDECu, 0x47EDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EDF4u;
label_47edf4:
    // 0x47edf4: 0x10000034  b           . + 4 + (0x34 << 2)
label_47edf8:
    if (ctx->pc == 0x47EDF8u) {
        ctx->pc = 0x47EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EDF4u;
        // 0x47edf8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EDFCu;
        goto label_47edfc;
    }
    ctx->pc = 0x47EDF4u;
    {
        const bool branch_taken_0x47edf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EDF4u;
        // 0x47edf8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47edf4) {
            ctx->pc = 0x47EEC8u;
            goto label_47eec8;
        }
    }
    ctx->pc = 0x47EDFCu;
label_47edfc:
    // 0x47edfc: 0x0  nop
    ctx->pc = 0x47edfcu;
    // NOP
label_47ee00:
    // 0x47ee00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47ee04:
    // 0x47ee04: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_47ee08:
    // 0x47ee08: 0x3484001a  ori         $a0, $a0, 0x1A
    ctx->pc = 0x47ee08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
label_47ee0c:
    // 0x47ee0c: 0xc11eff2  jal         func_47BFC8
label_47ee10:
    if (ctx->pc == 0x47EE10u) {
        ctx->pc = 0x47EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EE0Cu;
        // 0x47ee10: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EE14u;
        goto label_47ee14;
    }
    ctx->pc = 0x47EE0Cu;
    SET_GPR_U32(ctx, 31, 0x47EE14u);
    ctx->pc = 0x47EE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EE0Cu;
    // 0x47ee10: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47EE0Cu, 0x47EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EE14u;
label_47ee14:
    // 0x47ee14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47ee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47ee18:
    // 0x47ee18: 0xc11f024  jal         func_47C090
label_47ee1c:
    if (ctx->pc == 0x47EE1Cu) {
        ctx->pc = 0x47EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EE18u;
        // 0x47ee1c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EE20u;
        goto label_47ee20;
    }
    ctx->pc = 0x47EE18u;
    SET_GPR_U32(ctx, 31, 0x47EE20u);
    ctx->pc = 0x47EE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EE18u;
    // 0x47ee1c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47EE18u, 0x47EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EE20u;
label_47ee20:
    // 0x47ee20: 0x10000029  b           . + 4 + (0x29 << 2)
label_47ee24:
    if (ctx->pc == 0x47EE24u) {
        ctx->pc = 0x47EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EE20u;
        // 0x47ee24: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EE28u;
        goto label_47ee28;
    }
    ctx->pc = 0x47EE20u;
    {
        const bool branch_taken_0x47ee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EE20u;
        // 0x47ee24: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ee20) {
            ctx->pc = 0x47EEC8u;
            goto label_47eec8;
        }
    }
    ctx->pc = 0x47EE28u;
label_47ee28:
    // 0x47ee28: 0x2613000c  addiu       $s3, $s0, 0xC
    ctx->pc = 0x47ee28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_47ee2c:
    // 0x47ee2c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x47ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_47ee30:
    // 0x47ee30: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x47ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_47ee34:
    // 0x47ee34: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x47ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47ee38:
    // 0x47ee38: 0x71202b  sltu        $a0, $v1, $s1
    ctx->pc = 0x47ee38u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_47ee3c:
    // 0x47ee3c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_47ee40:
    if (ctx->pc == 0x47EE40u) {
        ctx->pc = 0x47EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EE3Cu;
        // 0x47ee40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EE44u;
        goto label_47ee44;
    }
    ctx->pc = 0x47EE3Cu;
    {
        const bool branch_taken_0x47ee3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EE3Cu;
        // 0x47ee40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ee3c) {
            ctx->pc = 0x47EE60u;
            goto label_47ee60;
        }
    }
    ctx->pc = 0x47EE44u;
label_47ee44:
    // 0x47ee44: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x47ee44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_47ee48:
    // 0x47ee48: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x47ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_47ee4c:
    // 0x47ee4c: 0xc11eff2  jal         func_47BFC8
label_47ee50:
    if (ctx->pc == 0x47EE50u) {
        ctx->pc = 0x47EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EE4Cu;
        // 0x47ee50: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EE54u;
        goto label_47ee54;
    }
    ctx->pc = 0x47EE4Cu;
    SET_GPR_U32(ctx, 31, 0x47EE54u);
    ctx->pc = 0x47EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EE4Cu;
    // 0x47ee50: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47EE4Cu, 0x47EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EE54u;
label_47ee54:
    // 0x47ee54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47ee54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47ee58:
    // 0x47ee58: 0xc11f024  jal         func_47C090
label_47ee5c:
    if (ctx->pc == 0x47EE5Cu) {
        ctx->pc = 0x47EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EE58u;
        // 0x47ee5c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EE60u;
        goto label_47ee60;
    }
    ctx->pc = 0x47EE58u;
    SET_GPR_U32(ctx, 31, 0x47EE60u);
    ctx->pc = 0x47EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EE58u;
    // 0x47ee5c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47EE58u, 0x47EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EE60u;
label_47ee60:
    // 0x47ee60: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x47ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_47ee64:
    // 0x47ee64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47ee64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47ee68:
    // 0x47ee68: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x47ee68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_47ee6c:
    // 0x47ee6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x47ee6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47ee70:
    // 0x47ee70: 0xc10c190  jal         func_430640
label_47ee74:
    if (ctx->pc == 0x47EE74u) {
        ctx->pc = 0x47EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EE70u;
        // 0x47ee74: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EE78u;
        goto label_47ee78;
    }
    ctx->pc = 0x47EE70u;
    SET_GPR_U32(ctx, 31, 0x47EE78u);
    ctx->pc = 0x47EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EE70u;
    // 0x47ee74: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x47EE70u, 0x47EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EE78u;
label_47ee78:
    // 0x47ee78: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x47ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_47ee7c:
    // 0x47ee7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47ee7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47ee80:
    // 0x47ee80: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x47ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_47ee84:
    // 0x47ee84: 0x10000010  b           . + 4 + (0x10 << 2)
label_47ee88:
    if (ctx->pc == 0x47EE88u) {
        ctx->pc = 0x47EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EE84u;
        // 0x47ee88: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EE8Cu;
        goto label_47ee8c;
    }
    ctx->pc = 0x47EE84u;
    {
        const bool branch_taken_0x47ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EE84u;
        // 0x47ee88: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ee84) {
            ctx->pc = 0x47EEC8u;
            goto label_47eec8;
        }
    }
    ctx->pc = 0x47EE8Cu;
label_47ee8c:
    // 0x47ee8c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x47ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_47ee90:
    // 0x47ee90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x47ee90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47ee94:
    // 0x47ee94: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x47ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47ee98:
    // 0x47ee98: 0x40f809  jalr        $v0
label_47ee9c:
    if (ctx->pc == 0x47EE9Cu) {
        ctx->pc = 0x47EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EE98u;
        // 0x47ee9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EEA0u;
        goto label_47eea0;
    }
    ctx->pc = 0x47EE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47EEA0u);
        ctx->pc = 0x47EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EE98u;
        // 0x47ee9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EE98u, 0x47EEA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47EEA0u;
label_47eea0:
    // 0x47eea0: 0x1000000a  b           . + 4 + (0xA << 2)
label_47eea4:
    if (ctx->pc == 0x47EEA4u) {
        ctx->pc = 0x47EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EEA0u;
        // 0x47eea4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EEA8u;
        goto label_47eea8;
    }
    ctx->pc = 0x47EEA0u;
    {
        const bool branch_taken_0x47eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EEA0u;
        // 0x47eea4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eea0) {
            ctx->pc = 0x47EECCu;
            goto label_47eecc;
        }
    }
    ctx->pc = 0x47EEA8u;
label_47eea8:
    // 0x47eea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47eeac:
    // 0x47eeac: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x47eeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_47eeb0:
    // 0x47eeb0: 0xc11eff2  jal         func_47BFC8
label_47eeb4:
    if (ctx->pc == 0x47EEB4u) {
        ctx->pc = 0x47EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EEB0u;
        // 0x47eeb4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EEB8u;
        goto label_47eeb8;
    }
    ctx->pc = 0x47EEB0u;
    SET_GPR_U32(ctx, 31, 0x47EEB8u);
    ctx->pc = 0x47EEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EEB0u;
    // 0x47eeb4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47EEB0u, 0x47EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EEB8u;
label_47eeb8:
    // 0x47eeb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47eeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47eebc:
    // 0x47eebc: 0xc11f024  jal         func_47C090
label_47eec0:
    if (ctx->pc == 0x47EEC0u) {
        ctx->pc = 0x47EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EEBCu;
        // 0x47eec0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EEC4u;
        goto label_47eec4;
    }
    ctx->pc = 0x47EEBCu;
    SET_GPR_U32(ctx, 31, 0x47EEC4u);
    ctx->pc = 0x47EEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EEBCu;
    // 0x47eec0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47EEBCu, 0x47EEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EEC4u;
label_47eec4:
    // 0x47eec4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47eec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47eec8:
    // 0x47eec8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x47eec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47eecc:
    // 0x47eecc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x47eeccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47eed0:
    // 0x47eed0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47eed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47eed4:
    // 0x47eed4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x47eed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47eed8:
    // 0x47eed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47eed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47eedc:
    // 0x47eedc: 0x3e00008  jr          $ra
label_47eee0:
    if (ctx->pc == 0x47EEE0u) {
        ctx->pc = 0x47EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EEDCu;
        // 0x47eee0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EEE4u;
        goto label_47eee4;
    }
    ctx->pc = 0x47EEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EEDCu;
        // 0x47eee0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47EEE4u;
label_47eee4:
    // 0x47eee4: 0x0  nop
    ctx->pc = 0x47eee4u;
    // NOP
    ctx->pc = 0x47eee8u;
}
