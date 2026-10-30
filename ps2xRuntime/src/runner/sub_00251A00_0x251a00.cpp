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

// Function: sub_00251A00
// Address: 0x251a00 - 0x251a70
void sub_00251A00_0x251a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251A00_0x251a00");
#endif

    switch (ctx->pc) {
        case 0x251a24u: goto label_251a24;
        case 0x251a30u: goto label_251a30;
        case 0x251a40u: goto label_251a40;
        default: break;
    }

    ctx->pc = 0x251a00u;

    // 0x251a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x251a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x251a04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x251a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x251a08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x251a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x251a0c: 0x8c4405ac  lw          $a0, 0x5AC($v0)
    ctx->pc = 0x251a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5105ACu));
    // 0x251a10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x251a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x251a14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x251a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x251a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x251a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x251a1c: 0xc094d4a  jal         func_253528
    ctx->pc = 0x251A1Cu;
    SET_GPR_U32(ctx, 31, 0x251A24u);
    ctx->pc = 0x251A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251A1Cu;
    // 0x251a20: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253528u, 0x251A1Cu, 0x251A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251A24u;
label_251a24:
    // 0x251a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x251a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a28: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x251A28u;
    {
        const bool branch_taken_0x251a28 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x251A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A28u;
        // 0x251a2c: 0x3c11006d  lui         $s1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a28) {
            ctx->pc = 0x251A54u;
            goto label_251a54;
        }
    }
    ctx->pc = 0x251A30u;
label_251a30:
    // 0x251a30: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x251a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x251a34: 0x8e4405ac  lw          $a0, 0x5AC($s2)
    ctx->pc = 0x251a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1452)));
    // 0x251a38: 0xc094d2a  jal         func_2534A8
    ctx->pc = 0x251A38u;
    SET_GPR_U32(ctx, 31, 0x251A40u);
    ctx->pc = 0x251A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251A38u;
    // 0x251a3c: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2534A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2534A8u, 0x251A38u, 0x251A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251A40u;
label_251a40:
    // 0x251a40: 0x8e23a21c  lw          $v1, -0x5DE4($s1)
    ctx->pc = 0x251a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943260)));
    // 0x251a44: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x251a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x251a48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x251a4c: 0x1e00fff8  bgtz        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x251A4Cu;
    {
        const bool branch_taken_0x251a4c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x251A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A4Cu;
        // 0x251a50: 0xa4400018  sh          $zero, 0x18($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a4c) {
            ctx->pc = 0x251A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251a30;
        }
    }
    ctx->pc = 0x251A54u;
label_251a54:
    // 0x251a54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x251a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251a58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x251a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251a5c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x251a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251a64: 0x3e00008  jr          $ra
    ctx->pc = 0x251A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A64u;
        // 0x251a68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251A6Cu;
    // 0x251a6c: 0x0  nop
    ctx->pc = 0x251a6cu;
    // NOP
    ctx->pc = 0x251a70u;
}
