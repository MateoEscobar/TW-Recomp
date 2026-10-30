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

// Function: sub_001989B0
// Address: 0x1989b0 - 0x198a58
void sub_001989B0_0x1989b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001989B0_0x1989b0");
#endif

    switch (ctx->pc) {
        case 0x198a4cu: goto label_198a4c;
        default: break;
    }

    ctx->pc = 0x1989b0u;

    // 0x1989b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1989b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1989b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1989b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1989b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1989bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1989bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1989c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1989c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1989c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989c8: 0xc4440034  lwc1        $f4, 0x34($v0)
    ctx->pc = 0x1989c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1989cc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1989ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1989d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1989d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1989d4: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1989d4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x1989d8: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1989d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1989dc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1989dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1989e0: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x1989e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1989e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1989e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1989e8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1989e8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1989ec: 0xc4470004  lwc1        $f7, 0x4($v0)
    ctx->pc = 0x1989ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1989f0: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x1989f0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x1989f4: 0xc4450020  lwc1        $f5, 0x20($v0)
    ctx->pc = 0x1989f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1989f8: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x1989f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1989fc: 0xc4480010  lwc1        $f8, 0x10($v0)
    ctx->pc = 0x1989fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x198a00: 0xc4490018  lwc1        $f9, 0x18($v0)
    ctx->pc = 0x198a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x198a04: 0xc44a0030  lwc1        $f10, 0x30($v0)
    ctx->pc = 0x198a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x198a08: 0xc44b0038  lwc1        $f11, 0x38($v0)
    ctx->pc = 0x198a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x198a0c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x198a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x198a10: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x198a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x198a14: 0xe7a70008  swc1        $f7, 0x8($sp)
    ctx->pc = 0x198a14u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x198a18: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x198a18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x198a1c: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x198a1cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x198a20: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x198a20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x198a24: 0xe7a80020  swc1        $f8, 0x20($sp)
    ctx->pc = 0x198a24u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x198a28: 0xe7a90024  swc1        $f9, 0x24($sp)
    ctx->pc = 0x198a28u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x198a2c: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x198a2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x198a30: 0xe7aa0030  swc1        $f10, 0x30($sp)
    ctx->pc = 0x198a30u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x198a34: 0xe7ab0034  swc1        $f11, 0x34($sp)
    ctx->pc = 0x198a34u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x198a38: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x198a38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x198a3c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x198a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x198a40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x198a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x198a44: 0xc120efe  jal         func_483BF8
    ctx->pc = 0x198A44u;
    SET_GPR_U32(ctx, 31, 0x198A4Cu);
    ctx->pc = 0x198A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A44u;
    // 0x198a48: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483BF8u, 0x198A44u, 0x198A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A4Cu;
label_198a4c:
    // 0x198a4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x198a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198a50: 0x3e00008  jr          $ra
    ctx->pc = 0x198A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A50u;
        // 0x198a54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198A58u;
}
