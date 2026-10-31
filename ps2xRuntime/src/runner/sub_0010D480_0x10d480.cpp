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

// Function: sub_0010D480
// Address: 0x10d480 - 0x10d570
void sub_0010D480_0x10d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D480_0x10d480");
#endif

    switch (ctx->pc) {
        case 0x10d4ccu: goto label_10d4cc;
        case 0x10d4f0u: goto label_10d4f0;
        case 0x10d50cu: goto label_10d50c;
        case 0x10d51cu: goto label_10d51c;
        case 0x10d544u: goto label_10d544;
        default: break;
    }

    ctx->pc = 0x10d480u;

    // 0x10d480: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10d480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10d484: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x10d484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x10d488: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x10d488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x10d48c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d490: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10d490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10d494: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10d494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d498: 0x2429818  mult        $s3, $s2, $v0
    ctx->pc = 0x10d498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x10d49c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10d49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x10d4a0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x10d4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x10d4a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d4a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d4a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x10d4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x10d4ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d4b0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x10d4b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x10d4b4: 0x2338021  addu        $s0, $s1, $s3
    ctx->pc = 0x10d4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x10d4b8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x10d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x10d4bc: 0x54430023  bnel        $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x10D4BCu;
    {
        const bool branch_taken_0x10d4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10d4bc) {
            ctx->pc = 0x10D4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D4BCu;
            // 0x10d4c0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D54Cu;
            goto label_10d54c;
        }
    }
    ctx->pc = 0x10D4C4u;
    // 0x10d4c4: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10D4C4u;
    SET_GPR_U32(ctx, 31, 0x10D4CCu);
    ctx->pc = 0x10D4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D4C4u;
    // 0x10d4c8: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10D4C4u, 0x10D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D4CCu;
label_10d4cc:
    // 0x10d4cc: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x10D4CCu;
    {
        const bool branch_taken_0x10d4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d4cc) {
            ctx->pc = 0x10D4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D4CCu;
            // 0x10d4d0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D54Cu;
            goto label_10d54c;
        }
    }
    ctx->pc = 0x10D4D4u;
    // 0x10d4d4: 0x7a020070  lq          $v0, 0x70($s0)
    ctx->pc = 0x10d4d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x10d4d8: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x10d4d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x10d4dc: 0x8e84aa84  lw          $a0, -0x557C($s4)
    ctx->pc = 0x10d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x10d4e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10d4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d4e4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x10d4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x10d4e8: 0xc044454  jal         func_111150
    ctx->pc = 0x10D4E8u;
    SET_GPR_U32(ctx, 31, 0x10D4F0u);
    ctx->pc = 0x10D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D4E8u;
    // 0x10d4ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111150u, 0x10D4E8u, 0x10D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D4F0u;
label_10d4f0:
    // 0x10d4f0: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x10d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d4f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10d4f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d4f8: 0x0  nop
    ctx->pc = 0x10d4f8u;
    // NOP
    // 0x10d4fc: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x10D4FCu;
    {
        const bool branch_taken_0x10d4fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d4fc) {
            ctx->pc = 0x10D500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D4FCu;
            // 0x10d500: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D54Cu;
            goto label_10d54c;
        }
    }
    ctx->pc = 0x10D504u;
    // 0x10d504: 0xc042fe4  jal         func_10BF90
    ctx->pc = 0x10D504u;
    SET_GPR_U32(ctx, 31, 0x10D50Cu);
    ctx->pc = 0x10D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D504u;
    // 0x10d508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF90u, 0x10D504u, 0x10D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D50Cu;
label_10d50c:
    // 0x10d50c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10d50cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x10d510: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10d510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d514: 0xc043508  jal         func_10D420
    ctx->pc = 0x10D514u;
    SET_GPR_U32(ctx, 31, 0x10D51Cu);
    ctx->pc = 0x10D518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D514u;
    // 0x10d518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D420u, 0x10D514u, 0x10D51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D51Cu;
label_10d51c:
    // 0x10d51c: 0x2713021  addu        $a2, $s3, $s1
    ctx->pc = 0x10d51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x10d520: 0x8e84aa84  lw          $a0, -0x557C($s4)
    ctx->pc = 0x10d520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
    // 0x10d524: 0xc60c0088  lwc1        $f12, 0x88($s0)
    ctx->pc = 0x10d524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10d528: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10d528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d52c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10d530: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x10d530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x10d534: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x10d534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x10d538: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x10d538u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x10d53c: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x10D53Cu;
    SET_GPR_U32(ctx, 31, 0x10D544u);
    ctx->pc = 0x10D540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D53Cu;
    // 0x10d540: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x10D53Cu, 0x10D544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D544u;
label_10d544:
    // 0x10d544: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x10d544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x10d548: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10d548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10d54c:
    // 0x10d54c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10d54cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d550: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10d550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d554: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10d554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d558: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x10d558u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d55c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10d55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d560: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x10d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10d564: 0x3e00008  jr          $ra
    ctx->pc = 0x10D564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D564u;
        // 0x10d568: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D56Cu;
    // 0x10d56c: 0x0  nop
    ctx->pc = 0x10d56cu;
    // NOP
    ctx->pc = 0x10d570u;
}
