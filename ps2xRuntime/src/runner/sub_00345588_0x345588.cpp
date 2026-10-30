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

// Function: sub_00345588
// Address: 0x345588 - 0x345670
void sub_00345588_0x345588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345588_0x345588");
#endif

    switch (ctx->pc) {
        case 0x3455f4u: goto label_3455f4;
        default: break;
    }

    ctx->pc = 0x345588u;

label_345588:
    // 0x345588: 0x3e00008  jr          $ra
    ctx->pc = 0x345588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345588u;
        // 0x34558c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345590u;
    // 0x345590: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x345590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x345594: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x345594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345598: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x345598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x34559c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x34559cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3455a0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3455a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3455a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3455a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3455a8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3455a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3455ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3455acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3455b0: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x3455b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3455b4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3455b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3455b8: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x3455b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3455bc: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3455bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3455c0: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x3455c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3455c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3455c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3455c8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3455c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3455cc: 0xc523000c  lwc1        $f3, 0xC($t1)
    ctx->pc = 0x3455ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3455d0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3455d0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x3455d4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3455d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3455d8: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x3455d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3455dc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3455dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3455e0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x3455e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3455e4: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x3455e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3455e8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3455e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3455ec: 0xc0d1562  jal         func_345588
    ctx->pc = 0x3455ECu;
    SET_GPR_U32(ctx, 31, 0x3455F4u);
    ctx->pc = 0x3455F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3455ECu;
    // 0x3455f0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345588u;
    goto label_345588;
    ctx->pc = 0x3455F4u;
label_3455f4:
    // 0x3455f4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3455F4u;
    {
        const bool branch_taken_0x3455f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3455f4) {
            ctx->pc = 0x3455F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3455F4u;
            // 0x3455f8: 0x7a030020  lq          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345604u;
            goto label_345604;
        }
    }
    ctx->pc = 0x3455FCu;
    // 0x3455fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3455FCu;
    {
        const bool branch_taken_0x3455fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3455FCu;
        // 0x345600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3455fc) {
            ctx->pc = 0x345660u;
            goto label_345660;
        }
    }
    ctx->pc = 0x345604u;
label_345604:
    // 0x345604: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x345604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x345608: 0x7a040030  lq          $a0, 0x30($s0)
    ctx->pc = 0x345608u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x34560c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345610: 0x7a070000  lq          $a3, 0x0($s0)
    ctx->pc = 0x345610u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x345614: 0x7a050040  lq          $a1, 0x40($s0)
    ctx->pc = 0x345614u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x345618: 0x7a080010  lq          $t0, 0x10($s0)
    ctx->pc = 0x345618u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x34561c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34561cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x345620: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x345620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x345624: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x345624u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x345628: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x345628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x34562c: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x34562cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x345630: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x345630u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x345634: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x345634u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x345638: 0x78c40020  lq          $a0, 0x20($a2)
    ctx->pc = 0x345638u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x34563c: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x34563cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x345640: 0x78c30030  lq          $v1, 0x30($a2)
    ctx->pc = 0x345640u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x345644: 0x7e070040  sq          $a3, 0x40($s0)
    ctx->pc = 0x345644u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 7));
    // 0x345648: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x345648u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x34564c: 0x7cc80010  sq          $t0, 0x10($a2)
    ctx->pc = 0x34564cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 8));
    // 0x345650: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x345650u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x345654: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x345654u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x345658: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x345658u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34565c: 0x7cc40030  sq          $a0, 0x30($a2)
    ctx->pc = 0x34565cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 4));
label_345660:
    // 0x345660: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x345660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x345664: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x345664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x345668: 0x3e00008  jr          $ra
    ctx->pc = 0x345668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345668u;
        // 0x34566c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345670u;
}
