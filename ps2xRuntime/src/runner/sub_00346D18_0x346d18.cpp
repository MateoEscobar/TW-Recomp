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

// Function: sub_00346D18
// Address: 0x346d18 - 0x346db8
void sub_00346D18_0x346d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346D18_0x346d18");
#endif

    switch (ctx->pc) {
        case 0x346d38u: goto label_346d38;
        default: break;
    }

    ctx->pc = 0x346d18u;

    // 0x346d18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x346d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x346d1c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x346d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x346d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x346d24: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x346d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x346d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d2c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x346d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x346d30: 0xc0d1a02  jal         func_346808
    ctx->pc = 0x346D30u;
    SET_GPR_U32(ctx, 31, 0x346D38u);
    ctx->pc = 0x346D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D30u;
    // 0x346d34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346808u, 0x346D30u, 0x346D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D38u;
label_346d38:
    // 0x346d38: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x346D38u;
    {
        const bool branch_taken_0x346d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346d38) {
            ctx->pc = 0x346D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346D38u;
            // 0x346d3c: 0x7a030020  lq          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346D48u;
            goto label_346d48;
        }
    }
    ctx->pc = 0x346D40u;
    // 0x346d40: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x346D40u;
    {
        const bool branch_taken_0x346d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D40u;
        // 0x346d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d40) {
            ctx->pc = 0x346DA4u;
            goto label_346da4;
        }
    }
    ctx->pc = 0x346D48u;
label_346d48:
    // 0x346d48: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x346d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x346d4c: 0x7a040030  lq          $a0, 0x30($s0)
    ctx->pc = 0x346d4cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x346d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x346d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346d54: 0x7a070000  lq          $a3, 0x0($s0)
    ctx->pc = 0x346d54u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x346d58: 0x7a050040  lq          $a1, 0x40($s0)
    ctx->pc = 0x346d58u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x346d5c: 0x7a080010  lq          $t0, 0x10($s0)
    ctx->pc = 0x346d5cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x346d60: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x346d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x346d64: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x346d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x346d68: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x346d68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x346d6c: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x346d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x346d70: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x346d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x346d74: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x346d74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x346d78: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x346d78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x346d7c: 0x78c40020  lq          $a0, 0x20($a2)
    ctx->pc = 0x346d7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x346d80: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x346d80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x346d84: 0x78c30030  lq          $v1, 0x30($a2)
    ctx->pc = 0x346d84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x346d88: 0x7e070040  sq          $a3, 0x40($s0)
    ctx->pc = 0x346d88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 7));
    // 0x346d8c: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x346d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x346d90: 0x7cc80010  sq          $t0, 0x10($a2)
    ctx->pc = 0x346d90u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 8));
    // 0x346d94: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x346d94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346d98: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x346d98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x346d9c: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x346d9cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x346da0: 0x7cc40030  sq          $a0, 0x30($a2)
    ctx->pc = 0x346da0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 4));
label_346da4:
    // 0x346da4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x346da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x346da8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x346da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x346dac: 0x3e00008  jr          $ra
    ctx->pc = 0x346DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DACu;
        // 0x346db0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346DB4u;
    // 0x346db4: 0x0  nop
    ctx->pc = 0x346db4u;
    // NOP
    ctx->pc = 0x346db8u;
}
