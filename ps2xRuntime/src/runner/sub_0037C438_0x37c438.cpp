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

// Function: sub_0037C438
// Address: 0x37c438 - 0x37c608
void sub_0037C438_0x37c438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C438_0x37c438");
#endif

    switch (ctx->pc) {
        case 0x37c478u: goto label_37c478;
        case 0x37c480u: goto label_37c480;
        case 0x37c494u: goto label_37c494;
        case 0x37c49cu: goto label_37c49c;
        case 0x37c4b4u: goto label_37c4b4;
        case 0x37c4bcu: goto label_37c4bc;
        case 0x37c4d4u: goto label_37c4d4;
        case 0x37c4dcu: goto label_37c4dc;
        case 0x37c4f0u: goto label_37c4f0;
        case 0x37c4f8u: goto label_37c4f8;
        case 0x37c50cu: goto label_37c50c;
        case 0x37c514u: goto label_37c514;
        case 0x37c528u: goto label_37c528;
        case 0x37c530u: goto label_37c530;
        case 0x37c544u: goto label_37c544;
        case 0x37c54cu: goto label_37c54c;
        case 0x37c560u: goto label_37c560;
        case 0x37c568u: goto label_37c568;
        case 0x37c57cu: goto label_37c57c;
        case 0x37c584u: goto label_37c584;
        case 0x37c598u: goto label_37c598;
        case 0x37c5a0u: goto label_37c5a0;
        case 0x37c5d4u: goto label_37c5d4;
        default: break;
    }

    ctx->pc = 0x37c438u;

    // 0x37c438: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x37c438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x37c43c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37c43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c440: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x37c440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x37c444: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x37c444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x37c448: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37c448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c44c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37c44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c450: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x37c450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x37c454: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x37c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x37c458: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x37c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x37c45c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x37c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x37c460: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x37c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x37c464: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x37c464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x37c468: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x37c468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x37c46c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37c46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37c470: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C470u;
    SET_GPR_U32(ctx, 31, 0x37C478u);
    ctx->pc = 0x37C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C470u;
    // 0x37c474: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C470u, 0x37C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C478u;
label_37c478:
    // 0x37c478: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C478u;
    SET_GPR_U32(ctx, 31, 0x37C480u);
    ctx->pc = 0x37C47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C478u;
    // 0x37c47c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C478u, 0x37C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C480u;
label_37c480:
    // 0x37c480: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x37c480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x37c484: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c488: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37c488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c48c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C48Cu;
    SET_GPR_U32(ctx, 31, 0x37C494u);
    ctx->pc = 0x37C490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C48Cu;
    // 0x37c490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C48Cu, 0x37C494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C494u;
label_37c494:
    // 0x37c494: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C494u;
    SET_GPR_U32(ctx, 31, 0x37C49Cu);
    ctx->pc = 0x37C498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C494u;
    // 0x37c498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C494u, 0x37C49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C49Cu;
label_37c49c:
    // 0x37c49c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x37c49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c4a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c4a4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x37c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x37c4a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37c4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37c4ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C4ACu;
    SET_GPR_U32(ctx, 31, 0x37C4B4u);
    ctx->pc = 0x37C4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C4ACu;
    // 0x37c4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C4ACu, 0x37C4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C4B4u;
label_37c4b4:
    // 0x37c4b4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C4B4u;
    SET_GPR_U32(ctx, 31, 0x37C4BCu);
    ctx->pc = 0x37C4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C4B4u;
    // 0x37c4b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C4B4u, 0x37C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C4BCu;
label_37c4bc:
    // 0x37c4bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x37c4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c4c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c4c4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x37c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x37c4c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37c4cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C4CCu;
    SET_GPR_U32(ctx, 31, 0x37C4D4u);
    ctx->pc = 0x37C4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C4CCu;
    // 0x37c4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C4CCu, 0x37C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C4D4u;
label_37c4d4:
    // 0x37c4d4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C4D4u;
    SET_GPR_U32(ctx, 31, 0x37C4DCu);
    ctx->pc = 0x37C4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C4D4u;
    // 0x37c4d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C4D4u, 0x37C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C4DCu;
label_37c4dc:
    // 0x37c4dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c4e0: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x37c4e0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c4e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37c4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37c4e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C4E8u;
    SET_GPR_U32(ctx, 31, 0x37C4F0u);
    ctx->pc = 0x37C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C4E8u;
    // 0x37c4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C4E8u, 0x37C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C4F0u;
