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

// Function: sub_001D5C38
// Address: 0x1d5c38 - 0x1d5cf0
void sub_001D5C38_0x1d5c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5C38_0x1d5c38");
#endif

    switch (ctx->pc) {
        case 0x1d5c94u: goto label_1d5c94;
        case 0x1d5ca4u: goto label_1d5ca4;
        case 0x1d5cb0u: goto label_1d5cb0;
        case 0x1d5cc4u: goto label_1d5cc4;
        case 0x1d5cd4u: goto label_1d5cd4;
        default: break;
    }

    ctx->pc = 0x1d5c38u;

    // 0x1d5c38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d5c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d5c3c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d5c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1d5c40: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d5c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1d5c44: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x1d5c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1d5c48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d5c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d5c4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5c54: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5c58: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D5C58u;
    {
        const bool branch_taken_0x1d5c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C58u;
        // 0x1d5c5c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c58) {
            ctx->pc = 0x1D5C94u;
            goto label_1d5c94;
        }
    }
    ctx->pc = 0x1D5C60u;
    // 0x1d5c60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d5c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5c64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d5c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5c68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d5c6c: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1d5c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FD310u));
    // 0x1d5c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c74: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d5c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d5c78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5c7c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d5c7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5c80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d5c80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c84: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1d5c84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d5c88: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d5c88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c8c: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1D5C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D5C94u);
    ctx->pc = 0x1D5C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C8Cu;
    // 0x1d5c90: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1D5C8Cu, 0x1D5C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C94u;
label_1d5c94:
    // 0x1d5c94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d5c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5c98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d5c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c9c: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1D5C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D5CA4u);
    ctx->pc = 0x1D5CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C9Cu;
    // 0x1d5ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1D5C9Cu, 0x1D5CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CA4u;
label_1d5ca4:
    // 0x1d5ca4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ca8: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1D5CA8u;
    SET_GPR_U32(ctx, 31, 0x1D5CB0u);
    ctx->pc = 0x1D5CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CA8u;
    // 0x1d5cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1D5CA8u, 0x1D5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CB0u;
label_1d5cb0:
    // 0x1d5cb0: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1d5cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x1d5cb4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1d5cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1d5cb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d5cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5cbc: 0xc05e602  jal         func_179808
    ctx->pc = 0x1D5CBCu;
    SET_GPR_U32(ctx, 31, 0x1D5CC4u);
    ctx->pc = 0x1D5CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CBCu;
    // 0x1d5cc0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1D5CBCu, 0x1D5CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CC4u;
label_1d5cc4:
    // 0x1d5cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cc8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d5cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d5ccc: 0xc06e520  jal         func_1B9480
    ctx->pc = 0x1D5CCCu;
    SET_GPR_U32(ctx, 31, 0x1D5CD4u);
    ctx->pc = 0x1D5CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CCCu;
    // 0x1d5cd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9480u, 0x1D5CCCu, 0x1D5CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CD4u;
label_1d5cd4:
    // 0x1d5cd4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d5cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5cd8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d5cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5cdc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d5cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5ce0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CE4u;
        // 0x1d5ce8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5CECu;
    // 0x1d5cec: 0x0  nop
    ctx->pc = 0x1d5cecu;
    // NOP
    ctx->pc = 0x1d5cf0u;
}
