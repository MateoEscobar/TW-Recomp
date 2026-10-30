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

// Function: sub_00231590
// Address: 0x231590 - 0x231a38
void sub_00231590_0x231590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231590_0x231590");
#endif

    switch (ctx->pc) {
        case 0x2315b4u: goto label_2315b4;
        case 0x231618u: goto label_231618;
        case 0x23167cu: goto label_23167c;
        case 0x231708u: goto label_231708;
        case 0x231718u: goto label_231718;
        case 0x23173cu: goto label_23173c;
        case 0x231774u: goto label_231774;
        case 0x2317d0u: goto label_2317d0;
        case 0x2317e0u: goto label_2317e0;
        case 0x231810u: goto label_231810;
        case 0x231820u: goto label_231820;
        case 0x23183cu: goto label_23183c;
        case 0x23184cu: goto label_23184c;
        case 0x231874u: goto label_231874;
        case 0x231894u: goto label_231894;
        case 0x2318a4u: goto label_2318a4;
        case 0x2318c0u: goto label_2318c0;
        case 0x2318e0u: goto label_2318e0;
        case 0x2318f0u: goto label_2318f0;
        case 0x231928u: goto label_231928;
        case 0x231938u: goto label_231938;
        case 0x231974u: goto label_231974;
        case 0x231984u: goto label_231984;
        case 0x2319a0u: goto label_2319a0;
        case 0x2319b0u: goto label_2319b0;
        case 0x2319ccu: goto label_2319cc;
        case 0x231a00u: goto label_231a00;
        case 0x231a18u: goto label_231a18;
        default: break;
    }

    ctx->pc = 0x231590u;

    // 0x231590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x231590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x231594: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x231594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x231598: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x231598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23159c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23159cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2315a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2315a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2315a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2315a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2315a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2315a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2315ac: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2315ACu;
    SET_GPR_U32(ctx, 31, 0x2315B4u);
    ctx->pc = 0x2315B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2315ACu;
    // 0x2315b0: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2315ACu, 0x2315B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315B4u;
label_2315b4:
    // 0x2315b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2315b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2315b8: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2315B8u;
    {
        const bool branch_taken_0x2315b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2315BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315B8u;
        // 0x2315bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315b8) {
            ctx->pc = 0x231610u;
            goto label_231610;
        }
    }
    ctx->pc = 0x2315C0u;
    // 0x2315c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2315c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2315c4: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2315C4u;
    {
        const bool branch_taken_0x2315c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2315C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315C4u;
        // 0x2315c8: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315c4) {
            ctx->pc = 0x2315FCu;
            goto label_2315fc;
        }
    }
    ctx->pc = 0x2315CCu;
    // 0x2315cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2315CCu;
    {
        const bool branch_taken_0x2315cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315CCu;
        // 0x2315d0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315cc) {
            ctx->pc = 0x2315E4u;
            goto label_2315e4;
        }
    }
    ctx->pc = 0x2315D4u;
    // 0x2315d4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2315D4u;
    {
        const bool branch_taken_0x2315d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315D4u;
        // 0x2315d8: 0x2e22002d  sltiu       $v0, $s1, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315d4) {
            ctx->pc = 0x2315F4u;
            goto label_2315f4;
        }
    }
    ctx->pc = 0x2315DCu;
    // 0x2315dc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2315DCu;
    {
        const bool branch_taken_0x2315dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2315dc) {
            ctx->pc = 0x2316DCu;
            goto label_2316dc;
        }
    }
    ctx->pc = 0x2315E4u;
label_2315e4:
    // 0x2315e4: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2315E4u;
    {
        const bool branch_taken_0x2315e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2315E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315E4u;
        // 0x2315e8: 0x2e22002d  sltiu       $v0, $s1, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315e4) {
            ctx->pc = 0x231604u;
            goto label_231604;
        }
    }
    ctx->pc = 0x2315ECu;
    // 0x2315ec: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2315ECu;
    {
        const bool branch_taken_0x2315ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2315ec) {
            ctx->pc = 0x2316DCu;
            goto label_2316dc;
        }
    }
    ctx->pc = 0x2315F4u;
