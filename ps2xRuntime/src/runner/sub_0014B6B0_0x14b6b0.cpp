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

// Function: sub_0014B6B0
// Address: 0x14b6b0 - 0x14b770
void sub_0014B6B0_0x14b6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B6B0_0x14b6b0");
#endif

    switch (ctx->pc) {
        case 0x14b6d0u: goto label_14b6d0;
        case 0x14b6d8u: goto label_14b6d8;
        default: break;
    }

    ctx->pc = 0x14b6b0u;

    // 0x14b6b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b6b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14b6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14b6b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14b6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14b6bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14b6c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14b6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b6cc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x14b6ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14b6d0:
    // 0x14b6d0: 0xc111490  jal         func_445240
    ctx->pc = 0x14B6D0u;
    SET_GPR_U32(ctx, 31, 0x14B6D8u);
    ctx->pc = 0x14B6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B6D0u;
    // 0x14b6d4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445240u, 0x14B6D0u, 0x14B6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B6D8u;
label_14b6d8:
    // 0x14b6d8: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x14b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14b6dc: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x14b6dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14b6e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B6E0u;
    {
        const bool branch_taken_0x14b6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6E0u;
        // 0x14b6e4: 0x83880a  movz        $s1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6e0) {
            ctx->pc = 0x14B6F4u;
            goto label_14b6f4;
        }
    }
    ctx->pc = 0x14B6E8u;
    // 0x14b6e8: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x14b6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b6ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14B6ECu;
    {
        const bool branch_taken_0x14b6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b6ec) {
            ctx->pc = 0x14B6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b6d0;
        }
    }
    ctx->pc = 0x14B6F4u;
label_14b6f4:
    // 0x14b6f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14b6f8: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x14b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x14b6fc: 0x8c45bcd8  lw          $a1, -0x4328($v0)
    ctx->pc = 0x14b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50BCD8u));
    // 0x14b700: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14b700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14b704: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x14b704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14b708: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14b708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14b70c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x14b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14b710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b714: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14b714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14b718: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x14b718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x14b71c: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x14b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x14b720: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x14b720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14b724: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x14b724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14b728: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B728u;
    {
        const bool branch_taken_0x14b728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b728) {
            ctx->pc = 0x14B72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B728u;
            // 0x14b72c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B748u;
            goto label_14b748;
        }
    }
    ctx->pc = 0x14B730u;
    // 0x14b730: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x14b730u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14b734: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14B734u;
    {
        const bool branch_taken_0x14b734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b734) {
            ctx->pc = 0x14B738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B734u;
            // 0x14b738: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B73Cu;
            goto label_14b73c;
        }
    }
    ctx->pc = 0x14B73Cu;
label_14b73c:
    // 0x14b73c: 0x1010  mfhi        $v0
    ctx->pc = 0x14b73cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14b740: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x14b740u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x14b744: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x14b744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_14b748:
    // 0x14b748: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x14b748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b74c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14b74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b750: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14b750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14b754: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14b754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b758: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14b758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b75c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b760: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x14b760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x14b764: 0x3e00008  jr          $ra
    ctx->pc = 0x14B764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B764u;
        // 0x14b768: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B76Cu;
    // 0x14b76c: 0x0  nop
    ctx->pc = 0x14b76cu;
    // NOP
    ctx->pc = 0x14b770u;
}
