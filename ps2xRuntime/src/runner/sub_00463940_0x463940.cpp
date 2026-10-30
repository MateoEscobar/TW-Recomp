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

// Function: sub_00463940
// Address: 0x463940 - 0x463a90
void sub_00463940_0x463940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463940_0x463940");
#endif

    ctx->pc = 0x463940u;

    // 0x463940: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x463940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x463944: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x463944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463948: 0xc4c5000c  lwc1        $f5, 0xC($a2)
    ctx->pc = 0x463948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x46394c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x46394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463950: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x463950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x463954: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x463954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x463958: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x463958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46395c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x46395cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x463960: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x463960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463964: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x463964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x463968: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x463968u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x46396c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x46396cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x463970: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x463970u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x463974: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x463974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x463978: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x463978u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x46397c: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x46397cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x463980: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x463980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x463984: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x463984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x463988: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x463988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46398c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x46398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463990: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x463990u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x463994: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x463994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x463998: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x463998u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x46399c: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x46399cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4639a0: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x4639a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4639a4: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x4639a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4639a8: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x4639a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4639ac: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4639acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4639b0: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x4639b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x4639b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4639b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4639b8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x4639b8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x4639bc: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x4639bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4639c0: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x4639c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4639c4: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x4639c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4639c8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4639c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4639cc: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x4639ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4639d0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x4639d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x4639d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4639d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4639d8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x4639d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4639dc: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x4639dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4639e0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x4639e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4639e4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x4639e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4639e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4639e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4639ec: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x4639ecu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x4639f0: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x4639f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4639f4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x4639f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4639f8: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x4639f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4639fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4639fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463a00: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x463a00u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x463a04: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x463a04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x463a08: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x463a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463a0c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x463a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463a10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x463a10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463a14: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x463a14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x463a18: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x463a18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x463a1c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x463a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463a20: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x463a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463a24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x463a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463a28: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x463a28u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x463a2c: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x463a2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x463a30: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x463a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463a34: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x463a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463a38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x463a38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463a3c: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x463a3cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x463a40: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x463a40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x463a44: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x463a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463a48: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x463a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463a4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x463a4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463a50: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x463a50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x463a54: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x463a54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x463a58: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x463a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463a5c: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x463a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463a60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x463a60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x463a64: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x463a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x463a68: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x463a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463a6c: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x463a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463a70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x463a70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x463a74: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x463a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x463a78: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x463a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463a7c: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x463a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463a80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x463a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x463a84: 0x3e00008  jr          $ra
    ctx->pc = 0x463A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463A84u;
        // 0x463a88: 0xe4800020  swc1        $f0, 0x20($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x463A8Cu;
    // 0x463a8c: 0x0  nop
    ctx->pc = 0x463a8cu;
    // NOP
    ctx->pc = 0x463a90u;
}
