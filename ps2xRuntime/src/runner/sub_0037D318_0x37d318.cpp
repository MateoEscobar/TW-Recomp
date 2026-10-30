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

// Function: sub_0037D318
// Address: 0x37d318 - 0x37d3c0
void sub_0037D318_0x37d318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D318_0x37d318");
#endif

    switch (ctx->pc) {
        case 0x37d340u: goto label_37d340;
        case 0x37d348u: goto label_37d348;
        case 0x37d35cu: goto label_37d35c;
        case 0x37d364u: goto label_37d364;
        case 0x37d370u: goto label_37d370;
        case 0x37d37cu: goto label_37d37c;
        case 0x37d394u: goto label_37d394;
        case 0x37d3a0u: goto label_37d3a0;
        default: break;
    }

    ctx->pc = 0x37d318u;

    // 0x37d318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37d318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37d31c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d320: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37d320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37d324: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37d324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37d328: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37d328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d32c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37d32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d330: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37d330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37d334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37d338: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37D338u;
    SET_GPR_U32(ctx, 31, 0x37D340u);
    ctx->pc = 0x37D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D338u;
    // 0x37d33c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37D338u, 0x37D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D340u;
label_37d340:
    // 0x37d340: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37D340u;
    SET_GPR_U32(ctx, 31, 0x37D348u);
    ctx->pc = 0x37D344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D340u;
    // 0x37d344: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37D340u, 0x37D348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D348u;
label_37d348:
    // 0x37d348: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37d348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d34c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d350: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37d350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d354: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37D354u;
    SET_GPR_U32(ctx, 31, 0x37D35Cu);
    ctx->pc = 0x37D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D354u;
    // 0x37d358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37D354u, 0x37D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D35Cu;
label_37d35c:
    // 0x37d35c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37D35Cu;
    SET_GPR_U32(ctx, 31, 0x37D364u);
    ctx->pc = 0x37D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D35Cu;
    // 0x37d360: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37D35Cu, 0x37D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D364u;
label_37d364:
    // 0x37d364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37d364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d368: 0xc108e3a  jal         func_4238E8
    ctx->pc = 0x37D368u;
    SET_GPR_U32(ctx, 31, 0x37D370u);
    ctx->pc = 0x37D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D368u;
    // 0x37d36c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4238E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4238E8u, 0x37D368u, 0x37D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D370u;
label_37d370:
    // 0x37d370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37d370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d374: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37D374u;
    SET_GPR_U32(ctx, 31, 0x37D37Cu);
    ctx->pc = 0x37D378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D374u;
    // 0x37d378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37D374u, 0x37D37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D37Cu;
label_37d37c:
    // 0x37d37c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37D37Cu;
    {
        const bool branch_taken_0x37d37c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D37Cu;
        // 0x37d380: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d37c) {
            ctx->pc = 0x37D398u;
            goto label_37d398;
        }
    }
    ctx->pc = 0x37D384u;
    // 0x37d384: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37d384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37d388: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37d388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37d38c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37D38Cu;
    SET_GPR_U32(ctx, 31, 0x37D394u);
    ctx->pc = 0x37D390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D38Cu;
    // 0x37d390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37D38Cu, 0x37D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D394u;
label_37d394:
    // 0x37d394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37d394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37d398:
    // 0x37d398: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37D398u;
    SET_GPR_U32(ctx, 31, 0x37D3A0u);
    ctx->pc = 0x37D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D398u;
    // 0x37d39c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37D398u, 0x37D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D3A0u;
label_37d3a0:
    // 0x37d3a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37d3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37d3a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d3a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37d3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d3ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37d3acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x37D3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D3B4u;
        // 0x37d3b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D3BCu;
    // 0x37d3bc: 0x0  nop
    ctx->pc = 0x37d3bcu;
    // NOP
    ctx->pc = 0x37d3c0u;
}
