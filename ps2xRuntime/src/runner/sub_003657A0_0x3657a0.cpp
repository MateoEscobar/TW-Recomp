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

// Function: sub_003657A0
// Address: 0x3657a0 - 0x365818
void sub_003657A0_0x3657a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003657A0_0x3657a0");
#endif

    switch (ctx->pc) {
        case 0x3657c0u: goto label_3657c0;
        case 0x3657c8u: goto label_3657c8;
        case 0x3657d0u: goto label_3657d0;
        case 0x3657dcu: goto label_3657dc;
        case 0x3657f4u: goto label_3657f4;
        case 0x365800u: goto label_365800;
        default: break;
    }

    ctx->pc = 0x3657a0u;

    // 0x3657a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3657a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3657a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3657a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3657a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3657a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3657ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3657acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3657b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3657b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3657b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3657b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3657b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3657B8u;
    SET_GPR_U32(ctx, 31, 0x3657C0u);
    ctx->pc = 0x3657BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3657B8u;
    // 0x3657bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3657B8u, 0x3657C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3657C0u;
label_3657c0:
    // 0x3657c0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3657C0u;
    SET_GPR_U32(ctx, 31, 0x3657C8u);
    ctx->pc = 0x3657C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3657C0u;
    // 0x3657c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3657C0u, 0x3657C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3657C8u;
label_3657c8:
    // 0x3657c8: 0xc046e0e  jal         func_11B838
    ctx->pc = 0x3657C8u;
    SET_GPR_U32(ctx, 31, 0x3657D0u);
    ctx->pc = 0x3657CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3657C8u;
    // 0x3657cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B838u, 0x3657C8u, 0x3657D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3657D0u;
label_3657d0:
    // 0x3657d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3657d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3657d4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3657D4u;
    SET_GPR_U32(ctx, 31, 0x3657DCu);
    ctx->pc = 0x3657D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3657D4u;
    // 0x3657d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3657D4u, 0x3657DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3657DCu;
label_3657dc:
    // 0x3657dc: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3657DCu;
    {
        const bool branch_taken_0x3657dc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3657E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3657DCu;
        // 0x3657e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3657dc) {
            ctx->pc = 0x3657F8u;
            goto label_3657f8;
        }
    }
    ctx->pc = 0x3657E4u;
    // 0x3657e4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3657e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3657e8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3657e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3657ec: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3657ECu;
    SET_GPR_U32(ctx, 31, 0x3657F4u);
    ctx->pc = 0x3657F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3657ECu;
    // 0x3657f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3657ECu, 0x3657F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3657F4u;
label_3657f4:
    // 0x3657f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3657f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3657f8:
    // 0x3657f8: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x3657F8u;
    SET_GPR_U32(ctx, 31, 0x365800u);
    ctx->pc = 0x3657FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3657F8u;
    // 0x3657fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x3657F8u, 0x365800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365800u;
label_365800:
    // 0x365800: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x365800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x365804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x365808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36580c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36580cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365810: 0x3e00008  jr          $ra
    ctx->pc = 0x365810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365810u;
        // 0x365814: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365818u;
}
