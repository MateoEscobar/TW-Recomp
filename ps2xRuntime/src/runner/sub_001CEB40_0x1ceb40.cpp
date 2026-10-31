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

// Function: sub_001CEB40
// Address: 0x1ceb40 - 0x1cec28
void sub_001CEB40_0x1ceb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEB40_0x1ceb40");
#endif

    switch (ctx->pc) {
        case 0x1ceba8u: goto label_1ceba8;
        case 0x1cebb8u: goto label_1cebb8;
        case 0x1cebc8u: goto label_1cebc8;
        case 0x1cebd0u: goto label_1cebd0;
        case 0x1cebdcu: goto label_1cebdc;
        case 0x1cebecu: goto label_1cebec;
        case 0x1cebfcu: goto label_1cebfc;
        default: break;
    }

    ctx->pc = 0x1ceb40u;

    // 0x1ceb40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ceb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ceb44: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ceb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ceb48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ceb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ceb4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ceb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb50: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ceb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ceb54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ceb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ceb58: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ceb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ceb5c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1CEB5Cu;
    {
        const bool branch_taken_0x1ceb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB5Cu;
        // 0x1ceb60: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb5c) {
            ctx->pc = 0x1CEC10u;
            goto label_1cec10;
        }
    }
    ctx->pc = 0x1CEB64u;
    // 0x1ceb64: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1ceb64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ceb68: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ceb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ceb6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ceb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ceb70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ceb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ceb74: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1ceb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1ceb78: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1ceb78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1ceb7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ceb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb80: 0x8c66d310  lw          $a2, -0x2CF0($v1)
    ctx->pc = 0x1ceb80u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FD310u));
    // 0x1ceb84: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1ceb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1ceb88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ceb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ceb8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ceb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ceb90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ceb90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ceb94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ceb94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb98: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1ceb98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ceb9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ceb9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceba0: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1CEBA0u;
    SET_GPR_U32(ctx, 31, 0x1CEBA8u);
    ctx->pc = 0x1CEBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBA0u;
    // 0x1ceba4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1CEBA0u, 0x1CEBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBA8u;
label_1ceba8:
    // 0x1ceba8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CEBA8u;
    {
        const bool branch_taken_0x1ceba8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBA8u;
        // 0x1cebac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceba8) {
            ctx->pc = 0x1CEBC0u;
            goto label_1cebc0;
        }
    }
    ctx->pc = 0x1CEBB0u;
    // 0x1cebb0: 0xc06e51e  jal         func_1B9478
    ctx->pc = 0x1CEBB0u;
    SET_GPR_U32(ctx, 31, 0x1CEBB8u);
    ctx->pc = 0x1CEBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBB0u;
    // 0x1cebb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1CEBB0u, 0x1CEBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBB8u;
label_1cebb8:
    // 0x1cebb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEBB8u;
    {
        const bool branch_taken_0x1cebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cebb8) {
            ctx->pc = 0x1CEBC8u;
            goto label_1cebc8;
        }
    }
    ctx->pc = 0x1CEBC0u;
label_1cebc0:
    // 0x1cebc0: 0xc06e51e  jal         func_1B9478
    ctx->pc = 0x1CEBC0u;
    SET_GPR_U32(ctx, 31, 0x1CEBC8u);
    ctx->pc = 0x1CEBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBC0u;
    // 0x1cebc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1CEBC0u, 0x1CEBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBC8u;
label_1cebc8:
    // 0x1cebc8: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1CEBC8u;
    SET_GPR_U32(ctx, 31, 0x1CEBD0u);
    ctx->pc = 0x1CEBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBC8u;
    // 0x1cebcc: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CEBC8u, 0x1CEBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBD0u;
label_1cebd0:
    // 0x1cebd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cebd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebd4: 0xc073b0a  jal         func_1CEC28
    ctx->pc = 0x1CEBD4u;
    SET_GPR_U32(ctx, 31, 0x1CEBDCu);
    ctx->pc = 0x1CEBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBD4u;
    // 0x1cebd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1CEBD4u, 0x1CEBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBDCu;
label_1cebdc:
    // 0x1cebdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cebdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cebe0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cebe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cebe4: 0xc06e4a2  jal         func_1B9288
    ctx->pc = 0x1CEBE4u;
    SET_GPR_U32(ctx, 31, 0x1CEBECu);
    ctx->pc = 0x1CEBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBE4u;
    // 0x1cebe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9288u, 0x1CEBE4u, 0x1CEBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBECu;
label_1cebec:
    // 0x1cebec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cebecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebf0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1cebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cebf4: 0xc06e4ea  jal         func_1B93A8
    ctx->pc = 0x1CEBF4u;
    SET_GPR_U32(ctx, 31, 0x1CEBFCu);
    ctx->pc = 0x1CEBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBF4u;
    // 0x1cebf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1CEBF4u, 0x1CEBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBFCu;
label_1cebfc:
    // 0x1cebfc: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1cebfcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cec04: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1cec04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1cec08: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x1cec08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x1cec0c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1cec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1cec10:
    // 0x1cec10: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1cec10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cec14: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1cec14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cec18: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1cec18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cec1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cec1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cec20: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC20u;
        // 0x1cec24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEC28u;
}
