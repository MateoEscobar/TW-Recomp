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

// Function: sub_002BD4F0
// Address: 0x2bd4f0 - 0x2bd590
void sub_002BD4F0_0x2bd4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD4F0_0x2bd4f0");
#endif

    switch (ctx->pc) {
        case 0x2bd530u: goto label_2bd530;
        case 0x2bd548u: goto label_2bd548;
        case 0x2bd55cu: goto label_2bd55c;
        case 0x2bd57cu: goto label_2bd57c;
        default: break;
    }

    ctx->pc = 0x2bd4f0u;

    // 0x2bd4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bd4f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2bd4f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bd4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bd4fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bd4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bd500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bd504: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2bd504u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2bd508: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2bd508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2bd50c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2bd50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2bd510: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2bd510u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bd514: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BD514u;
    {
        const bool branch_taken_0x2bd514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD514u;
        // 0x2bd518: 0x24420bb8  addiu       $v0, $v0, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd514) {
            ctx->pc = 0x2BD57Cu;
            goto label_2bd57c;
        }
    }
    ctx->pc = 0x2BD51Cu;
    // 0x2bd51c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bd51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2bd520: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2bd520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2bd524: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2bd524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2bd528: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2BD528u;
    SET_GPR_U32(ctx, 31, 0x2BD530u);
    ctx->pc = 0x2BD52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD528u;
    // 0x2bd52c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2BD528u, 0x2BD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD530u;
label_2bd530:
    // 0x2bd530: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x2bd530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2bd534: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BD534u;
    {
        const bool branch_taken_0x2bd534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd534) {
            ctx->pc = 0x2BD538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD534u;
            // 0x2bd538: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD580u;
            goto label_2bd580;
        }
    }
    ctx->pc = 0x2BD53Cu;
    // 0x2bd53c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2bd53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bd540: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x2BD540u;
    SET_GPR_U32(ctx, 31, 0x2BD548u);
    ctx->pc = 0x2BD544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD540u;
    // 0x2bd544: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2BD540u, 0x2BD548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD548u;
label_2bd548:
    // 0x2bd548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bd548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd54c: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2BD54Cu;
    {
        const bool branch_taken_0x2bd54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bd54c) {
            ctx->pc = 0x2BD550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD54Cu;
            // 0x2bd550: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD580u;
            goto label_2bd580;
        }
    }
    ctx->pc = 0x2BD554u;
    // 0x2bd554: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2BD554u;
    SET_GPR_U32(ctx, 31, 0x2BD55Cu);
    ctx->pc = 0x2BD558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD554u;
    // 0x2bd558: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BD554u, 0x2BD55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD55Cu;
label_2bd55c:
    // 0x2bd55c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD55Cu;
    {
        const bool branch_taken_0x2bd55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD55Cu;
        // 0x2bd560: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd55c) {
            ctx->pc = 0x2BD57Cu;
            goto label_2bd57c;
        }
    }
    ctx->pc = 0x2BD564u;
    // 0x2bd564: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2bd564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bd568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bd568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd56c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bd56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd570: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bd570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd574: 0xc0be7d2  jal         func_2F9F48
    ctx->pc = 0x2BD574u;
    SET_GPR_U32(ctx, 31, 0x2BD57Cu);
    ctx->pc = 0x2BD578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD574u;
    // 0x2bd578: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F48u, 0x2BD574u, 0x2BD57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD57Cu;
label_2bd57c:
    // 0x2bd57c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bd57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bd580:
    // 0x2bd580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bd580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd584: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD584u;
        // 0x2bd588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD58Cu;
    // 0x2bd58c: 0x0  nop
    ctx->pc = 0x2bd58cu;
    // NOP
    ctx->pc = 0x2bd590u;
}
