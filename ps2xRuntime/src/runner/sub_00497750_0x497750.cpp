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

// Function: sub_00497750
// Address: 0x497750 - 0x497880
void sub_00497750_0x497750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497750_0x497750");
#endif

    ctx->pc = 0x497750u;

    // 0x497750: 0x8f828744  lw          $v0, -0x78BC($gp)
    ctx->pc = 0x497750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936388)));
    // 0x497754: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x497754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x497758: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x497758u;
    {
        const bool branch_taken_0x497758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497758u;
        // 0x49775c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497758) {
            ctx->pc = 0x497770u;
            goto label_497770;
        }
    }
    ctx->pc = 0x497760u;
    // 0x497760: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x497760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x497764: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x497764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x497768: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x497768u;
    {
        const bool branch_taken_0x497768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497768u;
        // 0x49776c: 0x246a0088  addiu       $t2, $v1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497768) {
            ctx->pc = 0x497780u;
            goto label_497780;
        }
    }
    ctx->pc = 0x497770u;
label_497770:
    // 0x497770: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x497770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x497774: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x497774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x497778: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x497778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x49777c: 0x246a0098  addiu       $t2, $v1, 0x98
    ctx->pc = 0x49777cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
label_497780:
    // 0x497780: 0x8f838728  lw          $v1, -0x78D8($gp)
    ctx->pc = 0x497780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
    // 0x497784: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x497784u;
    {
        const bool branch_taken_0x497784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x497788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497784u;
        // 0x497788: 0x8f828a20  lw          $v0, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497784) {
            ctx->pc = 0x4977FCu;
            goto label_4977fc;
        }
    }
    ctx->pc = 0x49778Cu;
    // 0x49778c: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x49778cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x497790: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x497790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x497794: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x497794u;
    {
        const bool branch_taken_0x497794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x497794) {
            ctx->pc = 0x497798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x497794u;
            // 0x497798: 0x8f828728  lw          $v0, -0x78D8($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4977A8u;
            goto label_4977a8;
        }
    }
    ctx->pc = 0x49779Cu;
    // 0x49779c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x49779cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4977a0: 0xad200058  sw          $zero, 0x58($t1)
    ctx->pc = 0x4977a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 0));
    // 0x4977a4: 0x8f828728  lw          $v0, -0x78D8($gp)
    ctx->pc = 0x4977a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
label_4977a8:
    // 0x4977a8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4977a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4977ac: 0x3c06fff8  lui         $a2, 0xFFF8
    ctx->pc = 0x4977acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65528 << 16));
    // 0x4977b0: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x4977b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x4977b4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4977b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4977b8: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x4977b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
    // 0x4977bc: 0xad240058  sw          $a0, 0x58($t1)
    ctx->pc = 0x4977bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 4));
    // 0x4977c0: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x4977c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4977c4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4977c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4977c8: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x4977c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x4977cc: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x4977ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x4977d0: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x4977d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x4977d4: 0x30473fff  andi        $a3, $v0, 0x3FFF
    ctx->pc = 0x4977d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4977d8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4977d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4977dc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4977dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4977e0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4977e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4977e4: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4977e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4977e8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4977e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4977ec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4977ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4977f0: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x4977f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x4977f4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4977f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4977f8: 0xad24000c  sw          $a0, 0xC($t1)
    ctx->pc = 0x4977f8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 4));
label_4977fc:
    // 0x4977fc: 0x8f83872c  lw          $v1, -0x78D4($gp)
    ctx->pc = 0x4977fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x497800: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x497800u;
    {
        const bool branch_taken_0x497800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x497804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497800u;
        // 0x497804: 0x8f828a20  lw          $v0, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497800) {
            ctx->pc = 0x497878u;
            goto label_497878;
        }
    }
    ctx->pc = 0x497808u;
    // 0x497808: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x497808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49780c: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x49780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x497810: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x497810u;
    {
        const bool branch_taken_0x497810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x497810) {
            ctx->pc = 0x497814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x497810u;
            // 0x497814: 0x8f82872c  lw          $v0, -0x78D4($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x497824u;
            goto label_497824;
        }
    }
    ctx->pc = 0x497818u;
    // 0x497818: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x497818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x49781c: 0xad200058  sw          $zero, 0x58($t1)
    ctx->pc = 0x49781cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 0));
    // 0x497820: 0x8f82872c  lw          $v0, -0x78D4($gp)
    ctx->pc = 0x497820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936364)));
label_497824:
    // 0x497824: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x497824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x497828: 0x3c06fff8  lui         $a2, 0xFFF8
    ctx->pc = 0x497828u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65528 << 16));
    // 0x49782c: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x49782cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x497830: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x497830u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x497834: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x497834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
    // 0x497838: 0xad2a0058  sw          $t2, 0x58($t1)
    ctx->pc = 0x497838u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 10));
    // 0x49783c: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x49783cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x497840: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x497840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x497844: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x497844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x497848: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x497848u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x49784c: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x49784cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x497850: 0x30473fff  andi        $a3, $v0, 0x3FFF
    ctx->pc = 0x497850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x497854: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x497854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x497858: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x497858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x49785c: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x49785cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x497860: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x497860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x497864: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x497864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x497868: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x497868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x49786c: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x49786cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x497870: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x497870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x497874: 0xad24000c  sw          $a0, 0xC($t1)
    ctx->pc = 0x497874u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 4));
label_497878:
    // 0x497878: 0x3e00008  jr          $ra
    ctx->pc = 0x497878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497880u;
}
