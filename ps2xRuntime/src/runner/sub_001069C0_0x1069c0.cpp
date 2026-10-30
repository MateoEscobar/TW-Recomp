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

// Function: sub_001069C0
// Address: 0x1069c0 - 0x106a80
void sub_001069C0_0x1069c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001069C0_0x1069c0");
#endif

    switch (ctx->pc) {
        case 0x106a30u: goto label_106a30;
        case 0x106a48u: goto label_106a48;
        default: break;
    }

    ctx->pc = 0x1069c0u;

    // 0x1069c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1069c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1069c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1069c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1069c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1069c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1069cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1069ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1069d0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1069d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x1069d4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1069d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1069d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1069d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069dc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1069dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1069e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1069e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1069e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1069e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1069e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069ec: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1069ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1069f0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1069f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1069f4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1069f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1069f8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1069f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1069fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106a00: 0x24424d58  addiu       $v0, $v0, 0x4D58
    ctx->pc = 0x106a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19800));
    // 0x106a04: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x106a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x106a08: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x106a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x106a0c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x106a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x106a10: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x106a10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a14: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x106a14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a18: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x106a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x106a1c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x106a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x106a20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x106a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a24: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x106a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x106a28: 0xc042ed8  jal         func_10BB60
    ctx->pc = 0x106A28u;
    SET_GPR_U32(ctx, 31, 0x106A30u);
    ctx->pc = 0x106A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A28u;
    // 0x106a2c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x106A28u, 0x106A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A30u;
label_106a30:
    // 0x106a30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x106a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x106a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a3c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x106a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x106a40: 0xc041164  jal         func_104590
    ctx->pc = 0x106A40u;
    SET_GPR_U32(ctx, 31, 0x106A48u);
    ctx->pc = 0x106A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A40u;
    // 0x106a44: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x106A40u, 0x106A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A48u;
label_106a48:
    // 0x106a48: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x106a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x106a4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x106a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a50: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x106a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x106a54: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x106a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
    // 0x106a58: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x106a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106a5c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x106a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106a60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x106a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106a64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x106a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106a68: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x106a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106a6c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x106a6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106a74: 0x3e00008  jr          $ra
    ctx->pc = 0x106A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A74u;
        // 0x106a78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106A7Cu;
    // 0x106a7c: 0x0  nop
    ctx->pc = 0x106a7cu;
    // NOP
    ctx->pc = 0x106a80u;
}
