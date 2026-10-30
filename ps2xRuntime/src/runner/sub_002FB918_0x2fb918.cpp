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

// Function: sub_002FB918
// Address: 0x2fb918 - 0x2fb9e8
void sub_002FB918_0x2fb918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB918_0x2fb918");
#endif

    switch (ctx->pc) {
        case 0x2fb950u: goto label_2fb950;
        case 0x2fb958u: goto label_2fb958;
        case 0x2fb968u: goto label_2fb968;
        case 0x2fb998u: goto label_2fb998;
        case 0x2fb9c8u: goto label_2fb9c8;
        default: break;
    }

    ctx->pc = 0x2fb918u;

    // 0x2fb918: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fb918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2fb91c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2fb91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2fb920: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2fb920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2fb924: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2fb924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fb928: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2fb928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2fb92c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fb92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb930: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fb930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2fb934: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2fb934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb938: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2fb938u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fb93c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2fb93cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb940: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2fb940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2fb944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fb944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fb948: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2FB948u;
    SET_GPR_U32(ctx, 31, 0x2FB950u);
    ctx->pc = 0x2FB94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB948u;
    // 0x2fb94c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FB948u, 0x2FB950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB950u;
label_2fb950:
    // 0x2fb950: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2FB950u;
    SET_GPR_U32(ctx, 31, 0x2FB958u);
    ctx->pc = 0x2FB954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB950u;
    // 0x2fb954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2FB950u, 0x2FB958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB958u;
label_2fb958:
    // 0x2fb958: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2FB958u;
    {
        const bool branch_taken_0x2fb958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb958) {
            ctx->pc = 0x2FB95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB958u;
            // 0x2fb95c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB9CCu;
            goto label_2fb9cc;
        }
    }
    ctx->pc = 0x2FB960u;
    // 0x2fb960: 0xc087502  jal         func_21D408
    ctx->pc = 0x2FB960u;
    SET_GPR_U32(ctx, 31, 0x2FB968u);
    ctx->pc = 0x2FB964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB960u;
    // 0x2fb964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FB960u, 0x2FB968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB968u;
label_2fb968:
    // 0x2fb968: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2fb968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fb96c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fb96cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb970: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2fb970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb978: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2fb978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb97c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fb97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fb980: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2fb980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fb984: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2fb984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fb988: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2fb988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fb98c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2fb98cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fb990: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2FB990u;
    SET_GPR_U32(ctx, 31, 0x2FB998u);
    ctx->pc = 0x2FB994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB990u;
    // 0x2fb994: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2FB990u, 0x2FB998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB998u;
label_2fb998:
    // 0x2fb998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fb998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb99c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FB99Cu;
    {
        const bool branch_taken_0x2fb99c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB99Cu;
        // 0x2fb9a0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb99c) {
            ctx->pc = 0x2FB9C8u;
            goto label_2fb9c8;
        }
    }
    ctx->pc = 0x2FB9A4u;
    // 0x2fb9a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fb9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9a8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2fb9a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2fb9ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2fb9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2fb9b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2fb9b4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2fb9b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2fb9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fb9bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9c0: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2FB9C0u;
    SET_GPR_U32(ctx, 31, 0x2FB9C8u);
    ctx->pc = 0x2FB9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB9C0u;
    // 0x2fb9c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2FB9C0u, 0x2FB9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB9C8u;
label_2fb9c8:
    // 0x2fb9c8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2fb9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2fb9cc:
    // 0x2fb9cc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2fb9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fb9d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2fb9d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fb9d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fb9d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fb9d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fb9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb9dc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2fb9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fb9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9E0u;
        // 0x2fb9e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB9E8u;
}
