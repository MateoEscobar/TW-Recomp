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

// Function: sub_0044C450
// Address: 0x44c450 - 0x44c638
void sub_0044C450_0x44c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C450_0x44c450");
#endif

    switch (ctx->pc) {
        case 0x44c468u: goto label_44c468;
        case 0x44c478u: goto label_44c478;
        case 0x44c488u: goto label_44c488;
        case 0x44c498u: goto label_44c498;
        case 0x44c4a8u: goto label_44c4a8;
        case 0x44c4d8u: goto label_44c4d8;
        case 0x44c4f8u: goto label_44c4f8;
        case 0x44c508u: goto label_44c508;
        case 0x44c518u: goto label_44c518;
        case 0x44c528u: goto label_44c528;
        case 0x44c558u: goto label_44c558;
        case 0x44c588u: goto label_44c588;
        case 0x44c5b8u: goto label_44c5b8;
        case 0x44c5c8u: goto label_44c5c8;
        case 0x44c5d4u: goto label_44c5d4;
        case 0x44c5e4u: goto label_44c5e4;
        case 0x44c5f4u: goto label_44c5f4;
        case 0x44c600u: goto label_44c600;
        case 0x44c60cu: goto label_44c60c;
        case 0x44c618u: goto label_44c618;
        case 0x44c624u: goto label_44c624;
        default: break;
    }

    ctx->pc = 0x44c450u;

    // 0x44c450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44c454: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x44c454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x44c458: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44c458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44c45c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44c460: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C460u;
    SET_GPR_U32(ctx, 31, 0x44C468u);
    ctx->pc = 0x44C464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C460u;
    // 0x44c464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C460u, 0x44C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C468u;
label_44c468:
    // 0x44c468: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x44c468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x44c46c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c470: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C470u;
    SET_GPR_U32(ctx, 31, 0x44C478u);
    ctx->pc = 0x44C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C470u;
    // 0x44c474: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C470u, 0x44C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C478u;
label_44c478:
    // 0x44c478: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x44c478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x44c47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c480: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C480u;
    SET_GPR_U32(ctx, 31, 0x44C488u);
    ctx->pc = 0x44C484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C480u;
    // 0x44c484: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C480u, 0x44C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C488u;
label_44c488:
    // 0x44c488: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x44c488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x44c48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c490: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C490u;
    SET_GPR_U32(ctx, 31, 0x44C498u);
    ctx->pc = 0x44C494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C490u;
    // 0x44c494: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C490u, 0x44C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C498u;
label_44c498:
    // 0x44c498: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x44c498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x44c49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c4a0: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C4A0u;
    SET_GPR_U32(ctx, 31, 0x44C4A8u);
    ctx->pc = 0x44C4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C4A0u;
    // 0x44c4a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C4A0u, 0x44C4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C4A8u;
label_44c4a8:
    // 0x44c4a8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x44c4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x44c4ac: 0x3c06fffc  lui         $a2, 0xFFFC
    ctx->pc = 0x44c4acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65532 << 16));
    // 0x44c4b0: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x44c4b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x44c4b4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x44c4b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x44c4b8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x44c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10000000
    // 0x44c4bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x44c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x44c4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c4c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x44c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x44c4c8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x44c4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x44c4cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x44c4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x44c4d0: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C4D0u;
    SET_GPR_U32(ctx, 31, 0x44C4D8u);
    ctx->pc = 0x44C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C4D0u;
    // 0x44c4d4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C4D0u, 0x44C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C4D8u;
label_44c4d8:
    // 0x44c4d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x44c4d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c4dc: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x44c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x44c4e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x44C4E0u;
    {
        const bool branch_taken_0x44c4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C4E0u;
        // 0x44c4e4: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c4e0) {
            ctx->pc = 0x44C4ECu;
            goto label_44c4ec;
        }
    }
    ctx->pc = 0x44C4E8u;
    // 0x44c4e8: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x44c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_44c4ec:
    // 0x44c4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c4f0: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C4F0u;
    SET_GPR_U32(ctx, 31, 0x44C4F8u);
    ctx->pc = 0x44C4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C4F0u;
    // 0x44c4f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C4F0u, 0x44C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C4F8u;
label_44c4f8:
    // 0x44c4f8: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x44c4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x44c4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c500: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C500u;
    SET_GPR_U32(ctx, 31, 0x44C508u);
    ctx->pc = 0x44C504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C500u;
    // 0x44c504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C500u, 0x44C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C508u;
label_44c508:
    // 0x44c508: 0xae02018c  sw          $v0, 0x18C($s0)
    ctx->pc = 0x44c508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 2));
    // 0x44c50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c510: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C510u;
    SET_GPR_U32(ctx, 31, 0x44C518u);
    ctx->pc = 0x44C514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C510u;
    // 0x44c514: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C510u, 0x44C518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C518u;
