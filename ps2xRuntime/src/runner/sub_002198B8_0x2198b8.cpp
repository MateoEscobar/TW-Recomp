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

// Function: sub_002198B8
// Address: 0x2198b8 - 0x2199c0
void sub_002198B8_0x2198b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002198B8_0x2198b8");
#endif

    switch (ctx->pc) {
        case 0x2198f8u: goto label_2198f8;
        case 0x219984u: goto label_219984;
        default: break;
    }

    ctx->pc = 0x2198b8u;

    // 0x2198b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2198b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2198bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2198bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2198c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2198c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2198c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2198c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2198c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2198c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2198cc: 0x2443ff50  addiu       $v1, $v0, -0xB0
    ctx->pc = 0x2198ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967120));
    // 0x2198d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2198d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2198d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2198d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2198d8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2198d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2198dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2198dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2198e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2198e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2198e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2198e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2198e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2198e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2198ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2198ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2198f0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2198f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x2198f4: 0x0  nop
    ctx->pc = 0x2198f4u;
    // NOP
label_2198f8:
    // 0x2198f8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2198f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2198fc: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2198FCu;
    {
        const bool branch_taken_0x2198fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2198fc) {
            ctx->pc = 0x219900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2198FCu;
            // 0x219900: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219998u;
            goto label_219998;
        }
    }
    ctx->pc = 0x219904u;
    // 0x219904: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x219904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x219908: 0xe46d0038  swc1        $f13, 0x38($v1)
    ctx->pc = 0x219908u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x21990c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x21990cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219914: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x219914u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x219918: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x219918u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21991c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x21991cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x219920: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x219920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x219924: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x219924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x219928: 0xe4610034  swc1        $f1, 0x34($v1)
    ctx->pc = 0x219928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x21992c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x21992cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x219930: 0xac67003c  sw          $a3, 0x3C($v1)
    ctx->pc = 0x219930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 7));
    // 0x219934: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x219934u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x219938: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x219938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21993c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21993cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x219940: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x219940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x219944: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x219944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219948: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x219948u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x21994c: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x21994cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x219950: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x219950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219954: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x219954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x219958: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x219958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x21995c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x21995cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219960: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x219960u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x219964: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x219964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x219968: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x219968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21996c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x21996cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x219970: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x219970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x219974: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x219974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219978: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x219978u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21997c: 0xc094c1e  jal         func_253078
    ctx->pc = 0x21997Cu;
    SET_GPR_U32(ctx, 31, 0x219984u);
    ctx->pc = 0x219980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21997Cu;
    // 0x219980: 0xe4610028  swc1        $f1, 0x28($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x253078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253078u, 0x21997Cu, 0x219984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219984u;
label_219984:
    // 0x219984: 0x8e230170  lw          $v1, 0x170($s1)
    ctx->pc = 0x219984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x219988: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x219988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21998c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x219990: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x219990u;
    {
        const bool branch_taken_0x219990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219990u;
        // 0x219994: 0xae230170  sw          $v1, 0x170($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219990) {
            ctx->pc = 0x2199A8u;
            goto label_2199a8;
        }
    }
    ctx->pc = 0x219998u;
label_219998:
    // 0x219998: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x219998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x21999c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x21999Cu;
    {
        const bool branch_taken_0x21999c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2199A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21999Cu;
        // 0x2199a0: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21999c) {
            ctx->pc = 0x2198F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2198f8;
        }
    }
    ctx->pc = 0x2199A4u;
    // 0x2199a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2199a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2199a8:
    // 0x2199a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2199a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2199ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2199acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2199b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2199b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2199b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2199B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2199B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199B4u;
        // 0x2199b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2199B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2199BCu;
    // 0x2199bc: 0x0  nop
    ctx->pc = 0x2199bcu;
    // NOP
    ctx->pc = 0x2199c0u;
}
