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

// Function: sub_004ED388
// Address: 0x4ed388 - 0x4ed3f8
void sub_004ED388_0x4ed388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED388_0x4ed388");
#endif

    switch (ctx->pc) {
        case 0x4ed3bcu: goto label_4ed3bc;
        case 0x4ed3d0u: goto label_4ed3d0;
        case 0x4ed3e4u: goto label_4ed3e4;
        default: break;
    }

    ctx->pc = 0x4ed388u;

    // 0x4ed388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ed38c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed390: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ed390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed394: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ed394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ed398: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x4ed398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x4ed39c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4ed39cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4ed3a0: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x4ed3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4ed3a4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4ED3A4u;
    {
        const bool branch_taken_0x4ed3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ED3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED3A4u;
        // 0x4ed3a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed3a4) {
            ctx->pc = 0x4ED3D8u;
            goto label_4ed3d8;
        }
    }
    ctx->pc = 0x4ED3ACu;
    // 0x4ed3ac: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x4ed3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4ed3b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ed3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed3b4: 0xc13b494  jal         func_4ED250
    ctx->pc = 0x4ED3B4u;
    SET_GPR_U32(ctx, 31, 0x4ED3BCu);
    ctx->pc = 0x4ED3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED3B4u;
    // 0x4ed3b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED250u, 0x4ED3B4u, 0x4ED3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED3BCu;
label_4ed3bc:
    // 0x4ed3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ed3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed3c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ed3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed3c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ed3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed3c8: 0xc13b4ce  jal         func_4ED338
    ctx->pc = 0x4ED3C8u;
    SET_GPR_U32(ctx, 31, 0x4ED3D0u);
    ctx->pc = 0x4ED3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED3C8u;
    // 0x4ed3cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED338u, 0x4ED3C8u, 0x4ED3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED3D0u;
label_4ed3d0:
    // 0x4ed3d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4ED3D0u;
    {
        const bool branch_taken_0x4ed3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED3D0u;
        // 0x4ed3d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed3d0) {
            ctx->pc = 0x4ED3E8u;
            goto label_4ed3e8;
        }
    }
    ctx->pc = 0x4ED3D8u;
label_4ed3d8:
    // 0x4ed3d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ed3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed3dc: 0xc13b494  jal         func_4ED250
    ctx->pc = 0x4ED3DCu;
    SET_GPR_U32(ctx, 31, 0x4ED3E4u);
    ctx->pc = 0x4ED3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED3DCu;
    // 0x4ed3e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED250u, 0x4ED3DCu, 0x4ED3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED3E4u;
label_4ed3e4:
    // 0x4ed3e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ed3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ed3e8:
    // 0x4ed3e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED3F0u;
        // 0x4ed3f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED3F8u;
}
