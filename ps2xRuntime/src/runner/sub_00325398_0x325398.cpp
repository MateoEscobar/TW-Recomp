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

// Function: sub_00325398
// Address: 0x325398 - 0x325488
void sub_00325398_0x325398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325398_0x325398");
#endif

    switch (ctx->pc) {
        case 0x3253b8u: goto label_3253b8;
        case 0x3253c0u: goto label_3253c0;
        case 0x3253d4u: goto label_3253d4;
        case 0x3253e4u: goto label_3253e4;
        case 0x3253f8u: goto label_3253f8;
        case 0x325414u: goto label_325414;
        case 0x325424u: goto label_325424;
        case 0x32543cu: goto label_32543c;
        case 0x32544cu: goto label_32544c;
        case 0x325458u: goto label_325458;
        case 0x325468u: goto label_325468;
        default: break;
    }

    ctx->pc = 0x325398u;

    // 0x325398: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x325398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32539c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32539cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3253a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3253a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3253a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3253a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3253a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3253a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3253ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3253acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3253b0: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x3253B0u;
    SET_GPR_U32(ctx, 31, 0x3253B8u);
    ctx->pc = 0x3253B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3253B0u;
    // 0x3253b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x3253B0u, 0x3253B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3253B8u;
label_3253b8:
    // 0x3253b8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3253B8u;
    SET_GPR_U32(ctx, 31, 0x3253C0u);
    ctx->pc = 0x3253BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3253B8u;
    // 0x3253bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3253B8u, 0x3253C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3253C0u;
label_3253c0:
    // 0x3253c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3253c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3253c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3253c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3253c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253cc: 0xc0c9192  jal         func_324648
    ctx->pc = 0x3253CCu;
    SET_GPR_U32(ctx, 31, 0x3253D4u);
    ctx->pc = 0x3253D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3253CCu;
    // 0x3253d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x3253CCu, 0x3253D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3253D4u;
label_3253d4:
    // 0x3253d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3253d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3253d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253dc: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x3253DCu;
    SET_GPR_U32(ctx, 31, 0x3253E4u);
    ctx->pc = 0x3253E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3253DCu;
    // 0x3253e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x3253DCu, 0x3253E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3253E4u;
label_3253e4:
    // 0x3253e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3253e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3253e8: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3253E8u;
    {
        const bool branch_taken_0x3253e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3253ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3253E8u;
        // 0x3253ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3253e8) {
            ctx->pc = 0x325414u;
            goto label_325414;
        }
    }
    ctx->pc = 0x3253F0u;
    // 0x3253f0: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x3253F0u;
    SET_GPR_U32(ctx, 31, 0x3253F8u);
    ctx->pc = 0x3253F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3253F0u;
    // 0x3253f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x3253F0u, 0x3253F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3253F8u;
label_3253f8:
    // 0x3253f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3253f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3253fc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3253FCu;
    {
        const bool branch_taken_0x3253fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x325400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3253FCu;
        // 0x325400: 0x3c060057  lui         $a2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3253fc) {
            ctx->pc = 0x325414u;
            goto label_325414;
        }
    }
    ctx->pc = 0x325404u;
    // 0x325404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325408: 0x24c64958  addiu       $a2, $a2, 0x4958
    ctx->pc = 0x325408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18776));
    // 0x32540c: 0xc0c910e  jal         func_324438
    ctx->pc = 0x32540Cu;
    SET_GPR_U32(ctx, 31, 0x325414u);
    ctx->pc = 0x325410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32540Cu;
    // 0x325410: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324438u, 0x32540Cu, 0x325414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325414u;
label_325414:
    // 0x325414: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x325414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x325418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32541c: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x32541Cu;
    SET_GPR_U32(ctx, 31, 0x325424u);
    ctx->pc = 0x325420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32541Cu;
    // 0x325420: 0x24a54978  addiu       $a1, $a1, 0x4978 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x32541Cu, 0x325424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325424u;
label_325424:
    // 0x325424: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x325424u;
    {
        const bool branch_taken_0x325424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325424) {
            ctx->pc = 0x325428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325424u;
            // 0x325428: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325440u;
            goto label_325440;
        }
    }
    ctx->pc = 0x32542Cu;
    // 0x32542c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32542cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x325430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325434: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x325434u;
    SET_GPR_U32(ctx, 31, 0x32543Cu);
    ctx->pc = 0x325438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325434u;
    // 0x325438: 0x24a54980  addiu       $a1, $a1, 0x4980 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x325434u, 0x32543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32543Cu;
label_32543c:
    // 0x32543c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32543cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_325440:
    // 0x325440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325444: 0xc0cc9f6  jal         func_3327D8
    ctx->pc = 0x325444u;
    SET_GPR_U32(ctx, 31, 0x32544Cu);
    ctx->pc = 0x325448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325444u;
    // 0x325448: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3327D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3327D8u, 0x325444u, 0x32544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32544Cu;
label_32544c:
    // 0x32544c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32544cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325450: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x325450u;
    SET_GPR_U32(ctx, 31, 0x325458u);
    ctx->pc = 0x325454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325450u;
    // 0x325454: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x325450u, 0x325458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325458u;
label_325458:
    // 0x325458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32545c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32545cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325460: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x325460u;
    SET_GPR_U32(ctx, 31, 0x325468u);
    ctx->pc = 0x325464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325460u;
    // 0x325464: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x325460u, 0x325468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325468u;
label_325468:
    // 0x325468: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x325468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32546c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325470: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x325470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325474: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x325474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32547c: 0x3e00008  jr          $ra
    ctx->pc = 0x32547Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32547Cu;
        // 0x325480: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32547Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325484u;
    // 0x325484: 0x0  nop
    ctx->pc = 0x325484u;
    // NOP
    ctx->pc = 0x325488u;
}
