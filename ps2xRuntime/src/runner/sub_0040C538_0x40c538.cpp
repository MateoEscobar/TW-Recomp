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

// Function: sub_0040C538
// Address: 0x40c538 - 0x40c5e0
void sub_0040C538_0x40c538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C538_0x40c538");
#endif

    switch (ctx->pc) {
        case 0x40c558u: goto label_40c558;
        case 0x40c57cu: goto label_40c57c;
        case 0x40c588u: goto label_40c588;
        case 0x40c594u: goto label_40c594;
        case 0x40c5a8u: goto label_40c5a8;
        default: break;
    }

    ctx->pc = 0x40c538u;

    // 0x40c538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40c538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40c53c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40c53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40c540: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x40c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x40c544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40c544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c548: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x40c54c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40c550: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x40C550u;
    SET_GPR_U32(ctx, 31, 0x40C558u);
    ctx->pc = 0x40C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C550u;
    // 0x40c554: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x40C550u, 0x40C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C558u;
label_40c558:
    // 0x40c558: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x40C558u;
    {
        const bool branch_taken_0x40c558 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x40C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C558u;
        // 0x40c55c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c558) {
            ctx->pc = 0x40C564u;
            goto label_40c564;
        }
    }
    ctx->pc = 0x40C560u;
    // 0x40c560: 0x31823  negu        $v1, $v1
    ctx->pc = 0x40c560u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_40c564:
    // 0x40c564: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x40c564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x40c568: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x40C568u;
    {
        const bool branch_taken_0x40c568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C568u;
        // 0x40c56c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c568) {
            ctx->pc = 0x40C5ACu;
            goto label_40c5ac;
        }
    }
    ctx->pc = 0x40C570u;
    // 0x40c570: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40c570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c574: 0xc102eea  jal         func_40BBA8
    ctx->pc = 0x40C574u;
    SET_GPR_U32(ctx, 31, 0x40C57Cu);
    ctx->pc = 0x40C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C574u;
    // 0x40c578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BBA8u, 0x40C574u, 0x40C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C57Cu;
label_40c57c:
    // 0x40c57c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40c57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c580: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x40C580u;
    SET_GPR_U32(ctx, 31, 0x40C588u);
    ctx->pc = 0x40C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C580u;
    // 0x40c584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x40C580u, 0x40C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C588u;
label_40c588:
    // 0x40c588: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x40c588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x40c58c: 0xc102eea  jal         func_40BBA8
    ctx->pc = 0x40C58Cu;
    SET_GPR_U32(ctx, 31, 0x40C594u);
    ctx->pc = 0x40C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C58Cu;
    // 0x40c590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BBA8u, 0x40C58Cu, 0x40C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C594u;
label_40c594:
    // 0x40c594: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x40c594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c59c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40c59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c5a0: 0xc1023f4  jal         func_408FD0
    ctx->pc = 0x40C5A0u;
    SET_GPR_U32(ctx, 31, 0x40C5A8u);
    ctx->pc = 0x40C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C5A0u;
    // 0x40c5a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x408FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408FD0u, 0x40C5A0u, 0x40C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C5A8u;
label_40c5a8:
    // 0x40c5a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40c5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c5ac:
    // 0x40c5ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40c5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40c5b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40c5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40c5b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40c5b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40c5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40c5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x40C5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C5BCu;
        // 0x40c5c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C5C4u;
    // 0x40c5c4: 0x0  nop
    ctx->pc = 0x40c5c4u;
    // NOP
    // 0x40c5c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x40c5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x40c5cc: 0x0  nop
    ctx->pc = 0x40c5ccu;
    // NOP
    // 0x40c5d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x40c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x40c5d4: 0x0  nop
    ctx->pc = 0x40c5d4u;
    // NOP
    // 0x40c5d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x40c5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x40c5dc: 0x0  nop
    ctx->pc = 0x40c5dcu;
    // NOP
    ctx->pc = 0x40c5e0u;
}
