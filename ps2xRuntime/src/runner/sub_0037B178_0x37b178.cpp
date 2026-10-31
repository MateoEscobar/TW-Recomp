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

// Function: sub_0037B178
// Address: 0x37b178 - 0x37b1e8
void sub_0037B178_0x37b178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B178_0x37b178");
#endif

    switch (ctx->pc) {
        case 0x37b198u: goto label_37b198;
        case 0x37b1a0u: goto label_37b1a0;
        case 0x37b1b8u: goto label_37b1b8;
        case 0x37b1c0u: goto label_37b1c0;
        case 0x37b1ccu: goto label_37b1cc;
        default: break;
    }

    ctx->pc = 0x37b178u;

    // 0x37b178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b17c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b180: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37b184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b18c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b190: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B190u;
    SET_GPR_U32(ctx, 31, 0x37B198u);
    ctx->pc = 0x37B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B190u;
    // 0x37b194: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B190u, 0x37B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B198u;
label_37b198:
    // 0x37b198: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B198u;
    SET_GPR_U32(ctx, 31, 0x37B1A0u);
    ctx->pc = 0x37B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B198u;
    // 0x37b19c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B198u, 0x37B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B1A0u;
label_37b1a0:
    // 0x37b1a0: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37b1a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37b1a4: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37b1a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37b1a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37b1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b1ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b1b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B1B0u;
    SET_GPR_U32(ctx, 31, 0x37B1B8u);
    ctx->pc = 0x37B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B1B0u;
    // 0x37b1b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B1B0u, 0x37B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B1B8u;
label_37b1b8:
    // 0x37b1b8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B1B8u;
    SET_GPR_U32(ctx, 31, 0x37B1C0u);
    ctx->pc = 0x37B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B1B8u;
    // 0x37b1bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B1B8u, 0x37B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B1C0u;
label_37b1c0:
    // 0x37b1c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b1c4: 0xc107b6e  jal         func_41EDB8
    ctx->pc = 0x37B1C4u;
    SET_GPR_U32(ctx, 31, 0x37B1CCu);
    ctx->pc = 0x37B1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B1C4u;
    // 0x37b1c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EDB8u, 0x37B1C4u, 0x37B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B1CCu;
label_37b1cc:
    // 0x37b1cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37b1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b1d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37b1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b1d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x37B1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1DCu;
        // 0x37b1e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B1E4u;
    // 0x37b1e4: 0x0  nop
    ctx->pc = 0x37b1e4u;
    // NOP
    ctx->pc = 0x37b1e8u;
}
