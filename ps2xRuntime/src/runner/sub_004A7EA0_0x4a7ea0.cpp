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

// Function: sub_004A7EA0
// Address: 0x4a7ea0 - 0x4a81f0
void sub_004A7EA0_0x4a7ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A7EA0_0x4a7ea0");
#endif

    switch (ctx->pc) {
        case 0x4a7ed8u: goto label_4a7ed8;
        case 0x4a7ef8u: goto label_4a7ef8;
        case 0x4a7f18u: goto label_4a7f18;
        case 0x4a7f58u: goto label_4a7f58;
        case 0x4a7f64u: goto label_4a7f64;
        case 0x4a7fc0u: goto label_4a7fc0;
        case 0x4a8000u: goto label_4a8000;
        case 0x4a8040u: goto label_4a8040;
        case 0x4a805cu: goto label_4a805c;
        case 0x4a80c0u: goto label_4a80c0;
        case 0x4a80f0u: goto label_4a80f0;
        case 0x4a8128u: goto label_4a8128;
        case 0x4a8158u: goto label_4a8158;
        default: break;
    }

    ctx->pc = 0x4a7ea0u;

    // 0x4a7ea0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4a7ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4a7ea4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4a7ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x4a7ea8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4a7ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x4a7eac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4a7eacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7eb0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4a7eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4a7eb4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4a7eb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7eb8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4a7eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x4a7ebc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4a7ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4a7ec0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4a7ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4a7ec4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4a7ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4a7ec8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4a7ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x4a7ecc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a7eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a7ed0: 0x8ef40004  lw          $s4, 0x4($s7)
    ctx->pc = 0x4a7ed0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x4a7ed4: 0x8ef20008  lw          $s2, 0x8($s7)
    ctx->pc = 0x4a7ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_4a7ed8:
    // 0x4a7ed8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x4a7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4a7edc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4a7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a7ee0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7ee4: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x4A7EE4u;
    {
        const bool branch_taken_0x4a7ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7EE4u;
        // 0x4a7ee8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7ee4) {
            ctx->pc = 0x4A7F98u;
            goto label_4a7f98;
        }
    }
    ctx->pc = 0x4A7EECu;
    // 0x4a7eec: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x4a7eecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a7ef0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a7ef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7ef4: 0x0  nop
    ctx->pc = 0x4a7ef4u;
    // NOP
label_4a7ef8:
    // 0x4a7ef8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4a7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a7efc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4a7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4a7f00: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x4a7f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4a7f04: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4a7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a7f08: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x4A7F08u;
    {
        const bool branch_taken_0x4a7f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7f08) {
            ctx->pc = 0x4A7F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7F08u;
            // 0x4a7f0c: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7F80u;
            goto label_4a7f80;
        }
    }
    ctx->pc = 0x4A7F10u;
    // 0x4a7f10: 0xc129c0e  jal         func_4A7038
    ctx->pc = 0x4A7F10u;
    SET_GPR_U32(ctx, 31, 0x4A7F18u);
    ctx->pc = 0x4A7F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7F10u;
    // 0x4a7f14: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7038u, 0x4A7F10u, 0x4A7F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7F18u;
label_4a7f18:
    // 0x4a7f18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a7f18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7f1c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A7F1Cu;
    {
        const bool branch_taken_0x4a7f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F1Cu;
        // 0x4a7f20: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7f1c) {
            ctx->pc = 0x4A7F40u;
            goto label_4a7f40;
        }
    }
    ctx->pc = 0x4A7F24u;
    // 0x4a7f24: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x4a7f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x4a7f28: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4a7f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x4a7f2c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x4a7f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x4a7f30: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a7f34: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x4a7f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x4a7f38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A7F38u;
    {
        const bool branch_taken_0x4a7f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F38u;
        // 0x4a7f3c: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7f38) {
            ctx->pc = 0x4A7F44u;
            goto label_4a7f44;
        }
    }
    ctx->pc = 0x4A7F40u;
