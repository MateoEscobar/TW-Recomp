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

// Function: sub_004ED440
// Address: 0x4ed440 - 0x4ed4d8
void sub_004ED440_0x4ed440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED440_0x4ed440");
#endif

    switch (ctx->pc) {
        case 0x4ed440u: goto label_4ed440;
        case 0x4ed444u: goto label_4ed444;
        case 0x4ed448u: goto label_4ed448;
        case 0x4ed44cu: goto label_4ed44c;
        case 0x4ed450u: goto label_4ed450;
        case 0x4ed454u: goto label_4ed454;
        case 0x4ed458u: goto label_4ed458;
        case 0x4ed45cu: goto label_4ed45c;
        case 0x4ed460u: goto label_4ed460;
        case 0x4ed464u: goto label_4ed464;
        case 0x4ed468u: goto label_4ed468;
        case 0x4ed46cu: goto label_4ed46c;
        case 0x4ed470u: goto label_4ed470;
        case 0x4ed474u: goto label_4ed474;
        case 0x4ed478u: goto label_4ed478;
        case 0x4ed47cu: goto label_4ed47c;
        case 0x4ed480u: goto label_4ed480;
        case 0x4ed484u: goto label_4ed484;
        case 0x4ed488u: goto label_4ed488;
        case 0x4ed48cu: goto label_4ed48c;
        case 0x4ed490u: goto label_4ed490;
        case 0x4ed494u: goto label_4ed494;
        case 0x4ed498u: goto label_4ed498;
        case 0x4ed49cu: goto label_4ed49c;
        case 0x4ed4a0u: goto label_4ed4a0;
        case 0x4ed4a4u: goto label_4ed4a4;
        case 0x4ed4a8u: goto label_4ed4a8;
        case 0x4ed4acu: goto label_4ed4ac;
        case 0x4ed4b0u: goto label_4ed4b0;
        case 0x4ed4b4u: goto label_4ed4b4;
        case 0x4ed4b8u: goto label_4ed4b8;
        case 0x4ed4bcu: goto label_4ed4bc;
        case 0x4ed4c0u: goto label_4ed4c0;
        case 0x4ed4c4u: goto label_4ed4c4;
        case 0x4ed4c8u: goto label_4ed4c8;
        case 0x4ed4ccu: goto label_4ed4cc;
        case 0x4ed4d0u: goto label_4ed4d0;
        case 0x4ed4d4u: goto label_4ed4d4;
        default: break;
    }

    ctx->pc = 0x4ed440u;

label_4ed440:
    // 0x4ed440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ed440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ed444:
    // 0x4ed444: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ed444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ed448:
    // 0x4ed448: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ed448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ed44c:
    // 0x4ed44c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ed44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ed450:
    // 0x4ed450: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ed450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ed454:
    // 0x4ed454: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ed454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ed458:
    // 0x4ed458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ed45c:
    // 0x4ed45c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_4ed460:
    if (ctx->pc == 0x4ED460u) {
        ctx->pc = 0x4ED460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED45Cu;
        // 0x4ed460: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED464u;
        goto label_4ed464;
    }
    ctx->pc = 0x4ED45Cu;
    {
        const bool branch_taken_0x4ed45c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED45Cu;
        // 0x4ed460: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed45c) {
            ctx->pc = 0x4ED4BCu;
            goto label_4ed4bc;
        }
    }
    ctx->pc = 0x4ED464u;
label_4ed464:
    // 0x4ed464: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4ed464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4ed468:
    // 0x4ed468: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4ed46c:
    if (ctx->pc == 0x4ED46Cu) {
        ctx->pc = 0x4ED46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED468u;
        // 0x4ed46c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED470u;
        goto label_4ed470;
    }
    ctx->pc = 0x4ED468u;
    {
        const bool branch_taken_0x4ed468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED468u;
        // 0x4ed46c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed468) {
            ctx->pc = 0x4ED494u;
            goto label_4ed494;
        }
    }
    ctx->pc = 0x4ED470u;
label_4ed470:
    // 0x4ed470: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x4ed470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_4ed474:
    // 0x4ed474: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4ed474u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4ed478:
    // 0x4ed478: 0x24c6a0e8  addiu       $a2, $a2, -0x5F18
    ctx->pc = 0x4ed478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942952));
label_4ed47c:
    // 0x4ed47c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4ed47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4ed480:
    // 0x4ed480: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ed480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ed484:
    // 0x4ed484: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ed484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ed488:
    // 0x4ed488: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ed488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ed48c:
    // 0x4ed48c: 0x60f809  jalr        $v1
label_4ed490:
    if (ctx->pc == 0x4ED490u) {
        ctx->pc = 0x4ED490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED48Cu;
        // 0x4ed490: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED494u;
        goto label_4ed494;
    }
    ctx->pc = 0x4ED48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4ED494u);
        ctx->pc = 0x4ED490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED48Cu;
        // 0x4ed490: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED48Cu, 0x4ED494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4ED494u;
label_4ed494:
    // 0x4ed494: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ed494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ed498:
    // 0x4ed498: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ed498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ed49c:
    // 0x4ed49c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ed49cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ed4a0:
    // 0x4ed4a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ed4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ed4a4:
    // 0x4ed4a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ed4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ed4a8:
    // 0x4ed4a8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ed4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ed4ac:
    // 0x4ed4ac: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ed4acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ed4b0:
    // 0x4ed4b0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ed4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ed4b4:
    // 0x4ed4b4: 0x60f809  jalr        $v1
label_4ed4b8:
    if (ctx->pc == 0x4ED4B8u) {
        ctx->pc = 0x4ED4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED4B4u;
        // 0x4ed4b8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED4BCu;
        goto label_4ed4bc;
    }
    ctx->pc = 0x4ED4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4ED4BCu);
        ctx->pc = 0x4ED4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED4B4u;
        // 0x4ed4b8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED4B4u, 0x4ED4BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4ED4BCu;
label_4ed4bc:
    // 0x4ed4bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ed4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ed4c0:
    // 0x4ed4c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ed4c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ed4c4:
    // 0x4ed4c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ed4c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ed4c8:
    // 0x4ed4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ed4cc:
    // 0x4ed4cc: 0x3e00008  jr          $ra
label_4ed4d0:
    if (ctx->pc == 0x4ED4D0u) {
        ctx->pc = 0x4ED4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED4CCu;
        // 0x4ed4d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED4D4u;
        goto label_4ed4d4;
    }
    ctx->pc = 0x4ED4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED4CCu;
        // 0x4ed4d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED4D4u;
label_4ed4d4:
    // 0x4ed4d4: 0x0  nop
    ctx->pc = 0x4ed4d4u;
    // NOP
    ctx->pc = 0x4ed4d8u;
}