label_2315f4:
    // 0x2315f4: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x2315F4u;
    {
        const bool branch_taken_0x2315f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315F4u;
        // 0x2315f8: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315f4) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x2315FCu;
label_2315fc:
    // 0x2315fc: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x2315FCu;
    {
        const bool branch_taken_0x2315fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315FCu;
        // 0x231600: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315fc) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x231604u;
label_231604:
    // 0x231604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231608: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x231608u;
    {
        const bool branch_taken_0x231608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231608u;
        // 0x23160c: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231608) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x231610u;
label_231610:
    // 0x231610: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x231610u;
    SET_GPR_U32(ctx, 31, 0x231618u);
    ctx->pc = 0x231614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231610u;
    // 0x231614: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x231610u, 0x231618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231618u;
label_231618:
    // 0x231618: 0x14520016  bne         $v0, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x231618u;
    {
        const bool branch_taken_0x231618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x23161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231618u;
        // 0x23161c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231618) {
            ctx->pc = 0x231674u;
            goto label_231674;
        }
    }
    ctx->pc = 0x231620u;
    // 0x231620: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x231620u;
    {
        const bool branch_taken_0x231620 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x231624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231620u;
        // 0x231624: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231620) {
            ctx->pc = 0x23165Cu;
            goto label_23165c;
        }
    }
    ctx->pc = 0x231628u;
    // 0x231628: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231628u;
    {
        const bool branch_taken_0x231628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231628u;
        // 0x23162c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231628) {
            ctx->pc = 0x231640u;
            goto label_231640;
        }
    }
    ctx->pc = 0x231630u;
    // 0x231630: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x231630u;
    {
        const bool branch_taken_0x231630 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x231634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231630u;
        // 0x231634: 0x2e22002d  sltiu       $v0, $s1, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231630) {
            ctx->pc = 0x231650u;
            goto label_231650;
        }
    }
    ctx->pc = 0x231638u;
    // 0x231638: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x231638u;
    {
        const bool branch_taken_0x231638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231638) {
            ctx->pc = 0x2316DCu;
            goto label_2316dc;
        }
    }
    ctx->pc = 0x231640u;
label_231640:
    // 0x231640: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x231640u;
    {
        const bool branch_taken_0x231640 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x231644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231640u;
        // 0x231644: 0x2e22002d  sltiu       $v0, $s1, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231640) {
            ctx->pc = 0x231668u;
            goto label_231668;
        }
    }
    ctx->pc = 0x231648u;
    // 0x231648: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x231648u;
    {
        const bool branch_taken_0x231648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231648) {
            ctx->pc = 0x2316DCu;
            goto label_2316dc;
        }
    }
    ctx->pc = 0x231650u;
label_231650:
    // 0x231650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231654: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x231654u;
    {
        const bool branch_taken_0x231654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231654u;
        // 0x231658: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231654) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x23165Cu;
label_23165c:
    // 0x23165c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231660: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x231660u;
    {
        const bool branch_taken_0x231660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231660u;
        // 0x231664: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231660) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x231668u;
label_231668:
    // 0x231668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23166c: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x23166Cu;
    {
        const bool branch_taken_0x23166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23166Cu;
        // 0x231670: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23166c) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x231674u;
label_231674:
    // 0x231674: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x231674u;
    SET_GPR_U32(ctx, 31, 0x23167Cu);
    ctx->pc = 0x231678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231674u;
    // 0x231678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x231674u, 0x23167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23167Cu;
label_23167c:
    // 0x23167c: 0x14520017  bne         $v0, $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x23167Cu;
    {
        const bool branch_taken_0x23167c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x231680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23167Cu;
        // 0x231680: 0x2e22002d  sltiu       $v0, $s1, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23167c) {
            ctx->pc = 0x2316DCu;
            goto label_2316dc;
        }
    }
    ctx->pc = 0x231684u;
    // 0x231684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231688: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x231688u;
    {
        const bool branch_taken_0x231688 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231688u;
        // 0x23168c: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231688) {
            ctx->pc = 0x2316C4u;
            goto label_2316c4;
        }
    }
    ctx->pc = 0x231690u;
    // 0x231690: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231690u;
    {
        const bool branch_taken_0x231690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231690u;
        // 0x231694: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231690) {
            ctx->pc = 0x2316A8u;
            goto label_2316a8;
        }
    }
    ctx->pc = 0x231698u;
    // 0x231698: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x231698u;
    {
        const bool branch_taken_0x231698 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231698u;
        // 0x23169c: 0x2e22002d  sltiu       $v0, $s1, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231698) {
            ctx->pc = 0x2316B8u;
            goto label_2316b8;
        }
    }
    ctx->pc = 0x2316A0u;
    // 0x2316a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2316A0u;
    {
        const bool branch_taken_0x2316a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2316a0) {
            ctx->pc = 0x2316DCu;
            goto label_2316dc;
        }
    }
    ctx->pc = 0x2316A8u;
