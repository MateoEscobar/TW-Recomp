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

// Function: sub_0024C6D8
// Address: 0x24c6d8 - 0x24c7b0
void sub_0024C6D8_0x24c6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C6D8_0x24c6d8");
#endif

    switch (ctx->pc) {
        case 0x24c75cu: goto label_24c75c;
        case 0x24c76cu: goto label_24c76c;
        case 0x24c794u: goto label_24c794;
        default: break;
    }

    ctx->pc = 0x24c6d8u;

    // 0x24c6d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24c6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24c6dc: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x24c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x24c6e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24c6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24c6e4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x24c6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x24c6e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24c6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x24c6ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24c6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c6f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24c6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24c6f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24c6f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c6f8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24C6F8u;
    {
        const bool branch_taken_0x24c6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6F8u;
        // 0x24c6fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6f8) {
            ctx->pc = 0x24C74Cu;
            goto label_24c74c;
        }
    }
    ctx->pc = 0x24C700u;
    // 0x24c700: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x24c700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x24c704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24c704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24c708: 0x2442cf90  addiu       $v0, $v0, -0x3070
    ctx->pc = 0x24c708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954896));
    // 0x24c70c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c710: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24c710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c714: 0x800008  jr          $a0
    ctx->pc = 0x24C714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24C71Cu: goto label_24c71c;
            case 0x24C724u: goto label_24c724;
            case 0x24C72Cu: goto label_24c72c;
            case 0x24C734u: goto label_24c734;
            case 0x24C73Cu: goto label_24c73c;
            case 0x24C744u: goto label_24c744;
            case 0x24C74Cu: goto label_24c74c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C714u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24C71Cu;
label_24c71c:
    // 0x24c71c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24C71Cu;
    {
        const bool branch_taken_0x24c71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C71Cu;
        // 0x24c720: 0x241001f7  addiu       $s0, $zero, 0x1F7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 503));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c71c) {
            ctx->pc = 0x24C750u;
            goto label_24c750;
        }
    }
    ctx->pc = 0x24C724u;
label_24c724:
    // 0x24c724: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24C724u;
    {
        const bool branch_taken_0x24c724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C724u;
        // 0x24c728: 0x241001e1  addiu       $s0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c724) {
            ctx->pc = 0x24C750u;
            goto label_24c750;
        }
    }
    ctx->pc = 0x24C72Cu;
label_24c72c:
    // 0x24c72c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24C72Cu;
    {
        const bool branch_taken_0x24c72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C72Cu;
        // 0x24c730: 0x241001f2  addiu       $s0, $zero, 0x1F2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 498));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c72c) {
            ctx->pc = 0x24C750u;
            goto label_24c750;
        }
    }
    ctx->pc = 0x24C734u;
label_24c734:
    // 0x24c734: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24C734u;
    {
        const bool branch_taken_0x24c734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C734u;
        // 0x24c738: 0x241001cf  addiu       $s0, $zero, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c734) {
            ctx->pc = 0x24C750u;
            goto label_24c750;
        }
    }
    ctx->pc = 0x24C73Cu;
label_24c73c:
    // 0x24c73c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24C73Cu;
    {
        const bool branch_taken_0x24c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C73Cu;
        // 0x24c740: 0x241001d1  addiu       $s0, $zero, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 465));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c73c) {
            ctx->pc = 0x24C750u;
            goto label_24c750;
        }
    }
    ctx->pc = 0x24C744u;
label_24c744:
    // 0x24c744: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C744u;
    {
        const bool branch_taken_0x24c744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C744u;
        // 0x24c748: 0x24100225  addiu       $s0, $zero, 0x225 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c744) {
            ctx->pc = 0x24C750u;
            goto label_24c750;
        }
    }
    ctx->pc = 0x24C74Cu;
label_24c74c:
    // 0x24c74c: 0x241001cd  addiu       $s0, $zero, 0x1CD
    ctx->pc = 0x24c74cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 461));
label_24c750:
    // 0x24c750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24c750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c754: 0xc089c20  jal         func_227080
    ctx->pc = 0x24C754u;
    SET_GPR_U32(ctx, 31, 0x24C75Cu);
    ctx->pc = 0x24C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C754u;
    // 0x24c758: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x24C754u, 0x24C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C75Cu;
label_24c75c:
    // 0x24c75c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24c75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24c760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c764: 0xc0404d8  jal         func_101360
    ctx->pc = 0x24C764u;
    SET_GPR_U32(ctx, 31, 0x24C76Cu);
    ctx->pc = 0x24C768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C764u;
    // 0x24c768: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101360u, 0x24C764u, 0x24C76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C76Cu;
label_24c76c:
    // 0x24c76c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c774: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C774u;
    {
        const bool branch_taken_0x24c774 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C774u;
        // 0x24c778: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c774) {
            ctx->pc = 0x24C798u;
            goto label_24c798;
        }
    }
    ctx->pc = 0x24C77Cu;
    // 0x24c77c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x24c780: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24c780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c784: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x24c784u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x24c788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24c788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c78c: 0xc0e637e  jal         func_398DF8
    ctx->pc = 0x24C78Cu;
    SET_GPR_U32(ctx, 31, 0x24C794u);
    ctx->pc = 0x24C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C78Cu;
    // 0x24c790: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x24C78Cu, 0x24C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C794u;
label_24c794:
    // 0x24c794: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24c794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c798:
    // 0x24c798: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24c798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c79c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24c79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c7a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24c7a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c7a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x24C7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7A8u;
        // 0x24c7ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C7B0u;
}
