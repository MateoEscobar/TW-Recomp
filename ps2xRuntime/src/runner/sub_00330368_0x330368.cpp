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

// Function: sub_00330368
// Address: 0x330368 - 0x3303c8
void sub_00330368_0x330368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330368_0x330368");
#endif

    switch (ctx->pc) {
        case 0x3303b4u: goto label_3303b4;
        default: break;
    }

    ctx->pc = 0x330368u;

    // 0x330368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33036c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x33036cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330370: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x330370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x330374: 0x24b0ffcf  addiu       $s0, $a1, -0x31
    ctx->pc = 0x330374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967247));
    // 0x330378: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x330378u;
    {
        const bool branch_taken_0x330378 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330378u;
        // 0x33037c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330378) {
            ctx->pc = 0x3303A4u;
            goto label_3303a4;
        }
    }
    ctx->pc = 0x330380u;
    // 0x330380: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x330380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x330384: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x330384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x330388: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x330388u;
    {
        const bool branch_taken_0x330388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330388u;
        // 0x33038c: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330388) {
            ctx->pc = 0x3303A4u;
            goto label_3303a4;
        }
    }
    ctx->pc = 0x330390u;
    // 0x330390: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x330390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x330394: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x330394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x330398: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x330398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x33039c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33039Cu;
    {
        const bool branch_taken_0x33039c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3303A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33039Cu;
        // 0x3303a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33039c) {
            ctx->pc = 0x3303B8u;
            goto label_3303b8;
        }
    }
    ctx->pc = 0x3303A4u;
label_3303a4:
    // 0x3303a4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3303a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3303a8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3303a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3303ac: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x3303ACu;
    SET_GPR_U32(ctx, 31, 0x3303B4u);
    ctx->pc = 0x3303B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3303ACu;
    // 0x3303b0: 0x24a55f28  addiu       $a1, $a1, 0x5F28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x3303ACu, 0x3303B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303B4u;
label_3303b4:
    // 0x3303b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3303b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3303b8:
    // 0x3303b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3303b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3303bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3303bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3303c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3303C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3303C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303C0u;
        // 0x3303c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3303C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3303C8u;
}
