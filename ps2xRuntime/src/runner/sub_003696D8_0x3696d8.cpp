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

// Function: sub_003696D8
// Address: 0x3696d8 - 0x369750
void sub_003696D8_0x3696d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003696D8_0x3696d8");
#endif

    switch (ctx->pc) {
        case 0x369700u: goto label_369700;
        case 0x369708u: goto label_369708;
        case 0x36971cu: goto label_36971c;
        case 0x369724u: goto label_369724;
        case 0x369730u: goto label_369730;
        default: break;
    }

    ctx->pc = 0x3696d8u;

    // 0x3696d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3696d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3696dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3696dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3696e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3696e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3696e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3696e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3696e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3696e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3696ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3696ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3696f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3696f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3696f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3696f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3696f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3696F8u;
    SET_GPR_U32(ctx, 31, 0x369700u);
    ctx->pc = 0x3696FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3696F8u;
    // 0x3696fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3696F8u, 0x369700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369700u;
label_369700:
    // 0x369700: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369700u;
    SET_GPR_U32(ctx, 31, 0x369708u);
    ctx->pc = 0x369704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369700u;
    // 0x369704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369700u, 0x369708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369708u;
label_369708:
    // 0x369708: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x369708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36970c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36970cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x369710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369714: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369714u;
    SET_GPR_U32(ctx, 31, 0x36971Cu);
    ctx->pc = 0x369718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369714u;
    // 0x369718: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369714u, 0x36971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36971Cu;
label_36971c:
    // 0x36971c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36971Cu;
    SET_GPR_U32(ctx, 31, 0x369724u);
    ctx->pc = 0x369720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36971Cu;
    // 0x369720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36971Cu, 0x369724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369724u;
label_369724:
    // 0x369724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x369724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369728: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x369728u;
    SET_GPR_U32(ctx, 31, 0x369730u);
    ctx->pc = 0x36972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369728u;
    // 0x36972c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1463E0u, 0x369728u, 0x369730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369730u;
label_369730:
    // 0x369730: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x369730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x369734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369738: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x369738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36973c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36973cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x369740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369744: 0x3e00008  jr          $ra
    ctx->pc = 0x369744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369744u;
        // 0x369748: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36974Cu;
    // 0x36974c: 0x0  nop
    ctx->pc = 0x36974cu;
    // NOP
    ctx->pc = 0x369750u;
}
