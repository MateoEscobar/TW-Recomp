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

// Function: sub_00345910
// Address: 0x345910 - 0x3459f0
void sub_00345910_0x345910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345910_0x345910");
#endif

    switch (ctx->pc) {
        case 0x345974u: goto label_345974;
        default: break;
    }

    ctx->pc = 0x345910u;

    // 0x345910: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x345910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x345914: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x345914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345918: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x345918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x34591c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x34591cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345920: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x345920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x345924: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x345924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345928: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x345928u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34592c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34592cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345930: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x345930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345934: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x345934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345938: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x345938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34593c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x34593cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345940: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x345940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345944: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x345944u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x345948: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x345948u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x34594c: 0xc523000c  lwc1        $f3, 0xC($t1)
    ctx->pc = 0x34594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345950: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x345950u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x345954: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x345954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x345958: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x345958u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34595c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x34595cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x345960: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x345960u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x345964: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x345964u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x345968: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x345968u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34596c: 0xc0d159c  jal         func_345670
    ctx->pc = 0x34596Cu;
    SET_GPR_U32(ctx, 31, 0x345974u);
    ctx->pc = 0x345970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34596Cu;
    // 0x345970: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345670u, 0x34596Cu, 0x345974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345974u;
label_345974:
    // 0x345974: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x345974u;
    {
        const bool branch_taken_0x345974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345974) {
            ctx->pc = 0x345978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345974u;
            // 0x345978: 0x7a030020  lq          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345984u;
            goto label_345984;
        }
    }
    ctx->pc = 0x34597Cu;
    // 0x34597c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x34597Cu;
    {
        const bool branch_taken_0x34597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34597Cu;
        // 0x345980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34597c) {
            ctx->pc = 0x3459E0u;
            goto label_3459e0;
        }
    }
    ctx->pc = 0x345984u;
label_345984:
    // 0x345984: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x345984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x345988: 0x7a040030  lq          $a0, 0x30($s0)
    ctx->pc = 0x345988u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x34598c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345990: 0x7a070000  lq          $a3, 0x0($s0)
    ctx->pc = 0x345990u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x345994: 0x7a050040  lq          $a1, 0x40($s0)
    ctx->pc = 0x345994u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x345998: 0x7a080010  lq          $t0, 0x10($s0)
    ctx->pc = 0x345998u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x34599c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3459a0: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x3459a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x3459a4: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x3459a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x3459a8: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x3459a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x3459ac: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x3459acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x3459b0: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x3459b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3459b4: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3459b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x3459b8: 0x78c40020  lq          $a0, 0x20($a2)
    ctx->pc = 0x3459b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3459bc: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x3459bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x3459c0: 0x78c30030  lq          $v1, 0x30($a2)
    ctx->pc = 0x3459c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x3459c4: 0x7e070040  sq          $a3, 0x40($s0)
    ctx->pc = 0x3459c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 7));
    // 0x3459c8: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x3459c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x3459cc: 0x7cc80010  sq          $t0, 0x10($a2)
    ctx->pc = 0x3459ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 8));
    // 0x3459d0: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3459d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3459d4: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x3459d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x3459d8: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x3459d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3459dc: 0x7cc40030  sq          $a0, 0x30($a2)
    ctx->pc = 0x3459dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 4));
label_3459e0:
    // 0x3459e0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3459e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3459e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3459e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3459e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3459E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3459ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459E8u;
        // 0x3459ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3459E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3459F0u;
}
