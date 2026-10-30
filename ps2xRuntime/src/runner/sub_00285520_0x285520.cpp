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

// Function: sub_00285520
// Address: 0x285520 - 0x2855f8
void sub_00285520_0x285520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285520_0x285520");
#endif

    switch (ctx->pc) {
        case 0x285560u: goto label_285560;
        case 0x285570u: goto label_285570;
        case 0x2855a8u: goto label_2855a8;
        case 0x2855c4u: goto label_2855c4;
        default: break;
    }

    ctx->pc = 0x285520u;

    // 0x285520: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x285520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x285524: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x285524u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x285528: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x285528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x28552c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28552cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x285530: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x285530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285534: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x285534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x285538: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x285538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28553c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x28553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x285540: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x285540u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x285544: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x285544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x285548: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x285548u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28554c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28554cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285550: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x285550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x285554: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x285554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x285558: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x285558u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x28555c: 0x0  nop
    ctx->pc = 0x28555cu;
    // NOP
label_285560:
    // 0x285560: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x285560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285564: 0x824501b0  lb          $a1, 0x1B0($s2)
    ctx->pc = 0x285564u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x285568: 0xc107908  jal         func_41E420
    ctx->pc = 0x285568u;
    SET_GPR_U32(ctx, 31, 0x285570u);
    ctx->pc = 0x28556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285568u;
    // 0x28556c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x285568u, 0x285570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285570u;
label_285570:
    // 0x285570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285574: 0x0  nop
    ctx->pc = 0x285574u;
    // NOP
    // 0x285578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28557c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28557cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285580: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x285580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285584: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x285584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x285588: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x285588u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28558c: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x28558cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x285590: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x285590u;
    {
        const bool branch_taken_0x285590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x285594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285590u;
        // 0x285594: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285590) {
            ctx->pc = 0x2855C4u;
            goto label_2855c4;
        }
    }
    ctx->pc = 0x285598u;
    // 0x285598: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x285598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x28559c: 0x828501b0  lb          $a1, 0x1B0($s4)
    ctx->pc = 0x28559cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
    // 0x2855a0: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x2855A0u;
    SET_GPR_U32(ctx, 31, 0x2855A8u);
    ctx->pc = 0x2855A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2855A0u;
    // 0x2855a4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2855A0u, 0x2855A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2855A8u;
label_2855a8:
    // 0x2855a8: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x2855a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x2855ac: 0x103823  negu        $a3, $s0
    ctx->pc = 0x2855acu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x2855b0: 0x824501b0  lb          $a1, 0x1B0($s2)
    ctx->pc = 0x2855b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x2855b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2855b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2855b8: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2855b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x2855bc: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x2855BCu;
    SET_GPR_U32(ctx, 31, 0x2855C4u);
    ctx->pc = 0x2855C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2855BCu;
    // 0x2855c0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2855BCu, 0x2855C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2855C4u;
label_2855c4:
    // 0x2855c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2855c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2855c8: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x2855c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2855cc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2855CCu;
    {
        const bool branch_taken_0x2855cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2855D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855CCu;
        // 0x2855d0: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855cc) {
            ctx->pc = 0x285560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285560;
        }
    }
    ctx->pc = 0x2855D4u;
    // 0x2855d4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2855d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2855d8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2855d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2855dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2855dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2855e0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2855e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2855e4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2855e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2855e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2855e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2855ec: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2855ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2855f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2855F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2855F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855F0u;
        // 0x2855f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2855F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2855F8u;
}
