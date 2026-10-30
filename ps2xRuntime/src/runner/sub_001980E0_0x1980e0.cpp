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

// Function: sub_001980E0
// Address: 0x1980e0 - 0x198190
void sub_001980E0_0x1980e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001980E0_0x1980e0");
#endif

    switch (ctx->pc) {
        case 0x19810cu: goto label_19810c;
        case 0x198130u: goto label_198130;
        case 0x19813cu: goto label_19813c;
        case 0x19814cu: goto label_19814c;
        case 0x19815cu: goto label_19815c;
        case 0x198170u: goto label_198170;
        default: break;
    }

    ctx->pc = 0x1980e0u;

    // 0x1980e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1980e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1980e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1980e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1980e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1980e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1980ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1980ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1980f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980f4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1980f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1980f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1980f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1980fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1980fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198104: 0xc1223aa  jal         func_488EA8
    ctx->pc = 0x198104u;
    SET_GPR_U32(ctx, 31, 0x19810Cu);
    ctx->pc = 0x198108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198104u;
    // 0x198108: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488EA8u, 0x198104u, 0x19810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19810Cu;
label_19810c:
    // 0x19810c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19810cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198110: 0x16600018  bnez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x198110u;
    {
        const bool branch_taken_0x198110 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x198114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198110u;
        // 0x198114: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198110) {
            ctx->pc = 0x198174u;
            goto label_198174;
        }
    }
    ctx->pc = 0x198118u;
    // 0x198118: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x198118u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x19811c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x19811cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x198120: 0x2610d800  addiu       $s0, $s0, -0x2800
    ctx->pc = 0x198120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957056));
    // 0x198124: 0x24a536d0  addiu       $a1, $a1, 0x36D0
    ctx->pc = 0x198124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14032));
    // 0x198128: 0xc051244  jal         func_144910
    ctx->pc = 0x198128u;
    SET_GPR_U32(ctx, 31, 0x198130u);
    ctx->pc = 0x19812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198128u;
    // 0x19812c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144910u, 0x198128u, 0x198130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198130u;
label_198130:
    // 0x198130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x198130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198134: 0xc051244  jal         func_144910
    ctx->pc = 0x198134u;
    SET_GPR_U32(ctx, 31, 0x19813Cu);
    ctx->pc = 0x198138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198134u;
    // 0x198138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144910u, 0x198134u, 0x19813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19813Cu;
label_19813c:
    // 0x19813c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x19813cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x198140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198144: 0xc051244  jal         func_144910
    ctx->pc = 0x198144u;
    SET_GPR_U32(ctx, 31, 0x19814Cu);
    ctx->pc = 0x198148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198144u;
    // 0x198148: 0x24a536d8  addiu       $a1, $a1, 0x36D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144910u, 0x198144u, 0x19814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19814Cu;
label_19814c:
    // 0x19814c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x19814cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x198150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198154: 0xc051244  jal         func_144910
    ctx->pc = 0x198154u;
    SET_GPR_U32(ctx, 31, 0x19815Cu);
    ctx->pc = 0x198158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198154u;
    // 0x198158: 0x24a536e0  addiu       $a1, $a1, 0x36E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144910u, 0x198154u, 0x19815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19815Cu;
label_19815c:
    // 0x19815c: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x19815cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x198160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198164: 0x24a580d8  addiu       $a1, $a1, -0x7F28
    ctx->pc = 0x198164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934744));
    // 0x198168: 0xc1223ec  jal         func_488FB0
    ctx->pc = 0x198168u;
    SET_GPR_U32(ctx, 31, 0x198170u);
    ctx->pc = 0x19816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198168u;
    // 0x19816c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488FB0u, 0x198168u, 0x198170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198170u;
label_198170:
    // 0x198170: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x198170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198174:
    // 0x198174: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x198174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198178: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x198178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19817c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19817cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198180: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x198180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198188: 0x3e00008  jr          $ra
    ctx->pc = 0x198188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198188u;
        // 0x19818c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198190u;
}
