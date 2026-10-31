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

// Function: sub_00378528
// Address: 0x378528 - 0x3785c8
void sub_00378528_0x378528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378528_0x378528");
#endif

    switch (ctx->pc) {
        case 0x378554u: goto label_378554;
        case 0x37855cu: goto label_37855c;
        case 0x378570u: goto label_378570;
        case 0x378578u: goto label_378578;
        case 0x37858cu: goto label_37858c;
        case 0x378594u: goto label_378594;
        case 0x3785a4u: goto label_3785a4;
        default: break;
    }

    ctx->pc = 0x378528u;

    // 0x378528: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x378528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37852c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37852cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378530: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x378530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x378534: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x378534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x378538: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37853c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37853cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378540: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x378540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x378544: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x378544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x378548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37854c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37854Cu;
    SET_GPR_U32(ctx, 31, 0x378554u);
    ctx->pc = 0x378550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37854Cu;
    // 0x378550: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37854Cu, 0x378554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378554u;
label_378554:
    // 0x378554: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378554u;
    SET_GPR_U32(ctx, 31, 0x37855Cu);
    ctx->pc = 0x378558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378554u;
    // 0x378558: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378554u, 0x37855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37855Cu;
label_37855c:
    // 0x37855c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37855cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378560: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x378560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378564: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378568: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378568u;
    SET_GPR_U32(ctx, 31, 0x378570u);
    ctx->pc = 0x37856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378568u;
    // 0x37856c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378568u, 0x378570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378570u;
label_378570:
    // 0x378570: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378570u;
    SET_GPR_U32(ctx, 31, 0x378578u);
    ctx->pc = 0x378574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378570u;
    // 0x378574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378570u, 0x378578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378578u;
label_378578:
    // 0x378578: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37857c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37857cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x378580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378584: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378584u;
    SET_GPR_U32(ctx, 31, 0x37858Cu);
    ctx->pc = 0x378588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378584u;
    // 0x378588: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378584u, 0x37858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37858Cu;
label_37858c:
    // 0x37858c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37858Cu;
    SET_GPR_U32(ctx, 31, 0x378594u);
    ctx->pc = 0x378590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37858Cu;
    // 0x378590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37858Cu, 0x378594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378594u;
label_378594:
    // 0x378594: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x378594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378598: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x378598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37859c: 0xc0e37ba  jal         func_38DEE8
    ctx->pc = 0x37859Cu;
    SET_GPR_U32(ctx, 31, 0x3785A4u);
    ctx->pc = 0x3785A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37859Cu;
    // 0x3785a0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DEE8u, 0x37859Cu, 0x3785A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3785A4u;
label_3785a4:
    // 0x3785a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3785a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3785a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3785a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3785ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3785acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3785b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3785b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3785b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3785b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3785b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3785b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3785bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3785BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3785C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3785BCu;
        // 0x3785c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3785BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3785C4u;
    // 0x3785c4: 0x0  nop
    ctx->pc = 0x3785c4u;
    // NOP
    ctx->pc = 0x3785c8u;
}
