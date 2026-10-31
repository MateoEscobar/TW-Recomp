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

// Function: sub_00423C30
// Address: 0x423c30 - 0x423cf0
void sub_00423C30_0x423c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423C30_0x423c30");
#endif

    switch (ctx->pc) {
        case 0x423c88u: goto label_423c88;
        case 0x423c94u: goto label_423c94;
        default: break;
    }

    ctx->pc = 0x423c30u;

    // 0x423c30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x423c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x423c34: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x423c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x423c38: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x423c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x423c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x423c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423c40: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x423c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x423c44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x423c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423c48: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x423c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x423c4c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x423c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423c50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x423c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x423c54: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x423c54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x423c58: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x423c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x423c5c: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x423c5cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x423c60: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x423c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x423c64: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x423c64u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x423c68: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x423c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x423c6c: 0x313600ff  andi        $s6, $t1, 0xFF
    ctx->pc = 0x423c6cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x423c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x423c74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x423c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x423c78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x423C78u;
    {
        const bool branch_taken_0x423c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C78u;
        // 0x423c7c: 0x3157ffff  andi        $s7, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x423c78) {
            ctx->pc = 0x423C88u;
            goto label_423c88;
        }
    }
    ctx->pc = 0x423C80u;
    // 0x423c80: 0xc108eae  jal         func_423AB8
    ctx->pc = 0x423C80u;
    SET_GPR_U32(ctx, 31, 0x423C88u);
    ctx->pc = 0x423AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423AB8u, 0x423C80u, 0x423C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423C88u;
label_423c88:
    // 0x423c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x423c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423c8c: 0xc108f3c  jal         func_423CF0
    ctx->pc = 0x423C8Cu;
    SET_GPR_U32(ctx, 31, 0x423C94u);
    ctx->pc = 0x423C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423C8Cu;
    // 0x423c90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423CF0u, 0x423C8Cu, 0x423C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423C94u;
label_423c94:
    // 0x423c94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x423c94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423c98: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x423C98u;
    {
        const bool branch_taken_0x423c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x423C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C98u;
        // 0x423c9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423c98) {
            ctx->pc = 0x423CBCu;
            goto label_423cbc;
        }
    }
    ctx->pc = 0x423CA0u;
    // 0x423ca0: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x423ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
    // 0x423ca4: 0xa0730000  sb          $s3, 0x0($v1)
    ctx->pc = 0x423ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x423ca8: 0xa0740001  sb          $s4, 0x1($v1)
    ctx->pc = 0x423ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x423cac: 0xa0750002  sb          $s5, 0x2($v1)
    ctx->pc = 0x423cacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x423cb0: 0xa0760003  sb          $s6, 0x3($v1)
    ctx->pc = 0x423cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x423cb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x423CB4u;
    {
        const bool branch_taken_0x423cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423CB4u;
        // 0x423cb8: 0xa4770004  sh          $s7, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423cb4) {
            ctx->pc = 0x423CC0u;
            goto label_423cc0;
        }
    }
    ctx->pc = 0x423CBCu;
label_423cbc:
    // 0x423cbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x423cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423cc0:
    // 0x423cc0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x423cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x423cc4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x423cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x423cc8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x423cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x423ccc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x423cccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x423cd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x423cd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x423cd4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x423cd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x423cd8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x423cd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x423cdc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x423cdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x423ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x423ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x423CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423CE4u;
        // 0x423ce8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423CECu;
    // 0x423cec: 0x0  nop
    ctx->pc = 0x423cecu;
    // NOP
    ctx->pc = 0x423cf0u;
}