label_2316a8:
    // 0x2316a8: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2316A8u;
    {
        const bool branch_taken_0x2316a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2316ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316A8u;
        // 0x2316ac: 0x2e22002d  sltiu       $v0, $s1, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316a8) {
            ctx->pc = 0x2316D0u;
            goto label_2316d0;
        }
    }
    ctx->pc = 0x2316B0u;
    // 0x2316b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2316B0u;
    {
        const bool branch_taken_0x2316b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2316b0) {
            ctx->pc = 0x2316DCu;
            goto label_2316dc;
        }
    }
    ctx->pc = 0x2316B8u;
label_2316b8:
    // 0x2316b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2316b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316bc: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x2316BCu;
    {
        const bool branch_taken_0x2316bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2316C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316BCu;
        // 0x2316c0: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316bc) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x2316C4u;
label_2316c4:
    // 0x2316c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2316c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316c8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2316C8u;
    {
        const bool branch_taken_0x2316c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2316CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316C8u;
        // 0x2316cc: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316c8) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x2316D0u;
label_2316d0:
    // 0x2316d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2316d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316d4: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2316D4u;
    {
        const bool branch_taken_0x2316d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2316D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316D4u;
        // 0x2316d8: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316d4) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x2316DCu;
label_2316dc:
    // 0x2316dc: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2316DCu;
    {
        const bool branch_taken_0x2316dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2316E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316DCu;
        // 0x2316e0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316dc) {
            ctx->pc = 0x2319ECu;
            goto label_2319ec;
        }
    }
    ctx->pc = 0x2316E4u;
    // 0x2316e4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2316e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2316e8: 0x2442c2e0  addiu       $v0, $v0, -0x3D20
    ctx->pc = 0x2316e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951648));
    // 0x2316ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2316ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2316f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2316f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2316f4: 0x800008  jr          $a0
    ctx->pc = 0x2316F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2316FCu: goto label_2316fc;
            case 0x23172Cu: goto label_23172c;
            case 0x231734u: goto label_231734;
            case 0x23174Cu: goto label_23174c;
            case 0x231754u: goto label_231754;
            case 0x23175Cu: goto label_23175c;
            case 0x231764u: goto label_231764;
            case 0x23176Cu: goto label_23176c;
            case 0x231784u: goto label_231784;
            case 0x23178Cu: goto label_23178c;
            case 0x231794u: goto label_231794;
            case 0x23179Cu: goto label_23179c;
            case 0x2317A4u: goto label_2317a4;
            case 0x2317ACu: goto label_2317ac;
            case 0x2317B4u: goto label_2317b4;
            case 0x2317BCu: goto label_2317bc;
            case 0x2317C4u: goto label_2317c4;
            case 0x2317F4u: goto label_2317f4;
            case 0x231804u: goto label_231804;
            case 0x231830u: goto label_231830;
            case 0x23185Cu: goto label_23185c;
            case 0x23186Cu: goto label_23186c;
            case 0x2318B8u: goto label_2318b8;
            case 0x231904u: goto label_231904;
            case 0x23190Cu: goto label_23190c;
            case 0x231914u: goto label_231914;
            case 0x23191Cu: goto label_23191c;
            case 0x23194Cu: goto label_23194c;
            case 0x231958u: goto label_231958;
            case 0x231960u: goto label_231960;
            case 0x231968u: goto label_231968;
            case 0x231994u: goto label_231994;
            case 0x2319C0u: goto label_2319c0;
            case 0x2319D4u: goto label_2319d4;
            case 0x2319DCu: goto label_2319dc;
            case 0x2319E4u: goto label_2319e4;
            case 0x2319ECu: goto label_2319ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2316F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2316FCu;
