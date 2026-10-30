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

// Function: sub_003978D0
// Address: 0x3978d0 - 0x397998
void sub_003978D0_0x3978d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003978D0_0x3978d0");
#endif

    switch (ctx->pc) {
        case 0x3978f8u: goto label_3978f8;
        case 0x397908u: goto label_397908;
        case 0x397930u: goto label_397930;
        case 0x39794cu: goto label_39794c;
        case 0x397960u: goto label_397960;
        case 0x397974u: goto label_397974;
        default: break;
    }

    ctx->pc = 0x3978d0u;

    // 0x3978d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3978d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3978d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3978d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3978d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3978d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3978dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3978dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3978e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3978e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3978e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3978e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3978e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3978e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3978ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3978ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3978f0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3978F0u;
    SET_GPR_U32(ctx, 31, 0x3978F8u);
    ctx->pc = 0x3978F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3978F0u;
    // 0x3978f4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3978F0u, 0x3978F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3978F8u;
label_3978f8:
    // 0x3978f8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3978F8u;
    {
        const bool branch_taken_0x3978f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3978FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978F8u;
        // 0x3978fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3978f8) {
            ctx->pc = 0x39797Cu;
            goto label_39797c;
        }
    }
    ctx->pc = 0x397900u;
    // 0x397900: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x397900u;
    SET_GPR_U32(ctx, 31, 0x397908u);
    ctx->pc = 0x397904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397900u;
    // 0x397904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x397900u, 0x397908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397908u;
label_397908:
    // 0x397908: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x397908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39790c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x39790Cu;
    {
        const bool branch_taken_0x39790c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x397910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39790Cu;
        // 0x397910: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39790c) {
            ctx->pc = 0x397978u;
            goto label_397978;
        }
    }
    ctx->pc = 0x397914u;
    // 0x397914: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x397914u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x397918: 0x8e64aa84  lw          $a0, -0x557C($s3)
    ctx->pc = 0x397918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945412)));
    // 0x39791c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397920: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x397920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397924: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x397924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x397928: 0xc044084  jal         func_110210
    ctx->pc = 0x397928u;
    SET_GPR_U32(ctx, 31, 0x397930u);
    ctx->pc = 0x39792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397928u;
    // 0x39792c: 0xae022c14  sw          $v0, 0x2C14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 11284), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110210u, 0x397928u, 0x397930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397930u;
label_397930:
    // 0x397930: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x397930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397934: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x397934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397938: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x397938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x39793c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39793cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397940: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x397940u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x397944: 0xc0e637e  jal         func_398DF8
    ctx->pc = 0x397944u;
    SET_GPR_U32(ctx, 31, 0x39794Cu);
    ctx->pc = 0x397948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397944u;
    // 0x397948: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x397944u, 0x39794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39794Cu;
label_39794c:
    // 0x39794c: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x39794cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x397950: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x397950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x397954: 0xae002c14  sw          $zero, 0x2C14($s0)
    ctx->pc = 0x397954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11284), GPR_U32(ctx, 0));
    // 0x397958: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x397958u;
    SET_GPR_U32(ctx, 31, 0x397960u);
    ctx->pc = 0x39795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397958u;
    // 0x39795c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x397958u, 0x397960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397960u;
label_397960:
    // 0x397960: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x397960u;
    {
        const bool branch_taken_0x397960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397960u;
        // 0x397964: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397960) {
            ctx->pc = 0x397974u;
            goto label_397974;
        }
    }
    ctx->pc = 0x397968u;
    // 0x397968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x397968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39796c: 0xc0440c6  jal         func_110318
    ctx->pc = 0x39796Cu;
    SET_GPR_U32(ctx, 31, 0x397974u);
    ctx->pc = 0x397970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39796Cu;
    // 0x397970: 0x8e64aa84  lw          $a0, -0x557C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x39796Cu, 0x397974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397974u;
label_397974:
    // 0x397974: 0xae3200f8  sw          $s2, 0xF8($s1)
    ctx->pc = 0x397974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 18));
label_397978:
    // 0x397978: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x397978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39797c:
    // 0x39797c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39797cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x397980: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x397980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397984: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x397984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x397988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39798c: 0x3e00008  jr          $ra
    ctx->pc = 0x39798Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39798Cu;
        // 0x397990: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39798Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397994u;
    // 0x397994: 0x0  nop
    ctx->pc = 0x397994u;
    // NOP
    ctx->pc = 0x397998u;
}
