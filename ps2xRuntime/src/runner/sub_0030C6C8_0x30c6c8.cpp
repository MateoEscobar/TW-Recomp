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

// Function: sub_0030C6C8
// Address: 0x30c6c8 - 0x30c758
void sub_0030C6C8_0x30c6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C6C8_0x30c6c8");
#endif

    switch (ctx->pc) {
        case 0x30c6f0u: goto label_30c6f0;
        case 0x30c6f8u: goto label_30c6f8;
        case 0x30c700u: goto label_30c700;
        case 0x30c720u: goto label_30c720;
        default: break;
    }

    ctx->pc = 0x30c6c8u;

    // 0x30c6c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30c6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30c6cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30c6d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30c6d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30c6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30c6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x30c6dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c6e0: 0x2412004f  addiu       $s2, $zero, 0x4F
    ctx->pc = 0x30c6e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x30c6e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c6e8: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x30c6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30c6ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30c6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30c6f0:
    // 0x30c6f0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30C6F0u;
    SET_GPR_U32(ctx, 31, 0x30C6F8u);
    ctx->pc = 0x30C6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C6F0u;
    // 0x30c6f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30C6F0u, 0x30C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C6F8u;
label_30c6f8:
    // 0x30c6f8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30C6F8u;
    SET_GPR_U32(ctx, 31, 0x30C700u);
    ctx->pc = 0x30C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C6F8u;
    // 0x30c6fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30C6F8u, 0x30C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C700u;
label_30c700:
    // 0x30c700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30c700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c704: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x30C704u;
    {
        const bool branch_taken_0x30c704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C704u;
        // 0x30c708: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c704) {
            ctx->pc = 0x30C730u;
            goto label_30c730;
        }
    }
    ctx->pc = 0x30C70Cu;
    // 0x30c70c: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x30c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30c710: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C710u;
    {
        const bool branch_taken_0x30c710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x30c710) {
            ctx->pc = 0x30C730u;
            goto label_30c730;
        }
    }
    ctx->pc = 0x30C718u;
    // 0x30c718: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x30C718u;
    SET_GPR_U32(ctx, 31, 0x30C720u);
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x30C718u, 0x30C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C720u;
label_30c720:
    // 0x30c720: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C720u;
    {
        const bool branch_taken_0x30c720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C720u;
        // 0x30c724: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c720) {
            ctx->pc = 0x30C734u;
            goto label_30c734;
        }
    }
    ctx->pc = 0x30C728u;
    // 0x30c728: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30C728u;
    {
        const bool branch_taken_0x30c728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C728u;
        // 0x30c72c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c728) {
            ctx->pc = 0x30C740u;
            goto label_30c740;
        }
    }
    ctx->pc = 0x30C730u;
label_30c730:
    // 0x30c730: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x30c730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30c734:
    // 0x30c734: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x30C734u;
    {
        const bool branch_taken_0x30c734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C734u;
        // 0x30c738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c734) {
            ctx->pc = 0x30C6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c6f0;
        }
    }
    ctx->pc = 0x30C73Cu;
    // 0x30c73c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30c73cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c740:
    // 0x30c740: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30c740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c744: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30c744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c748: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30c748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c74c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c750: 0x3e00008  jr          $ra
    ctx->pc = 0x30C750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C750u;
        // 0x30c754: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C758u;
}
