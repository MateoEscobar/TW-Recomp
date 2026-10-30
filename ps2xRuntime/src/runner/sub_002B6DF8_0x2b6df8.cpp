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

// Function: sub_002B6DF8
// Address: 0x2b6df8 - 0x2b6e78
void sub_002B6DF8_0x2b6df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6DF8_0x2b6df8");
#endif

    switch (ctx->pc) {
        case 0x2b6e14u: goto label_2b6e14;
        case 0x2b6e48u: goto label_2b6e48;
        default: break;
    }

    ctx->pc = 0x2b6df8u;

    // 0x2b6df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6dfc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2b6dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b6e00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b6e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b6e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6e08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e0c: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2B6E0Cu;
    SET_GPR_U32(ctx, 31, 0x2B6E14u);
    ctx->pc = 0x2B6E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6E0Cu;
    // 0x2b6e10: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2B6E0Cu, 0x2B6E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E14u;
label_2b6e14:
    // 0x2b6e14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b6e14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e18: 0x462000c  bltzl       $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B6E18u;
    {
        const bool branch_taken_0x2b6e18 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2b6e18) {
            ctx->pc = 0x2B6E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6E18u;
            // 0x2b6e1c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6E4Cu;
            goto label_2b6e4c;
        }
    }
    ctx->pc = 0x2B6E20u;
    // 0x2b6e20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b6e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6e24: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x2b6e24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2b6e28: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2b6e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b6e2c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6E2Cu;
    {
        const bool branch_taken_0x2b6e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6e2c) {
            ctx->pc = 0x2B6E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6E2Cu;
            // 0x2b6e30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6E40u;
            goto label_2b6e40;
        }
    }
    ctx->pc = 0x2B6E34u;
    // 0x2b6e34: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b6e38: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b6e3c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2b6e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2b6e40:
    // 0x2b6e40: 0xc0abc06  jal         func_2AF018
    ctx->pc = 0x2B6E40u;
    SET_GPR_U32(ctx, 31, 0x2B6E48u);
    ctx->pc = 0x2AF018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF018u, 0x2B6E40u, 0x2B6E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E48u;
label_2b6e48:
    // 0x2b6e48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b6e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b6e4c:
    // 0x2b6e4c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2b6e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2b6e50: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b6e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2b6e54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b6e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6e58: 0xc440012c  lwc1        $f0, 0x12C($v0)
    ctx->pc = 0x2b6e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6e60: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2b6e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b6e64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b6e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6e68: 0xe441012c  swc1        $f1, 0x12C($v0)
    ctx->pc = 0x2b6e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x2b6e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E6Cu;
        // 0x2b6e70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6E74u;
    // 0x2b6e74: 0x0  nop
    ctx->pc = 0x2b6e74u;
    // NOP
    ctx->pc = 0x2b6e78u;
}