label_4a7f40:
    // 0x4a7f40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a7f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7f44:
    // 0x4a7f44: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A7F44u;
    {
        const bool branch_taken_0x4a7f44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F44u;
        // 0x4a7f48: 0xae24000c  sw          $a0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7f44) {
            ctx->pc = 0x4A7F70u;
            goto label_4a7f70;
        }
    }
    ctx->pc = 0x4A7F4Cu;
    // 0x4a7f4c: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x4a7f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x4a7f50: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A7F50u;
    SET_GPR_U32(ctx, 31, 0x4A7F58u);
    ctx->pc = 0x4A7F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7F50u;
    // 0x4a7f54: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A7F50u, 0x4A7F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7F58u;
label_4a7f58:
    // 0x4a7f58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a7f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7f5c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A7F5Cu;
    SET_GPR_U32(ctx, 31, 0x4A7F64u);
    ctx->pc = 0x4A7F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7F5Cu;
    // 0x4a7f60: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A7F5Cu, 0x4A7F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7F64u;
label_4a7f64:
    // 0x4a7f64: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x4A7F64u;
    {
        const bool branch_taken_0x4a7f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F64u;
        // 0x4a7f68: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7f64) {
            ctx->pc = 0x4A81C0u;
            goto label_4a81c0;
        }
    }
    ctx->pc = 0x4A7F6Cu;
    // 0x4a7f6c: 0x0  nop
    ctx->pc = 0x4a7f6cu;
    // NOP
label_4a7f70:
    // 0x4a7f70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7f74: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4a7f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x4a7f78: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x4a7f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x4a7f7c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x4a7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_4a7f80:
    // 0x4a7f80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a7f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4a7f84: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4a7f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a7f88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7f8c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x4a7f8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a7f90: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x4A7F90u;
    {
        const bool branch_taken_0x4a7f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F90u;
        // 0x4a7f94: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7f90) {
            ctx->pc = 0x4A7EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7ef8;
        }
    }
    ctx->pc = 0x4A7F98u;
label_4a7f98:
    // 0x4a7f98: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a7f9c: 0x268fffff  addiu       $t7, $s4, -0x1
    ctx->pc = 0x4a7f9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x4a7fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a7fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7fa4: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x4A7FA4u;
    {
        const bool branch_taken_0x4a7fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7FA4u;
        // 0x4a7fa8: 0x264e0028  addiu       $t6, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7fa4) {
            ctx->pc = 0x4A81B0u;
            goto label_4a81b0;
        }
    }
    ctx->pc = 0x4A7FACu;
    // 0x4a7fac: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4a7facu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7fb0: 0x24130028  addiu       $s3, $zero, 0x28
    ctx->pc = 0x4a7fb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a7fb4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4a7fb4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4a7fb8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4a7fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a7fbc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a7fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a7fc0:
    // 0x4a7fc0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4a7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4a7fc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a7fc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4a7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a7fcc: 0x104a0073  beq         $v0, $t2, . + 4 + (0x73 << 2)
    ctx->pc = 0x4A7FCCu;
    {
        const bool branch_taken_0x4a7fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x4A7FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7FCCu;
        // 0x4a7fd0: 0x24ac0001  addiu       $t4, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7fcc) {
            ctx->pc = 0x4A819Cu;
            goto label_4a819c;
        }
    }
    ctx->pc = 0x4A7FD4u;
    // 0x4a7fd4: 0x532018  mult        $a0, $v0, $s3
    ctx->pc = 0x4a7fd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4a7fd8: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x4a7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x4a7fdc: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x4a7fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a7fe0: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x4a7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x4a7fe4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4a7fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a7fe8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a7fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a7fec: 0x1080006b  beqz        $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x4A7FECu;
    {
        const bool branch_taken_0x4a7fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7FECu;
        // 0x4a7ff0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7fec) {
            ctx->pc = 0x4A819Cu;
            goto label_4a819c;
        }
    }
    ctx->pc = 0x4A7FF4u;
    // 0x4a7ff4: 0xb15804  sllv        $t3, $s1, $a1
    ctx->pc = 0x4a7ff4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 5) & 0x1F));
    // 0x4a7ff8: 0x240d0024  addiu       $t5, $zero, 0x24
    ctx->pc = 0x4a7ff8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a7ffc: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x4a7ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_4a8000:
    // 0x4a8000: 0x20d2818  mult        $a1, $s0, $t5
    ctx->pc = 0x4a8000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4a8004: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4a8004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a8008: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4a8008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4a800c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x4a800cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4a8010: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4a8010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4a8014: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x4A8014u;
    {
        const bool branch_taken_0x4a8014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8014u;
        // 0x4a8018: 0x26090001  addiu       $t1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8014) {
            ctx->pc = 0x4A8180u;
            goto label_4a8180;
        }
    }
    ctx->pc = 0x4A801Cu;
    // 0x4a801c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x4a801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4a8020: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4a8020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a8024: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a8024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a8028: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4A8028u;
    {
        const bool branch_taken_0x4a8028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8028u;
        // 0x4a802c: 0x8cc70000  lw          $a3, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8028) {
            ctx->pc = 0x4A8058u;
            goto label_4a8058;
        }
    }
    ctx->pc = 0x4A8030u;
    // 0x4a8030: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4a8030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4a8034: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A8034u;
    {
        const bool branch_taken_0x4a8034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8034u;
        // 0x4a8038: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8034) {
            ctx->pc = 0x4A8058u;
            goto label_4a8058;
        }
    }
    ctx->pc = 0x4A803Cu;
    // 0x4a803c: 0x0  nop
    ctx->pc = 0x4a803cu;
    // NOP
