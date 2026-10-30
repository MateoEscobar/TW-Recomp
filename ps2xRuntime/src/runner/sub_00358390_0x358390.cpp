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

// Function: sub_00358390
// Address: 0x358390 - 0x358428
void sub_00358390_0x358390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358390_0x358390");
#endif

    switch (ctx->pc) {
        case 0x3583b0u: goto label_3583b0;
        case 0x3583c8u: goto label_3583c8;
        case 0x3583dcu: goto label_3583dc;
        case 0x3583f0u: goto label_3583f0;
        case 0x358400u: goto label_358400;
        case 0x358408u: goto label_358408;
        default: break;
    }

    ctx->pc = 0x358390u;

    // 0x358390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358394: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358398: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35839c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35839cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3583a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3583a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3583a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3583a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3583a8: 0xc1024a0  jal         func_409280
    ctx->pc = 0x3583A8u;
    SET_GPR_U32(ctx, 31, 0x3583B0u);
    ctx->pc = 0x3583ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3583A8u;
    // 0x3583ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x3583A8u, 0x3583B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3583B0u;
label_3583b0:
    // 0x3583b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3583b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3583b4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3583B4u;
    {
        const bool branch_taken_0x3583b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3583B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583B4u;
        // 0x3583b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3583b4) {
            ctx->pc = 0x3583CCu;
            goto label_3583cc;
        }
    }
    ctx->pc = 0x3583BCu;
    // 0x3583bc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3583bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3583c0: 0xc10241a  jal         func_409068
    ctx->pc = 0x3583C0u;
    SET_GPR_U32(ctx, 31, 0x3583C8u);
    ctx->pc = 0x3583C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3583C0u;
    // 0x3583c4: 0x24a59260  addiu       $a1, $a1, -0x6DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x3583C0u, 0x3583C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3583C8u;
label_3583c8:
    // 0x3583c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3583c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3583cc:
    // 0x3583cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3583ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3583d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3583d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3583d4: 0xc10311e  jal         func_40C478
    ctx->pc = 0x3583D4u;
    SET_GPR_U32(ctx, 31, 0x3583DCu);
    ctx->pc = 0x3583D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3583D4u;
    // 0x3583d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x3583D4u, 0x3583DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3583DCu;
label_3583dc:
    // 0x3583dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3583DCu;
    {
        const bool branch_taken_0x3583dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3583E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583DCu;
        // 0x3583e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3583dc) {
            ctx->pc = 0x3583F4u;
            goto label_3583f4;
        }
    }
    ctx->pc = 0x3583E4u;
    // 0x3583e4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3583e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3583e8: 0xc10241a  jal         func_409068
    ctx->pc = 0x3583E8u;
    SET_GPR_U32(ctx, 31, 0x3583F0u);
    ctx->pc = 0x3583ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3583E8u;
    // 0x3583ec: 0x24a59118  addiu       $a1, $a1, -0x6EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x3583E8u, 0x3583F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3583F0u;
label_3583f0:
    // 0x3583f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3583f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3583f4:
    // 0x3583f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3583f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3583f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3583F8u;
    SET_GPR_U32(ctx, 31, 0x358400u);
    ctx->pc = 0x3583FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3583F8u;
    // 0x3583fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3583F8u, 0x358400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358400u;
label_358400:
    // 0x358400: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x358400u;
    SET_GPR_U32(ctx, 31, 0x358408u);
    ctx->pc = 0x358404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358400u;
    // 0x358404: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x358400u, 0x358408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358408u;
label_358408:
    // 0x358408: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x358408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x35840c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35840cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358410: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35841c: 0x3e00008  jr          $ra
    ctx->pc = 0x35841Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35841Cu;
        // 0x358420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35841Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358424u;
    // 0x358424: 0x0  nop
    ctx->pc = 0x358424u;
    // NOP
    ctx->pc = 0x358428u;
}
