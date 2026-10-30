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

// Function: sub_003788B8
// Address: 0x3788b8 - 0x378958
void sub_003788B8_0x3788b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003788B8_0x3788b8");
#endif

    switch (ctx->pc) {
        case 0x3788e4u: goto label_3788e4;
        case 0x3788ecu: goto label_3788ec;
        case 0x378900u: goto label_378900;
        case 0x378908u: goto label_378908;
        case 0x37891cu: goto label_37891c;
        case 0x378924u: goto label_378924;
        case 0x378934u: goto label_378934;
        default: break;
    }

    ctx->pc = 0x3788b8u;

    // 0x3788b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3788b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3788bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3788bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3788c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3788c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3788c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3788c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3788c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3788c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3788cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3788ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3788d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3788d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3788d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3788d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3788d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3788d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3788dc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3788DCu;
    SET_GPR_U32(ctx, 31, 0x3788E4u);
    ctx->pc = 0x3788E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3788DCu;
    // 0x3788e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3788DCu, 0x3788E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3788E4u;
label_3788e4:
    // 0x3788e4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3788E4u;
    SET_GPR_U32(ctx, 31, 0x3788ECu);
    ctx->pc = 0x3788E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3788E4u;
    // 0x3788e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3788E4u, 0x3788ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3788ECu;
label_3788ec:
    // 0x3788ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3788ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3788f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3788f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3788f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3788f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3788f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3788F8u;
    SET_GPR_U32(ctx, 31, 0x378900u);
    ctx->pc = 0x3788FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3788F8u;
    // 0x3788fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3788F8u, 0x378900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378900u;
label_378900:
    // 0x378900: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378900u;
    SET_GPR_U32(ctx, 31, 0x378908u);
    ctx->pc = 0x378904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378900u;
    // 0x378904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378900u, 0x378908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378908u;
label_378908:
    // 0x378908: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37890c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37890cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x378910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378914: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378914u;
    SET_GPR_U32(ctx, 31, 0x37891Cu);
    ctx->pc = 0x378918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378914u;
    // 0x378918: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378914u, 0x37891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37891Cu;
label_37891c:
    // 0x37891c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37891Cu;
    SET_GPR_U32(ctx, 31, 0x378924u);
    ctx->pc = 0x378920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37891Cu;
    // 0x378920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37891Cu, 0x378924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378924u;
label_378924:
    // 0x378924: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x378924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378928: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x378928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37892c: 0xc0e383c  jal         func_38E0F0
    ctx->pc = 0x37892Cu;
    SET_GPR_U32(ctx, 31, 0x378934u);
    ctx->pc = 0x378930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37892Cu;
    // 0x378930: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E0F0u, 0x37892Cu, 0x378934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378934u;
label_378934:
    // 0x378934: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x378934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x378938: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37893c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37893cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378940: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x378940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378944: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x378944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37894c: 0x3e00008  jr          $ra
    ctx->pc = 0x37894Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37894Cu;
        // 0x378950: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37894Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378954u;
    // 0x378954: 0x0  nop
    ctx->pc = 0x378954u;
    // NOP
    ctx->pc = 0x378958u;
}
