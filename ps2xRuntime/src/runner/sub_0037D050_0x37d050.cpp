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

// Function: sub_0037D050
// Address: 0x37d050 - 0x37d0f0
void sub_0037D050_0x37d050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D050_0x37d050");
#endif

    switch (ctx->pc) {
        case 0x37d07cu: goto label_37d07c;
        case 0x37d084u: goto label_37d084;
        case 0x37d098u: goto label_37d098;
        case 0x37d0a0u: goto label_37d0a0;
        case 0x37d0b4u: goto label_37d0b4;
        case 0x37d0bcu: goto label_37d0bc;
        case 0x37d0ccu: goto label_37d0cc;
        default: break;
    }

    ctx->pc = 0x37d050u;

    // 0x37d050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37d050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37d054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37d054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d058: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37d058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37d05c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37d05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37d060: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37d060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37d064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37d068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37d06c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37d06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37d070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37d074: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37D074u;
    SET_GPR_U32(ctx, 31, 0x37D07Cu);
    ctx->pc = 0x37D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D074u;
    // 0x37d078: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37D074u, 0x37D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D07Cu;
label_37d07c:
    // 0x37d07c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37D07Cu;
    SET_GPR_U32(ctx, 31, 0x37D084u);
    ctx->pc = 0x37D080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D07Cu;
    // 0x37d080: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37D07Cu, 0x37D084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D084u;
label_37d084:
    // 0x37d084: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37d084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d088: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x37d088u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37d08c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d090: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37D090u;
    SET_GPR_U32(ctx, 31, 0x37D098u);
    ctx->pc = 0x37D094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D090u;
    // 0x37d094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37D090u, 0x37D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D098u;
label_37d098:
    // 0x37d098: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37D098u;
    SET_GPR_U32(ctx, 31, 0x37D0A0u);
    ctx->pc = 0x37D09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D098u;
    // 0x37d09c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37D098u, 0x37D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D0A0u;
label_37d0a0:
    // 0x37d0a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37d0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d0a4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x37d0a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37d0a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37d0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d0ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37D0ACu;
    SET_GPR_U32(ctx, 31, 0x37D0B4u);
    ctx->pc = 0x37D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D0ACu;
    // 0x37d0b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37D0ACu, 0x37D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D0B4u;
label_37d0b4:
    // 0x37d0b4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37D0B4u;
    SET_GPR_U32(ctx, 31, 0x37D0BCu);
    ctx->pc = 0x37D0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D0B4u;
    // 0x37d0b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37D0B4u, 0x37D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D0BCu;
label_37d0bc:
    // 0x37d0bc: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x37d0bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37d0c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37d0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d0c4: 0xc108dfa  jal         func_4237E8
    ctx->pc = 0x37D0C4u;
    SET_GPR_U32(ctx, 31, 0x37D0CCu);
    ctx->pc = 0x37D0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D0C4u;
    // 0x37d0c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4237E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4237E8u, 0x37D0C4u, 0x37D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D0CCu;
label_37d0cc:
    // 0x37d0cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37d0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37d0d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d0d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d0d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37d0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37d0d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37d0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d0dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37d0dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d0e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x37D0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0E4u;
        // 0x37d0e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D0ECu;
    // 0x37d0ec: 0x0  nop
    ctx->pc = 0x37d0ecu;
    // NOP
    ctx->pc = 0x37d0f0u;
}