label_4a8040:
    // 0x4a8040: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a8040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a8044: 0x10470015  beq         $v0, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A8044u;
    {
        const bool branch_taken_0x4a8044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x4A8048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8044u;
        // 0x4a8048: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8044) {
            ctx->pc = 0x4A809Cu;
            goto label_4a809c;
        }
    }
    ctx->pc = 0x4A804Cu;
    // 0x4a804c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x4a804cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a8050: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4A8050u;
    {
        const bool branch_taken_0x4a8050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8050u;
        // 0x4a8054: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8050) {
            ctx->pc = 0x4A8040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8040;
        }
    }
    ctx->pc = 0x4A8058u;
label_4a8058:
    // 0x4a8058: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a8058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a805c:
    // 0x4a805c: 0x50800049  beql        $a0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x4A805Cu;
    {
        const bool branch_taken_0x4a805c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a805c) {
            ctx->pc = 0x4A8060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A805Cu;
            // 0x4a8060: 0x8d04001c  lw          $a0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8184u;
            goto label_4a8184;
        }
    }
    ctx->pc = 0x4A8064u;
    // 0x4a8064: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4a8064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4a8068: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x4a8068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x4a806c: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x4A806Cu;
    {
        const bool branch_taken_0x4a806c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a806c) {
            ctx->pc = 0x4A8070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A806Cu;
            // 0x4a8070: 0x8d04001c  lw          $a0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8184u;
            goto label_4a8184;
        }
    }
    ctx->pc = 0x4A8074u;
    // 0x4a8074: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4a8074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4a8078: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4A8078u;
    {
        const bool branch_taken_0x4a8078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8078) {
            ctx->pc = 0x4A807Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8078u;
            // 0x4a807c: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A80A4u;
            goto label_4a80a4;
        }
    }
    ctx->pc = 0x4A8080u;
    // 0x4a8080: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4a8080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4a8084: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a8084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a8088: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x4a8088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x4a808c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x4a808cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x4a8090: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x4a8090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4a8094: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x4A8094u;
    {
        const bool branch_taken_0x4a8094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8094u;
        // 0x4a8098: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8094) {
            ctx->pc = 0x4A8180u;
            goto label_4a8180;
        }
    }
    ctx->pc = 0x4A809Cu;
