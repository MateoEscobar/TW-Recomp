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

// Function: sub_00155180
// Address: 0x155180 - 0x1551e0
void sub_00155180_0x155180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155180_0x155180");
#endif

    switch (ctx->pc) {
        case 0x1551a0u: goto label_1551a0;
        case 0x1551c0u: goto label_1551c0;
        case 0x1551c8u: goto label_1551c8;
        default: break;
    }

    ctx->pc = 0x155180u;

    // 0x155180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x155180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x155184: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x155184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x155188: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x155188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15518c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15518cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155190: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x155190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x155194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155198: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x155198u;
    SET_GPR_U32(ctx, 31, 0x1551A0u);
    ctx->pc = 0x15519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155198u;
    // 0x15519c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x155198u, 0x1551A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551A0u;
label_1551a0:
    // 0x1551a0: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x1551a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x1551a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1551A4u;
    {
        const bool branch_taken_0x1551a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551A4u;
        // 0x1551a8: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551a4) {
            ctx->pc = 0x1551C8u;
            goto label_1551c8;
        }
    }
    ctx->pc = 0x1551ACu;
    // 0x1551ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1551acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1551b0: 0x26105e30  addiu       $s0, $s0, 0x5E30
    ctx->pc = 0x1551b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24112));
    // 0x1551b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1551b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1551b8: 0xc057578  jal         func_15D5E0
    ctx->pc = 0x1551B8u;
    SET_GPR_U32(ctx, 31, 0x1551C0u);
    ctx->pc = 0x1551BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551B8u;
    // 0x1551bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D5E0u, 0x1551B8u, 0x1551C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551C0u;
label_1551c0:
    // 0x1551c0: 0xc05797a  jal         func_15E5E8
    ctx->pc = 0x1551C0u;
    SET_GPR_U32(ctx, 31, 0x1551C8u);
    ctx->pc = 0x1551C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551C0u;
    // 0x1551c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x1551C0u, 0x1551C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551C8u;
label_1551c8:
    // 0x1551c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1551c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1551cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1551ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1551d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1551d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1551d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1551d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1551d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1551D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1551DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551D8u;
        // 0x1551dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1551D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1551E0u;
}
