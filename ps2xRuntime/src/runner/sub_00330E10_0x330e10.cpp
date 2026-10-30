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

// Function: sub_00330E10
// Address: 0x330e10 - 0x330ed8
void sub_00330E10_0x330e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330E10_0x330e10");
#endif

    switch (ctx->pc) {
        case 0x330e5cu: goto label_330e5c;
        case 0x330e70u: goto label_330e70;
        case 0x330e80u: goto label_330e80;
        case 0x330ea4u: goto label_330ea4;
        default: break;
    }

    ctx->pc = 0x330e10u;

    // 0x330e10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x330e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x330e14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x330e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x330e18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x330e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x330e1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x330e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e20: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x330e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x330e24: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x330e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e28: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x330e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x330e2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x330e2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x330e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x330e34: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x330e34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e38: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x330E38u;
    {
        const bool branch_taken_0x330e38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x330E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E38u;
        // 0x330e3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e38) {
            ctx->pc = 0x330E48u;
            goto label_330e48;
        }
    }
    ctx->pc = 0x330E40u;
    // 0x330e40: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x330E40u;
    {
        const bool branch_taken_0x330e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E40u;
        // 0x330e44: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e40) {
            ctx->pc = 0x330EB4u;
            goto label_330eb4;
        }
    }
    ctx->pc = 0x330E48u;
label_330e48:
    // 0x330e48: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x330e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x330e4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x330E4Cu;
    {
        const bool branch_taken_0x330e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E4Cu;
        // 0x330e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e4c) {
            ctx->pc = 0x330E64u;
            goto label_330e64;
        }
    }
    ctx->pc = 0x330E54u;
    // 0x330e54: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x330E54u;
    {
        const bool branch_taken_0x330e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E54u;
        // 0x330e58: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e54) {
            ctx->pc = 0x330EB8u;
            goto label_330eb8;
        }
    }
    ctx->pc = 0x330E5Cu;
label_330e5c:
    // 0x330e5c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x330E5Cu;
    {
        const bool branch_taken_0x330e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E5Cu;
        // 0x330e60: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e5c) {
            ctx->pc = 0x330EB4u;
            goto label_330eb4;
        }
    }
    ctx->pc = 0x330E64u;
label_330e64:
    // 0x330e64: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x330e64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x330e68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x330E68u;
    {
        const bool branch_taken_0x330e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E68u;
        // 0x330e6c: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e68) {
            ctx->pc = 0x330E90u;
            goto label_330e90;
        }
    }
    ctx->pc = 0x330E70u;
label_330e70:
    // 0x330e70: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x330e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x330e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x330e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e78: 0xc10c16b  jal         func_4305AC
    ctx->pc = 0x330E78u;
    SET_GPR_U32(ctx, 31, 0x330E80u);
    ctx->pc = 0x330E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330E78u;
    // 0x330e7c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4305ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4305ACu, 0x330E78u, 0x330E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E80u;
label_330e80:
    // 0x330e80: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x330E80u;
    {
        const bool branch_taken_0x330e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E80u;
        // 0x330e84: 0x2131023  subu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e80) {
            ctx->pc = 0x330E5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330e5c;
        }
    }
    ctx->pc = 0x330E88u;
    // 0x330e88: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x330e88u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x330e8c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x330e8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330e90:
    // 0x330e90: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x330E90u;
    {
        const bool branch_taken_0x330e90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E90u;
        // 0x330e94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e90) {
            ctx->pc = 0x330EB0u;
            goto label_330eb0;
        }
    }
    ctx->pc = 0x330E98u;
    // 0x330e98: 0x82850000  lb          $a1, 0x0($s4)
    ctx->pc = 0x330e98u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x330e9c: 0xc10c130  jal         func_4304C0
    ctx->pc = 0x330E9Cu;
    SET_GPR_U32(ctx, 31, 0x330EA4u);
    ctx->pc = 0x330EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330E9Cu;
    // 0x330ea0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4304C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4304C0u, 0x330E9Cu, 0x330EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330EA4u;
label_330ea4:
    // 0x330ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x330ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ea8: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x330EA8u;
    {
        const bool branch_taken_0x330ea8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x330EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330EA8u;
        // 0x330eac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ea8) {
            ctx->pc = 0x330E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330e70;
        }
    }
    ctx->pc = 0x330EB0u;
label_330eb0:
    // 0x330eb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x330eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330eb4:
    // 0x330eb4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x330eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_330eb8:
    // 0x330eb8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x330eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x330ebc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x330ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330ec0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x330ec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330ec4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x330ec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x330ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330ECCu;
        // 0x330ed0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330ED4u;
    // 0x330ed4: 0x0  nop
    ctx->pc = 0x330ed4u;
    // NOP
    ctx->pc = 0x330ed8u;
}