label_44c518:
    // 0x44c518: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x44c518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x44c51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c520: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C520u;
    SET_GPR_U32(ctx, 31, 0x44C528u);
    ctx->pc = 0x44C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C520u;
    // 0x44c524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C520u, 0x44C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C528u;
label_44c528:
    // 0x44c528: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x44c528u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x44c52c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x44c52cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x44c530: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x44c530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x44c534: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x44c534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x44c538: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x44c538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x44c53c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x44c53cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x44c540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c544: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x44c544u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x44c548: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44c548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44c54c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x44c54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x44c550: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C550u;
    SET_GPR_U32(ctx, 31, 0x44C558u);
    ctx->pc = 0x44C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C550u;
    // 0x44c554: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C550u, 0x44C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C558u;
label_44c558:
    // 0x44c558: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x44c558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x44c55c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x44c55cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x44c560: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x44c560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x44c564: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x44c564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x44c568: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x44c568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x44c56c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x44c56cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x44c570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c574: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x44c574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x44c578: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44c578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44c57c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x44c57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x44c580: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C580u;
    SET_GPR_U32(ctx, 31, 0x44C588u);
    ctx->pc = 0x44C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C580u;
    // 0x44c584: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C580u, 0x44C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C588u;
label_44c588:
    // 0x44c588: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x44c588u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x44c58c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x44c58cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x44c590: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x44c590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x44c594: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x44c594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x44c598: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x44c598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x44c59c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x44c59cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x44c5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c5a4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x44c5a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x44c5a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44c5ac: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x44c5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x44c5b0: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C5B0u;
    SET_GPR_U32(ctx, 31, 0x44C5B8u);
    ctx->pc = 0x44C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C5B0u;
    // 0x44c5b4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C5B0u, 0x44C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C5B8u;
label_44c5b8:
    // 0x44c5b8: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x44c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
    // 0x44c5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c5c0: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C5C0u;
    SET_GPR_U32(ctx, 31, 0x44C5C8u);
    ctx->pc = 0x44C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C5C0u;
    // 0x44c5c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C5C0u, 0x44C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C5C8u;
label_44c5c8:
    // 0x44c5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c5cc: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C5CCu;
    SET_GPR_U32(ctx, 31, 0x44C5D4u);
    ctx->pc = 0x44C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C5CCu;
    // 0x44c5d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C5CCu, 0x44C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C5D4u;
label_44c5d4:
    // 0x44c5d4: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x44c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x44c5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c5dc: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C5DCu;
    SET_GPR_U32(ctx, 31, 0x44C5E4u);
    ctx->pc = 0x44C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C5DCu;
    // 0x44c5e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C5DCu, 0x44C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C5E4u;
label_44c5e4:
    // 0x44c5e4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x44C5E4u;
    {
        const bool branch_taken_0x44c5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C5E4u;
        // 0x44c5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c5e4) {
            ctx->pc = 0x44C624u;
            goto label_44c624;
        }
    }
    ctx->pc = 0x44C5ECu;
    // 0x44c5ec: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C5ECu;
    SET_GPR_U32(ctx, 31, 0x44C5F4u);
    ctx->pc = 0x44C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C5ECu;
    // 0x44c5f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C5ECu, 0x44C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C5F4u;
label_44c5f4:
    // 0x44c5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c5f8: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C5F8u;
    SET_GPR_U32(ctx, 31, 0x44C600u);
    ctx->pc = 0x44C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C5F8u;
    // 0x44c5fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C5F8u, 0x44C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C600u;
label_44c600:
    // 0x44c600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c604: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C604u;
    SET_GPR_U32(ctx, 31, 0x44C60Cu);
    ctx->pc = 0x44C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C604u;
    // 0x44c608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C604u, 0x44C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C60Cu;
label_44c60c:
    // 0x44c60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c610: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C610u;
    SET_GPR_U32(ctx, 31, 0x44C618u);
    ctx->pc = 0x44C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C610u;
    // 0x44c614: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C610u, 0x44C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C618u;
label_44c618:
    // 0x44c618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c61c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C61Cu;
    SET_GPR_U32(ctx, 31, 0x44C624u);
    ctx->pc = 0x44C620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C61Cu;
    // 0x44c620: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C61Cu, 0x44C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C624u;
label_44c624:
    // 0x44c624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44c624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44c628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44c628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44c62c: 0x3e00008  jr          $ra
    ctx->pc = 0x44C62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C62Cu;
        // 0x44c630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C634u;
    // 0x44c634: 0x0  nop
    ctx->pc = 0x44c634u;
    // NOP
    ctx->pc = 0x44c638u;
}