label_4a809c:
    // 0x4a809c: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x4A809Cu;
    {
        const bool branch_taken_0x4a809c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A809Cu;
        // 0x4a80a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a809c) {
            ctx->pc = 0x4A805Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a805c;
        }
    }
    ctx->pc = 0x4A80A4u;
label_4a80a4:
    // 0x4a80a4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4a80a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a80a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a80a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a80ac: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4a80acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4a80b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A80B0u;
    {
        const bool branch_taken_0x4a80b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A80B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A80B0u;
        // 0x4a80b4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a80b0) {
            ctx->pc = 0x4A80DCu;
            goto label_4a80dc;
        }
    }
    ctx->pc = 0x4A80B8u;
    // 0x4a80b8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x4a80b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4a80bc: 0x0  nop
    ctx->pc = 0x4a80bcu;
    // NOP
label_4a80c0:
    // 0x4a80c0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4a80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4a80c4: 0x0  nop
    ctx->pc = 0x4a80c4u;
    // NOP
    // 0x4a80c8: 0x0  nop
    ctx->pc = 0x4a80c8u;
    // NOP
    // 0x4a80cc: 0x0  nop
    ctx->pc = 0x4a80ccu;
    // NOP
    // 0x4a80d0: 0x0  nop
    ctx->pc = 0x4a80d0u;
    // NOP
    // 0x4a80d4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A80D4u;
    {
        const bool branch_taken_0x4a80d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a80d4) {
            ctx->pc = 0x4A80D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A80D4u;
            // 0x4a80d8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A80C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a80c0;
        }
    }
    ctx->pc = 0x4A80DCu;
label_4a80dc:
    // 0x4a80dc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4a80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4a80e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A80E0u;
    {
        const bool branch_taken_0x4a80e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a80e0) {
            ctx->pc = 0x4A810Cu;
            goto label_4a810c;
        }
    }
    ctx->pc = 0x4A80E8u;
    // 0x4a80e8: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x4a80e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4a80ec: 0x0  nop
    ctx->pc = 0x4a80ecu;
    // NOP
label_4a80f0:
    // 0x4a80f0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4a80f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4a80f4: 0x0  nop
    ctx->pc = 0x4a80f4u;
    // NOP
    // 0x4a80f8: 0x0  nop
    ctx->pc = 0x4a80f8u;
    // NOP
    // 0x4a80fc: 0x0  nop
    ctx->pc = 0x4a80fcu;
    // NOP
    // 0x4a8100: 0x0  nop
    ctx->pc = 0x4a8100u;
    // NOP
    // 0x4a8104: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A8104u;
    {
        const bool branch_taken_0x4a8104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8104) {
            ctx->pc = 0x4A8108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8104u;
            // 0x4a8108: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A80F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a80f0;
        }
    }
    ctx->pc = 0x4A810Cu;
label_4a810c:
    // 0x4a810c: 0x5085001d  beql        $a0, $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x4A810Cu;
    {
        const bool branch_taken_0x4a810c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x4a810c) {
            ctx->pc = 0x4A8110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A810Cu;
            // 0x4a8110: 0x8d04001c  lw          $a0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8184u;
            goto label_4a8184;
        }
    }
    ctx->pc = 0x4A8114u;
    // 0x4a8114: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4a8114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4a8118: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A8118u;
    {
        const bool branch_taken_0x4a8118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8118u;
        // 0x4a811c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8118) {
            ctx->pc = 0x4A8144u;
            goto label_4a8144;
        }
    }
    ctx->pc = 0x4A8120u;
    // 0x4a8120: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4a8120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a8124: 0x0  nop
    ctx->pc = 0x4a8124u;
    // NOP
