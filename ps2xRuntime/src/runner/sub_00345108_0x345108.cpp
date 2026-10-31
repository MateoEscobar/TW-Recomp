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

// Function: sub_00345108
// Address: 0x345108 - 0x3451e8
void sub_00345108_0x345108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345108_0x345108");
#endif

    switch (ctx->pc) {
        case 0x34516cu: goto label_34516c;
        default: break;
    }

    ctx->pc = 0x345108u;

    // 0x345108: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x345108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x34510c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34510cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345110: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x345110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x345114: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x345114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345118: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x345118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x34511c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x34511cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345120: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x345120u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345128: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x345128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34512c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x34512cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345130: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x345130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345134: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x345134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345138: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x345138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34513c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34513cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x345140: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x345140u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x345144: 0xc523000c  lwc1        $f3, 0xC($t1)
    ctx->pc = 0x345144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345148: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x345148u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34514c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x34514cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x345150: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x345150u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345154: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x345154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x345158: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x345158u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34515c: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x34515cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x345160: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x345160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345164: 0xc0d1186  jal         func_344618
    ctx->pc = 0x345164u;
    SET_GPR_U32(ctx, 31, 0x34516Cu);
    ctx->pc = 0x345168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345164u;
    // 0x345168: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344618u, 0x345164u, 0x34516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34516Cu;
label_34516c:
    // 0x34516c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34516Cu;
    {
        const bool branch_taken_0x34516c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34516c) {
            ctx->pc = 0x345170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34516Cu;
            // 0x345170: 0x7a030020  lq          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34517Cu;
            goto label_34517c;
        }
    }
    ctx->pc = 0x345174u;
    // 0x345174: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x345174u;
    {
        const bool branch_taken_0x345174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345174u;
        // 0x345178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345174) {
            ctx->pc = 0x3451D8u;
            goto label_3451d8;
        }
    }
    ctx->pc = 0x34517Cu;
label_34517c:
    // 0x34517c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x34517cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x345180: 0x7a040030  lq          $a0, 0x30($s0)
    ctx->pc = 0x345180u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x345184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x345184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345188: 0x7a070000  lq          $a3, 0x0($s0)
    ctx->pc = 0x345188u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34518c: 0x7a050040  lq          $a1, 0x40($s0)
    ctx->pc = 0x34518cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x345190: 0x7a080010  lq          $t0, 0x10($s0)
    ctx->pc = 0x345190u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x345194: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x345194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x345198: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x345198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x34519c: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x34519cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x3451a0: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x3451a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x3451a4: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x3451a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x3451a8: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x3451a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3451ac: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3451acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x3451b0: 0x78c40020  lq          $a0, 0x20($a2)
    ctx->pc = 0x3451b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3451b4: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x3451b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x3451b8: 0x78c30030  lq          $v1, 0x30($a2)
    ctx->pc = 0x3451b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x3451bc: 0x7e070040  sq          $a3, 0x40($s0)
    ctx->pc = 0x3451bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 7));
    // 0x3451c0: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x3451c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x3451c4: 0x7cc80010  sq          $t0, 0x10($a2)
    ctx->pc = 0x3451c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 8));
    // 0x3451c8: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3451c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3451cc: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x3451ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x3451d0: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x3451d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3451d4: 0x7cc40030  sq          $a0, 0x30($a2)
    ctx->pc = 0x3451d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 4));
label_3451d8:
    // 0x3451d8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3451d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3451dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3451dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3451e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3451E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3451E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3451E0u;
        // 0x3451e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3451E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3451E8u;
}
