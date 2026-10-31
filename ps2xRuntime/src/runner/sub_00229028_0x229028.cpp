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

// Function: sub_00229028
// Address: 0x229028 - 0x229110
void sub_00229028_0x229028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229028_0x229028");
#endif

    switch (ctx->pc) {
        case 0x229078u: goto label_229078;
        case 0x229090u: goto label_229090;
        case 0x22909cu: goto label_22909c;
        default: break;
    }

    ctx->pc = 0x229028u;

    // 0x229028: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x229028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22902c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x22902cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x229030: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x229030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x229034: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x229034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x229038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x229038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22903c: 0x24732b70  addiu       $s3, $v1, 0x2B70
    ctx->pc = 0x22903cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 11120));
    // 0x229040: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x229040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x229044: 0x34421ab0  ori         $v0, $v0, 0x1AB0
    ctx->pc = 0x229044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6832);
    // 0x229048: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x229048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x22904c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22904cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229050: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x229050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x229054: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x229054u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229058: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x229058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x22905c: 0x262b821  addu        $s7, $s3, $v0
    ctx->pc = 0x22905cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x229060: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x229060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x229064: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x229064u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229068: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x229068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x22906c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229070: 0x8e620a80  lw          $v0, 0xA80($s3)
    ctx->pc = 0x229070u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6635F0u));
    // 0x229074: 0x0  nop
    ctx->pc = 0x229074u;
    // NOP
label_229078:
    // 0x229078: 0x54560012  bnel        $v0, $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x229078u;
    {
        const bool branch_taken_0x229078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x229078) {
            ctx->pc = 0x22907Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229078u;
            // 0x22907c: 0x26730a90  addiu       $s3, $s3, 0xA90 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2704));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2290C4u;
            goto label_2290c4;
        }
    }
    ctx->pc = 0x229080u;
    // 0x229080: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x229080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229084: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x229084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x229088: 0x26700600  addiu       $s0, $s3, 0x600
    ctx->pc = 0x229088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1536));
    // 0x22908c: 0x0  nop
    ctx->pc = 0x22908cu;
    // NOP
label_229090:
    // 0x229090: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x229090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229094: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x229094u;
    SET_GPR_U32(ctx, 31, 0x22909Cu);
    ctx->pc = 0x229098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229094u;
    // 0x229098: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x229094u, 0x22909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22909Cu;
label_22909c:
    // 0x22909c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22909Cu;
    {
        const bool branch_taken_0x22909c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2290A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22909Cu;
        // 0x2290a0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22909c) {
            ctx->pc = 0x2290B0u;
            goto label_2290b0;
        }
    }
    ctx->pc = 0x2290A4u;
    // 0x2290a4: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2290a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2290a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2290A8u;
    {
        const bool branch_taken_0x2290a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2290ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290A8u;
        // 0x2290ac: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2290a8) {
            ctx->pc = 0x2290E0u;
            goto label_2290e0;
        }
    }
    ctx->pc = 0x2290B0u;
label_2290b0:
    // 0x2290b0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2290b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2290b4: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x2290b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2290b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2290B8u;
    {
        const bool branch_taken_0x2290b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2290BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290B8u;
        // 0x2290bc: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2290b8) {
            ctx->pc = 0x229090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229090;
        }
    }
    ctx->pc = 0x2290C0u;
    // 0x2290c0: 0x26730a90  addiu       $s3, $s3, 0xA90
    ctx->pc = 0x2290c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2704));
label_2290c4:
    // 0x2290c4: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x2290c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2290c8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2290C8u;
    {
        const bool branch_taken_0x2290c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2290c8) {
            ctx->pc = 0x2290CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2290C8u;
            // 0x2290cc: 0x8e620a80  lw          $v0, 0xA80($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229078;
        }
    }
    ctx->pc = 0x2290D0u;
    // 0x2290d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2290d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2290d4: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x2290d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x2290d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2290d8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2290dc: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x2290dcu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
label_2290e0:
    // 0x2290e0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2290e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2290e4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2290e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2290e8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2290e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2290ec: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2290ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2290f0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2290f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2290f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2290f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2290f8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2290f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2290fc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2290fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229100: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x229100u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229108: 0x3e00008  jr          $ra
    ctx->pc = 0x229108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229108u;
        // 0x22910c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229110u;
}
