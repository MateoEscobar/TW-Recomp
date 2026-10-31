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

// Function: sub_0038D5B8
// Address: 0x38d5b8 - 0x38d668
void sub_0038D5B8_0x38d5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D5B8_0x38d5b8");
#endif

    switch (ctx->pc) {
        case 0x38d5dcu: goto label_38d5dc;
        case 0x38d5ecu: goto label_38d5ec;
        case 0x38d5f4u: goto label_38d5f4;
        case 0x38d660u: goto label_38d660;
        default: break;
    }

    ctx->pc = 0x38d5b8u;

    // 0x38d5b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38d5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38d5bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38d5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38d5c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38d5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38d5c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x38d5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d5c8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x38d5cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38d5ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d5d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38d5d4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x38D5D4u;
    SET_GPR_U32(ctx, 31, 0x38D5DCu);
    ctx->pc = 0x38D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D5D4u;
    // 0x38d5d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38D5D4u, 0x38D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D5DCu;
label_38d5dc:
    // 0x38d5dc: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x38D5DCu;
    {
        const bool branch_taken_0x38d5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d5dc) {
            ctx->pc = 0x38D5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D5DCu;
            // 0x38d5e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D67Cu;
            return;
        }
    }
    ctx->pc = 0x38D5E4u;
    // 0x38d5e4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x38D5E4u;
    SET_GPR_U32(ctx, 31, 0x38D5ECu);
    ctx->pc = 0x38D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D5E4u;
    // 0x38d5e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38D5E4u, 0x38D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D5ECu;
label_38d5ec:
    // 0x38d5ec: 0xc0e2612  jal         func_389848
    ctx->pc = 0x38D5ECu;
    SET_GPR_U32(ctx, 31, 0x38D5F4u);
    ctx->pc = 0x38D5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D5ECu;
    // 0x38d5f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x38D5ECu, 0x38D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D5F4u;
label_38d5f4:
    // 0x38d5f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38d5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d5f8: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x38D5F8u;
    {
        const bool branch_taken_0x38d5f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5F8u;
        // 0x38d5fc: 0x2e220006  sltiu       $v0, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d5f8) {
            ctx->pc = 0x38D678u;
            return;
        }
    }
    ctx->pc = 0x38D600u;
    // 0x38d600: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x38D600u;
    {
        const bool branch_taken_0x38d600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D600u;
        // 0x38d604: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d600) {
            ctx->pc = 0x38D678u;
            return;
        }
    }
    ctx->pc = 0x38D608u;
    // 0x38d608: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x38d608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x38d60c: 0x2442e3f0  addiu       $v0, $v0, -0x1C10
    ctx->pc = 0x38d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960112));
    // 0x38d610: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38d610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38d614: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38d614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38d618: 0x800008  jr          $a0
    ctx->pc = 0x38D618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38D620u: goto label_38d620;
            case 0x38D62Cu: goto label_38d62c;
            case 0x38D638u: goto label_38d638;
            case 0x38D644u: goto label_38d644;
            case 0x38D650u: goto label_38d650;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D618u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38D620u;
label_38d620:
    // 0x38d620: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x38d620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d624: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x38D624u;
    {
        const bool branch_taken_0x38d624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D624u;
        // 0x38d628: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d624) {
            ctx->pc = 0x38D658u;
            goto label_38d658;
        }
    }
    ctx->pc = 0x38D62Cu;
label_38d62c:
    // 0x38d62c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x38d62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d630: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x38D630u;
    {
        const bool branch_taken_0x38d630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D630u;
        // 0x38d634: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d630) {
            ctx->pc = 0x38D658u;
            goto label_38d658;
        }
    }
    ctx->pc = 0x38D638u;
label_38d638:
    // 0x38d638: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x38d638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d63c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38D63Cu;
    {
        const bool branch_taken_0x38d63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D63Cu;
        // 0x38d640: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d63c) {
            ctx->pc = 0x38D658u;
            goto label_38d658;
        }
    }
    ctx->pc = 0x38D644u;
label_38d644:
    // 0x38d644: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x38d644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38D648u;
    {
        const bool branch_taken_0x38d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D648u;
        // 0x38d64c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d648) {
            ctx->pc = 0x38D658u;
            goto label_38d658;
        }
    }
    ctx->pc = 0x38D650u;
label_38d650:
    // 0x38d650: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x38d650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d654: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x38d654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_38d658:
    // 0x38d658: 0xc0e3408  jal         func_38D020
    ctx->pc = 0x38D658u;
    SET_GPR_U32(ctx, 31, 0x38D660u);
    ctx->pc = 0x38D65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D658u;
    // 0x38d65c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D020u, 0x38D658u, 0x38D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D660u;
label_38d660:
    // 0x38d660: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38D660u;
    {
        const bool branch_taken_0x38d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D660u;
        // 0x38d664: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d660) {
            ctx->pc = 0x38D67Cu;
            return;
        }
    }
    ctx->pc = 0x38D668u;
}
