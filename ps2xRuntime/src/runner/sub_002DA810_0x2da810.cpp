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

// Function: sub_002DA810
// Address: 0x2da810 - 0x2da8f8
void sub_002DA810_0x2da810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA810_0x2da810");
#endif

    switch (ctx->pc) {
        case 0x2da850u: goto label_2da850;
        case 0x2da858u: goto label_2da858;
        case 0x2da868u: goto label_2da868;
        case 0x2da884u: goto label_2da884;
        case 0x2da88cu: goto label_2da88c;
        case 0x2da8a0u: goto label_2da8a0;
        case 0x2da8c4u: goto label_2da8c4;
        case 0x2da8d0u: goto label_2da8d0;
        default: break;
    }

    ctx->pc = 0x2da810u;

    // 0x2da810: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2da810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2da814: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2da814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2da818: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2da818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2da81c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da820: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2da820u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2da824: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2da824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da828: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2da828u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2da82c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2da82cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2da830: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2da830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2da834: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2da834u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2da838: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2da838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2da83c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2da83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2da840: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2da840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2da844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2da844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2da848: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DA848u;
    SET_GPR_U32(ctx, 31, 0x2DA850u);
    ctx->pc = 0x2DA84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA848u;
    // 0x2da84c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DA848u, 0x2DA850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA850u;
label_2da850:
    // 0x2da850: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DA850u;
    SET_GPR_U32(ctx, 31, 0x2DA858u);
    ctx->pc = 0x2DA854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA850u;
    // 0x2da854: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DA850u, 0x2DA858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA858u;
label_2da858:
    // 0x2da858: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DA858u;
    {
        const bool branch_taken_0x2da858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA858u;
        // 0x2da85c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da858) {
            ctx->pc = 0x2DA8D4u;
            goto label_2da8d4;
        }
    }
    ctx->pc = 0x2DA860u;
    // 0x2da860: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DA860u;
    SET_GPR_U32(ctx, 31, 0x2DA868u);
    ctx->pc = 0x2DA864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA860u;
    // 0x2da864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DA860u, 0x2DA868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA868u;
label_2da868:
    // 0x2da868: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2da868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da86c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2da86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2da870: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2da870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2da874: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA874u;
    {
        const bool branch_taken_0x2da874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA874u;
        // 0x2da878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da874) {
            ctx->pc = 0x2DA884u;
            goto label_2da884;
        }
    }
    ctx->pc = 0x2DA87Cu;
    // 0x2da87c: 0xc0a33b6  jal         func_28CED8
    ctx->pc = 0x2DA87Cu;
    SET_GPR_U32(ctx, 31, 0x2DA884u);
    ctx->pc = 0x2DA880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA87Cu;
    // 0x2da880: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CED8u, 0x2DA87Cu, 0x2DA884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA884u;
label_2da884:
    // 0x2da884: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2DA884u;
    SET_GPR_U32(ctx, 31, 0x2DA88Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DA884u, 0x2DA88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA88Cu;
label_2da88c:
    // 0x2da88c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da890: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DA890u;
    {
        const bool branch_taken_0x2da890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA890u;
        // 0x2da894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da890) {
            ctx->pc = 0x2DA8C8u;
            goto label_2da8c8;
        }
    }
    ctx->pc = 0x2DA898u;
    // 0x2da898: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2DA898u;
    SET_GPR_U32(ctx, 31, 0x2DA8A0u);
    ctx->pc = 0x2DA89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA898u;
    // 0x2da89c: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2DA898u, 0x2DA8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8A0u;
label_2da8a0:
    // 0x2da8a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2da8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da8a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2da8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da8a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2da8a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2da8ac: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2da8acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2da8b0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2da8b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2da8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da8b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2da8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da8bc: 0xc0b6a3e  jal         func_2DA8F8
    ctx->pc = 0x2DA8BCu;
    SET_GPR_U32(ctx, 31, 0x2DA8C4u);
    ctx->pc = 0x2DA8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA8BCu;
    // 0x2da8c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8F8u, 0x2DA8BCu, 0x2DA8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8C4u;
label_2da8c4:
    // 0x2da8c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da8c8:
    // 0x2da8c8: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2DA8C8u;
    SET_GPR_U32(ctx, 31, 0x2DA8D0u);
    ctx->pc = 0x2DA8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA8C8u;
    // 0x2da8cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DA8C8u, 0x2DA8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8D0u;
label_2da8d0:
    // 0x2da8d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2da8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2da8d4:
    // 0x2da8d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2da8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da8d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da8d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da8dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2da8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da8e0: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2da8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2da8e4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2da8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2da8e8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2da8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2da8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8ECu;
        // 0x2da8f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA8F4u;
    // 0x2da8f4: 0x0  nop
    ctx->pc = 0x2da8f4u;
    // NOP
    ctx->pc = 0x2da8f8u;
}
