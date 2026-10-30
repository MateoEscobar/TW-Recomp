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

// Function: sub_0037B458
// Address: 0x37b458 - 0x37b4c8
void sub_0037B458_0x37b458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B458_0x37b458");
#endif

    switch (ctx->pc) {
        case 0x37b478u: goto label_37b478;
        case 0x37b480u: goto label_37b480;
        case 0x37b498u: goto label_37b498;
        case 0x37b4a0u: goto label_37b4a0;
        case 0x37b4acu: goto label_37b4ac;
        default: break;
    }

    ctx->pc = 0x37b458u;

    // 0x37b458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b45c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b460: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37b464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b46c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b470: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B470u;
    SET_GPR_U32(ctx, 31, 0x37B478u);
    ctx->pc = 0x37B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B470u;
    // 0x37b474: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B470u, 0x37B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B478u;
label_37b478:
    // 0x37b478: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B478u;
    SET_GPR_U32(ctx, 31, 0x37B480u);
    ctx->pc = 0x37B47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B478u;
    // 0x37b47c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B478u, 0x37B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B480u;
label_37b480:
    // 0x37b480: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37b480u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37b484: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37b484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37b488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37b488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b490: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B490u;
    SET_GPR_U32(ctx, 31, 0x37B498u);
    ctx->pc = 0x37B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B490u;
    // 0x37b494: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B490u, 0x37B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B498u;
label_37b498:
    // 0x37b498: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B498u;
    SET_GPR_U32(ctx, 31, 0x37B4A0u);
    ctx->pc = 0x37B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B498u;
    // 0x37b49c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B498u, 0x37B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B4A0u;
label_37b4a0:
    // 0x37b4a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b4a4: 0xc107bc0  jal         func_41EF00
    ctx->pc = 0x37B4A4u;
    SET_GPR_U32(ctx, 31, 0x37B4ACu);
    ctx->pc = 0x37B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B4A4u;
    // 0x37b4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EF00u, 0x37B4A4u, 0x37B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B4ACu;
label_37b4ac:
    // 0x37b4ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37b4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b4b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37b4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b4b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b4b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x37B4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B4BCu;
        // 0x37b4c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B4C4u;
    // 0x37b4c4: 0x0  nop
    ctx->pc = 0x37b4c4u;
    // NOP
    ctx->pc = 0x37b4c8u;
}
