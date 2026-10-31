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

// Function: sub_004894E0
// Address: 0x4894e0 - 0x489628
void sub_004894E0_0x4894e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004894E0_0x4894e0");
#endif

    ctx->pc = 0x4894e0u;

    // 0x4894e0: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x4894e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4894e4: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x4894e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4894e8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4894e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4894ec: 0x46000a80  add.s       $f10, $f1, $f0
    ctx->pc = 0x4894ecu;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4894f0: 0xe48a0014  swc1        $f10, 0x14($a0)
    ctx->pc = 0x4894f0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4894f4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x4894f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4894f8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x4894f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4894fc: 0x0  nop
    ctx->pc = 0x4894fcu;
    // NOP
    // 0x489500: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x489500u;
    {
        const bool branch_taken_0x489500 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x489504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489500u;
        // 0x489504: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489500) {
            ctx->pc = 0x4895C8u;
            goto label_4895c8;
        }
    }
    ctx->pc = 0x489508u;
    // 0x489508: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x489508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48950c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x48950cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x489510: 0x0  nop
    ctx->pc = 0x489510u;
    // NOP
    // 0x489514: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
    ctx->pc = 0x489514u;
    {
        const bool branch_taken_0x489514 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x489514) {
            ctx->pc = 0x489518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489514u;
            // 0x489518: 0xc4c10004  lwc1        $f1, 0x4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4895D0u;
            goto label_4895d0;
        }
    }
    ctx->pc = 0x48951Cu;
    // 0x48951c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x48951cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x489520: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x489520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x489524: 0x46004243  div.s       $f9, $f8, $f0
    ctx->pc = 0x489524u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[8], ctx->f[0]); }
    // 0x489528: 0x46014203  div.s       $f8, $f8, $f1
    ctx->pc = 0x489528u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[8], ctx->f[1]); }
    // 0x48952c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x48952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489530: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x489530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x489534: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x489534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x489538: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x489538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x48953c: 0xc4a70010  lwc1        $f7, 0x10($a1)
    ctx->pc = 0x48953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x489540: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x489540u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x489544: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x489544u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x489548: 0x460839c2  mul.s       $f7, $f7, $f8
    ctx->pc = 0x489548u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x48954c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x48954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489550: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x489550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x489554: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x489554u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x489558: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x489558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48955c: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x48955cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x489560: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x489560u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x489564: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x489564u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x489568: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x489568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x48956c: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x48956cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x489570: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x489570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x489574: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x489574u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x489578: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x489578u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x48957c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x48957cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x489580: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x489580u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x489584: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x489584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x489588: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x489588u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x48958c: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x48958cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x489590: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x489590u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x489594: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x489594u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x489598: 0xe7a7000c  swc1        $f7, 0xC($sp)
    ctx->pc = 0x489598u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x48959c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x48959cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4895a0: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x4895a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x4895a4: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x4895a4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x4895a8: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x4895a8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x4895ac: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x4895acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x4895b0: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x4895b0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x4895b4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x4895b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x4895b8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x4895b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x4895bc: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x4895bcu;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[8]); }
    // 0x4895c0: 0x46005000  add.s       $f0, $f10, $f0
    ctx->pc = 0x4895c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x4895c4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x4895c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_4895c8:
    // 0x4895c8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x4895c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4895cc: 0x0  nop
    ctx->pc = 0x4895ccu;
    // NOP
label_4895d0:
    // 0x4895d0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4895d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4895d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4895d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4895d8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4895d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4895dc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x4895dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4895e0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4895e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4895e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4895e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4895e8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x4895e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4895ec: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x4895ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4895f0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4895f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4895f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4895f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4895f8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x4895f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4895fc: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x4895fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489600: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x489600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489604: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x489604u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x489608: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x489608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x48960c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x48960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489610: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x489610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489614: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x489614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x489618: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x489618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x48961c: 0x3e00008  jr          $ra
    ctx->pc = 0x48961Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48961Cu;
        // 0x489620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48961Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489624u;
    // 0x489624: 0x0  nop
    ctx->pc = 0x489624u;
    // NOP
    ctx->pc = 0x489628u;
}
