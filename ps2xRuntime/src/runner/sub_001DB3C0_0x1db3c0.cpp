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

// Function: sub_001DB3C0
// Address: 0x1db3c0 - 0x1db4b0
void sub_001DB3C0_0x1db3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB3C0_0x1db3c0");
#endif

    switch (ctx->pc) {
        case 0x1db3e8u: goto label_1db3e8;
        case 0x1db40cu: goto label_1db40c;
        case 0x1db414u: goto label_1db414;
        case 0x1db41cu: goto label_1db41c;
        case 0x1db434u: goto label_1db434;
        case 0x1db438u: goto label_1db438;
        case 0x1db444u: goto label_1db444;
        case 0x1db458u: goto label_1db458;
        case 0x1db460u: goto label_1db460;
        case 0x1db468u: goto label_1db468;
        case 0x1db470u: goto label_1db470;
        case 0x1db478u: goto label_1db478;
        case 0x1db480u: goto label_1db480;
        case 0x1db488u: goto label_1db488;
        case 0x1db490u: goto label_1db490;
        default: break;
    }

    ctx->pc = 0x1db3c0u;

    // 0x1db3c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1db3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1db3c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1db3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1db3c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1db3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1db3d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db3d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1db3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1db3d8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1db3d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db3dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db3e0: 0xc074612  jal         func_1D1848
    ctx->pc = 0x1DB3E0u;
    SET_GPR_U32(ctx, 31, 0x1DB3E8u);
    ctx->pc = 0x1DB3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3E0u;
    // 0x1db3e4: 0x261120d0  addiu       $s1, $s0, 0x20D0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1848u, 0x1DB3E0u, 0x1DB3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3E8u;
label_1db3e8:
    // 0x1db3e8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1db3e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db3ec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1db3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1db3f0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1db3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1db3f4: 0x2463bdc0  addiu       $v1, $v1, -0x4240
    ctx->pc = 0x1db3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950336));
    // 0x1db3f8: 0x2442bd98  addiu       $v0, $v0, -0x4268
    ctx->pc = 0x1db3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950296));
    // 0x1db3fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1db3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1db400: 0x260407a0  addiu       $a0, $s0, 0x7A0
    ctx->pc = 0x1db400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
    // 0x1db404: 0xc070e1a  jal         func_1C3868
    ctx->pc = 0x1DB404u;
    SET_GPR_U32(ctx, 31, 0x1DB40Cu);
    ctx->pc = 0x1DB408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB404u;
    // 0x1db408: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3868u, 0x1DB404u, 0x1DB40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB40Cu;
label_1db40c:
    // 0x1db40c: 0xc070e1a  jal         func_1C3868
    ctx->pc = 0x1DB40Cu;
    SET_GPR_U32(ctx, 31, 0x1DB414u);
    ctx->pc = 0x1DB410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB40Cu;
    // 0x1db410: 0x26040880  addiu       $a0, $s0, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3868u, 0x1DB40Cu, 0x1DB414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB414u;
label_1db414:
    // 0x1db414: 0xc070e1a  jal         func_1C3868
    ctx->pc = 0x1DB414u;
    SET_GPR_U32(ctx, 31, 0x1DB41Cu);
    ctx->pc = 0x1DB418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB414u;
    // 0x1db418: 0x26040960  addiu       $a0, $s0, 0x960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3868u, 0x1DB414u, 0x1DB41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB41Cu;
label_1db41c:
    // 0x1db41c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1db41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1db420: 0x26041bd0  addiu       $a0, $s0, 0x1BD0
    ctx->pc = 0x1db420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7120));
    // 0x1db424: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1db424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1db428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db42c: 0xc07599c  jal         func_1D6670
    ctx->pc = 0x1DB42Cu;
    SET_GPR_U32(ctx, 31, 0x1DB434u);
    ctx->pc = 0x1DB430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB42Cu;
    // 0x1db430: 0xae031b84  sw          $v1, 0x1B84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 7044), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1DB42Cu, 0x1DB434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB434u;
