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

// Function: sub_00384480
// Address: 0x384480 - 0x384688
void sub_00384480_0x384480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384480_0x384480");
#endif

    switch (ctx->pc) {
        case 0x3844c0u: goto label_3844c0;
        case 0x3844c8u: goto label_3844c8;
        case 0x3844dcu: goto label_3844dc;
        case 0x3844e4u: goto label_3844e4;
        case 0x3844f8u: goto label_3844f8;
        case 0x384500u: goto label_384500;
        case 0x384514u: goto label_384514;
        case 0x38451cu: goto label_38451c;
        case 0x384530u: goto label_384530;
        case 0x384538u: goto label_384538;
        case 0x38454cu: goto label_38454c;
        case 0x384554u: goto label_384554;
        case 0x384568u: goto label_384568;
        case 0x384570u: goto label_384570;
        case 0x384584u: goto label_384584;
        case 0x38458cu: goto label_38458c;
        case 0x3845a0u: goto label_3845a0;
        case 0x3845b8u: goto label_3845b8;
        case 0x3845c0u: goto label_3845c0;
        case 0x3845f8u: goto label_3845f8;
        case 0x384600u: goto label_384600;
        case 0x384614u: goto label_384614;
        case 0x38462cu: goto label_38462c;
        case 0x384640u: goto label_384640;
        default: break;
    }

    ctx->pc = 0x384480u;

    // 0x384480: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x384480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x384484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x384484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x384488: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x384488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x38448c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x38448cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x384490: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x384490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384494: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x384494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384498: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x384498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x38449c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x38449cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x3844a0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3844a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x3844a4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3844a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x3844a8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3844a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3844ac: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3844acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x3844b0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x3844b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x3844b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3844b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3844b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3844B8u;
    SET_GPR_U32(ctx, 31, 0x3844C0u);
    ctx->pc = 0x3844BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3844B8u;
    // 0x3844bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3844B8u, 0x3844C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3844C0u;
label_3844c0:
    // 0x3844c0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3844C0u;
    SET_GPR_U32(ctx, 31, 0x3844C8u);
    ctx->pc = 0x3844C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3844C0u;
    // 0x3844c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3844C0u, 0x3844C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3844C8u;
label_3844c8:
    // 0x3844c8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3844c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x3844cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3844ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3844d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3844d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3844d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3844D4u;
    SET_GPR_U32(ctx, 31, 0x3844DCu);
    ctx->pc = 0x3844D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3844D4u;
    // 0x3844d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3844D4u, 0x3844DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3844DCu;
label_3844dc:
    // 0x3844dc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3844DCu;
    SET_GPR_U32(ctx, 31, 0x3844E4u);
    ctx->pc = 0x3844E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3844DCu;
    // 0x3844e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3844DCu, 0x3844E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3844E4u;
label_3844e4:
    // 0x3844e4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3844e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x3844e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3844e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3844ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3844ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3844f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3844F0u;
    SET_GPR_U32(ctx, 31, 0x3844F8u);
    ctx->pc = 0x3844F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3844F0u;
    // 0x3844f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3844F0u, 0x3844F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3844F8u;
label_3844f8:
    // 0x3844f8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3844F8u;
    SET_GPR_U32(ctx, 31, 0x384500u);
    ctx->pc = 0x3844FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3844F8u;
    // 0x3844fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3844F8u, 0x384500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384500u;
label_384500:
    // 0x384500: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x384500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x384504: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x384504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384508: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x384508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38450c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x38450Cu;
    SET_GPR_U32(ctx, 31, 0x384514u);
    ctx->pc = 0x384510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38450Cu;
    // 0x384510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x38450Cu, 0x384514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384514u;
label_384514:
    // 0x384514: 0xc10b108  jal         func_42C420
    ctx->pc = 0x384514u;
    SET_GPR_U32(ctx, 31, 0x38451Cu);
    ctx->pc = 0x384518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384514u;
    // 0x384518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x384514u, 0x38451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38451Cu;
label_38451c:
    // 0x38451c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38451cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384520: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x384520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x384524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384528: 0xc102472  jal         func_4091C8
    ctx->pc = 0x384528u;
    SET_GPR_U32(ctx, 31, 0x384530u);
    ctx->pc = 0x38452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384528u;
    // 0x38452c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x384528u, 0x384530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384530u;
label_384530:
    // 0x384530: 0xc10b108  jal         func_42C420
    ctx->pc = 0x384530u;
    SET_GPR_U32(ctx, 31, 0x384538u);
    ctx->pc = 0x384534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384530u;
    // 0x384534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x384530u, 0x384538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384538u;
label_384538:
    // 0x384538: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x384538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38453c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x38453cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x384540: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384544: 0xc102472  jal         func_4091C8
    ctx->pc = 0x384544u;
    SET_GPR_U32(ctx, 31, 0x38454Cu);
    ctx->pc = 0x384548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384544u;
    // 0x384548: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x384544u, 0x38454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38454Cu;
label_38454c:
    // 0x38454c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x38454Cu;
    SET_GPR_U32(ctx, 31, 0x384554u);
    ctx->pc = 0x384550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38454Cu;
    // 0x384550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x38454Cu, 0x384554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384554u;
