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

// Function: sub_001985B0
// Address: 0x1985b0 - 0x198658
void sub_001985B0_0x1985b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001985B0_0x1985b0");
#endif

    ctx->pc = 0x1985b0u;

    // 0x1985b0: 0xc4ab0038  lwc1        $f11, 0x38($a1)
    ctx->pc = 0x1985b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1985b4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1985b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1985b8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1985b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1985bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1985bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985c0: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x1985c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1985c4: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x1985c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1985c8: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x1985c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1985cc: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x1985ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1985d0: 0xc4a50018  lwc1        $f5, 0x18($a1)
    ctx->pc = 0x1985d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1985d4: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x1985d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1985d8: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x1985d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1985dc: 0xc4a80008  lwc1        $f8, 0x8($a1)
    ctx->pc = 0x1985dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1985e0: 0xc4a90030  lwc1        $f9, 0x30($a1)
    ctx->pc = 0x1985e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1985e4: 0xc4aa0034  lwc1        $f10, 0x34($a1)
    ctx->pc = 0x1985e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1985e8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1985e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1985ec: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1985ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1985f0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1985f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1985f4: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1985f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1985f8: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x1985f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1985fc: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x1985fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x198600: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x198600u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x198604: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x198604u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x198608: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x198608u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19860c: 0xe7a90030  swc1        $f9, 0x30($sp)
    ctx->pc = 0x19860cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x198610: 0xe7aa0034  swc1        $f10, 0x34($sp)
    ctx->pc = 0x198610u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x198614: 0xe7ab0038  swc1        $f11, 0x38($sp)
    ctx->pc = 0x198614u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x198618: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x198618u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19861c: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x19861cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198620: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x198620u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198624: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x198624u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198628: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x198628u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x19862c: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x19862cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x198630: 0x7c860020  sq          $a2, 0x20($a0)
    ctx->pc = 0x198630u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 6));
    // 0x198634: 0x7c870030  sq          $a3, 0x30($a0)
    ctx->pc = 0x198634u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 7));
    // 0x198638: 0x3e00008  jr          $ra
    ctx->pc = 0x198638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198638u;
        // 0x19863c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198640u;
    // 0x198640: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x198640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x198644: 0x0  nop
    ctx->pc = 0x198644u;
    // NOP
    // 0x198648: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x198648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19864c: 0x0  nop
    ctx->pc = 0x19864cu;
    // NOP
    // 0x198650: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x198650u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x198654: 0x0  nop
    ctx->pc = 0x198654u;
    // NOP
    ctx->pc = 0x198658u;
}
