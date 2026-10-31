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

// Function: sub_0020C460
// Address: 0x20c460 - 0x20c510
void sub_0020C460_0x20c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C460_0x20c460");
#endif

    switch (ctx->pc) {
        case 0x20c460u: goto label_20c460;
        case 0x20c464u: goto label_20c464;
        case 0x20c468u: goto label_20c468;
        case 0x20c46cu: goto label_20c46c;
        case 0x20c470u: goto label_20c470;
        case 0x20c474u: goto label_20c474;
        case 0x20c478u: goto label_20c478;
        case 0x20c47cu: goto label_20c47c;
        case 0x20c480u: goto label_20c480;
        case 0x20c484u: goto label_20c484;
        case 0x20c488u: goto label_20c488;
        case 0x20c48cu: goto label_20c48c;
        case 0x20c490u: goto label_20c490;
        case 0x20c494u: goto label_20c494;
        case 0x20c498u: goto label_20c498;
        case 0x20c49cu: goto label_20c49c;
        case 0x20c4a0u: goto label_20c4a0;
        case 0x20c4a4u: goto label_20c4a4;
        case 0x20c4a8u: goto label_20c4a8;
        case 0x20c4acu: goto label_20c4ac;
        case 0x20c4b0u: goto label_20c4b0;
        case 0x20c4b4u: goto label_20c4b4;
        case 0x20c4b8u: goto label_20c4b8;
        case 0x20c4bcu: goto label_20c4bc;
        case 0x20c4c0u: goto label_20c4c0;
        case 0x20c4c4u: goto label_20c4c4;
        case 0x20c4c8u: goto label_20c4c8;
        case 0x20c4ccu: goto label_20c4cc;
        case 0x20c4d0u: goto label_20c4d0;
        case 0x20c4d4u: goto label_20c4d4;
        case 0x20c4d8u: goto label_20c4d8;
        case 0x20c4dcu: goto label_20c4dc;
        case 0x20c4e0u: goto label_20c4e0;
        case 0x20c4e4u: goto label_20c4e4;
        case 0x20c4e8u: goto label_20c4e8;
        case 0x20c4ecu: goto label_20c4ec;
        case 0x20c4f0u: goto label_20c4f0;
        case 0x20c4f4u: goto label_20c4f4;
        case 0x20c4f8u: goto label_20c4f8;
        case 0x20c4fcu: goto label_20c4fc;
        case 0x20c500u: goto label_20c500;
        case 0x20c504u: goto label_20c504;
        case 0x20c508u: goto label_20c508;
        case 0x20c50cu: goto label_20c50c;
        default: break;
    }

    ctx->pc = 0x20c460u;

label_20c460:
    // 0x20c460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20c464:
    // 0x20c464: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20c464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20c468:
    // 0x20c468: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20c468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20c46c:
    // 0x20c46c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20c46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20c470:
    // 0x20c470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20c474:
    // 0x20c474: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20c474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20c478:
    // 0x20c478: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_20c47c:
    if (ctx->pc == 0x20C47Cu) {
        ctx->pc = 0x20C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C478u;
        // 0x20c47c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C480u;
        goto label_20c480;
    }
    ctx->pc = 0x20C478u;
    {
        const bool branch_taken_0x20c478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C478u;
        // 0x20c47c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c478) {
            ctx->pc = 0x20C4FCu;
            goto label_20c4fc;
        }
    }
    ctx->pc = 0x20C480u;
label_20c480:
    // 0x20c480: 0xc073462  jal         func_1CD188
label_20c484:
    if (ctx->pc == 0x20C484u) {
        ctx->pc = 0x20C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C480u;
        // 0x20c484: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C488u;
        goto label_20c488;
    }
    ctx->pc = 0x20C480u;
    SET_GPR_U32(ctx, 31, 0x20C488u);
    ctx->pc = 0x20C484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C480u;
    // 0x20c484: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x20C480u, 0x20C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C488u;
label_20c488:
    // 0x20c488: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x20c488u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_20c48c:
    // 0x20c48c: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x20c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_20c490:
    // 0x20c490: 0x261092c0  addiu       $s0, $s0, -0x6D40
    ctx->pc = 0x20c490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939328));
