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

// Function: sub_003564D8
// Address: 0x3564d8 - 0x356610
void sub_003564D8_0x3564d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003564D8_0x3564d8");
#endif

    switch (ctx->pc) {
        case 0x356520u: goto label_356520;
        case 0x35652cu: goto label_35652c;
        case 0x356534u: goto label_356534;
        case 0x35653cu: goto label_35653c;
        case 0x356544u: goto label_356544;
        case 0x356560u: goto label_356560;
        case 0x35657cu: goto label_35657c;
        case 0x356598u: goto label_356598;
        case 0x3565b4u: goto label_3565b4;
        case 0x3565c8u: goto label_3565c8;
        case 0x3565d8u: goto label_3565d8;
        case 0x3565ecu: goto label_3565ec;
        case 0x3565fcu: goto label_3565fc;
        default: break;
    }

    ctx->pc = 0x3564d8u;

    // 0x3564d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3564d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3564dc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3564dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3564e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3564e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3564e4: 0x244249b8  addiu       $v0, $v0, 0x49B8
    ctx->pc = 0x3564e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18872));
    // 0x3564e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3564e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3564ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3564ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3564f0: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x3564f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3564f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3564f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3564f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3564f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3564fc: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x3564fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x356500: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x356500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x356504: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x356504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x356508: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x356508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35650c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x35650cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x356510: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x356510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x356514: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x356514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x356518: 0xc0cbda6  jal         func_32F698
    ctx->pc = 0x356518u;
    SET_GPR_U32(ctx, 31, 0x356520u);
    ctx->pc = 0x35651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356518u;
    // 0x35651c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F698u, 0x356518u, 0x356520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356520u;
label_356520:
    // 0x356520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x356520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356524: 0xc0cc696  jal         func_331A58
    ctx->pc = 0x356524u;
    SET_GPR_U32(ctx, 31, 0x35652Cu);
    ctx->pc = 0x356528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356524u;
    // 0x356528: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331A58u, 0x356524u, 0x35652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35652Cu;
label_35652c:
    // 0x35652c: 0xc0c9952  jal         func_326548
    ctx->pc = 0x35652Cu;
    SET_GPR_U32(ctx, 31, 0x356534u);
    ctx->pc = 0x356530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35652Cu;
    // 0x356530: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326548u, 0x35652Cu, 0x356534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356534u;
label_356534:
    // 0x356534: 0xc0cb18a  jal         func_32C628
    ctx->pc = 0x356534u;
    SET_GPR_U32(ctx, 31, 0x35653Cu);
    ctx->pc = 0x356538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356534u;
    // 0x356538: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C628u, 0x356534u, 0x35653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35653Cu;
label_35653c:
    // 0x35653c: 0xc0df508  jal         func_37D420
    ctx->pc = 0x35653Cu;
    SET_GPR_U32(ctx, 31, 0x356544u);
    ctx->pc = 0x356540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35653Cu;
    // 0x356540: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D420u, 0x35653Cu, 0x356544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356544u;
label_356544:
    // 0x356544: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x356544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x356548: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x356548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x35654c: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x35654cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x356550: 0x24c69000  addiu       $a2, $a2, -0x7000
    ctx->pc = 0x356550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938624));
    // 0x356554: 0x24e73f38  addiu       $a3, $a3, 0x3F38
    ctx->pc = 0x356554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16184));
    // 0x356558: 0xc102824  jal         func_40A090
    ctx->pc = 0x356558u;
    SET_GPR_U32(ctx, 31, 0x356560u);
    ctx->pc = 0x35655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356558u;
    // 0x35655c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A090u, 0x356558u, 0x356560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356560u;
label_356560:
    // 0x356560: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x356560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x356564: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x356564u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x356568: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x356568u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x35656c: 0x24c69008  addiu       $a2, $a2, -0x6FF8
    ctx->pc = 0x35656cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938632));
    // 0x356570: 0x24e74398  addiu       $a3, $a3, 0x4398
    ctx->pc = 0x356570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17304));
    // 0x356574: 0xc102824  jal         func_40A090
    ctx->pc = 0x356574u;
    SET_GPR_U32(ctx, 31, 0x35657Cu);
    ctx->pc = 0x356578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356574u;
    // 0x356578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A090u, 0x356574u, 0x35657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35657Cu;
label_35657c:
    // 0x35657c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x35657cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x356580: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x356580u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x356584: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x356584u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x356588: 0x24c69018  addiu       $a2, $a2, -0x6FE8
    ctx->pc = 0x356588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938648));
    // 0x35658c: 0x24e74480  addiu       $a3, $a3, 0x4480
    ctx->pc = 0x35658cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17536));
    // 0x356590: 0xc102824  jal         func_40A090
    ctx->pc = 0x356590u;
    SET_GPR_U32(ctx, 31, 0x356598u);
    ctx->pc = 0x356594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356590u;
    // 0x356594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A090u, 0x356590u, 0x356598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356598u;
label_356598:
    // 0x356598: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x356598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35659c: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x35659cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x3565a0: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x3565a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x3565a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3565a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3565a8: 0x24e742c0  addiu       $a3, $a3, 0x42C0
    ctx->pc = 0x3565a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17088));
    // 0x3565ac: 0xc102824  jal         func_40A090
    ctx->pc = 0x3565ACu;
    SET_GPR_U32(ctx, 31, 0x3565B4u);
    ctx->pc = 0x3565B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3565ACu;
    // 0x3565b0: 0x24c69020  addiu       $a2, $a2, -0x6FE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A090u, 0x3565ACu, 0x3565B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3565B4u;
label_3565b4:
    // 0x3565b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3565b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3565b8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x3565b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x3565bc: 0x24a57ba8  addiu       $a1, $a1, 0x7BA8
    ctx->pc = 0x3565bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31656));
    // 0x3565c0: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x3565C0u;
    SET_GPR_U32(ctx, 31, 0x3565C8u);
    ctx->pc = 0x3565C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3565C0u;
    // 0x3565c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x3565C0u, 0x3565C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3565C8u;
label_3565c8:
    // 0x3565c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3565c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3565cc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3565ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3565d0: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x3565D0u;
    SET_GPR_U32(ctx, 31, 0x3565D8u);
    ctx->pc = 0x3565D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3565D0u;
    // 0x3565d4: 0x24a59030  addiu       $a1, $a1, -0x6FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x3565D0u, 0x3565D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3565D8u;
label_3565d8:
    // 0x3565d8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3565d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3565dc: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x3565dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x3565e0: 0x24a57bb0  addiu       $a1, $a1, 0x7BB0
    ctx->pc = 0x3565e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31664));
    // 0x3565e4: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x3565E4u;
    SET_GPR_U32(ctx, 31, 0x3565ECu);
    ctx->pc = 0x3565E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3565E4u;
    // 0x3565e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x3565E4u, 0x3565ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3565ECu;
label_3565ec:
    // 0x3565ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3565ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3565f0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3565f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3565f4: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x3565F4u;
    SET_GPR_U32(ctx, 31, 0x3565FCu);
    ctx->pc = 0x3565F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3565F4u;
    // 0x3565f8: 0x24a59040  addiu       $a1, $a1, -0x6FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x3565F4u, 0x3565FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3565FCu;
label_3565fc:
    // 0x3565fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3565fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356604: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x356604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356608: 0x3e00008  jr          $ra
    ctx->pc = 0x356608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356608u;
        // 0x35660c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356610u;
}
