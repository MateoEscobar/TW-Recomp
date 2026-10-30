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

// Function: sub_00322448
// Address: 0x322448 - 0x322510
void sub_00322448_0x322448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322448_0x322448");
#endif

    switch (ctx->pc) {
        case 0x322468u: goto label_322468;
        case 0x322488u: goto label_322488;
        case 0x322498u: goto label_322498;
        case 0x3224b8u: goto label_3224b8;
        case 0x3224c0u: goto label_3224c0;
        case 0x3224ccu: goto label_3224cc;
        case 0x3224e8u: goto label_3224e8;
        default: break;
    }

    ctx->pc = 0x322448u;

    // 0x322448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x322448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32244c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x322450: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x322450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x322454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x322454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322458: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x322458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32245c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322460: 0xc05959e  jal         func_165678
    ctx->pc = 0x322460u;
    SET_GPR_U32(ctx, 31, 0x322468u);
    ctx->pc = 0x322464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322460u;
    // 0x322464: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x322460u, 0x322468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322468u;
label_322468:
    // 0x322468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x322468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32246c: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x32246Cu;
    {
        const bool branch_taken_0x32246c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32246c) {
            ctx->pc = 0x322470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32246Cu;
            // 0x322470: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3224ACu;
            goto label_3224ac;
        }
    }
    ctx->pc = 0x322474u;
    // 0x322474: 0x82220016  lb          $v0, 0x16($s1)
    ctx->pc = 0x322474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x322478: 0x442000c  bltzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x322478u;
    {
        const bool branch_taken_0x322478 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x322478) {
            ctx->pc = 0x32247Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322478u;
            // 0x32247c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3224ACu;
            goto label_3224ac;
        }
    }
    ctx->pc = 0x322480u;
    // 0x322480: 0xc08750a  jal         func_21D428
    ctx->pc = 0x322480u;
    SET_GPR_U32(ctx, 31, 0x322488u);
    ctx->pc = 0x322484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322480u;
    // 0x322484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x322480u, 0x322488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322488u;
label_322488:
    // 0x322488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32248c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32248cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322490: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x322490u;
    SET_GPR_U32(ctx, 31, 0x322498u);
    ctx->pc = 0x322494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322490u;
    // 0x322494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x322490u, 0x322498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322498u;
label_322498:
    // 0x322498: 0x82230016  lb          $v1, 0x16($s1)
    ctx->pc = 0x322498u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x32249c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3224a0: 0xa2020274  sb          $v0, 0x274($s0)
    ctx->pc = 0x3224a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 628), (uint8_t)GPR_U32(ctx, 2));
    // 0x3224a4: 0xa2030275  sb          $v1, 0x275($s0)
    ctx->pc = 0x3224a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 629), (uint8_t)GPR_U32(ctx, 3));
    // 0x3224a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3224a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3224ac:
    // 0x3224ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3224acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3224b0: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x3224b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x3224b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3224b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3224b8:
    // 0x3224b8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x3224B8u;
    SET_GPR_U32(ctx, 31, 0x3224C0u);
    ctx->pc = 0x3224BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3224B8u;
    // 0x3224bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3224B8u, 0x3224C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3224C0u;
label_3224c0:
    // 0x3224c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3224c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3224c4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x3224C4u;
    SET_GPR_U32(ctx, 31, 0x3224CCu);
    ctx->pc = 0x3224C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3224C4u;
    // 0x3224c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3224C4u, 0x3224CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3224CCu;
label_3224cc:
    // 0x3224cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3224CCu;
    {
        const bool branch_taken_0x3224cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3224D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3224CCu;
        // 0x3224d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3224cc) {
            ctx->pc = 0x3224ECu;
            goto label_3224ec;
        }
    }
    ctx->pc = 0x3224D4u;
    // 0x3224d4: 0x92220017  lbu         $v0, 0x17($s1)
    ctx->pc = 0x3224d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
    // 0x3224d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3224D8u;
    {
        const bool branch_taken_0x3224d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3224DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3224D8u;
        // 0x3224dc: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3224d8) {
            ctx->pc = 0x3224F0u;
            goto label_3224f0;
        }
    }
    ctx->pc = 0x3224E0u;
    // 0x3224e0: 0xc087502  jal         func_21D408
    ctx->pc = 0x3224E0u;
    SET_GPR_U32(ctx, 31, 0x3224E8u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3224E0u, 0x3224E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3224E8u;
label_3224e8:
    // 0x3224e8: 0xac400208  sw          $zero, 0x208($v0)
    ctx->pc = 0x3224e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 0));
label_3224ec:
    // 0x3224ec: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x3224ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3224f0:
    // 0x3224f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3224F0u;
    {
        const bool branch_taken_0x3224f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3224F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3224F0u;
        // 0x3224f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3224f0) {
            ctx->pc = 0x3224B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3224b8;
        }
    }
    ctx->pc = 0x3224F8u;
    // 0x3224f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3224f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3224fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3224fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322500: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x322500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322508: 0x3e00008  jr          $ra
    ctx->pc = 0x322508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322508u;
        // 0x32250c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322510u;
}
