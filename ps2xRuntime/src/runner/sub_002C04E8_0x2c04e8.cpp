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

// Function: sub_002C04E8
// Address: 0x2c04e8 - 0x2c0548
void sub_002C04E8_0x2c04e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C04E8_0x2c04e8");
#endif

    switch (ctx->pc) {
        case 0x2c0504u: goto label_2c0504;
        case 0x2c0538u: goto label_2c0538;
        default: break;
    }

    ctx->pc = 0x2c04e8u;

    // 0x2c04e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c04e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c04ec: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x2c04ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2c04f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c04f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c04f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c04f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c04f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c04f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04fc: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2C04FCu;
    SET_GPR_U32(ctx, 31, 0x2C0504u);
    ctx->pc = 0x2C0500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C04FCu;
    // 0x2c0500: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2C04FCu, 0x2C0504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0504u;
label_2c0504:
    // 0x2c0504: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c0504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0508: 0x462000c  bltzl       $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C0508u;
    {
        const bool branch_taken_0x2c0508 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2c0508) {
            ctx->pc = 0x2C050Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0508u;
            // 0x2c050c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C053Cu;
            goto label_2c053c;
        }
    }
    ctx->pc = 0x2C0510u;
    // 0x2c0510: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c0510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c0514: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x2c0514u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2c0518: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2c0518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c051c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C051Cu;
    {
        const bool branch_taken_0x2c051c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c051c) {
            ctx->pc = 0x2C0520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C051Cu;
            // 0x2c0520: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0530u;
            goto label_2c0530;
        }
    }
    ctx->pc = 0x2C0524u;
    // 0x2c0524: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c0524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c0528: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c0528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c052c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2c052cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2c0530:
    // 0x2c0530: 0xc0b447e  jal         func_2D11F8
    ctx->pc = 0x2C0530u;
    SET_GPR_U32(ctx, 31, 0x2C0538u);
    ctx->pc = 0x2D11F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D11F8u, 0x2C0530u, 0x2C0538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0538u;
label_2c0538:
    // 0x2c0538: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c0538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c053c:
    // 0x2c053c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c053cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0540: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0540u;
        // 0x2c0544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0548u;
}
