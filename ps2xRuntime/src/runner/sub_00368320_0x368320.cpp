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

// Function: sub_00368320
// Address: 0x368320 - 0x3683d0
void sub_00368320_0x368320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368320_0x368320");
#endif

    switch (ctx->pc) {
        case 0x368340u: goto label_368340;
        case 0x368358u: goto label_368358;
        case 0x368360u: goto label_368360;
        case 0x368378u: goto label_368378;
        case 0x368380u: goto label_368380;
        case 0x368390u: goto label_368390;
        case 0x3683a4u: goto label_3683a4;
        default: break;
    }

    ctx->pc = 0x368320u;

    // 0x368320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x368320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x368324: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x368324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x368328: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x368328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36832c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36832cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368330: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x368330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x368334: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x368334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36833c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36833cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_368340:
    // 0x368340: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368344: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x368348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36834c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36834cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368350: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x368350u;
    SET_GPR_U32(ctx, 31, 0x368358u);
    ctx->pc = 0x368354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368350u;
    // 0x368354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x368350u, 0x368358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368358u;
label_368358:
    // 0x368358: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368358u;
    SET_GPR_U32(ctx, 31, 0x368360u);
    ctx->pc = 0x36835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368358u;
    // 0x36835c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368358u, 0x368360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368360u;
label_368360:
    // 0x368360: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x368360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x368364: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x368364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x368368: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368368u;
    {
        const bool branch_taken_0x368368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368368u;
        // 0x36836c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368368) {
            ctx->pc = 0x368340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368340;
        }
    }
    ctx->pc = 0x368370u;
    // 0x368370: 0xc05e93e  jal         func_17A4F8
    ctx->pc = 0x368370u;
    SET_GPR_U32(ctx, 31, 0x368378u);
    ctx->pc = 0x368374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368370u;
    // 0x368374: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A4F8u, 0x368370u, 0x368378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368378u;
label_368378:
    // 0x368378: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36837c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36837cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_368380:
    // 0x368380: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x368380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x368384: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368388: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x368388u;
    SET_GPR_U32(ctx, 31, 0x368390u);
    ctx->pc = 0x36838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368388u;
    // 0x36838c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x368388u, 0x368390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368390u;
label_368390:
    // 0x368390: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x368390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368398: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x368398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36839c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36839Cu;
    SET_GPR_U32(ctx, 31, 0x3683A4u);
    ctx->pc = 0x3683A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36839Cu;
    // 0x3683a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36839Cu, 0x3683A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3683A4u;
label_3683a4:
    // 0x3683a4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3683a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3683a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3683A8u;
    {
        const bool branch_taken_0x3683a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3683ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3683A8u;
        // 0x3683ac: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3683a8) {
            ctx->pc = 0x368380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368380;
        }
    }
    ctx->pc = 0x3683B0u;
    // 0x3683b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3683b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3683b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3683b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3683b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3683b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3683bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3683bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3683c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3683c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3683c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3683C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3683C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3683C4u;
        // 0x3683c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3683C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3683CCu;
    // 0x3683cc: 0x0  nop
    ctx->pc = 0x3683ccu;
    // NOP
    ctx->pc = 0x3683d0u;
}
