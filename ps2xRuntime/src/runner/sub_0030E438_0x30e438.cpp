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

// Function: sub_0030E438
// Address: 0x30e438 - 0x30e4c8
void sub_0030E438_0x30e438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E438_0x30e438");
#endif

    switch (ctx->pc) {
        case 0x30e460u: goto label_30e460;
        case 0x30e468u: goto label_30e468;
        case 0x30e470u: goto label_30e470;
        case 0x30e490u: goto label_30e490;
        default: break;
    }

    ctx->pc = 0x30e438u;

    // 0x30e438: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30e438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30e43c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30e43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30e440: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30e440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30e444: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30e444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e448: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x30e44c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30e450: 0x24120087  addiu       $s2, $zero, 0x87
    ctx->pc = 0x30e450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x30e454: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30e458: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x30e458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30e45c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30e45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30e460:
    // 0x30e460: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30E460u;
    SET_GPR_U32(ctx, 31, 0x30E468u);
    ctx->pc = 0x30E464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E460u;
    // 0x30e464: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30E460u, 0x30E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E468u;
label_30e468:
    // 0x30e468: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30E468u;
    SET_GPR_U32(ctx, 31, 0x30E470u);
    ctx->pc = 0x30E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E468u;
    // 0x30e46c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30E468u, 0x30E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E470u;
label_30e470:
    // 0x30e470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30e470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e474: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x30E474u;
    {
        const bool branch_taken_0x30e474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E474u;
        // 0x30e478: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e474) {
            ctx->pc = 0x30E4A0u;
            goto label_30e4a0;
        }
    }
    ctx->pc = 0x30E47Cu;
    // 0x30e47c: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x30e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30e480: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x30E480u;
    {
        const bool branch_taken_0x30e480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x30e480) {
            ctx->pc = 0x30E4A0u;
            goto label_30e4a0;
        }
    }
    ctx->pc = 0x30E488u;
    // 0x30e488: 0xc089f98  jal         func_227E60
    ctx->pc = 0x30E488u;
    SET_GPR_U32(ctx, 31, 0x30E490u);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x30E488u, 0x30E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E490u;
label_30e490:
    // 0x30e490: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E490u;
    {
        const bool branch_taken_0x30e490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E490u;
        // 0x30e494: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e490) {
            ctx->pc = 0x30E4A4u;
            goto label_30e4a4;
        }
    }
    ctx->pc = 0x30E498u;
    // 0x30e498: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30E498u;
    {
        const bool branch_taken_0x30e498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E498u;
        // 0x30e49c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e498) {
            ctx->pc = 0x30E4B0u;
            goto label_30e4b0;
        }
    }
    ctx->pc = 0x30E4A0u;
label_30e4a0:
    // 0x30e4a0: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x30e4a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30e4a4:
    // 0x30e4a4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x30E4A4u;
    {
        const bool branch_taken_0x30e4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4A4u;
        // 0x30e4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4a4) {
            ctx->pc = 0x30E460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e460;
        }
    }
    ctx->pc = 0x30E4ACu;
    // 0x30e4ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30e4acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e4b0:
    // 0x30e4b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30e4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e4b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30e4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e4b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30e4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e4bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x30E4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4C0u;
        // 0x30e4c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E4C8u;
}
