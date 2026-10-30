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

// Function: sub_0018E530
// Address: 0x18e530 - 0x18e5f0
void sub_0018E530_0x18e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E530_0x18e530");
#endif

    switch (ctx->pc) {
        case 0x18e588u: goto label_18e588;
        case 0x18e5acu: goto label_18e5ac;
        default: break;
    }

    ctx->pc = 0x18e530u;

    // 0x18e530: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18e534: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18e534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18e538: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18e538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18e53c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18e53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18e540: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18e540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e544: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18e544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18e548: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x18e548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x18e54c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18e54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18e550: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x18e550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e554: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x18e554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x18e558: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x18e558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e55c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x18e55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x18e560: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x18e560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e564: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x18e564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x18e568: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x18e568u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e56c: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x18e56cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x18e570: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18e570u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e574: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x18e574u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x18e578: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x18e578u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x18e57c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e580: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x18e580u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x18e584: 0x0  nop
    ctx->pc = 0x18e584u;
    // NOP
label_18e588:
    // 0x18e588: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18e588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e58c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x18e58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e590: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18e590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e594: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x18e594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e598: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x18e598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e59c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x18e59cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5a0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x18e5a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x18e5a4: 0xc062d92  jal         func_18B648
    ctx->pc = 0x18E5A4u;
    SET_GPR_U32(ctx, 31, 0x18E5ACu);
    ctx->pc = 0x18E5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5A4u;
    // 0x18e5a8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B648u, 0x18E5A4u, 0x18E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5ACu;
label_18e5ac:
    // 0x18e5ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18e5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18e5b0: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x18e5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18e5b4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18E5B4u;
    {
        const bool branch_taken_0x18e5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5B4u;
        // 0x18e5b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5b4) {
            ctx->pc = 0x18E588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e588;
        }
    }
    ctx->pc = 0x18E5BCu;
    // 0x18e5bc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18e5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18e5c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18e5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18e5c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18e5c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e5c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18e5c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e5cc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x18e5ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e5d0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x18e5d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e5d4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x18e5d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e5d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e5dc: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x18e5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18e5e0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x18e5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18e5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x18E5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5E4u;
        // 0x18e5e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E5ECu;
    // 0x18e5ec: 0x0  nop
    ctx->pc = 0x18e5ecu;
    // NOP
    ctx->pc = 0x18e5f0u;
}
