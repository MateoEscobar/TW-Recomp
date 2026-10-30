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

// Function: sub_0036C478
// Address: 0x36c478 - 0x36c4d8
void sub_0036C478_0x36c478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C478_0x36c478");
#endif

    switch (ctx->pc) {
        case 0x36c490u: goto label_36c490;
        case 0x36c49cu: goto label_36c49c;
        case 0x36c4b4u: goto label_36c4b4;
        case 0x36c4c0u: goto label_36c4c0;
        default: break;
    }

    ctx->pc = 0x36c478u;

    // 0x36c478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36c478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36c47c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c480: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36c480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36c484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c488: 0xc1075fc  jal         func_41D7F0
    ctx->pc = 0x36C488u;
    SET_GPR_U32(ctx, 31, 0x36C490u);
    ctx->pc = 0x36C48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C488u;
    // 0x36c48c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D7F0u, 0x36C488u, 0x36C490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C490u;
label_36c490:
    // 0x36c490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36c490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c494: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36C494u;
    SET_GPR_U32(ctx, 31, 0x36C49Cu);
    ctx->pc = 0x36C498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C494u;
    // 0x36c498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36C494u, 0x36C49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C49Cu;
label_36c49c:
    // 0x36c49c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36C49Cu;
    {
        const bool branch_taken_0x36c49c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C49Cu;
        // 0x36c4a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c49c) {
            ctx->pc = 0x36C4B8u;
            goto label_36c4b8;
        }
    }
    ctx->pc = 0x36C4A4u;
    // 0x36c4a4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36c4a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x36c4a8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36c4a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36c4ac: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36C4ACu;
    SET_GPR_U32(ctx, 31, 0x36C4B4u);
    ctx->pc = 0x36C4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4ACu;
    // 0x36c4b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36C4ACu, 0x36C4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4B4u;
label_36c4b4:
    // 0x36c4b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36c4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36c4b8:
    // 0x36c4b8: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36C4B8u;
    SET_GPR_U32(ctx, 31, 0x36C4C0u);
    ctx->pc = 0x36C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4B8u;
    // 0x36c4bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36C4B8u, 0x36C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4C0u;
label_36c4c0:
    // 0x36c4c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36c4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c4c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c4cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x36C4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C4D0u;
        // 0x36c4d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C4D8u;
}
