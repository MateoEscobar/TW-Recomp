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

// Function: sub_001C6878
// Address: 0x1c6878 - 0x1c68e8
void sub_001C6878_0x1c6878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6878_0x1c6878");
#endif

    switch (ctx->pc) {
        case 0x1c6878u: goto label_1c6878;
        case 0x1c687cu: goto label_1c687c;
        case 0x1c6880u: goto label_1c6880;
        case 0x1c6884u: goto label_1c6884;
        case 0x1c6888u: goto label_1c6888;
        case 0x1c688cu: goto label_1c688c;
        case 0x1c6890u: goto label_1c6890;
        case 0x1c6894u: goto label_1c6894;
        case 0x1c6898u: goto label_1c6898;
        case 0x1c689cu: goto label_1c689c;
        case 0x1c68a0u: goto label_1c68a0;
        case 0x1c68a4u: goto label_1c68a4;
        case 0x1c68a8u: goto label_1c68a8;
        case 0x1c68acu: goto label_1c68ac;
        case 0x1c68b0u: goto label_1c68b0;
        case 0x1c68b4u: goto label_1c68b4;
        case 0x1c68b8u: goto label_1c68b8;
        case 0x1c68bcu: goto label_1c68bc;
        case 0x1c68c0u: goto label_1c68c0;
        case 0x1c68c4u: goto label_1c68c4;
        case 0x1c68c8u: goto label_1c68c8;
        case 0x1c68ccu: goto label_1c68cc;
        case 0x1c68d0u: goto label_1c68d0;
        case 0x1c68d4u: goto label_1c68d4;
        case 0x1c68d8u: goto label_1c68d8;
        case 0x1c68dcu: goto label_1c68dc;
        case 0x1c68e0u: goto label_1c68e0;
        case 0x1c68e4u: goto label_1c68e4;
        default: break;
    }

    ctx->pc = 0x1c6878u;

label_1c6878:
    // 0x1c6878: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c6878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c687c:
    // 0x1c687c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c687cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1c6880:
    // 0x1c6880: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c6880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1c6884:
    // 0x1c6884: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c6884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c6888:
    // 0x1c6888: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c6888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c688c:
    // 0x1c688c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c688cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6890:
    // 0x1c6890: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c6890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c6894:
    // 0x1c6894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c6894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6898:
    // 0x1c6898: 0xc071462  jal         func_1C5188
label_1c689c:
    if (ctx->pc == 0x1C689Cu) {
        ctx->pc = 0x1C689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6898u;
        // 0x1c689c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68A0u;
        goto label_1c68a0;
    }
    ctx->pc = 0x1C6898u;
    SET_GPR_U32(ctx, 31, 0x1C68A0u);
    ctx->pc = 0x1C689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6898u;
    // 0x1c689c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x1C6898u, 0x1C68A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68A0u;
label_1c68a0:
    // 0x1c68a0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1c68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1c68a4:
    // 0x1c68a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c68a8:
    // 0x1c68a8: 0xc0e4060  jal         func_390180
label_1c68ac:
    if (ctx->pc == 0x1C68ACu) {
        ctx->pc = 0x1C68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68A8u;
        // 0x1c68ac: 0x24440944  addiu       $a0, $v0, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68B0u;
        goto label_1c68b0;
    }
    ctx->pc = 0x1C68A8u;
    SET_GPR_U32(ctx, 31, 0x1C68B0u);
    ctx->pc = 0x1C68ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68A8u;
    // 0x1c68ac: 0x24440944  addiu       $a0, $v0, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C68A8u, 0x1C68B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68B0u;
label_1c68b0:
    // 0x1c68b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c68b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c68b4:
    // 0x1c68b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c68b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c68b8:
    // 0x1c68b8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x1c68b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1c68bc:
    // 0x1c68bc: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x1c68bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1c68c0:
    // 0x1c68c0: 0xc0f809  jalr        $a2
label_1c68c4:
    if (ctx->pc == 0x1C68C4u) {
        ctx->pc = 0x1C68C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68C0u;
        // 0x1c68c4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68C8u;
        goto label_1c68c8;
    }
    ctx->pc = 0x1C68C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C68C8u);
        ctx->pc = 0x1C68C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68C0u;
        // 0x1c68c4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C68C0u, 0x1C68C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C68C8u;
label_1c68c8:
    // 0x1c68c8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1c68c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c68cc:
    // 0x1c68cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c68ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c68d0:
    // 0x1c68d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c68d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c68d4:
    // 0x1c68d4: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x1c68d4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_1c68d8:
    // 0x1c68d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c68d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c68dc:
    // 0x1c68dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c68dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c68e0:
    // 0x1c68e0: 0x3e00008  jr          $ra
label_1c68e4:
    if (ctx->pc == 0x1C68E4u) {
        ctx->pc = 0x1C68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68E0u;
        // 0x1c68e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68E8u;
        goto label_fallthrough_0x1c68e0;
    }
    ctx->pc = 0x1C68E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68E0u;
        // 0x1c68e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C68E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c68e0:
    ctx->pc = 0x1C68E8u;
}
