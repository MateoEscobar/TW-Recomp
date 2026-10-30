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

// Function: sub_00359320
// Address: 0x359320 - 0x359380
void sub_00359320_0x359320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359320_0x359320");
#endif

    switch (ctx->pc) {
        case 0x359340u: goto label_359340;
        case 0x359348u: goto label_359348;
        case 0x35935cu: goto label_35935c;
        case 0x359368u: goto label_359368;
        default: break;
    }

    ctx->pc = 0x359320u;

    // 0x359320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359324: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359328: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35932c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35932cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359338: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359338u;
    SET_GPR_U32(ctx, 31, 0x359340u);
    ctx->pc = 0x35933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359338u;
    // 0x35933c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359338u, 0x359340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359340u;
label_359340:
    // 0x359340: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359340u;
    SET_GPR_U32(ctx, 31, 0x359348u);
    ctx->pc = 0x359344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359340u;
    // 0x359344: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359340u, 0x359348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359348u;
label_359348:
    // 0x359348: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35934c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359354: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359354u;
    SET_GPR_U32(ctx, 31, 0x35935Cu);
    ctx->pc = 0x359358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359354u;
    // 0x359358: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359354u, 0x35935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35935Cu;
label_35935c:
    // 0x35935c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35935cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359360: 0xc08d466  jal         func_235198
    ctx->pc = 0x359360u;
    SET_GPR_U32(ctx, 31, 0x359368u);
    ctx->pc = 0x359364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359360u;
    // 0x359364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235198u, 0x359360u, 0x359368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359368u;
label_359368:
    // 0x359368: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35936c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35936cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359378: 0x3e00008  jr          $ra
    ctx->pc = 0x359378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359378u;
        // 0x35937c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359380u;
}
