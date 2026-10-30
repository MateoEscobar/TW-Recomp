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

// Function: sub_00326E88
// Address: 0x326e88 - 0x326f18
void sub_00326E88_0x326e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326E88_0x326e88");
#endif

    switch (ctx->pc) {
        case 0x326ec0u: goto label_326ec0;
        case 0x326eccu: goto label_326ecc;
        case 0x326ee0u: goto label_326ee0;
        case 0x326ee8u: goto label_326ee8;
        default: break;
    }

    ctx->pc = 0x326e88u;

    // 0x326e88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x326e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x326e8c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x326e8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326e90: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x326e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x326e94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x326e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326e98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x326e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x326e9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x326e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326ea0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x326ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x326ea4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x326ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x326ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326eac: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x326eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x326eb0: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x326EB0u;
    {
        const bool branch_taken_0x326eb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x326EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EB0u;
        // 0x326eb4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326eb0) {
            ctx->pc = 0x326ED4u;
            goto label_326ed4;
        }
    }
    ctx->pc = 0x326EB8u;
    // 0x326eb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x326EB8u;
    {
        const bool branch_taken_0x326eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EB8u;
        // 0x326ebc: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326eb8) {
            ctx->pc = 0x326EF8u;
            goto label_326ef8;
        }
    }
    ctx->pc = 0x326EC0u;
label_326ec0:
    // 0x326ec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x326ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326ec4: 0xc0c9992  jal         func_326648
    ctx->pc = 0x326EC4u;
    SET_GPR_U32(ctx, 31, 0x326ECCu);
    ctx->pc = 0x326EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326EC4u;
    // 0x326ec8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326648u, 0x326EC4u, 0x326ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326ECCu;
label_326ecc:
    // 0x326ecc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x326ECCu;
    {
        const bool branch_taken_0x326ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326ECCu;
        // 0x326ed0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ecc) {
            ctx->pc = 0x326EFCu;
            goto label_326efc;
        }
    }
    ctx->pc = 0x326ED4u;
label_326ed4:
    // 0x326ed4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x326ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326ed8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x326ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326ee0:
    // 0x326ee0: 0xc0c99be  jal         func_3266F8
    ctx->pc = 0x326EE0u;
    SET_GPR_U32(ctx, 31, 0x326EE8u);
    ctx->pc = 0x326EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326EE0u;
    // 0x326ee4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3266F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3266F8u, 0x326EE0u, 0x326EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326EE8u;
label_326ee8:
    // 0x326ee8: 0x1053fff5  beq         $v0, $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x326EE8u;
    {
        const bool branch_taken_0x326ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x326EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EE8u;
        // 0x326eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ee8) {
            ctx->pc = 0x326EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326ec0;
        }
    }
    ctx->pc = 0x326EF0u;
    // 0x326ef0: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x326EF0u;
    {
        const bool branch_taken_0x326ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EF0u;
        // 0x326ef4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ef0) {
            ctx->pc = 0x326EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326ee0;
        }
    }
    ctx->pc = 0x326EF8u;
label_326ef8:
    // 0x326ef8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x326ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_326efc:
    // 0x326efc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x326efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326f00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x326f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326f04: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x326f04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x326F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F0Cu;
        // 0x326f10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326F14u;
    // 0x326f14: 0x0  nop
    ctx->pc = 0x326f14u;
    // NOP
    ctx->pc = 0x326f18u;
}
