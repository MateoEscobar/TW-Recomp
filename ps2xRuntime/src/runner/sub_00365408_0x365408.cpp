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

// Function: sub_00365408
// Address: 0x365408 - 0x3654a0
void sub_00365408_0x365408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365408_0x365408");
#endif

    switch (ctx->pc) {
        case 0x365430u: goto label_365430;
        case 0x365438u: goto label_365438;
        case 0x36544cu: goto label_36544c;
        case 0x365454u: goto label_365454;
        case 0x365468u: goto label_365468;
        case 0x365478u: goto label_365478;
        case 0x365484u: goto label_365484;
        default: break;
    }

    ctx->pc = 0x365408u;

    // 0x365408: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x365408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36540c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36540cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365410: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x365410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x365414: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x365414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x365418: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x365418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36541c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36541cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365420: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x365420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x365424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365428: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365428u;
    SET_GPR_U32(ctx, 31, 0x365430u);
    ctx->pc = 0x36542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365428u;
    // 0x36542c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365428u, 0x365430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365430u;
label_365430:
    // 0x365430: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365430u;
    SET_GPR_U32(ctx, 31, 0x365438u);
    ctx->pc = 0x365434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365430u;
    // 0x365434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365430u, 0x365438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365438u;
label_365438:
    // 0x365438: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36543c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36543cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365440: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x365440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365444: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365444u;
    SET_GPR_U32(ctx, 31, 0x36544Cu);
    ctx->pc = 0x365448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365444u;
    // 0x365448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365444u, 0x36544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36544Cu;
label_36544c:
    // 0x36544c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36544Cu;
    SET_GPR_U32(ctx, 31, 0x365454u);
    ctx->pc = 0x365450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36544Cu;
    // 0x365450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36544Cu, 0x365454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365454u;
label_365454:
    // 0x365454: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36545c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36545cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x365460: 0xc102488  jal         func_409220
    ctx->pc = 0x365460u;
    SET_GPR_U32(ctx, 31, 0x365468u);
    ctx->pc = 0x365464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365460u;
    // 0x365464: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x365460u, 0x365468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365468u;
label_365468:
    // 0x365468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36546c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36546cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365470: 0xc08e1d2  jal         func_238748
    ctx->pc = 0x365470u;
    SET_GPR_U32(ctx, 31, 0x365478u);
    ctx->pc = 0x365474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365470u;
    // 0x365474: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x365470u, 0x365478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365478u;
label_365478:
    // 0x365478: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x365478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36547c: 0xc102562  jal         func_409588
    ctx->pc = 0x36547Cu;
    SET_GPR_U32(ctx, 31, 0x365484u);
    ctx->pc = 0x365480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36547Cu;
    // 0x365480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x36547Cu, 0x365484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365484u;
label_365484:
    // 0x365484: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x365484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x365488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36548c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36548cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365490: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x365490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x365494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365498: 0x3e00008  jr          $ra
    ctx->pc = 0x365498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365498u;
        // 0x36549c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3654A0u;
}