label_2316fc:
    // 0x2316fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2316fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231700: 0xc040680  jal         func_101A00
    ctx->pc = 0x231700u;
    SET_GPR_U32(ctx, 31, 0x231708u);
    ctx->pc = 0x231704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231700u;
    // 0x231704: 0x240501d2  addiu       $a1, $zero, 0x1D2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x231700u, 0x231708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231708u;
label_231708:
    // 0x231708: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x231708u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x23170c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23170cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231710: 0xc040680  jal         func_101A00
    ctx->pc = 0x231710u;
    SET_GPR_U32(ctx, 31, 0x231718u);
    ctx->pc = 0x231714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231710u;
    // 0x231714: 0x240501d3  addiu       $a1, $zero, 0x1D3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x231710u, 0x231718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231718u;
label_231718:
    // 0x231718: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x231718u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x23171c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x23171cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x231720: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231724: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x231724u;
    {
        const bool branch_taken_0x231724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231724u;
        // 0x231728: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231724) {
            ctx->pc = 0x231A10u;
            goto label_231a10;
        }
    }
    ctx->pc = 0x23172Cu;
label_23172c:
    // 0x23172c: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x23172Cu;
    {
        const bool branch_taken_0x23172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23172Cu;
        // 0x231730: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23172c) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x231734u;
label_231734:
    // 0x231734: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x231734u;
    SET_GPR_U32(ctx, 31, 0x23173Cu);
    ctx->pc = 0x231738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231734u;
    // 0x231738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x231734u, 0x23173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23173Cu;
label_23173c:
    // 0x23173c: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x23173Cu;
    {
        const bool branch_taken_0x23173c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23173Cu;
        // 0x231740: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23173c) {
            ctx->pc = 0x231A18u;
            goto label_231a18;
        }
    }
    ctx->pc = 0x231744u;
    // 0x231744: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x231744u;
    {
        const bool branch_taken_0x231744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231744u;
        // 0x231748: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231744) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x23174Cu;
label_23174c:
    // 0x23174c: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x23174Cu;
    {
        const bool branch_taken_0x23174c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23174Cu;
        // 0x231750: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23174c) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x231754u;
label_231754:
    // 0x231754: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x231754u;
    {
        const bool branch_taken_0x231754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231754u;
        // 0x231758: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231754) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x23175Cu;
label_23175c:
    // 0x23175c: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x23175Cu;
    {
        const bool branch_taken_0x23175c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23175Cu;
        // 0x231760: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23175c) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x231764u;
label_231764:
    // 0x231764: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x231764u;
    {
        const bool branch_taken_0x231764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231764u;
        // 0x231768: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231764) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x23176Cu;
label_23176c:
    // 0x23176c: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x23176Cu;
    SET_GPR_U32(ctx, 31, 0x231774u);
    ctx->pc = 0x231770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23176Cu;
    // 0x231770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x23176Cu, 0x231774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231774u;
label_231774:
    // 0x231774: 0x144000a8  bnez        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x231774u;
    {
        const bool branch_taken_0x231774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231774u;
        // 0x231778: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231774) {
            ctx->pc = 0x231A18u;
            goto label_231a18;
        }
    }
    ctx->pc = 0x23177Cu;
    // 0x23177c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x23177Cu;
    {
        const bool branch_taken_0x23177c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23177Cu;
        // 0x231780: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23177c) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x231784u;
label_231784:
    // 0x231784: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x231784u;
    {
        const bool branch_taken_0x231784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231784u;
        // 0x231788: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231784) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x23178Cu;
label_23178c:
    // 0x23178c: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x23178Cu;
    {
        const bool branch_taken_0x23178c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23178Cu;
        // 0x231790: 0x240500c1  addiu       $a1, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23178c) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x231794u;
label_231794:
    // 0x231794: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x231794u;
    {
        const bool branch_taken_0x231794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231794u;
        // 0x231798: 0x240500c2  addiu       $a1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231794) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x23179Cu;
label_23179c:
    // 0x23179c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x23179Cu;
    {
        const bool branch_taken_0x23179c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2317A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23179Cu;
        // 0x2317a0: 0x240500ed  addiu       $a1, $zero, 0xED (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23179c) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x2317A4u;
label_2317a4:
    // 0x2317a4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2317A4u;
    {
        const bool branch_taken_0x2317a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2317A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317A4u;
        // 0x2317a8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317a4) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x2317ACu;
label_2317ac:
    // 0x2317ac: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2317ACu;
    {
        const bool branch_taken_0x2317ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2317B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317ACu;
        // 0x2317b0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317ac) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x2317B4u;
label_2317b4:
    // 0x2317b4: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2317B4u;
    {
        const bool branch_taken_0x2317b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2317B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317B4u;
        // 0x2317b8: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317b4) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x2317BCu;
label_2317bc:
    // 0x2317bc: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2317BCu;
    {
        const bool branch_taken_0x2317bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2317C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317BCu;
        // 0x2317c0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317bc) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x2317C4u;
label_2317c4:
    // 0x2317c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2317c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317c8: 0xc040680  jal         func_101A00
    ctx->pc = 0x2317C8u;
    SET_GPR_U32(ctx, 31, 0x2317D0u);
    ctx->pc = 0x2317CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317C8u;
    // 0x2317cc: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2317C8u, 0x2317D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317D0u;
label_2317d0:
    // 0x2317d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2317d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2317d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2317d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317d8: 0xc040680  jal         func_101A00
    ctx->pc = 0x2317D8u;
    SET_GPR_U32(ctx, 31, 0x2317E0u);
    ctx->pc = 0x2317DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317D8u;
    // 0x2317dc: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2317D8u, 0x2317E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317E0u;
label_2317e0:
    // 0x2317e0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2317e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2317e4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2317e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2317e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2317e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2317ec: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2317ECu;
    {
        const bool branch_taken_0x2317ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2317F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317ECu;
        // 0x2317f0: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317ec) {
            ctx->pc = 0x231A10u;
            goto label_231a10;
        }
    }
    ctx->pc = 0x2317F4u;
label_2317f4:
    // 0x2317f4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2317f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2317f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2317f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317fc: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2317FCu;
    {
        const bool branch_taken_0x2317fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317FCu;
        // 0x231800: 0x8c45006c  lw          $a1, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317fc) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x231804u;
label_231804:
    // 0x231804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231808: 0xc040680  jal         func_101A00
    ctx->pc = 0x231808u;
    SET_GPR_U32(ctx, 31, 0x231810u);
    ctx->pc = 0x23180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231808u;
    // 0x23180c: 0x24050093  addiu       $a1, $zero, 0x93 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x231808u, 0x231810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231810u;
label_231810:
    // 0x231810: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x231810u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x231814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231818: 0xc040680  jal         func_101A00
    ctx->pc = 0x231818u;
    SET_GPR_U32(ctx, 31, 0x231820u);
    ctx->pc = 0x23181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231818u;
    // 0x23181c: 0x24050097  addiu       $a1, $zero, 0x97 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x231818u, 0x231820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231820u;
label_231820:
    // 0x231820: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x231820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x231824: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231828: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x231828u;
    {
        const bool branch_taken_0x231828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231828u;
        // 0x23182c: 0x46140028  max.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231828) {
            ctx->pc = 0x231A08u;
            goto label_231a08;
        }
    }
    ctx->pc = 0x231830u;
label_231830:
    // 0x231830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231834: 0xc040680  jal         func_101A00
    ctx->pc = 0x231834u;
    SET_GPR_U32(ctx, 31, 0x23183Cu);
    ctx->pc = 0x231838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231834u;
    // 0x231838: 0x2405009b  addiu       $a1, $zero, 0x9B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x231834u, 0x23183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23183Cu;
label_23183c:
    // 0x23183c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x23183cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x231840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231844: 0xc040680  jal         func_101A00
    ctx->pc = 0x231844u;
    SET_GPR_U32(ctx, 31, 0x23184Cu);
    ctx->pc = 0x231848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231844u;
    // 0x231848: 0x2405009f  addiu       $a1, $zero, 0x9F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x231844u, 0x23184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23184Cu;
label_23184c:
    // 0x23184c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x23184cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x231850: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231854: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x231854u;
    {
        const bool branch_taken_0x231854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231854u;
        // 0x231858: 0x46140028  max.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231854) {
            ctx->pc = 0x231A08u;
            goto label_231a08;
        }
    }
    ctx->pc = 0x23185Cu;
label_23185c:
    // 0x23185c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x23185cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x231860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231864: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x231864u;
    {
        const bool branch_taken_0x231864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231864u;
        // 0x231868: 0x8c45006c  lw          $a1, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231864) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x23186Cu;
label_23186c:
    // 0x23186c: 0xc088e58  jal         func_223960
    ctx->pc = 0x23186Cu;
    SET_GPR_U32(ctx, 31, 0x231874u);
    ctx->pc = 0x231870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23186Cu;
    // 0x231870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x23186Cu, 0x231874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231874u;
label_231874:
    // 0x231874: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231874u;
    {
        const bool branch_taken_0x231874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231874u;
        // 0x231878: 0x2405006c  addiu       $a1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231874) {
            ctx->pc = 0x231884u;
            goto label_231884;
        }
    }
    ctx->pc = 0x23187Cu;
    // 0x23187c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23187Cu;
    {
        const bool branch_taken_0x23187c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23187Cu;
        // 0x231880: 0x2411006e  addiu       $s1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23187c) {
            ctx->pc = 0x23188Cu;
            goto label_23188c;
        }
    }
    ctx->pc = 0x231884u;
label_231884:
    // 0x231884: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x231884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x231888: 0x24110062  addiu       $s1, $zero, 0x62
    ctx->pc = 0x231888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_23188c:
    // 0x23188c: 0xc040680  jal         func_101A00
    ctx->pc = 0x23188Cu;
    SET_GPR_U32(ctx, 31, 0x231894u);
    ctx->pc = 0x231890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23188Cu;
    // 0x231890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x23188Cu, 0x231894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231894u;
label_231894:
    // 0x231894: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x231894u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x231898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23189c: 0xc040680  jal         func_101A00
    ctx->pc = 0x23189Cu;
    SET_GPR_U32(ctx, 31, 0x2318A4u);
    ctx->pc = 0x2318A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23189Cu;
    // 0x2318a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x23189Cu, 0x2318A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318A4u;
label_2318a4:
    // 0x2318a4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2318a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2318a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2318a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2318ac: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x2318acu;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
    // 0x2318b0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2318B0u;
    {
        const bool branch_taken_0x2318b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318B0u;
        // 0x2318b4: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318b0) {
            ctx->pc = 0x231A10u;
            goto label_231a10;
        }
    }
    ctx->pc = 0x2318B8u;
label_2318b8:
    // 0x2318b8: 0xc088e70  jal         func_2239C0
    ctx->pc = 0x2318B8u;
    SET_GPR_U32(ctx, 31, 0x2318C0u);
    ctx->pc = 0x2318BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2318B8u;
    // 0x2318bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x2318B8u, 0x2318C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318C0u;
label_2318c0:
    // 0x2318c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2318C0u;
    {
        const bool branch_taken_0x2318c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318C0u;
        // 0x2318c4: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318c0) {
            ctx->pc = 0x2318D0u;
            goto label_2318d0;
        }
    }
    ctx->pc = 0x2318C8u;
    // 0x2318c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2318C8u;
    {
        const bool branch_taken_0x2318c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318C8u;
        // 0x2318cc: 0x24110072  addiu       $s1, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318c8) {
            ctx->pc = 0x2318D8u;
            goto label_2318d8;
        }
    }
    ctx->pc = 0x2318D0u;
label_2318d0:
    // 0x2318d0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2318d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2318d4: 0x24110066  addiu       $s1, $zero, 0x66
    ctx->pc = 0x2318d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_2318d8:
    // 0x2318d8: 0xc040680  jal         func_101A00
    ctx->pc = 0x2318D8u;
    SET_GPR_U32(ctx, 31, 0x2318E0u);
    ctx->pc = 0x2318DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2318D8u;
    // 0x2318dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2318D8u, 0x2318E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318E0u;
label_2318e0:
    // 0x2318e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2318e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2318e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2318e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2318e8: 0xc040680  jal         func_101A00
    ctx->pc = 0x2318E8u;
    SET_GPR_U32(ctx, 31, 0x2318F0u);
    ctx->pc = 0x2318ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2318E8u;
    // 0x2318ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2318E8u, 0x2318F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318F0u;
label_2318f0:
    // 0x2318f0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2318f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2318f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2318f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2318f8: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x2318f8u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
    // 0x2318fc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2318FCu;
    {
        const bool branch_taken_0x2318fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318FCu;
        // 0x231900: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318fc) {
            ctx->pc = 0x231A10u;
            goto label_231a10;
        }
    }
    ctx->pc = 0x231904u;
label_231904:
    // 0x231904: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x231904u;
    {
        const bool branch_taken_0x231904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231904u;
        // 0x231908: 0x240500e1  addiu       $a1, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231904) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x23190Cu;
label_23190c:
    // 0x23190c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x23190Cu;
    {
        const bool branch_taken_0x23190c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23190Cu;
        // 0x231910: 0x240500f6  addiu       $a1, $zero, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23190c) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x231914u;
label_231914:
    // 0x231914: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x231914u;
    {
        const bool branch_taken_0x231914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231914u;
        // 0x231918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231914) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x23191Cu;
label_23191c:
    // 0x23191c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23191cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231920: 0xc040680  jal         func_101A00
    ctx->pc = 0x231920u;
    SET_GPR_U32(ctx, 31, 0x231928u);
    ctx->pc = 0x231924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231920u;
    // 0x231924: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x231920u, 0x231928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231928u;
label_231928:
    // 0x231928: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x231928u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x23192c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23192cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231930: 0xc040680  jal         func_101A00
    ctx->pc = 0x231930u;
    SET_GPR_U32(ctx, 31, 0x231938u);
    ctx->pc = 0x231934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231930u;
    // 0x231934: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x231930u, 0x231938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231938u;
label_231938:
    // 0x231938: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x231938u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x23193c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x23193cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x231940: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231944: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x231944u;
    {
        const bool branch_taken_0x231944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231944u;
        // 0x231948: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231944) {
            ctx->pc = 0x231A10u;
            goto label_231a10;
        }
    }
    ctx->pc = 0x23194Cu;
label_23194c:
    // 0x23194c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23194cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231950: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x231950u;
    {
        const bool branch_taken_0x231950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231950u;
        // 0x231954: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231950) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x231958u;
label_231958:
    // 0x231958: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x231958u;
    {
        const bool branch_taken_0x231958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231958u;
        // 0x23195c: 0x240500fc  addiu       $a1, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231958) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x231960u;
label_231960:
    // 0x231960: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x231960u;
    {
        const bool branch_taken_0x231960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231960u;
        // 0x231964: 0x24050298  addiu       $a1, $zero, 0x298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231960) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x231968u;
label_231968:
    // 0x231968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23196c: 0xc040680  jal         func_101A00
    ctx->pc = 0x23196Cu;
    SET_GPR_U32(ctx, 31, 0x231974u);
    ctx->pc = 0x231970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23196Cu;
    // 0x231970: 0x2405028d  addiu       $a1, $zero, 0x28D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 653));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x23196Cu, 0x231974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231974u;
label_231974:
    // 0x231974: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x231974u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x231978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23197c: 0xc040680  jal         func_101A00
    ctx->pc = 0x23197Cu;
    SET_GPR_U32(ctx, 31, 0x231984u);
    ctx->pc = 0x231980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23197Cu;
    // 0x231980: 0x2405028f  addiu       $a1, $zero, 0x28F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x23197Cu, 0x231984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231984u;
label_231984:
    // 0x231984: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x231984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x231988: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23198c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x23198Cu;
    {
        const bool branch_taken_0x23198c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23198Cu;
        // 0x231990: 0x46140028  max.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23198c) {
            ctx->pc = 0x231A08u;
            goto label_231a08;
        }
    }
    ctx->pc = 0x231994u;
label_231994:
    // 0x231994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231998: 0xc040680  jal         func_101A00
    ctx->pc = 0x231998u;
    SET_GPR_U32(ctx, 31, 0x2319A0u);
    ctx->pc = 0x23199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231998u;
    // 0x23199c: 0x24050291  addiu       $a1, $zero, 0x291 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 657));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x231998u, 0x2319A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319A0u;
label_2319a0:
    // 0x2319a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2319a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2319a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2319a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2319a8: 0xc040680  jal         func_101A00
    ctx->pc = 0x2319A8u;
    SET_GPR_U32(ctx, 31, 0x2319B0u);
    ctx->pc = 0x2319ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319A8u;
    // 0x2319ac: 0x24050293  addiu       $a1, $zero, 0x293 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 659));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2319A8u, 0x2319B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319B0u;
label_2319b0:
    // 0x2319b0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2319b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2319b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2319b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2319b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2319B8u;
    {
        const bool branch_taken_0x2319b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319B8u;
        // 0x2319bc: 0x46140028  max.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319b8) {
            ctx->pc = 0x231A08u;
            goto label_231a08;
        }
    }
    ctx->pc = 0x2319C0u;
label_2319c0:
    // 0x2319c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2319c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2319c4: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x2319C4u;
    SET_GPR_U32(ctx, 31, 0x2319CCu);
    ctx->pc = 0x2319C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319C4u;
    // 0x2319c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x2319C4u, 0x2319CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319CCu;
label_2319cc:
    // 0x2319cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2319CCu;
    {
        const bool branch_taken_0x2319cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319CCu;
        // 0x2319d0: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319cc) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x2319D4u;
label_2319d4:
    // 0x2319d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2319D4u;
    {
        const bool branch_taken_0x2319d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319D4u;
        // 0x2319d8: 0x24050076  addiu       $a1, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319d4) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x2319DCu;
label_2319dc:
    // 0x2319dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2319DCu;
    {
        const bool branch_taken_0x2319dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319DCu;
        // 0x2319e0: 0x240500f8  addiu       $a1, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319dc) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x2319E4u;
label_2319e4:
    // 0x2319e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2319E4u;
    {
        const bool branch_taken_0x2319e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319E4u;
        // 0x2319e8: 0x240500f2  addiu       $a1, $zero, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319e4) {
            ctx->pc = 0x2319F4u;
            goto label_2319f4;
        }
    }
    ctx->pc = 0x2319ECu;
label_2319ec:
    // 0x2319ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2319ECu;
    {
        const bool branch_taken_0x2319ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319ECu;
        // 0x2319f0: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319ec) {
            ctx->pc = 0x231A18u;
            goto label_231a18;
        }
    }
    ctx->pc = 0x2319F4u;
label_2319f4:
    // 0x2319f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2319f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2319f8:
    // 0x2319f8: 0xc040680  jal         func_101A00
    ctx->pc = 0x2319F8u;
    SET_GPR_U32(ctx, 31, 0x231A00u);
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2319F8u, 0x231A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A00u;
label_231a00:
    // 0x231a00: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x231a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x231a04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_231a08:
    // 0x231a08: 0x0  nop
    ctx->pc = 0x231a08u;
    // NOP
    // 0x231a0c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x231a0cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_231a10:
    // 0x231a10: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x231A10u;
    SET_GPR_U32(ctx, 31, 0x231A18u);
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x231A10u, 0x231A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A18u;
label_231a18:
    // 0x231a18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x231a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231a1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x231a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231a20: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x231a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231a28: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x231a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x231a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x231A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A2Cu;
        // 0x231a30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A34u;
    // 0x231a34: 0x0  nop
    ctx->pc = 0x231a34u;
    // NOP
    ctx->pc = 0x231a38u;
}