label_1db434:
    // 0x1db434: 0x0  nop
    ctx->pc = 0x1db434u;
    // NOP
label_1db438:
    // 0x1db438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db43c: 0xc069224  jal         func_1A4890
    ctx->pc = 0x1DB43Cu;
    SET_GPR_U32(ctx, 31, 0x1DB444u);
    ctx->pc = 0x1DB440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB43Cu;
    // 0x1db440: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4890u, 0x1DB43Cu, 0x1DB444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB444u;
label_1db444:
    // 0x1db444: 0x0  nop
    ctx->pc = 0x1db444u;
    // NOP
    // 0x1db448: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DB448u;
    {
        const bool branch_taken_0x1db448 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1DB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB448u;
        // 0x1db44c: 0x26310360  addiu       $s1, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db448) {
            ctx->pc = 0x1DB438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db438;
        }
    }
    ctx->pc = 0x1DB450u;
    // 0x1db450: 0xc074fbc  jal         func_1D3EF0
    ctx->pc = 0x1DB450u;
    SET_GPR_U32(ctx, 31, 0x1DB458u);
    ctx->pc = 0x1DB454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB450u;
    // 0x1db454: 0x26042b00  addiu       $a0, $s0, 0x2B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x1DB450u, 0x1DB458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB458u;
label_1db458:
    // 0x1db458: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1DB458u;
    SET_GPR_U32(ctx, 31, 0x1DB460u);
    ctx->pc = 0x1DB45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB458u;
    // 0x1db45c: 0x26042bd0  addiu       $a0, $s0, 0x2BD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1DB458u, 0x1DB460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB460u;
label_1db460:
    // 0x1db460: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1DB460u;
    SET_GPR_U32(ctx, 31, 0x1DB468u);
    ctx->pc = 0x1DB464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB460u;
    // 0x1db464: 0x26042cd0  addiu       $a0, $s0, 0x2CD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1DB460u, 0x1DB468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB468u;
label_1db468:
    // 0x1db468: 0xc073a9c  jal         func_1CEA70
    ctx->pc = 0x1DB468u;
    SET_GPR_U32(ctx, 31, 0x1DB470u);
    ctx->pc = 0x1DB46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB468u;
    // 0x1db46c: 0x26042dd0  addiu       $a0, $s0, 0x2DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1DB468u, 0x1DB470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB470u;
label_1db470:
    // 0x1db470: 0xc079242  jal         func_1E4908
    ctx->pc = 0x1DB470u;
    SET_GPR_U32(ctx, 31, 0x1DB478u);
    ctx->pc = 0x1DB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB470u;
    // 0x1db474: 0x260430a0  addiu       $a0, $s0, 0x30A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4908u, 0x1DB470u, 0x1DB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB478u;
label_1db478:
    // 0x1db478: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1DB478u;
    SET_GPR_U32(ctx, 31, 0x1DB480u);
    ctx->pc = 0x1DB47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB478u;
    // 0x1db47c: 0x26043a90  addiu       $a0, $s0, 0x3A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1DB478u, 0x1DB480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB480u;
label_1db480:
    // 0x1db480: 0xc079526  jal         func_1E5498
    ctx->pc = 0x1DB480u;
    SET_GPR_U32(ctx, 31, 0x1DB488u);
    ctx->pc = 0x1DB484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB480u;
    // 0x1db484: 0x26043bb0  addiu       $a0, $s0, 0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5498u, 0x1DB480u, 0x1DB488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB488u;
label_1db488:
    // 0x1db488: 0xc076d2c  jal         func_1DB4B0
    ctx->pc = 0x1DB488u;
    SET_GPR_U32(ctx, 31, 0x1DB490u);
    ctx->pc = 0x1DB48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB488u;
    // 0x1db48c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB4B0u, 0x1DB488u, 0x1DB490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB490u;
label_1db490:
    // 0x1db490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1db490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db494: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1db494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db498: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1db498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db49c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db49cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db4a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1db4a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4A8u;
        // 0x1db4ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB4B0u;
}
