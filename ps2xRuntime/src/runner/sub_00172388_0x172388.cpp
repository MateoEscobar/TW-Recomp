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

// Function: sub_00172388
// Address: 0x172388 - 0x172440
void sub_00172388_0x172388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172388_0x172388");
#endif

    switch (ctx->pc) {
        case 0x1723bcu: goto label_1723bc;
        case 0x1723c4u: goto label_1723c4;
        case 0x1723d0u: goto label_1723d0;
        case 0x17240cu: goto label_17240c;
        case 0x172420u: goto label_172420;
        default: break;
    }

    ctx->pc = 0x172388u;

    // 0x172388: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x172388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17238c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x17238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x172390: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x172390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x172394: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x172394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172398: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x172398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x17239c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17239cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723a0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1723a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1723a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1723a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1723a8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1723a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1723ac: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1723ACu;
    {
        const bool branch_taken_0x1723ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1723B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723ACu;
        // 0x1723b0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1723ac) {
            ctx->pc = 0x172420u;
            goto label_172420;
        }
    }
    ctx->pc = 0x1723B4u;
    // 0x1723b4: 0xc05fdec  jal         func_17F7B0
    ctx->pc = 0x1723B4u;
    SET_GPR_U32(ctx, 31, 0x1723BCu);
    ctx->pc = 0x17F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B0u, 0x1723B4u, 0x1723BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723BCu;
label_1723bc:
    // 0x1723bc: 0xc06610a  jal         func_198428
    ctx->pc = 0x1723BCu;
    SET_GPR_U32(ctx, 31, 0x1723C4u);
    ctx->pc = 0x1723C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723BCu;
    // 0x1723c0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198428u, 0x1723BCu, 0x1723C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723C4u;
label_1723c4:
    // 0x1723c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1723c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723c8: 0xc118a4c  jal         func_462930
    ctx->pc = 0x1723C8u;
    SET_GPR_U32(ctx, 31, 0x1723D0u);
    ctx->pc = 0x1723CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723C8u;
    // 0x1723cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x462930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462930u, 0x1723C8u, 0x1723D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723D0u;
label_1723d0:
    // 0x1723d0: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x1723d0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1723d4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1723d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1723d8: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x1723d8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1723dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1723dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723e0: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x1723e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1723e4: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x1723e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1723e8: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x1723e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x1723ec: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x1723ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x1723f0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1723f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1723f4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1723f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1723f8: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x1723f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x1723fc: 0xafb30044  sw          $s3, 0x44($sp)
    ctx->pc = 0x1723fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 19));
    // 0x172400: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x172400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    // 0x172404: 0xc05fdee  jal         func_17F7B8
    ctx->pc = 0x172404u;
    SET_GPR_U32(ctx, 31, 0x17240Cu);
    ctx->pc = 0x172408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172404u;
    // 0x172408: 0xafbd0040  sw          $sp, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B8u, 0x172404u, 0x17240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17240Cu;
label_17240c:
    // 0x17240c: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x17240cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x172410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172414: 0x24a52318  addiu       $a1, $a1, 0x2318
    ctx->pc = 0x172414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8984));
    // 0x172418: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x172418u;
    SET_GPR_U32(ctx, 31, 0x172420u);
    ctx->pc = 0x17241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172418u;
    // 0x17241c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x172418u, 0x172420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172420u;
label_172420:
    // 0x172420: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x172420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x172424: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x172424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x172428: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x172428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17242c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x17242cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x172430: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x172430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172434: 0x3e00008  jr          $ra
    ctx->pc = 0x172434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172434u;
        // 0x172438: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17243Cu;
    // 0x17243c: 0x0  nop
    ctx->pc = 0x17243cu;
    // NOP
    ctx->pc = 0x172440u;
}
