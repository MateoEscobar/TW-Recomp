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

// Function: sub_004B4758
// Address: 0x4b4758 - 0x4b4888
void sub_004B4758_0x4b4758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4758_0x4b4758");
#endif

    switch (ctx->pc) {
        case 0x4b4798u: goto label_4b4798;
        default: break;
    }

    ctx->pc = 0x4b4758u;

    // 0x4b4758: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b4758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4b475c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x4b475cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x4b4760: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4b4760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4b4764: 0x24930014  addiu       $s3, $a0, 0x14
    ctx->pc = 0x4b4764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4b4768: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b4768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b476c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4b476cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4b4770: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b4770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4774: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4b4774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4b4778: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4b4778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4b477c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4b477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4b4780: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b4780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b4784: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x4b4784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4b4788: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x4b4788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x4b478c: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x4b478cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b4790: 0xc12cfc6  jal         func_4B3F18
    ctx->pc = 0x4B4790u;
    SET_GPR_U32(ctx, 31, 0x4B4798u);
    ctx->pc = 0x4B4794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4790u;
    // 0x4b4794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3F18u, 0x4B4790u, 0x4B4798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4798u;
label_4b4798:
    // 0x4b4798: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4b4798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b479c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4b479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4b47a0: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x4b47a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x4b47a4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4b47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4b47a8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B47A8u;
    {
        const bool branch_taken_0x4b47a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B47ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B47A8u;
        // 0x4b47ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b47a8) {
            ctx->pc = 0x4B47F0u;
            goto label_4b47f0;
        }
    }
    ctx->pc = 0x4B47B0u;
    // 0x4b47b0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4b47b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4b47b4: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x4b47b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x4b47b8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4b47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4b47bc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4b47bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4b47c0: 0x521006  srlv        $v0, $s2, $v0
    ctx->pc = 0x4b47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b47c4: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x4b47c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4b47c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B47C8u;
    {
        const bool branch_taken_0x4b47c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B47C8u;
        // 0x4b47cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b47c8) {
            ctx->pc = 0x4B47D4u;
            goto label_4b47d4;
        }
    }
    ctx->pc = 0x4B47D0u;
    // 0x4b47d0: 0x8e27fffc  lw          $a3, -0x4($s1)
    ctx->pc = 0x4b47d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_4b47d4:
    // 0x4b47d4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4b47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4b47d8: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x4b47d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x4b47dc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4b47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4b47e0: 0x721804  sllv        $v1, $s2, $v1
    ctx->pc = 0x4b47e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
    // 0x4b47e4: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x4b47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b47e8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4B47E8u;
    {
        const bool branch_taken_0x4b47e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B47E8u;
        // 0x4b47ec: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b47e8) {
            ctx->pc = 0x4B4854u;
            goto label_4b4854;
        }
    }
    ctx->pc = 0x4B47F0u;
label_4b47f0:
    // 0x4b47f0: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x4b47f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4b47f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B47F4u;
    {
        const bool branch_taken_0x4b47f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B47F4u;
        // 0x4b47f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b47f4) {
            ctx->pc = 0x4B4804u;
            goto label_4b4804;
        }
    }
    ctx->pc = 0x4B47FCu;
    // 0x4b47fc: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x4b47fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x4b4800: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4b4800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4b4804:
    // 0x4b4804: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x4b4804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x4b4808: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x4B4808u;
    {
        const bool branch_taken_0x4b4808 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4808u;
        // 0x4b480c: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4808) {
            ctx->pc = 0x4B4848u;
            goto label_4b4848;
        }
    }
    ctx->pc = 0x4B4810u;
    // 0x4b4810: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x4b4810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x4b4814: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x4b4814u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b4818: 0xd22804  sllv        $a1, $s2, $a2
    ctx->pc = 0x4b4818u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 6) & 0x1F));
    // 0x4b481c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4b481cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4b4820: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4b4820u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4b4824: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x4b4824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4b4828: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B4828u;
    {
        const bool branch_taken_0x4b4828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4828u;
        // 0x4b482c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4828) {
            ctx->pc = 0x4B4834u;
            goto label_4b4834;
        }
    }
    ctx->pc = 0x4B4830u;
    // 0x4b4830: 0x8e32fffc  lw          $s2, -0x4($s1)
    ctx->pc = 0x4b4830u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_4b4834:
    // 0x4b4834: 0x61023  negu        $v0, $a2
    ctx->pc = 0x4b4834u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4b4838: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x4b4838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x4b483c: 0x521006  srlv        $v0, $s2, $v0
    ctx->pc = 0x4b483cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b4840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4840u;
    {
        const bool branch_taken_0x4b4840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4840u;
        // 0x4b4844: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4840) {
            ctx->pc = 0x4B4854u;
            goto label_4b4854;
        }
    }
    ctx->pc = 0x4B4848u;
label_4b4848:
    // 0x4b4848: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x4b4848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x4b484c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x4b484cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4850: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x4b4850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_4b4854:
    // 0x4b4854: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4b4854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b4858: 0x4a03c  dsll32      $s4, $a0, 0
    ctx->pc = 0x4b4858u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4b485c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4b485cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x4b4860: 0x2831025  or          $v0, $s4, $v1
    ctx->pc = 0x4b4860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
    // 0x4b4864: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4b4864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b4868: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4b4868u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b486c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x4b486cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b4870: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4b4870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b4874: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4b4874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b4878: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b4878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b487c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B487Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B487Cu;
        // 0x4b4880: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B487Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4884u;
    // 0x4b4884: 0x0  nop
    ctx->pc = 0x4b4884u;
    // NOP
    ctx->pc = 0x4b4888u;
}
