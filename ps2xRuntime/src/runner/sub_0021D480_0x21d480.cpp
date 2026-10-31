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

// Function: sub_0021D480
// Address: 0x21d480 - 0x21d530
void sub_0021D480_0x21d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D480_0x21d480");
#endif

    switch (ctx->pc) {
        case 0x21d480u: goto label_21d480;
        case 0x21d484u: goto label_21d484;
        case 0x21d488u: goto label_21d488;
        case 0x21d48cu: goto label_21d48c;
        case 0x21d490u: goto label_21d490;
        case 0x21d494u: goto label_21d494;
        case 0x21d498u: goto label_21d498;
        case 0x21d49cu: goto label_21d49c;
        case 0x21d4a0u: goto label_21d4a0;
        case 0x21d4a4u: goto label_21d4a4;
        case 0x21d4a8u: goto label_21d4a8;
        case 0x21d4acu: goto label_21d4ac;
        case 0x21d4b0u: goto label_21d4b0;
        case 0x21d4b4u: goto label_21d4b4;
        case 0x21d4b8u: goto label_21d4b8;
        case 0x21d4bcu: goto label_21d4bc;
        case 0x21d4c0u: goto label_21d4c0;
        case 0x21d4c4u: goto label_21d4c4;
        case 0x21d4c8u: goto label_21d4c8;
        case 0x21d4ccu: goto label_21d4cc;
        case 0x21d4d0u: goto label_21d4d0;
        case 0x21d4d4u: goto label_21d4d4;
        case 0x21d4d8u: goto label_21d4d8;
        case 0x21d4dcu: goto label_21d4dc;
        case 0x21d4e0u: goto label_21d4e0;
        case 0x21d4e4u: goto label_21d4e4;
        case 0x21d4e8u: goto label_21d4e8;
        case 0x21d4ecu: goto label_21d4ec;
        case 0x21d4f0u: goto label_21d4f0;
        case 0x21d4f4u: goto label_21d4f4;
        case 0x21d4f8u: goto label_21d4f8;
        case 0x21d4fcu: goto label_21d4fc;
        case 0x21d500u: goto label_21d500;
        case 0x21d504u: goto label_21d504;
        case 0x21d508u: goto label_21d508;
        case 0x21d50cu: goto label_21d50c;
        case 0x21d510u: goto label_21d510;
        case 0x21d514u: goto label_21d514;
        case 0x21d518u: goto label_21d518;
        case 0x21d51cu: goto label_21d51c;
        case 0x21d520u: goto label_21d520;
        case 0x21d524u: goto label_21d524;
        case 0x21d528u: goto label_21d528;
        case 0x21d52cu: goto label_21d52c;
        default: break;
    }

    ctx->pc = 0x21d480u;

label_21d480:
    // 0x21d480: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21d480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_21d484:
    // 0x21d484: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x21d484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_21d488:
    // 0x21d488: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x21d488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_21d48c:
    // 0x21d48c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21d490:
    // 0x21d490: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21d490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21d494:
    // 0x21d494: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x21d494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_21d498:
    // 0x21d498: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x21d498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_21d49c:
    // 0x21d49c: 0x262400e8  addiu       $a0, $s1, 0xE8
    ctx->pc = 0x21d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
label_21d4a0:
    // 0x21d4a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21d4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21d4a4:
    // 0x21d4a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21d4a8:
    // 0x21d4a8: 0xc0e130e  jal         func_384C38
label_21d4ac:
    if (ctx->pc == 0x21D4ACu) {
        ctx->pc = 0x21D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4A8u;
        // 0x21d4ac: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D4B0u;
        goto label_21d4b0;
    }
    ctx->pc = 0x21D4A8u;
    SET_GPR_U32(ctx, 31, 0x21D4B0u);
    ctx->pc = 0x21D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4A8u;
    // 0x21d4ac: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384C38u, 0x21D4A8u, 0x21D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4B0u;
label_21d4b0:
    // 0x21d4b0: 0x10540016  beq         $v0, $s4, . + 4 + (0x16 << 2)
label_21d4b4:
    if (ctx->pc == 0x21D4B4u) {
        ctx->pc = 0x21D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4B0u;
        // 0x21d4b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D4B8u;
        goto label_21d4b8;
    }
    ctx->pc = 0x21D4B0u;
    {
        const bool branch_taken_0x21d4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x21D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4B0u;
        // 0x21d4b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4b0) {
            ctx->pc = 0x21D50Cu;
            goto label_21d50c;
        }
    }
    ctx->pc = 0x21D4B8u;
label_21d4b8:
    // 0x21d4b8: 0xc087502  jal         func_21D408
