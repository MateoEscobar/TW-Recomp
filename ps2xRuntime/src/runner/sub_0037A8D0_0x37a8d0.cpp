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

// Function: sub_0037A8D0
// Address: 0x37a8d0 - 0x37a968
void sub_0037A8D0_0x37a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A8D0_0x37a8d0");
#endif

    switch (ctx->pc) {
        case 0x37a8fcu: goto label_37a8fc;
        case 0x37a904u: goto label_37a904;
        case 0x37a918u: goto label_37a918;
        case 0x37a92cu: goto label_37a92c;
        case 0x37a934u: goto label_37a934;
        case 0x37a948u: goto label_37a948;
        default: break;
    }

    ctx->pc = 0x37a8d0u;

    // 0x37a8d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37a8d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a8d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37a8dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37a8e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37a8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a8e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37a8e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a8e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37a8ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37a8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37a8f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a8f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A8F4u;
    SET_GPR_U32(ctx, 31, 0x37A8FCu);
    ctx->pc = 0x37A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A8F4u;
    // 0x37a8f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A8F4u, 0x37A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A8FCu;
label_37a8fc:
    // 0x37a8fc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37A8FCu;
    SET_GPR_U32(ctx, 31, 0x37A904u);
    ctx->pc = 0x37A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A8FCu;
    // 0x37a900: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37A8FCu, 0x37A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A904u;
label_37a904:
    // 0x37a904: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37a904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37a908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a90c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37a90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a910: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37A910u;
    SET_GPR_U32(ctx, 31, 0x37A918u);
    ctx->pc = 0x37A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A910u;
    // 0x37a914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37A910u, 0x37A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A918u;
label_37a918:
    // 0x37a918: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37a918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a91c: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x37a91cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37a920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37a920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a924: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A924u;
    SET_GPR_U32(ctx, 31, 0x37A92Cu);
    ctx->pc = 0x37A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A924u;
    // 0x37a928: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A924u, 0x37A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A92Cu;
label_37a92c:
    // 0x37a92c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37A92Cu;
    SET_GPR_U32(ctx, 31, 0x37A934u);
    ctx->pc = 0x37A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A92Cu;
    // 0x37a930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37A92Cu, 0x37A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A934u;
label_37a934:
    // 0x37a934: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a938: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37a938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a93c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37a93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a940: 0xc0a9e04  jal         func_2A7810
    ctx->pc = 0x37A940u;
    SET_GPR_U32(ctx, 31, 0x37A948u);
    ctx->pc = 0x37A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A940u;
    // 0x37a944: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7810u, 0x37A940u, 0x37A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A948u;
label_37a948:
    // 0x37a948: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37a948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37a94c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a950: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37a950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37a954: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37a954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a958: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37a958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a960: 0x3e00008  jr          $ra
    ctx->pc = 0x37A960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A960u;
        // 0x37a964: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A968u;
}
