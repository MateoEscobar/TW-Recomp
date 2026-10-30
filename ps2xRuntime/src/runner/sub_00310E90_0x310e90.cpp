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

// Function: sub_00310E90
// Address: 0x310e90 - 0x310f38
void sub_00310E90_0x310e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310E90_0x310e90");
#endif

    switch (ctx->pc) {
        case 0x310ed8u: goto label_310ed8;
        default: break;
    }

    ctx->pc = 0x310e90u;

    // 0x310e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x310e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x310e94: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x310e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x310e98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x310e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x310e9c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x310e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x310ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x310ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x310ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x310ea8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x310ea8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x310eac: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x310eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x310eb0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x310eb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x310eb4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x310eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x310eb8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x310eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ebc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x310ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x310ec0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x310ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x310ec4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x310ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x310ec8: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x310ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x310ecc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x310eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x310ed0: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x310ED0u;
    SET_GPR_U32(ctx, 31, 0x310ED8u);
    ctx->pc = 0x310ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310ED0u;
    // 0x310ed4: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x310ED0u, 0x310ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310ED8u;
label_310ed8:
    // 0x310ed8: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x310ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x310edc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x310edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x310ee0: 0xa2000031  sb          $zero, 0x31($s0)
    ctx->pc = 0x310ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x310ee4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x310ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x310ee8: 0x244238c0  addiu       $v0, $v0, 0x38C0
    ctx->pc = 0x310ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14528));
    // 0x310eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x310eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310ef0: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x310ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x310ef4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x310ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x310ef8: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x310ef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x310efc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x310efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f00: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x310f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x310f04: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x310f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x310f08: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x310f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x310f0c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x310f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x310f10: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x310f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x310f14: 0x24631f40  addiu       $v1, $v1, 0x1F40
    ctx->pc = 0x310f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8000));
    // 0x310f18: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x310f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x310f1c: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x310f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x310f20: 0x248403e8  addiu       $a0, $a0, 0x3E8
    ctx->pc = 0x310f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    // 0x310f24: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x310f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x310f28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x310f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x310F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F2Cu;
        // 0x310f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310F34u;
    // 0x310f34: 0x0  nop
    ctx->pc = 0x310f34u;
    // NOP
    ctx->pc = 0x310f38u;
}