label_384554:
    // 0x384554: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x384554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384558: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x384558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38455c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38455cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384560: 0xc102472  jal         func_4091C8
    ctx->pc = 0x384560u;
    SET_GPR_U32(ctx, 31, 0x384568u);
    ctx->pc = 0x384564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384560u;
    // 0x384564: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x384560u, 0x384568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384568u;
label_384568:
    // 0x384568: 0xc10b108  jal         func_42C420
    ctx->pc = 0x384568u;
    SET_GPR_U32(ctx, 31, 0x384570u);
    ctx->pc = 0x38456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384568u;
    // 0x38456c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x384568u, 0x384570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384570u;
label_384570:
    // 0x384570: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x384570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384578: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x384578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x38457c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x38457Cu;
    SET_GPR_U32(ctx, 31, 0x384584u);
    ctx->pc = 0x384580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38457Cu;
    // 0x384580: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x38457Cu, 0x384584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384584u;
label_384584:
    // 0x384584: 0xc10b108  jal         func_42C420
    ctx->pc = 0x384584u;
    SET_GPR_U32(ctx, 31, 0x38458Cu);
    ctx->pc = 0x384588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384584u;
    // 0x384588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x384584u, 0x38458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38458Cu;
label_38458c:
    // 0x38458c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x38458cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x384590: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x384590u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384594: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x384594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384598: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x384598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38459c: 0x0  nop
    ctx->pc = 0x38459cu;
    // NOP
label_3845a0:
    // 0x3845a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3845a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3845a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3845a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3845a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3845a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3845ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3845acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3845b0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3845B0u;
    SET_GPR_U32(ctx, 31, 0x3845B8u);
    ctx->pc = 0x3845B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3845B0u;
    // 0x3845b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3845B0u, 0x3845B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3845B8u;
label_3845b8:
    // 0x3845b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3845B8u;
    SET_GPR_U32(ctx, 31, 0x3845C0u);
    ctx->pc = 0x3845BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3845B8u;
    // 0x3845bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3845B8u, 0x3845C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3845C0u;
label_3845c0:
    // 0x3845c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3845c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3845c4: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x3845c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3845c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3845C8u;
    {
        const bool branch_taken_0x3845c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3845CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3845C8u;
        // 0x3845cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3845c8) {
            ctx->pc = 0x3845A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3845a0;
        }
    }
    ctx->pc = 0x3845D0u;
    // 0x3845d0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x3845d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3845d4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x3845d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3845d8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3845d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3845dc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3845dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3845e0: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x3845e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3845e4: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x3845e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3845e8: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x3845e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x3845ec: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x3845ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3845f0: 0xc05ac5e  jal         func_16B178
    ctx->pc = 0x3845F0u;
    SET_GPR_U32(ctx, 31, 0x3845F8u);
    ctx->pc = 0x3845F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3845F0u;
    // 0x3845f4: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B178u, 0x3845F0u, 0x3845F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3845F8u;
label_3845f8:
    // 0x3845f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3845f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3845fc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3845fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_384600:
    // 0x384600: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x384600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x384604: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x384604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x384608: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x384608u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38460c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x38460Cu;
    SET_GPR_U32(ctx, 31, 0x384614u);
    ctx->pc = 0x384610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38460Cu;
    // 0x384610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x38460Cu, 0x384614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384614u;
label_384614:
    // 0x384614: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x384614u;
    {
        const bool branch_taken_0x384614 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x384618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384614u;
        // 0x384618: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384614) {
            ctx->pc = 0x384630u;
            goto label_384630;
        }
    }
    ctx->pc = 0x38461Cu;
    // 0x38461c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x38461cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x384620: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x384620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x384624: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x384624u;
    SET_GPR_U32(ctx, 31, 0x38462Cu);
    ctx->pc = 0x384628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384624u;
    // 0x384628: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x384624u, 0x38462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38462Cu;
label_38462c:
    // 0x38462c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x38462cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384630:
    // 0x384630: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x384630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384638: 0xc102576  jal         func_4095D8
    ctx->pc = 0x384638u;
    SET_GPR_U32(ctx, 31, 0x384640u);
    ctx->pc = 0x38463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384638u;
    // 0x38463c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x384638u, 0x384640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384640u;
label_384640:
    // 0x384640: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x384640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384644: 0x28c20007  slti        $v0, $a2, 0x7
    ctx->pc = 0x384644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x384648: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x384648u;
    {
        const bool branch_taken_0x384648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384648u;
        // 0x38464c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384648) {
            ctx->pc = 0x384600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384600;
        }
    }
    ctx->pc = 0x384650u;
    // 0x384650: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x384650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x384654: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x384654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384658: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x384658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x38465c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x38465cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x384660: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x384660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x384664: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x384664u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x384668: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x384668u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38466c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x38466cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x384670: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x384670u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x384674: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x384674u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x384678: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x384678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38467c: 0x3e00008  jr          $ra
    ctx->pc = 0x38467Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38467Cu;
        // 0x384680: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38467Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384684u;
    // 0x384684: 0x0  nop
    ctx->pc = 0x384684u;
    // NOP
    ctx->pc = 0x384688u;
}
