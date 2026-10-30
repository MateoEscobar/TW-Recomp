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

// Function: sub_00228F40
// Address: 0x228f40 - 0x229028
void sub_00228F40_0x228f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228F40_0x228f40");
#endif

    switch (ctx->pc) {
        case 0x228f90u: goto label_228f90;
        case 0x228fa8u: goto label_228fa8;
        case 0x228fb4u: goto label_228fb4;
        default: break;
    }

    ctx->pc = 0x228f40u;

    // 0x228f40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x228f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x228f44: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x228f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x228f48: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x228f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x228f4c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x228f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x228f50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x228f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x228f54: 0x24732b70  addiu       $s3, $v1, 0x2B70
    ctx->pc = 0x228f54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 11120));
    // 0x228f58: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x228f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x228f5c: 0x34421ab0  ori         $v0, $v0, 0x1AB0
    ctx->pc = 0x228f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6832);
    // 0x228f60: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x228f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x228f64: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x228f64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f68: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x228f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x228f6c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x228f6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f70: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x228f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x228f74: 0x262b821  addu        $s7, $s3, $v0
    ctx->pc = 0x228f74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x228f78: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x228f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x228f7c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x228f7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f80: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x228f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x228f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228f88: 0x8e620a80  lw          $v0, 0xA80($s3)
    ctx->pc = 0x228f88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6635F0u));
    // 0x228f8c: 0x0  nop
    ctx->pc = 0x228f8cu;
    // NOP
label_228f90:
    // 0x228f90: 0x54560012  bnel        $v0, $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x228F90u;
    {
        const bool branch_taken_0x228f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x228f90) {
            ctx->pc = 0x228F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228F90u;
            // 0x228f94: 0x26730a90  addiu       $s3, $s3, 0xA90 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2704));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228FDCu;
            goto label_228fdc;
        }
    }
    ctx->pc = 0x228F98u;
    // 0x228f98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x228f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f9c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x228f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fa0: 0x26700600  addiu       $s0, $s3, 0x600
    ctx->pc = 0x228fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1536));
    // 0x228fa4: 0x0  nop
    ctx->pc = 0x228fa4u;
    // NOP
label_228fa8:
    // 0x228fa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x228fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fac: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x228FACu;
    SET_GPR_U32(ctx, 31, 0x228FB4u);
    ctx->pc = 0x228FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228FACu;
    // 0x228fb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x228FACu, 0x228FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FB4u;
label_228fb4:
    // 0x228fb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228FB4u;
    {
        const bool branch_taken_0x228fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FB4u;
        // 0x228fb8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fb4) {
            ctx->pc = 0x228FC8u;
            goto label_228fc8;
        }
    }
    ctx->pc = 0x228FBCu;
    // 0x228fbc: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x228fbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x228fc0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x228FC0u;
    {
        const bool branch_taken_0x228fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FC0u;
        // 0x228fc4: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fc0) {
            ctx->pc = 0x228FF8u;
            goto label_228ff8;
        }
    }
    ctx->pc = 0x228FC8u;
label_228fc8:
    // 0x228fc8: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x228fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x228fcc: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x228fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x228fd0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x228FD0u;
    {
        const bool branch_taken_0x228fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FD0u;
        // 0x228fd4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fd0) {
            ctx->pc = 0x228FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228fa8;
        }
    }
    ctx->pc = 0x228FD8u;
    // 0x228fd8: 0x26730a90  addiu       $s3, $s3, 0xA90
    ctx->pc = 0x228fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2704));
label_228fdc:
    // 0x228fdc: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x228fdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x228fe0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x228FE0u;
    {
        const bool branch_taken_0x228fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228fe0) {
            ctx->pc = 0x228FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228FE0u;
            // 0x228fe4: 0x8e620a80  lw          $v0, 0xA80($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228f90;
        }
    }
    ctx->pc = 0x228FE8u;
    // 0x228fe8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x228fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x228fec: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x228fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x228ff0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x228ff0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x228ff4: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x228ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
label_228ff8:
    // 0x228ff8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x228ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ffc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x228ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x229000: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x229000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229004: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x229004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229008: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x229008u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22900c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22900cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229010: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x229010u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229014: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x229014u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229018: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x229018u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22901c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22901cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229020: 0x3e00008  jr          $ra
    ctx->pc = 0x229020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229020u;
        // 0x229024: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229028u;
}
