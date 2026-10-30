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

// Function: sub_0046A940
// Address: 0x46a940 - 0x46a9e0
void sub_0046A940_0x46a940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A940_0x46a940");
#endif

    switch (ctx->pc) {
        case 0x46a960u: goto label_46a960;
        case 0x46a988u: goto label_46a988;
        case 0x46a998u: goto label_46a998;
        case 0x46a9a4u: goto label_46a9a4;
        case 0x46a9b4u: goto label_46a9b4;
        case 0x46a9c0u: goto label_46a9c0;
        default: break;
    }

    ctx->pc = 0x46a940u;

    // 0x46a940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46a940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x46a944: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x46a944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x46a948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46a948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46a94c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x46a94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a950: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x46a950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x46a954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46a954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46a958: 0xc11a928  jal         func_46A4A0
    ctx->pc = 0x46A958u;
    SET_GPR_U32(ctx, 31, 0x46A960u);
    ctx->pc = 0x46A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A958u;
    // 0x46a95c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A4A0u, 0x46A958u, 0x46A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A960u;
label_46a960:
    // 0x46a960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46a960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a964: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x46A964u;
    {
        const bool branch_taken_0x46a964 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x46a964) {
            ctx->pc = 0x46A968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46A964u;
            // 0x46a968: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46A978u;
            goto label_46a978;
        }
    }
    ctx->pc = 0x46A96Cu;
    // 0x46a96c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x46a96cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x46a970: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x46A970u;
    {
        const bool branch_taken_0x46a970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A970u;
        // 0x46a974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a970) {
            ctx->pc = 0x46A9C8u;
            goto label_46a9c8;
        }
    }
    ctx->pc = 0x46A978u;
label_46a978:
    // 0x46a978: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x46A978u;
    {
        const bool branch_taken_0x46a978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46a978) {
            ctx->pc = 0x46A97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46A978u;
            // 0x46a97c: 0x8c4500a0  lw          $a1, 0xA0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46A9ACu;
            goto label_46a9ac;
        }
    }
    ctx->pc = 0x46A980u;
    // 0x46a980: 0xc11a8fc  jal         func_46A3F0
    ctx->pc = 0x46A980u;
    SET_GPR_U32(ctx, 31, 0x46A988u);
    ctx->pc = 0x46A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A980u;
    // 0x46a984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A3F0u, 0x46A980u, 0x46A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A988u;
label_46a988:
    // 0x46a988: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46a988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x46a98c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x46a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x46a990: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x46A990u;
    SET_GPR_U32(ctx, 31, 0x46A998u);
    ctx->pc = 0x46A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A990u;
    // 0x46a994: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46A990u, 0x46A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A998u;
label_46a998:
    // 0x46a998: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x46a998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a99c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x46A99Cu;
    SET_GPR_U32(ctx, 31, 0x46A9A4u);
    ctx->pc = 0x46A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A99Cu;
    // 0x46a9a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46A99Cu, 0x46A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A9A4u;
label_46a9a4:
    // 0x46a9a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x46A9A4u;
    {
        const bool branch_taken_0x46a9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A9A4u;
        // 0x46a9a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a9a4) {
            ctx->pc = 0x46A9C8u;
            goto label_46a9c8;
        }
    }
    ctx->pc = 0x46A9ACu;
label_46a9ac:
    // 0x46a9ac: 0xc11a830  jal         func_46A0C0
    ctx->pc = 0x46A9ACu;
    SET_GPR_U32(ctx, 31, 0x46A9B4u);
    ctx->pc = 0x46A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A9ACu;
    // 0x46a9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A0C0u, 0x46A9ACu, 0x46A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A9B4u;
label_46a9b4:
    // 0x46a9b4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x46a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x46a9b8: 0xc11a864  jal         func_46A190
    ctx->pc = 0x46A9B8u;
    SET_GPR_U32(ctx, 31, 0x46A9C0u);
    ctx->pc = 0x46A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A9B8u;
    // 0x46a9bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A190u, 0x46A9B8u, 0x46A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A9C0u;
label_46a9c0:
    // 0x46a9c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46a9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a9c4: 0x0  nop
    ctx->pc = 0x46a9c4u;
    // NOP
label_46a9c8:
    // 0x46a9c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x46a9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46a9cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x46a9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46a9d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46a9d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a9d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46a9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x46A9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A9D8u;
        // 0x46a9dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A9E0u;
}
