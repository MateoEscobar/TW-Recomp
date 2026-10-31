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

// Function: sub_00172318
// Address: 0x172318 - 0x172388
void sub_00172318_0x172318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172318_0x172318");
#endif

    switch (ctx->pc) {
        case 0x172340u: goto label_172340;
        case 0x172358u: goto label_172358;
        case 0x17236cu: goto label_17236c;
        default: break;
    }

    ctx->pc = 0x172318u;

    // 0x172318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17231c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17231cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x172320: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x172320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x172324: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x172324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17232c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17232cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172330: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x172330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x172334: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x172334u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x172338: 0xc118a7a  jal         func_4629E8
    ctx->pc = 0x172338u;
    SET_GPR_U32(ctx, 31, 0x172340u);
    ctx->pc = 0x17233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172338u;
    // 0x17233c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4629E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4629E8u, 0x172338u, 0x172340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172340u;
label_172340:
    // 0x172340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172344: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x172344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x172348: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x172348u;
    {
        const bool branch_taken_0x172348 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172348u;
        // 0x17234c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172348) {
            ctx->pc = 0x172370u;
            goto label_172370;
        }
    }
    ctx->pc = 0x172350u;
    // 0x172350: 0xc118a42  jal         func_462908
    ctx->pc = 0x172350u;
    SET_GPR_U32(ctx, 31, 0x172358u);
    ctx->pc = 0x172354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172350u;
    // 0x172354: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x462908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462908u, 0x172350u, 0x172358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172358u;
label_172358:
    // 0x172358: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x172358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17235c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17235cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172360: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x172360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x172364: 0xc120efe  jal         func_483BF8
    ctx->pc = 0x172364u;
    SET_GPR_U32(ctx, 31, 0x17236Cu);
    ctx->pc = 0x172368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172364u;
    // 0x172368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483BF8u, 0x172364u, 0x17236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17236Cu;
label_17236c:
    // 0x17236c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17236cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172370:
    // 0x172370: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x172370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172374: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x172374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172378: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x172378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17237c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17237cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172380: 0x3e00008  jr          $ra
    ctx->pc = 0x172380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172380u;
        // 0x172384: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172388u;
}
