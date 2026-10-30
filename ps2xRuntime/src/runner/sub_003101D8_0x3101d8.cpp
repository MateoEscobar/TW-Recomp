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

// Function: sub_003101D8
// Address: 0x3101d8 - 0x310288
void sub_003101D8_0x3101d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003101D8_0x3101d8");
#endif

    switch (ctx->pc) {
        case 0x310228u: goto label_310228;
        default: break;
    }

    ctx->pc = 0x3101d8u;

    // 0x3101d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3101d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3101dc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3101dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3101e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3101e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3101e4: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x3101e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x3101e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3101e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3101ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3101ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3101f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3101f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3101f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3101f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3101f8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3101f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3101fc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3101fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x310200: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x310200u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x310204: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x310204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x310208: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x310208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31020c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31020cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x310210: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x310210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x310214: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x310214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x310218: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x310218u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31021c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31021cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x310220: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x310220u;
    SET_GPR_U32(ctx, 31, 0x310228u);
    ctx->pc = 0x310224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310220u;
    // 0x310224: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x310220u, 0x310228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310228u;
label_310228:
    // 0x310228: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x310228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x31022c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x310230: 0xa2000035  sb          $zero, 0x35($s0)
    ctx->pc = 0x310230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x310234: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x310234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x310238: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x310238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31023c: 0x24633800  addiu       $v1, $v1, 0x3800
    ctx->pc = 0x31023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14336));
    // 0x310240: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x310240u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x310244: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x310244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x310248: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x310248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31024c: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x31024cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x310250: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x310250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x310254: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x310254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x310258: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x310258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x31025c: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x31025cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x310260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310264: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x310264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x310268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x310268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31026c: 0x246305dc  addiu       $v1, $v1, 0x5DC
    ctx->pc = 0x31026cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1500));
    // 0x310270: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x310270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x310274: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x310274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x310278: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x310278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31027c: 0x3e00008  jr          $ra
    ctx->pc = 0x31027Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31027Cu;
        // 0x310280: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31027Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310284u;
    // 0x310284: 0x0  nop
    ctx->pc = 0x310284u;
    // NOP
    ctx->pc = 0x310288u;
}
