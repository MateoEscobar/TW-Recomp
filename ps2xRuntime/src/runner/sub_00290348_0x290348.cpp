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

// Function: sub_00290348
// Address: 0x290348 - 0x2903b0
void sub_00290348_0x290348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290348_0x290348");
#endif

    switch (ctx->pc) {
        case 0x29036cu: goto label_29036c;
        case 0x290388u: goto label_290388;
        default: break;
    }

    ctx->pc = 0x290348u;

    // 0x290348: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29034c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29034cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x290350: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x290350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x290354: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x290354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290358: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x290358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x29035c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x29035cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x290360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290364: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x290364u;
    SET_GPR_U32(ctx, 31, 0x29036Cu);
    ctx->pc = 0x290368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290364u;
    // 0x290368: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x290364u, 0x29036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29036Cu;
label_29036c:
    // 0x29036c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29036cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290370: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x290370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290374: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x290374u;
    {
        const bool branch_taken_0x290374 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x290374) {
            ctx->pc = 0x290378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290374u;
            // 0x290378: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290394u;
            goto label_290394;
        }
    }
    ctx->pc = 0x29037Cu;
    // 0x29037c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29037cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290380: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x290380u;
    SET_GPR_U32(ctx, 31, 0x290388u);
    ctx->pc = 0x290384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290380u;
    // 0x290384: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x290380u, 0x290388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290388u;
label_290388:
    // 0x290388: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290388u;
    {
        const bool branch_taken_0x290388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x29038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290388u;
        // 0x29038c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290388) {
            ctx->pc = 0x290398u;
            goto label_290398;
        }
    }
    ctx->pc = 0x290390u;
    // 0x290390: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x290390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290394:
    // 0x290394: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x290394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_290398:
    // 0x290398: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x290398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29039c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29039cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2903a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2903a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2903a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2903a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2903a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2903A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2903ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903A8u;
        // 0x2903ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2903A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2903B0u;
}
