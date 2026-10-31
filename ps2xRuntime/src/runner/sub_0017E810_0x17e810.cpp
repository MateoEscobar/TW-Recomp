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

// Function: sub_0017E810
// Address: 0x17e810 - 0x17e930
void sub_0017E810_0x17e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E810_0x17e810");
#endif

    switch (ctx->pc) {
        case 0x17e880u: goto label_17e880;
        case 0x17e894u: goto label_17e894;
        case 0x17e908u: goto label_17e908;
        default: break;
    }

    ctx->pc = 0x17e810u;

    // 0x17e810: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17e810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17e814: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x17e814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x17e818: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x17e818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x17e81c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x17e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x17e820: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17e820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x17e824: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x17e824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17e82c: 0x24465300  addiu       $a2, $v0, 0x5300
    ctx->pc = 0x17e82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
    // 0x17e830: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x17e830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x17e834: 0x2463a440  addiu       $v1, $v1, -0x5BC0
    ctx->pc = 0x17e834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943808));
    // 0x17e838: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x17e83c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x17e83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x17e840: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x17e840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x17e844: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x17e844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x17e848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e84c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x17e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x17e850: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x17e850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x17e854: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17e854u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e858: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17e858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e85c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17e85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e860: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x17e860u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x715320u));
    // 0x17e864: 0xac836ff8  sw          $v1, 0x6FF8($a0)
    ctx->pc = 0x17e864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x596FF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x596FF8u, _value); } while (0);
    // 0x17e868: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x17E868u;
    {
        const bool branch_taken_0x17e868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E868u;
        // 0x17e86c: 0xac406ffc  sw          $zero, 0x6FFC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e868) {
            ctx->pc = 0x17E8A8u;
            goto label_17e8a8;
        }
    }
    ctx->pc = 0x17E870u;
    // 0x17e870: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17e870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17e874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17e878: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17e878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17e87c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x17e87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17e880:
    // 0x17e880: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17e880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17e884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e888: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17e888u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17e88c: 0xc11db32  jal         func_476CC8
    ctx->pc = 0x17E88Cu;
    SET_GPR_U32(ctx, 31, 0x17E894u);
    ctx->pc = 0x17E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E88Cu;
    // 0x17e890: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x476CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476CC8u, 0x17E88Cu, 0x17E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E894u;
label_17e894:
    // 0x17e894: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17e894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17e898: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x17e898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17e89c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x17e89cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17e8a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17E8A0u;
    {
        const bool branch_taken_0x17e8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8A0u;
        // 0x17e8a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8a0) {
            ctx->pc = 0x17E880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e880;
        }
    }
    ctx->pc = 0x17E8A8u;
label_17e8a8:
    // 0x17e8a8: 0x8e826ff8  lw          $v0, 0x6FF8($s4)
    ctx->pc = 0x17e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28664)));
    // 0x17e8ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e8acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8b0: 0x71081b89  pcpyld      $v1, $t0, $t0
    ctx->pc = 0x17e8b0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x17e8b4: 0x3c096c00  lui         $t1, 0x6C00
    ctx->pc = 0x17e8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)27648 << 16));
    // 0x17e8b8: 0x352903d0  ori         $t1, $t1, 0x3D0
    ctx->pc = 0x17e8b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)976);
    // 0x17e8bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17e8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17e8c0: 0x3c0a0100  lui         $t2, 0x100
    ctx->pc = 0x17e8c0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)256 << 16));
    // 0x17e8c4: 0x354a0404  ori         $t2, $t2, 0x404
    ctx->pc = 0x17e8c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)1028);
    // 0x17e8c8: 0x26a7a440  addiu       $a3, $s5, -0x5BC0
    ctx->pc = 0x17e8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943808));
    // 0x17e8cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17e8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8d0: 0x8e666ffc  lw          $a2, 0x6FFC($s3)
    ctx->pc = 0x17e8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28668)));
    // 0x17e8d4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x17e8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8d8: 0xae876ff8  sw          $a3, 0x6FF8($s4)
    ctx->pc = 0x17e8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28664), GPR_U32(ctx, 7));
    // 0x17e8dc: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x17e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17e8e0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x17e8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17e8e4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x17e8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x17e8e8: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x17e8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x17e8ec: 0xae666ffc  sw          $a2, 0x6FFC($s3)
    ctx->pc = 0x17e8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28668), GPR_U32(ctx, 6));
    // 0x17e8f0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x17e8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x17e8f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17e8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17e8f8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x17e8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x17e8fc: 0x70481b89  pcpyld      $v1, $v0, $t0
    ctx->pc = 0x17e8fcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x17e900: 0xc127e32  jal         func_49F8C8
    ctx->pc = 0x17E900u;
    SET_GPR_U32(ctx, 31, 0x17E908u);
    ctx->pc = 0x17E904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E900u;
    // 0x17e904: 0x7ce30000  sq          $v1, 0x0($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F8C8u, 0x17E900u, 0x17E908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E908u;
label_17e908:
    // 0x17e908: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17e908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e90c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17e90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e910: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17e910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e914: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17e914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e918: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x17e918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e91c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x17e91cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e924: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x17e924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e928: 0x3e00008  jr          $ra
    ctx->pc = 0x17E928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E928u;
        // 0x17e92c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E930u;
}
