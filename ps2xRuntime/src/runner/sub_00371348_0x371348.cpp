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

// Function: sub_00371348
// Address: 0x371348 - 0x3713f8
void sub_00371348_0x371348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371348_0x371348");
#endif

    switch (ctx->pc) {
        case 0x37136cu: goto label_37136c;
        case 0x371384u: goto label_371384;
        case 0x371394u: goto label_371394;
        case 0x3713a8u: goto label_3713a8;
        case 0x3713c0u: goto label_3713c0;
        case 0x3713c8u: goto label_3713c8;
        case 0x3713d4u: goto label_3713d4;
        case 0x3713e4u: goto label_3713e4;
        default: break;
    }

    ctx->pc = 0x371348u;

    // 0x371348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x371348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37134c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37134cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371350: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371354: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x371354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371358: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x371358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37135c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37135cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x371360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371364: 0xc10311e  jal         func_40C478
    ctx->pc = 0x371364u;
    SET_GPR_U32(ctx, 31, 0x37136Cu);
    ctx->pc = 0x371368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371364u;
    // 0x371368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x371364u, 0x37136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37136Cu;
label_37136c:
    // 0x37136c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x37136Cu;
    {
        const bool branch_taken_0x37136c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37136Cu;
        // 0x371370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37136c) {
            ctx->pc = 0x3713DCu;
            goto label_3713dc;
        }
    }
    ctx->pc = 0x371374u;
    // 0x371374: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x371374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371378: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x371378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37137c: 0xc10311e  jal         func_40C478
    ctx->pc = 0x37137Cu;
    SET_GPR_U32(ctx, 31, 0x371384u);
    ctx->pc = 0x371380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37137Cu;
    // 0x371380: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x37137Cu, 0x371384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371384u;
label_371384:
    // 0x371384: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x371384u;
    {
        const bool branch_taken_0x371384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371384u;
        // 0x371388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371384) {
            ctx->pc = 0x3713DCu;
            goto label_3713dc;
        }
    }
    ctx->pc = 0x37138Cu;
    // 0x37138c: 0xc10314e  jal         func_40C538
    ctx->pc = 0x37138Cu;
    SET_GPR_U32(ctx, 31, 0x371394u);
    ctx->pc = 0x371390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37138Cu;
    // 0x371390: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x37138Cu, 0x371394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371394u;
label_371394:
    // 0x371394: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x371394u;
    {
        const bool branch_taken_0x371394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371394u;
        // 0x371398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371394) {
            ctx->pc = 0x3713DCu;
            goto label_3713dc;
        }
    }
    ctx->pc = 0x37139Cu;
    // 0x37139c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37139cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3713a0: 0xc102488  jal         func_409220
    ctx->pc = 0x3713A0u;
    SET_GPR_U32(ctx, 31, 0x3713A8u);
    ctx->pc = 0x3713A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3713A0u;
    // 0x3713a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3713A0u, 0x3713A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3713A8u;
label_3713a8:
    // 0x3713a8: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x3713a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3713ac: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x3713acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x3713b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3713b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3713b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3713b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3713b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3713B8u;
    SET_GPR_U32(ctx, 31, 0x3713C0u);
    ctx->pc = 0x3713BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3713B8u;
    // 0x3713bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3713B8u, 0x3713C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3713C0u;
label_3713c0:
    // 0x3713c0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3713C0u;
    SET_GPR_U32(ctx, 31, 0x3713C8u);
    ctx->pc = 0x3713C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3713C0u;
    // 0x3713c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3713C0u, 0x3713C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3713C8u;
label_3713c8:
    // 0x3713c8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3713c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3713cc: 0xc044d64  jal         func_113590
    ctx->pc = 0x3713CCu;
    SET_GPR_U32(ctx, 31, 0x3713D4u);
    ctx->pc = 0x3713D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3713CCu;
    // 0x3713d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113590u, 0x3713CCu, 0x3713D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3713D4u;
label_3713d4:
    // 0x3713d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3713D4u;
    {
        const bool branch_taken_0x3713d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3713D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3713D4u;
        // 0x3713d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3713d4) {
            ctx->pc = 0x3713E4u;
            goto label_3713e4;
        }
    }
    ctx->pc = 0x3713DCu;
label_3713dc:
    // 0x3713dc: 0xc0dc4b6  jal         func_3712D8
    ctx->pc = 0x3713DCu;
    SET_GPR_U32(ctx, 31, 0x3713E4u);
    ctx->pc = 0x3713E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3713DCu;
    // 0x3713e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3712D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3712D8u, 0x3713DCu, 0x3713E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3713E4u;
label_3713e4:
    // 0x3713e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3713e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3713e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3713e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3713ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3713ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3713f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3713F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3713F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3713F0u;
        // 0x3713f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3713F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3713F8u;
}
