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

// Function: sub_00293840
// Address: 0x293840 - 0x293950
void sub_00293840_0x293840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293840_0x293840");
#endif

    switch (ctx->pc) {
        case 0x293868u: goto label_293868;
        case 0x293890u: goto label_293890;
        case 0x293898u: goto label_293898;
        case 0x2938b0u: goto label_2938b0;
        case 0x2938c0u: goto label_2938c0;
        case 0x2938e8u: goto label_2938e8;
        case 0x293910u: goto label_293910;
        case 0x293934u: goto label_293934;
        case 0x29393cu: goto label_29393c;
        default: break;
    }

    ctx->pc = 0x293840u;

    // 0x293840: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x293844: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x293844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x293848: 0x244253f0  addiu       $v0, $v0, 0x53F0
    ctx->pc = 0x293848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21488));
    // 0x29384c: 0x3403b040  ori         $v1, $zero, 0xB040
    ctx->pc = 0x29384cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45120);
    // 0x293850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x293850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293854: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x293854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x293858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x293858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29385c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x29385cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x293860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293864: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x293864u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6D53F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6D53F8u, _value); } while (0);
label_293868:
    // 0x293868: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x293868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x29386c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x29386cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x293870: 0x0  nop
    ctx->pc = 0x293870u;
    // NOP
    // 0x293874: 0x0  nop
    ctx->pc = 0x293874u;
    // NOP
    // 0x293878: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x293878u;
    {
        const bool branch_taken_0x293878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293878) {
            ctx->pc = 0x29387Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293878u;
            // 0x29387c: 0xa0800008  sb          $zero, 0x8($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293868;
        }
    }
    ctx->pc = 0x293880u;
    // 0x293880: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x293884: 0x2450eaf0  addiu       $s0, $v0, -0x1510
    ctx->pc = 0x293884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961904));
    // 0x293888: 0x26116900  addiu       $s1, $s0, 0x6900
    ctx->pc = 0x293888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 26880));
    // 0x29388c: 0x0  nop
    ctx->pc = 0x29388cu;
    // NOP
label_293890:
    // 0x293890: 0xc0a52d8  jal         func_294B60
    ctx->pc = 0x293890u;
    SET_GPR_U32(ctx, 31, 0x293898u);
    ctx->pc = 0x293894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293890u;
    // 0x293894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B60u, 0x293890u, 0x293898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293898u;
label_293898:
    // 0x293898: 0x26100280  addiu       $s0, $s0, 0x280
    ctx->pc = 0x293898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x29389c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x29389cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2938a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2938A0u;
    {
        const bool branch_taken_0x2938a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2938a0) {
            ctx->pc = 0x293890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293890;
        }
    }
    ctx->pc = 0x2938A8u;
    // 0x2938a8: 0xc0a28d8  jal         func_28A360
    ctx->pc = 0x2938A8u;
    SET_GPR_U32(ctx, 31, 0x2938B0u);
    ctx->pc = 0x28A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A360u, 0x2938A8u, 0x2938B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2938B0u;
label_2938b0:
    // 0x2938b0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2938b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2938b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2938b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2938b8: 0x2444eac0  addiu       $a0, $v0, -0x1540
    ctx->pc = 0x2938b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961856));
    // 0x2938bc: 0x0  nop
    ctx->pc = 0x2938bcu;
    // NOP
label_2938c0:
    // 0x2938c0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2938c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2938c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2938c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2938c8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2938c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2938cc: 0x0  nop
    ctx->pc = 0x2938ccu;
    // NOP
    // 0x2938d0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2938D0u;
    {
        const bool branch_taken_0x2938d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2938D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938D0u;
        // 0x2938d4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2938d0) {
            ctx->pc = 0x2938C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2938c0;
        }
    }
    ctx->pc = 0x2938D8u;
    // 0x2938d8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2938d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2938dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2938dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2938e0: 0x2444ead8  addiu       $a0, $v0, -0x1528
    ctx->pc = 0x2938e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x2938e4: 0x0  nop
    ctx->pc = 0x2938e4u;
    // NOP
label_2938e8:
    // 0x2938e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2938e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2938ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2938ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2938f0: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x2938f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2938f4: 0x0  nop
    ctx->pc = 0x2938f4u;
    // NOP
    // 0x2938f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2938F8u;
    {
        const bool branch_taken_0x2938f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2938FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938F8u;
        // 0x2938fc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2938f8) {
            ctx->pc = 0x2938E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2938e8;
        }
    }
    ctx->pc = 0x293900u;
    // 0x293900: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x293904: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x293904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293908: 0x2444eab8  addiu       $a0, $v0, -0x1548
    ctx->pc = 0x293908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961848));
    // 0x29390c: 0x0  nop
    ctx->pc = 0x29390cu;
    // NOP
label_293910:
    // 0x293910: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x293910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x293914: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x293914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x293918: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x293918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x29391c: 0x0  nop
    ctx->pc = 0x29391cu;
    // NOP
    // 0x293920: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x293920u;
    {
        const bool branch_taken_0x293920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293920u;
        // 0x293924: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293920) {
            ctx->pc = 0x293910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293910;
        }
    }
    ctx->pc = 0x293928u;
    // 0x293928: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x29392c: 0xc0a522c  jal         func_2948B0
    ctx->pc = 0x29392Cu;
    SET_GPR_U32(ctx, 31, 0x293934u);
    ctx->pc = 0x293930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29392Cu;
    // 0x293930: 0xac40e970  sw          $zero, -0x1690($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961520), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948B0u, 0x29392Cu, 0x293934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293934u;
label_293934:
    // 0x293934: 0xc0a522e  jal         func_2948B8
    ctx->pc = 0x293934u;
    SET_GPR_U32(ctx, 31, 0x29393Cu);
    ctx->pc = 0x2948B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948B8u, 0x293934u, 0x29393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29393Cu;
label_29393c:
    // 0x29393c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29393cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x293940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293948: 0x3e00008  jr          $ra
    ctx->pc = 0x293948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293948u;
        // 0x29394c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293950u;
}