label_37c4f0:
    // 0x37c4f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C4F0u;
    SET_GPR_U32(ctx, 31, 0x37C4F8u);
    ctx->pc = 0x37C4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C4F0u;
    // 0x37c4f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C4F0u, 0x37C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C4F8u;
label_37c4f8:
    // 0x37c4f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c4fc: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x37c4fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c500: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37c500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37c504: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C504u;
    SET_GPR_U32(ctx, 31, 0x37C50Cu);
    ctx->pc = 0x37C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C504u;
    // 0x37c508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C504u, 0x37C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C50Cu;
label_37c50c:
    // 0x37c50c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C50Cu;
    SET_GPR_U32(ctx, 31, 0x37C514u);
    ctx->pc = 0x37C510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C50Cu;
    // 0x37c510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C50Cu, 0x37C514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C514u;
label_37c514:
    // 0x37c514: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c518: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x37c518u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c51c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x37c51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37c520: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C520u;
    SET_GPR_U32(ctx, 31, 0x37C528u);
    ctx->pc = 0x37C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C520u;
    // 0x37c524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C520u, 0x37C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C528u;
label_37c528:
    // 0x37c528: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C528u;
    SET_GPR_U32(ctx, 31, 0x37C530u);
    ctx->pc = 0x37C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C528u;
    // 0x37c52c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C528u, 0x37C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C530u;
label_37c530:
    // 0x37c530: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c534: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x37c534u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c538: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x37c538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37c53c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C53Cu;
    SET_GPR_U32(ctx, 31, 0x37C544u);
    ctx->pc = 0x37C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C53Cu;
    // 0x37c540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C53Cu, 0x37C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C544u;
label_37c544:
    // 0x37c544: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C544u;
    SET_GPR_U32(ctx, 31, 0x37C54Cu);
    ctx->pc = 0x37C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C544u;
    // 0x37c548: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C544u, 0x37C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C54Cu;
label_37c54c:
    // 0x37c54c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c550: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x37c550u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c554: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x37c554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x37c558: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C558u;
    SET_GPR_U32(ctx, 31, 0x37C560u);
    ctx->pc = 0x37C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C558u;
    // 0x37c55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C558u, 0x37C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C560u;
label_37c560:
    // 0x37c560: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C560u;
    SET_GPR_U32(ctx, 31, 0x37C568u);
    ctx->pc = 0x37C564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C560u;
    // 0x37c564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C560u, 0x37C568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C568u;
label_37c568:
    // 0x37c568: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c56c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x37c56cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c570: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37c570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x37c574: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C574u;
    SET_GPR_U32(ctx, 31, 0x37C57Cu);
    ctx->pc = 0x37C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C574u;
    // 0x37c578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C574u, 0x37C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C57Cu;
label_37c57c:
    // 0x37c57c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C57Cu;
    SET_GPR_U32(ctx, 31, 0x37C584u);
    ctx->pc = 0x37C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C57Cu;
    // 0x37c580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C57Cu, 0x37C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C584u;
label_37c584:
    // 0x37c584: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c588: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x37c588u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c58c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37c58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c590: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C590u;
    SET_GPR_U32(ctx, 31, 0x37C598u);
    ctx->pc = 0x37C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C590u;
    // 0x37c594: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C590u, 0x37C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C598u;
label_37c598:
    // 0x37c598: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C598u;
    SET_GPR_U32(ctx, 31, 0x37C5A0u);
    ctx->pc = 0x37C59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C598u;
    // 0x37c59c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C598u, 0x37C5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C5A0u;
label_37c5a0:
    // 0x37c5a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x37c5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c5a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x37c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c5a8: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x37c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x37c5ac: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x37c5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c5b0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x37c5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c5b4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x37c5b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c5b8: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x37c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x37c5bc: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x37c5bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c5c0: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x37c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x37c5c4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x37c5c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c5c8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x37c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x37c5cc: 0xc05fc6e  jal         func_17F1B8
    ctx->pc = 0x37C5CCu;
    SET_GPR_U32(ctx, 31, 0x37C5D4u);
    ctx->pc = 0x37C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C5CCu;
    // 0x37c5d0: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F1B8u, 0x37C5CCu, 0x37C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C5D4u;
label_37c5d4:
    // 0x37c5d4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x37c5d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37c5d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37c5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c5dc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x37c5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37c5e0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x37c5e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37c5e4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x37c5e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37c5e8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x37c5e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37c5ec: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x37c5ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37c5f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x37c5f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37c5f4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x37c5f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37c5f8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x37c5f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37c5fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37c5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37c600: 0x3e00008  jr          $ra
    ctx->pc = 0x37C600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C600u;
        // 0x37c604: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C608u;
}
