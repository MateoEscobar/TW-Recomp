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

// Function: sub_00376350
// Address: 0x376350 - 0x376408
void sub_00376350_0x376350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376350_0x376350");
#endif

    switch (ctx->pc) {
        case 0x37637cu: goto label_37637c;
        case 0x376384u: goto label_376384;
        case 0x376398u: goto label_376398;
        case 0x3763a0u: goto label_3763a0;
        case 0x3763b4u: goto label_3763b4;
        case 0x3763bcu: goto label_3763bc;
        case 0x3763d0u: goto label_3763d0;
        case 0x3763e4u: goto label_3763e4;
        default: break;
    }

    ctx->pc = 0x376350u;

    // 0x376350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x376350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x376354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x376354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376358: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x376358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37635c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x376360: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x376364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376368: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x376368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37636c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37636cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x376370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376374: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376374u;
    SET_GPR_U32(ctx, 31, 0x37637Cu);
    ctx->pc = 0x376378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376374u;
    // 0x376378: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376374u, 0x37637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37637Cu;
label_37637c:
    // 0x37637c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37637Cu;
    SET_GPR_U32(ctx, 31, 0x376384u);
    ctx->pc = 0x376380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37637Cu;
    // 0x376380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37637Cu, 0x376384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376384u;
label_376384:
    // 0x376384: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x376384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376388: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x376388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37638c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37638cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376390: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376390u;
    SET_GPR_U32(ctx, 31, 0x376398u);
    ctx->pc = 0x376394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376390u;
    // 0x376394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376390u, 0x376398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376398u;
label_376398:
    // 0x376398: 0xc10b108  jal         func_42C420
    ctx->pc = 0x376398u;
    SET_GPR_U32(ctx, 31, 0x3763A0u);
    ctx->pc = 0x37639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376398u;
    // 0x37639c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x376398u, 0x3763A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763A0u;
label_3763a0:
    // 0x3763a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3763a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3763a4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x3763a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3763a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3763a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3763ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3763ACu;
    SET_GPR_U32(ctx, 31, 0x3763B4u);
    ctx->pc = 0x3763B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3763ACu;
    // 0x3763b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3763ACu, 0x3763B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763B4u;
label_3763b4:
    // 0x3763b4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3763B4u;
    SET_GPR_U32(ctx, 31, 0x3763BCu);
    ctx->pc = 0x3763B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3763B4u;
    // 0x3763b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3763B4u, 0x3763BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763BCu;
label_3763bc:
    // 0x3763bc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x3763bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3763c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3763c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3763c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3763c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3763c8: 0xc102488  jal         func_409220
    ctx->pc = 0x3763C8u;
    SET_GPR_U32(ctx, 31, 0x3763D0u);
    ctx->pc = 0x3763CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3763C8u;
    // 0x3763cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3763C8u, 0x3763D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763D0u;
label_3763d0:
    // 0x3763d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3763d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3763d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3763d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3763d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3763d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3763dc: 0xc0c221c  jal         func_308870
    ctx->pc = 0x3763DCu;
    SET_GPR_U32(ctx, 31, 0x3763E4u);
    ctx->pc = 0x3763E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3763DCu;
    // 0x3763e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308870u, 0x3763DCu, 0x3763E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763E4u;
label_3763e4:
    // 0x3763e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3763e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3763e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3763e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3763ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3763ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3763f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3763f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3763f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3763f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3763f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3763f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3763fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3763FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3763FCu;
        // 0x376400: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3763FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376404u;
    // 0x376404: 0x0  nop
    ctx->pc = 0x376404u;
    // NOP
    ctx->pc = 0x376408u;
}
