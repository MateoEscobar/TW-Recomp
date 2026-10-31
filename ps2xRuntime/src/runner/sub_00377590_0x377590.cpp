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

// Function: sub_00377590
// Address: 0x377590 - 0x377648
void sub_00377590_0x377590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377590_0x377590");
#endif

    switch (ctx->pc) {
        case 0x3775bcu: goto label_3775bc;
        case 0x3775c4u: goto label_3775c4;
        case 0x3775d8u: goto label_3775d8;
        case 0x3775e0u: goto label_3775e0;
        case 0x3775f4u: goto label_3775f4;
        case 0x3775fcu: goto label_3775fc;
        case 0x377610u: goto label_377610;
        case 0x377624u: goto label_377624;
        default: break;
    }

    ctx->pc = 0x377590u;

    // 0x377590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x377590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x377594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377598: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x377598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37759c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3775a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3775a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3775a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3775a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3775a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3775a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3775ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3775acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3775b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3775b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3775b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3775B4u;
    SET_GPR_U32(ctx, 31, 0x3775BCu);
    ctx->pc = 0x3775B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3775B4u;
    // 0x3775b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3775B4u, 0x3775BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3775BCu;
label_3775bc:
    // 0x3775bc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3775BCu;
    SET_GPR_U32(ctx, 31, 0x3775C4u);
    ctx->pc = 0x3775C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3775BCu;
    // 0x3775c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3775BCu, 0x3775C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3775C4u;
label_3775c4:
    // 0x3775c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3775c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3775c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3775c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3775cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3775ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3775d0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3775D0u;
    SET_GPR_U32(ctx, 31, 0x3775D8u);
    ctx->pc = 0x3775D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3775D0u;
    // 0x3775d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3775D0u, 0x3775D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3775D8u;
label_3775d8:
    // 0x3775d8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3775D8u;
    SET_GPR_U32(ctx, 31, 0x3775E0u);
    ctx->pc = 0x3775DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3775D8u;
    // 0x3775dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3775D8u, 0x3775E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3775E0u;
label_3775e0:
    // 0x3775e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3775e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3775e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3775e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3775e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3775e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3775ec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3775ECu;
    SET_GPR_U32(ctx, 31, 0x3775F4u);
    ctx->pc = 0x3775F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3775ECu;
    // 0x3775f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3775ECu, 0x3775F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3775F4u;
label_3775f4:
    // 0x3775f4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3775F4u;
    SET_GPR_U32(ctx, 31, 0x3775FCu);
    ctx->pc = 0x3775F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3775F4u;
    // 0x3775f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3775F4u, 0x3775FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3775FCu;
label_3775fc:
    // 0x3775fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3775fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377604: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x377604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x377608: 0xc102488  jal         func_409220
    ctx->pc = 0x377608u;
    SET_GPR_U32(ctx, 31, 0x377610u);
    ctx->pc = 0x37760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377608u;
    // 0x37760c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x377608u, 0x377610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377610u;
label_377610:
    // 0x377610: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x377610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377614: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x377614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377618: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x377618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37761c: 0xc0c35be  jal         func_30D6F8
    ctx->pc = 0x37761Cu;
    SET_GPR_U32(ctx, 31, 0x377624u);
    ctx->pc = 0x377620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37761Cu;
    // 0x377620: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D6F8u, 0x37761Cu, 0x377624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377624u;
label_377624:
    // 0x377624: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x377624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37762c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37762cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377630: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377634: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x377634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37763c: 0x3e00008  jr          $ra
    ctx->pc = 0x37763Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37763Cu;
        // 0x377640: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37763Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377644u;
    // 0x377644: 0x0  nop
    ctx->pc = 0x377644u;
    // NOP
    ctx->pc = 0x377648u;
}
