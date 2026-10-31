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

// Function: sub_00416690
// Address: 0x416690 - 0x416718
void sub_00416690_0x416690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416690_0x416690");
#endif

    switch (ctx->pc) {
        case 0x4166b4u: goto label_4166b4;
        default: break;
    }

    ctx->pc = 0x416690u;

    // 0x416690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x416690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x416694: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x416694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x416698: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x416698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x41669c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41669cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4166a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4166a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4166a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4166a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4166a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4166a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4166ac: 0xc1059c6  jal         func_416718
    ctx->pc = 0x4166ACu;
    SET_GPR_U32(ctx, 31, 0x4166B4u);
    ctx->pc = 0x4166B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4166ACu;
    // 0x4166b0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416718u, 0x4166ACu, 0x4166B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4166B4u;
label_4166b4:
    // 0x4166b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4166B4u;
    {
        const bool branch_taken_0x4166b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4166B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4166B4u;
        // 0x4166b8: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4166b4) {
            ctx->pc = 0x4166F0u;
            goto label_4166f0;
        }
    }
    ctx->pc = 0x4166BCu;
    // 0x4166bc: 0x960300d0  lhu         $v1, 0xD0($s0)
    ctx->pc = 0x4166bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x4166c0: 0x24a5a1e8  addiu       $a1, $a1, -0x5E18
    ctx->pc = 0x4166c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943208));
    // 0x4166c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4166c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4166c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4166c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4166cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4166ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4166d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4166d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4166d4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4166d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4166d8: 0x960300d0  lhu         $v1, 0xD0($s0)
    ctx->pc = 0x4166d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x4166dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4166dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4166e0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4166e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4166e4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x4166e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4166e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4166E8u;
    {
        const bool branch_taken_0x4166e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4166ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4166E8u;
        // 0x4166ec: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4166e8) {
            ctx->pc = 0x4166FCu;
            goto label_4166fc;
        }
    }
    ctx->pc = 0x4166F0u;
label_4166f0:
    // 0x4166f0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4166f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x4166f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4166f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4166f8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4166f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_4166fc:
    // 0x4166fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4166fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x416700: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x416700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x416704: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x416704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x416708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x416708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41670c: 0x3e00008  jr          $ra
    ctx->pc = 0x41670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41670Cu;
        // 0x416710: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41670Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416714u;
    // 0x416714: 0x0  nop
    ctx->pc = 0x416714u;
    // NOP
    ctx->pc = 0x416718u;
}
