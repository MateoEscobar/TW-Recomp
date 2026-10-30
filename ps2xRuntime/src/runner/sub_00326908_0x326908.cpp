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

// Function: sub_00326908
// Address: 0x326908 - 0x3269b8
void sub_00326908_0x326908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326908_0x326908");
#endif

    switch (ctx->pc) {
        case 0x326940u: goto label_326940;
        case 0x326950u: goto label_326950;
        case 0x326958u: goto label_326958;
        case 0x326964u: goto label_326964;
        case 0x326974u: goto label_326974;
        case 0x326984u: goto label_326984;
        case 0x326994u: goto label_326994;
        case 0x3269a4u: goto label_3269a4;
        default: break;
    }

    ctx->pc = 0x326908u;

    // 0x326908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x326908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32690c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32690cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x326910: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x326910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x326914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x326918: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x326918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32691c: 0x340582ff  ori         $a1, $zero, 0x82FF
    ctx->pc = 0x32691cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33535);
    // 0x326920: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x326920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x326924: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x326924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x326928: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x326928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x32692c: 0x34a5e000  ori         $a1, $a1, 0xE000
    ctx->pc = 0x32692cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57344);
    // 0x326930: 0x52bf8  dsll        $a1, $a1, 15
    ctx->pc = 0x326930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 15);
    // 0x326934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326938: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x326938u;
    SET_GPR_U32(ctx, 31, 0x326940u);
    ctx->pc = 0x32693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326938u;
    // 0x32693c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x326938u, 0x326940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326940u;
label_326940:
    // 0x326940: 0x1c400012  bgtz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x326940u;
    {
        const bool branch_taken_0x326940 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x326944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326940u;
        // 0x326944: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326940) {
            ctx->pc = 0x32698Cu;
            goto label_32698c;
        }
    }
    ctx->pc = 0x326948u;
    // 0x326948: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x326948u;
    SET_GPR_U32(ctx, 31, 0x326950u);
    ctx->pc = 0x32694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326948u;
    // 0x32694c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x326948u, 0x326950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326950u;
label_326950:
    // 0x326950: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x326950u;
    SET_GPR_U32(ctx, 31, 0x326958u);
    ctx->pc = 0x326954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326950u;
    // 0x326954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x326950u, 0x326958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326958u;
label_326958:
    // 0x326958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x326958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32695c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x32695Cu;
    SET_GPR_U32(ctx, 31, 0x326964u);
    ctx->pc = 0x326960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32695Cu;
    // 0x326960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x32695Cu, 0x326964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326964u;
label_326964:
    // 0x326964: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x326964u;
    {
        const bool branch_taken_0x326964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326964u;
        // 0x326968: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326964) {
            ctx->pc = 0x32698Cu;
            goto label_32698c;
        }
    }
    ctx->pc = 0x32696Cu;
    // 0x32696c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x32696Cu;
    SET_GPR_U32(ctx, 31, 0x326974u);
    ctx->pc = 0x326970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32696Cu;
    // 0x326970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x32696Cu, 0x326974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326974u;
label_326974:
    // 0x326974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326978: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x326978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32697c: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x32697Cu;
    SET_GPR_U32(ctx, 31, 0x326984u);
    ctx->pc = 0x326980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32697Cu;
    // 0x326980: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x32697Cu, 0x326984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326984u;
label_326984:
    // 0x326984: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x326984u;
    {
        const bool branch_taken_0x326984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326984u;
        // 0x326988: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326984) {
            ctx->pc = 0x3269A8u;
            goto label_3269a8;
        }
    }
    ctx->pc = 0x32698Cu;
label_32698c:
    // 0x32698c: 0xc0c9a08  jal         func_326820
    ctx->pc = 0x32698Cu;
    SET_GPR_U32(ctx, 31, 0x326994u);
    ctx->pc = 0x326990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32698Cu;
    // 0x326990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326820u, 0x32698Cu, 0x326994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326994u;
label_326994:
    // 0x326994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326998: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x326998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32699c: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x32699Cu;
    SET_GPR_U32(ctx, 31, 0x3269A4u);
    ctx->pc = 0x3269A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32699Cu;
    // 0x3269a0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x32699Cu, 0x3269A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3269A4u;
label_3269a4:
    // 0x3269a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3269a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3269a8:
    // 0x3269a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3269a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3269ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3269acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3269b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3269B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3269B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269B0u;
        // 0x3269b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3269B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3269B8u;
}