label_20c494:
    // 0x20c494: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x20c494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_20c498:
    // 0x20c498: 0xc139138  jal         func_4E44E0
label_20c49c:
    if (ctx->pc == 0x20C49Cu) {
        ctx->pc = 0x20C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C498u;
        // 0x20c49c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C4A0u;
        goto label_20c4a0;
    }
    ctx->pc = 0x20C498u;
    SET_GPR_U32(ctx, 31, 0x20C4A0u);
    ctx->pc = 0x20C49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C498u;
    // 0x20c49c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x20C498u, 0x20C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4A0u;
label_20c4a0:
    // 0x20c4a0: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x20c4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_20c4a4:
    // 0x20c4a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c4a8:
    // 0x20c4a8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20c4a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20c4ac:
    // 0x20c4ac: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20c4b0:
    // 0x20c4b0: 0x60f809  jalr        $v1
label_20c4b4:
    if (ctx->pc == 0x20C4B4u) {
        ctx->pc = 0x20C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4B0u;
        // 0x20c4b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C4B8u;
        goto label_20c4b8;
    }
    ctx->pc = 0x20C4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C4B8u);
        ctx->pc = 0x20C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4B0u;
        // 0x20c4b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C4B0u, 0x20C4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C4B8u;
label_20c4b8:
    // 0x20c4b8: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x20c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_20c4bc:
    // 0x20c4bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c4c0:
    // 0x20c4c0: 0xc139fe8  jal         func_4E7FA0
label_20c4c4:
    if (ctx->pc == 0x20C4C4u) {
        ctx->pc = 0x20C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4C0u;
        // 0x20c4c4: 0x24060093  addiu       $a2, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C4C8u;
        goto label_20c4c8;
    }
    ctx->pc = 0x20C4C0u;
    SET_GPR_U32(ctx, 31, 0x20C4C8u);
    ctx->pc = 0x20C4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4C0u;
    // 0x20c4c4: 0x24060093  addiu       $a2, $zero, 0x93 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x20C4C0u, 0x20C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4C8u;
label_20c4c8:
    // 0x20c4c8: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x20c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20c4cc:
    // 0x20c4cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c4d0:
    // 0x20c4d0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20c4d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20c4d4:
    // 0x20c4d4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20c4d8:
    // 0x20c4d8: 0x60f809  jalr        $v1
label_20c4dc:
    if (ctx->pc == 0x20C4DCu) {
        ctx->pc = 0x20C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4D8u;
        // 0x20c4dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C4E0u;
        goto label_20c4e0;
    }
    ctx->pc = 0x20C4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C4E0u);
        ctx->pc = 0x20C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4D8u;
        // 0x20c4dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C4D8u, 0x20C4E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C4E0u;
label_20c4e0:
    // 0x20c4e0: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x20c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20c4e4:
    // 0x20c4e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c4e8:
    // 0x20c4e8: 0xc139fc8  jal         func_4E7F20
label_20c4ec:
    if (ctx->pc == 0x20C4ECu) {
        ctx->pc = 0x20C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4E8u;
        // 0x20c4ec: 0x24060096  addiu       $a2, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C4F0u;
        goto label_20c4f0;
    }
    ctx->pc = 0x20C4E8u;
    SET_GPR_U32(ctx, 31, 0x20C4F0u);
    ctx->pc = 0x20C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4E8u;
    // 0x20c4ec: 0x24060096  addiu       $a2, $zero, 0x96 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x20C4E8u, 0x20C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4F0u;
label_20c4f0:
    // 0x20c4f0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x20c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_20c4f4:
    // 0x20c4f4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x20c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_20c4f8:
    // 0x20c4f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20c4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20c4fc:
    // 0x20c4fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20c4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c500:
    // 0x20c500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c504:
    // 0x20c504: 0x3e00008  jr          $ra
label_20c508:
    if (ctx->pc == 0x20C508u) {
        ctx->pc = 0x20C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C504u;
        // 0x20c508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C50Cu;
        goto label_20c50c;
    }
    ctx->pc = 0x20C504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C504u;
        // 0x20c508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C50Cu;
label_20c50c:
    // 0x20c50c: 0x0  nop
    ctx->pc = 0x20c50cu;
    // NOP
    ctx->pc = 0x20c510u;
}
