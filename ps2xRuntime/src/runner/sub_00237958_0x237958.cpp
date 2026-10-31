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

// Function: sub_00237958
// Address: 0x237958 - 0x2379c0
void sub_00237958_0x237958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237958_0x237958");
#endif

    switch (ctx->pc) {
        case 0x237974u: goto label_237974;
        case 0x23797cu: goto label_23797c;
        default: break;
    }

    ctx->pc = 0x237958u;

    // 0x237958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23795c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237960: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237964: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23796c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23796Cu;
    SET_GPR_U32(ctx, 31, 0x237974u);
    ctx->pc = 0x237970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23796Cu;
    // 0x237970: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23796Cu, 0x237974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237974u;
label_237974:
    // 0x237974: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237974u;
    SET_GPR_U32(ctx, 31, 0x23797Cu);
    ctx->pc = 0x237978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237974u;
    // 0x237978: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237974u, 0x23797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23797Cu;
label_23797c:
    // 0x23797c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23797cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237980: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x237980u;
    {
        const bool branch_taken_0x237980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237980) {
            ctx->pc = 0x237984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237980u;
            // 0x237984: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2379B4u;
            goto label_2379b4;
        }
    }
    ctx->pc = 0x237988u;
    // 0x237988: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237988u;
    {
        const bool branch_taken_0x237988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237988u;
        // 0x23798c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237988) {
            ctx->pc = 0x23799Cu;
            goto label_23799c;
        }
    }
    ctx->pc = 0x237990u;
    // 0x237990: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x237990u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x237994: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x237994u;
    {
        const bool branch_taken_0x237994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237994u;
        // 0x237998: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237994) {
            ctx->pc = 0x2379ACu;
            goto label_2379ac;
        }
    }
    ctx->pc = 0x23799Cu;
label_23799c:
    // 0x23799c: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x23799cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2379a0: 0x3c03efff  lui         $v1, 0xEFFF
    ctx->pc = 0x2379a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
    // 0x2379a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2379a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2379a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2379a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2379ac:
    // 0x2379ac: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2379acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x2379b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2379b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2379b4:
    // 0x2379b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2379b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2379b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2379B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2379BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379B8u;
        // 0x2379bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2379B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2379C0u;
}