label_4a8128:
    // 0x4a8128: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a8128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a812c: 0x0  nop
    ctx->pc = 0x4a812cu;
    // NOP
    // 0x4a8130: 0x0  nop
    ctx->pc = 0x4a8130u;
    // NOP
    // 0x4a8134: 0x0  nop
    ctx->pc = 0x4a8134u;
    // NOP
    // 0x4a8138: 0x0  nop
    ctx->pc = 0x4a8138u;
    // NOP
    // 0x4a813c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A813Cu;
    {
        const bool branch_taken_0x4a813c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a813c) {
            ctx->pc = 0x4A8140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A813Cu;
            // 0x4a8140: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8128;
        }
    }
    ctx->pc = 0x4A8144u;
label_4a8144:
    // 0x4a8144: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x4a8144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x4a8148: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x4a8148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x4a814c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a8150: 0x50450009  beql        $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A8150u;
    {
        const bool branch_taken_0x4a8150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x4a8150) {
            ctx->pc = 0x4A8154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8150u;
            // 0x4a8154: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8178u;
            goto label_4a8178;
        }
    }
    ctx->pc = 0x4A8158u;
label_4a8158:
    // 0x4a8158: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a8158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a815c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4a815cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a8160: 0x0  nop
    ctx->pc = 0x4a8160u;
    // NOP
    // 0x4a8164: 0x0  nop
    ctx->pc = 0x4a8164u;
    // NOP
    // 0x4a8168: 0x0  nop
    ctx->pc = 0x4a8168u;
    // NOP
    // 0x4a816c: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A816Cu;
    {
        const bool branch_taken_0x4a816c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4A8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A816Cu;
        // 0x4a8170: 0x24460008  addiu       $a2, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a816c) {
            ctx->pc = 0x4A8158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8158;
        }
    }
    ctx->pc = 0x4A8174u;
    // 0x4a8174: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a8174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4a8178:
    // 0x4a8178: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4a8178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a817c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4a817cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4a8180:
    // 0x4a8180: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x4a8180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_4a8184:
    // 0x4a8184: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x4a8184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8188: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4a8188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a818c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a8190: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4a8190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a8194: 0x5440ff9a  bnel        $v0, $zero, . + 4 + (-0x66 << 2)
    ctx->pc = 0x4A8194u;
    {
        const bool branch_taken_0x4a8194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8194) {
            ctx->pc = 0x4A8198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8194u;
            // 0x4a8198: 0x8d04001c  lw          $a0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8000;
        }
    }
    ctx->pc = 0x4A819Cu;
label_4a819c:
    // 0x4a819c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a81a0: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x4a81a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a81a4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4a81a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a81a8: 0x5440ff85  bnel        $v0, $zero, . + 4 + (-0x7B << 2)
    ctx->pc = 0x4A81A8u;
    {
        const bool branch_taken_0x4a81a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a81a8) {
            ctx->pc = 0x4A81ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A81A8u;
            // 0x4a81ac: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7fc0;
        }
    }
    ctx->pc = 0x4A81B0u;
label_4a81b0:
    // 0x4a81b0: 0x1e0a02d  daddu       $s4, $t7, $zero
    ctx->pc = 0x4a81b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a81b4: 0x1680ff48  bnez        $s4, . + 4 + (-0xB8 << 2)
    ctx->pc = 0x4A81B4u;
    {
        const bool branch_taken_0x4a81b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A81B4u;
        // 0x4a81b8: 0x1c0902d  daddu       $s2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a81b4) {
            ctx->pc = 0x4A7ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7ed8;
        }
    }
    ctx->pc = 0x4A81BCu;
    // 0x4a81bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a81bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a81c0:
    // 0x4a81c0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4a81c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a81c4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4a81c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a81c8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4a81c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a81cc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4a81ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a81d0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4a81d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a81d4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4a81d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a81d8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4a81d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a81dc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x4a81dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a81e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a81e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a81e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A81E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A81E4u;
        // 0x4a81e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A81E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A81ECu;
    // 0x4a81ec: 0x0  nop
    ctx->pc = 0x4a81ecu;
    // NOP
    ctx->pc = 0x4a81f0u;
}
