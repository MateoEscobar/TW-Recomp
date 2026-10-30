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

// Function: sub_002BB598
// Address: 0x2bb598 - 0x2bb648
void sub_002BB598_0x2bb598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB598_0x2bb598");
#endif

    switch (ctx->pc) {
        case 0x2bb5f4u: goto label_2bb5f4;
        case 0x2bb604u: goto label_2bb604;
        case 0x2bb614u: goto label_2bb614;
        case 0x2bb624u: goto label_2bb624;
        case 0x2bb630u: goto label_2bb630;
        default: break;
    }

    ctx->pc = 0x2bb598u;

    // 0x2bb598: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bb598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bb59c: 0x3c06fbff  lui         $a2, 0xFBFF
    ctx->pc = 0x2bb59cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64511 << 16));
    // 0x2bb5a0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2bb5a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2bb5a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2bb5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2bb5a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bb5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bb5ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb5b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2bb5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2bb5b4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2bb5b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb5b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb5bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb5c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bb5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bb5c4: 0xac400208  sw          $zero, 0x208($v0)
    ctx->pc = 0x2bb5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 0));
    // 0x2bb5c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bb5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bb5cc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2bb5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb5d0: 0xdca200e0  ld          $v0, 0xE0($a1)
    ctx->pc = 0x2bb5d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x2bb5d4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2bb5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2bb5d8: 0xfca200e0  sd          $v0, 0xE0($a1)
    ctx->pc = 0x2bb5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
    // 0x2bb5dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bb5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bb5e0: 0xa0720120  sb          $s2, 0x120($v1)
    ctx->pc = 0x2bb5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 288), (uint8_t)GPR_U32(ctx, 18));
    // 0x2bb5e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bb5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bb5e8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bb5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bb5ec: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BB5ECu;
    SET_GPR_U32(ctx, 31, 0x2BB5F4u);
    ctx->pc = 0x2BB5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB5ECu;
    // 0x2bb5f0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BB5ECu, 0x2BB5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5F4u;
label_2bb5f4:
    // 0x2bb5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb5f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb5fc: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2BB5FCu;
    SET_GPR_U32(ctx, 31, 0x2BB604u);
    ctx->pc = 0x2BB600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB5FCu;
    // 0x2bb600: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2BB5FCu, 0x2BB604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB604u;
label_2bb604:
    // 0x2bb604: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB604u;
    {
        const bool branch_taken_0x2bb604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb604) {
            ctx->pc = 0x2BB608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB604u;
            // 0x2bb608: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB61Cu;
            goto label_2bb61c;
        }
    }
    ctx->pc = 0x2BB60Cu;
    // 0x2bb60c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2BB60Cu;
    SET_GPR_U32(ctx, 31, 0x2BB614u);
    ctx->pc = 0x2BB610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB60Cu;
    // 0x2bb610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BB60Cu, 0x2BB614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB614u;
label_2bb614:
    // 0x2bb614: 0xa052011f  sb          $s2, 0x11F($v0)
    ctx->pc = 0x2bb614u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 287), (uint8_t)GPR_U32(ctx, 18));
    // 0x2bb618: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bb618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb61c:
    // 0x2bb61c: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2BB61Cu;
    SET_GPR_U32(ctx, 31, 0x2BB624u);
    ctx->pc = 0x2BB620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB61Cu;
    // 0x2bb620: 0x82250019  lb          $a1, 0x19($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2BB61Cu, 0x2BB624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB624u;
label_2bb624:
    // 0x2bb624: 0x8225001a  lb          $a1, 0x1A($s1)
    ctx->pc = 0x2bb624u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x2bb628: 0xc0a3398  jal         func_28CE60
    ctx->pc = 0x2BB628u;
    SET_GPR_U32(ctx, 31, 0x2BB630u);
    ctx->pc = 0x2BB62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB628u;
    // 0x2bb62c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x2BB628u, 0x2BB630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB630u;
label_2bb630:
    // 0x2bb630: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2bb630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bb634: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2bb634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bb638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb63c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb640: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB640u;
        // 0x2bb644: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB648u;
}
