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

// Function: sub_002F6E28
// Address: 0x2f6e28 - 0x2f6ee8
void sub_002F6E28_0x2f6e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6E28_0x2f6e28");
#endif

    switch (ctx->pc) {
        case 0x2f6ed4u: goto label_2f6ed4;
        default: break;
    }

    ctx->pc = 0x2f6e28u;

    // 0x2f6e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6e2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f6e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f6e30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f6e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f6e34: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f6e38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f6e40: 0x24632490  addiu       $v1, $v1, 0x2490
    ctx->pc = 0x2f6e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9360));
    // 0x2f6e44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f6e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f6e48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f6e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f6e4c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2f6e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2f6e50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2f6e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2f6e54: 0x3c0a0002  lui         $t2, 0x2
    ctx->pc = 0x2f6e54u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)2 << 16));
    // 0x2f6e58: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2f6e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2f6e5c: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2f6e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f6e60: 0xa204001c  sb          $a0, 0x1C($s0)
    ctx->pc = 0x2f6e60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6e64: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x2f6e64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2f6e68: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2f6e68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2f6e6c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2f6e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6e70: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2f6e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2f6e74: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2f6e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e7c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2f6e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2f6e80: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2f6e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2f6e84: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2f6e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2f6e88: 0xa200001d  sb          $zero, 0x1D($s0)
    ctx->pc = 0x2f6e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6e8c: 0xa200001e  sb          $zero, 0x1E($s0)
    ctx->pc = 0x2f6e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6e90: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x2f6e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6e94: 0xaca0021c  sw          $zero, 0x21C($a1)
    ctx->pc = 0x2f6e94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 0));
    // 0x2f6e98: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2f6e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6e9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f6ea0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f6ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2f6ea4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f6ea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f6ea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6eac: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2f6eacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6eb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f6eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f6eb4: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2f6eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x2f6eb8: 0xdcc200e0  ld          $v0, 0xE0($a2)
    ctx->pc = 0x2f6eb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x2f6ebc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x2f6ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x2f6ec0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2f6ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2f6ec4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2f6ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2f6ec8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2f6ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2f6ecc: 0xc0bdbbc  jal         func_2F6EF0
    ctx->pc = 0x2F6ECCu;
    SET_GPR_U32(ctx, 31, 0x2F6ED4u);
    ctx->pc = 0x2F6ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6ECCu;
    // 0x2f6ed0: 0xfcc200e0  sd          $v0, 0xE0($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6EF0u, 0x2F6ECCu, 0x2F6ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6ED4u;
label_2f6ed4:
    // 0x2f6ed4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f6ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6edc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f6edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6EE0u;
        // 0x2f6ee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6EE8u;
}
