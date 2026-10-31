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

// Function: sub_00370290
// Address: 0x370290 - 0x3702f0
void sub_00370290_0x370290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370290_0x370290");
#endif

    switch (ctx->pc) {
        case 0x3702a8u: goto label_3702a8;
        case 0x3702b4u: goto label_3702b4;
        case 0x3702ccu: goto label_3702cc;
        case 0x3702d8u: goto label_3702d8;
        default: break;
    }

    ctx->pc = 0x370290u;

    // 0x370290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x370290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x370294: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x370294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x370298: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x370298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37029c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3702a0: 0xc06d1c0  jal         func_1B4700
    ctx->pc = 0x3702A0u;
    SET_GPR_U32(ctx, 31, 0x3702A8u);
    ctx->pc = 0x3702A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3702A0u;
    // 0x3702a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4700u, 0x3702A0u, 0x3702A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3702A8u;
label_3702a8:
    // 0x3702a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3702a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3702ac: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3702ACu;
    SET_GPR_U32(ctx, 31, 0x3702B4u);
    ctx->pc = 0x3702B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3702ACu;
    // 0x3702b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3702ACu, 0x3702B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3702B4u;
label_3702b4:
    // 0x3702b4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3702B4u;
    {
        const bool branch_taken_0x3702b4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3702B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3702B4u;
        // 0x3702b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3702b4) {
            ctx->pc = 0x3702D0u;
            goto label_3702d0;
        }
    }
    ctx->pc = 0x3702BCu;
    // 0x3702bc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3702bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3702c0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3702c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3702c4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3702C4u;
    SET_GPR_U32(ctx, 31, 0x3702CCu);
    ctx->pc = 0x3702C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3702C4u;
    // 0x3702c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3702C4u, 0x3702CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3702CCu;
label_3702cc:
    // 0x3702cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3702ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3702d0:
    // 0x3702d0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x3702D0u;
    SET_GPR_U32(ctx, 31, 0x3702D8u);
    ctx->pc = 0x3702D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3702D0u;
    // 0x3702d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x3702D0u, 0x3702D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3702D8u;
label_3702d8:
    // 0x3702d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3702d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3702dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3702dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3702e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3702e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3702e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3702e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3702e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3702E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3702ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3702E8u;
        // 0x3702ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3702E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3702F0u;
}
