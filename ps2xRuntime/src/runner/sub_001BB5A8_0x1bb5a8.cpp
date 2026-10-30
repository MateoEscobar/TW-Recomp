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

// Function: sub_001BB5A8
// Address: 0x1bb5a8 - 0x1bb650
void sub_001BB5A8_0x1bb5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB5A8_0x1bb5a8");
#endif

    switch (ctx->pc) {
        case 0x1bb5d0u: goto label_1bb5d0;
        case 0x1bb5e0u: goto label_1bb5e0;
        case 0x1bb5ecu: goto label_1bb5ec;
        case 0x1bb608u: goto label_1bb608;
        case 0x1bb614u: goto label_1bb614;
        default: break;
    }

    ctx->pc = 0x1bb5a8u;

    // 0x1bb5a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bb5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bb5ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bb5b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bb5b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bb5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1bb5b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bb5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bb5bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1bb5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1bb5c0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1bb5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb5c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb5c8: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1BB5C8u;
    SET_GPR_U32(ctx, 31, 0x1BB5D0u);
    ctx->pc = 0x1BB5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5C8u;
    // 0x1bb5cc: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1BB5C8u, 0x1BB5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5D0u;
label_1bb5d0:
    // 0x1bb5d0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1bb5d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bb5d4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1bb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1bb5d8: 0x2442a348  addiu       $v0, $v0, -0x5CB8
    ctx->pc = 0x1bb5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943560));
    // 0x1bb5dc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1bb5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1bb5e0:
    // 0x1bb5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5e4: 0xc070e80  jal         func_1C3A00
    ctx->pc = 0x1BB5E4u;
    SET_GPR_U32(ctx, 31, 0x1BB5ECu);
    ctx->pc = 0x1BB5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5E4u;
    // 0x1bb5e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3A00u, 0x1BB5E4u, 0x1BB5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5ECu;
label_1bb5ec:
    // 0x1bb5ec: 0x0  nop
    ctx->pc = 0x1bb5ecu;
    // NOP
    // 0x1bb5f0: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BB5F0u;
    {
        const bool branch_taken_0x1bb5f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1BB5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5F0u;
        // 0x1bb5f4: 0x26100430  addiu       $s0, $s0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5f0) {
            ctx->pc = 0x1BB5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb5e0;
        }
    }
    ctx->pc = 0x1BB5F8u;
    // 0x1bb5f8: 0x26501100  addiu       $s0, $s2, 0x1100
    ctx->pc = 0x1bb5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4352));
    // 0x1bb5fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1bb5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb600: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1bb600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bb604: 0x0  nop
    ctx->pc = 0x1bb604u;
    // NOP
label_1bb608:
    // 0x1bb608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb60c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1BB60Cu;
    SET_GPR_U32(ctx, 31, 0x1BB614u);
    ctx->pc = 0x1BB610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB60Cu;
    // 0x1bb610: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1BB60Cu, 0x1BB614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB614u;
label_1bb614:
    // 0x1bb614: 0x0  nop
    ctx->pc = 0x1bb614u;
    // NOP
    // 0x1bb618: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BB618u;
    {
        const bool branch_taken_0x1bb618 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1BB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB618u;
        // 0x1bb61c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb618) {
            ctx->pc = 0x1BB608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb608;
        }
    }
    ctx->pc = 0x1BB620u;
    // 0x1bb620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb624: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1bb624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb628: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1bb628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1bb62c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1bb62cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1bb630: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bb630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb634: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bb634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb63c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1bb63cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb644: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB644u;
        // 0x1bb648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB64Cu;
    // 0x1bb64c: 0x0  nop
    ctx->pc = 0x1bb64cu;
    // NOP
    ctx->pc = 0x1bb650u;
}
