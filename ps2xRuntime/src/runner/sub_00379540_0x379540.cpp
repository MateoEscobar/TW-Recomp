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

// Function: sub_00379540
// Address: 0x379540 - 0x3795c0
void sub_00379540_0x379540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379540_0x379540");
#endif

    switch (ctx->pc) {
        case 0x379564u: goto label_379564;
        case 0x37956cu: goto label_37956c;
        case 0x379580u: goto label_379580;
        case 0x379594u: goto label_379594;
        case 0x3795a4u: goto label_3795a4;
        default: break;
    }

    ctx->pc = 0x379540u;

    // 0x379540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x379540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x379544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379548: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x379548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37954c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37954cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379550: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x379550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x379554: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x379554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x379558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37955c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37955Cu;
    SET_GPR_U32(ctx, 31, 0x379564u);
    ctx->pc = 0x379560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37955Cu;
    // 0x379560: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37955Cu, 0x379564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379564u;
label_379564:
    // 0x379564: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379564u;
    SET_GPR_U32(ctx, 31, 0x37956Cu);
    ctx->pc = 0x379568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379564u;
    // 0x379568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379564u, 0x37956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37956Cu;
label_37956c:
    // 0x37956c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37956cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379574: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x379574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379578: 0xc1024c6  jal         func_409318
    ctx->pc = 0x379578u;
    SET_GPR_U32(ctx, 31, 0x379580u);
    ctx->pc = 0x37957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379578u;
    // 0x37957c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x379578u, 0x379580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379580u;
label_379580:
    // 0x379580: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x379580u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x379584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379588: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x379588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37958c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37958Cu;
    SET_GPR_U32(ctx, 31, 0x379594u);
    ctx->pc = 0x379590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37958Cu;
    // 0x379590: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37958Cu, 0x379594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379594u;
label_379594:
    // 0x379594: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x379594u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x379598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x379598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37959c: 0xc0e6f54  jal         func_39BD50
    ctx->pc = 0x37959Cu;
    SET_GPR_U32(ctx, 31, 0x3795A4u);
    ctx->pc = 0x3795A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37959Cu;
    // 0x3795a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BD50u, 0x37959Cu, 0x3795A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3795A4u;
label_3795a4:
    // 0x3795a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3795a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3795a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3795a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3795ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3795acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3795b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3795b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3795b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3795b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3795b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3795B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3795BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3795B8u;
        // 0x3795bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3795B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3795C0u;
}