label_21d4bc:
    if (ctx->pc == 0x21D4BCu) {
        ctx->pc = 0x21D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4B8u;
        // 0x21d4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D4C0u;
        goto label_21d4c0;
    }
    ctx->pc = 0x21D4B8u;
    SET_GPR_U32(ctx, 31, 0x21D4C0u);
    ctx->pc = 0x21D4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4B8u;
    // 0x21d4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x21D4B8u, 0x21D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4C0u;
label_21d4c0:
    // 0x21d4c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21d4c4:
    // 0x21d4c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21d4c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21d4c8:
    // 0x21d4c8: 0x8e70020c  lw          $s0, 0x20C($s3)
    ctx->pc = 0x21d4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
label_21d4cc:
    // 0x21d4cc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21d4ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_21d4d0:
    // 0x21d4d0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21d4d4:
    // 0x21d4d4: 0x40f809  jalr        $v0
label_21d4d8:
    if (ctx->pc == 0x21D4D8u) {
        ctx->pc = 0x21D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4D4u;
        // 0x21d4d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D4DCu;
        goto label_21d4dc;
    }
    ctx->pc = 0x21D4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D4DCu);
        ctx->pc = 0x21D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4D4u;
        // 0x21d4d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D4D4u, 0x21D4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D4DCu;
label_21d4dc:
    // 0x21d4dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_21d4e0:
    // 0x21d4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d4e4:
    // 0x21d4e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21d4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21d4e8:
    // 0x21d4e8: 0xc059308  jal         func_164C20
label_21d4ec:
    if (ctx->pc == 0x21D4ECu) {
        ctx->pc = 0x21D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4E8u;
        // 0x21d4ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D4F0u;
        goto label_21d4f0;
    }
    ctx->pc = 0x21D4E8u;
    SET_GPR_U32(ctx, 31, 0x21D4F0u);
    ctx->pc = 0x21D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4E8u;
    // 0x21d4ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C20u, 0x21D4E8u, 0x21D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4F0u;
label_21d4f0:
    // 0x21d4f0: 0x10540005  beq         $v0, $s4, . + 4 + (0x5 << 2)
label_21d4f4:
    if (ctx->pc == 0x21D4F4u) {
        ctx->pc = 0x21D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4F0u;
        // 0x21d4f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D4F8u;
        goto label_21d4f8;
    }
    ctx->pc = 0x21D4F0u;
    {
        const bool branch_taken_0x21d4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x21D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4F0u;
        // 0x21d4f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4f0) {
            ctx->pc = 0x21D508u;
            goto label_21d508;
        }
    }
    ctx->pc = 0x21D4F8u;
label_21d4f8:
    // 0x21d4f8: 0xc0a3e4a  jal         func_28F928
label_21d4fc:
    if (ctx->pc == 0x21D4FCu) {
        ctx->pc = 0x21D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4F8u;
        // 0x21d4fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D500u;
        goto label_21d500;
    }
    ctx->pc = 0x21D4F8u;
    SET_GPR_U32(ctx, 31, 0x21D500u);
    ctx->pc = 0x21D4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4F8u;
    // 0x21d4fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F928u, 0x21D4F8u, 0x21D500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D500u;
label_21d500:
    // 0x21d500: 0x10000003  b           . + 4 + (0x3 << 2)
label_21d504:
    if (ctx->pc == 0x21D504u) {
        ctx->pc = 0x21D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D500u;
        // 0x21d504: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D508u;
        goto label_21d508;
    }
    ctx->pc = 0x21D500u;
    {
        const bool branch_taken_0x21d500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D500u;
        // 0x21d504: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d500) {
            ctx->pc = 0x21D510u;
            goto label_21d510;
        }
    }
    ctx->pc = 0x21D508u;
label_21d508:
    // 0x21d508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d50c:
    // 0x21d50c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x21d50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21d510:
    // 0x21d510: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x21d510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21d514:
    // 0x21d514: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x21d514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21d518:
    // 0x21d518: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21d518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21d51c:
    // 0x21d51c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x21d51cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21d520:
    // 0x21d520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21d524:
    // 0x21d524: 0x3e00008  jr          $ra
label_21d528:
    if (ctx->pc == 0x21D528u) {
        ctx->pc = 0x21D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D524u;
        // 0x21d528: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D52Cu;
        goto label_21d52c;
    }
    ctx->pc = 0x21D524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D524u;
        // 0x21d528: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D52Cu;
label_21d52c:
    // 0x21d52c: 0x0  nop
    ctx->pc = 0x21d52cu;
    // NOP
    ctx->pc = 0x21d530u;
}
