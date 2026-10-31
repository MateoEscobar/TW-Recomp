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

// Function: sub_003754D8
// Address: 0x3754d8 - 0x375648
void sub_003754D8_0x3754d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003754D8_0x3754d8");
#endif

    switch (ctx->pc) {
        case 0x375518u: goto label_375518;
        case 0x375520u: goto label_375520;
        case 0x375534u: goto label_375534;
        case 0x37553cu: goto label_37553c;
        case 0x375550u: goto label_375550;
        case 0x375568u: goto label_375568;
        case 0x375570u: goto label_375570;
        case 0x375588u: goto label_375588;
        case 0x375590u: goto label_375590;
        case 0x3755a4u: goto label_3755a4;
        case 0x3755b8u: goto label_3755b8;
        case 0x3755c0u: goto label_3755c0;
        case 0x3755d4u: goto label_3755d4;
        case 0x3755e8u: goto label_3755e8;
        case 0x375614u: goto label_375614;
        default: break;
    }

    ctx->pc = 0x3754d8u;

    // 0x3754d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3754d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3754dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3754dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3754e0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3754e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3754e4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3754e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3754e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3754e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3754ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3754ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3754f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3754f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3754f4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3754f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3754f8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3754f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3754fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3754fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x375500: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x375500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x375504: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x375504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x375508: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x375508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x37550c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37550cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375510: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375510u;
    SET_GPR_U32(ctx, 31, 0x375518u);
    ctx->pc = 0x375514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375510u;
    // 0x375514: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375510u, 0x375518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375518u;
label_375518:
    // 0x375518: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375518u;
    SET_GPR_U32(ctx, 31, 0x375520u);
    ctx->pc = 0x37551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375518u;
    // 0x37551c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375518u, 0x375520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375520u;
label_375520:
    // 0x375520: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x375520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375524: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x375524u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375528: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37552c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37552Cu;
    SET_GPR_U32(ctx, 31, 0x375534u);
    ctx->pc = 0x375530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37552Cu;
    // 0x375530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37552Cu, 0x375534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375534u;
label_375534:
    // 0x375534: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375534u;
    SET_GPR_U32(ctx, 31, 0x37553Cu);
    ctx->pc = 0x375538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375534u;
    // 0x375538: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375534u, 0x37553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37553Cu;
label_37553c:
    // 0x37553c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x37553cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375544: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x375544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375548: 0xc102488  jal         func_409220
    ctx->pc = 0x375548u;
    SET_GPR_U32(ctx, 31, 0x375550u);
    ctx->pc = 0x37554Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375548u;
    // 0x37554c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375548u, 0x375550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375550u;
label_375550:
    // 0x375550: 0x34068010  ori         $a2, $zero, 0x8010
    ctx->pc = 0x375550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x375554: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x375554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x375558: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x375558u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37555c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37555cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375560: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375560u;
    SET_GPR_U32(ctx, 31, 0x375568u);
    ctx->pc = 0x375564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375560u;
    // 0x375564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375560u, 0x375568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375568u;
label_375568:
    // 0x375568: 0xc10b108  jal         func_42C420
    ctx->pc = 0x375568u;
    SET_GPR_U32(ctx, 31, 0x375570u);
    ctx->pc = 0x37556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375568u;
    // 0x37556c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x375568u, 0x375570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375570u;
label_375570:
    // 0x375570: 0x34068030  ori         $a2, $zero, 0x8030
    ctx->pc = 0x375570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x375574: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x375574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x375578: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x375578u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37557c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37557cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x375580: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375580u;
    SET_GPR_U32(ctx, 31, 0x375588u);
    ctx->pc = 0x375584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375580u;
    // 0x375584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375580u, 0x375588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375588u;
label_375588:
    // 0x375588: 0xc10b108  jal         func_42C420
    ctx->pc = 0x375588u;
    SET_GPR_U32(ctx, 31, 0x375590u);
    ctx->pc = 0x37558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375588u;
    // 0x37558c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x375588u, 0x375590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375590u;
label_375590:
    // 0x375590: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x375590u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375598: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x375598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37559c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37559Cu;
    SET_GPR_U32(ctx, 31, 0x3755A4u);
    ctx->pc = 0x3755A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37559Cu;
    // 0x3755a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37559Cu, 0x3755A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3755A4u;
label_3755a4:
    // 0x3755a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3755a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3755a8: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x3755a8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3755ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3755acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3755b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3755B0u;
    SET_GPR_U32(ctx, 31, 0x3755B8u);
    ctx->pc = 0x3755B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3755B0u;
    // 0x3755b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3755B0u, 0x3755B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3755B8u;
label_3755b8:
    // 0x3755b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3755B8u;
    SET_GPR_U32(ctx, 31, 0x3755C0u);
    ctx->pc = 0x3755BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3755B8u;
    // 0x3755bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3755B8u, 0x3755C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3755C0u;
label_3755c0:
    // 0x3755c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3755c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3755c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3755c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3755c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3755c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3755cc: 0xc102488  jal         func_409220
    ctx->pc = 0x3755CCu;
    SET_GPR_U32(ctx, 31, 0x3755D4u);
    ctx->pc = 0x3755D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3755CCu;
    // 0x3755d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3755CCu, 0x3755D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3755D4u;
label_3755d4:
    // 0x3755d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3755d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3755d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3755d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3755dc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3755dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3755e0: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3755E0u;
    SET_GPR_U32(ctx, 31, 0x3755E8u);
    ctx->pc = 0x3755E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3755E0u;
    // 0x3755e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3755E0u, 0x3755E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3755E8u;
label_3755e8:
    // 0x3755e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3755e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3755ec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3755ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3755f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3755f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3755f4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3755f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3755f8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3755f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3755fc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3755fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375600: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x375600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375604: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x375604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375608: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x375608u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37560c: 0xc0c58d4  jal         func_316350
    ctx->pc = 0x37560Cu;
    SET_GPR_U32(ctx, 31, 0x375614u);
    ctx->pc = 0x375610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37560Cu;
    // 0x375610: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316350u, 0x37560Cu, 0x375614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375614u;
label_375614:
    // 0x375614: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x375614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x375618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37561c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x37561cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x375620: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x375620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x375624: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x375624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x375628: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x375628u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37562c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37562cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375630: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x375630u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375634: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x375634u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375638: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x375638u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37563c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37563cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375640: 0x3e00008  jr          $ra
    ctx->pc = 0x375640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375640u;
        // 0x375644: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375648u;
}
