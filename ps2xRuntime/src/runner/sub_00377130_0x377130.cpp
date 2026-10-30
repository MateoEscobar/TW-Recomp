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

// Function: sub_00377130
// Address: 0x377130 - 0x3771c0
void sub_00377130_0x377130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377130_0x377130");
#endif

    switch (ctx->pc) {
        case 0x377154u: goto label_377154;
        case 0x37715cu: goto label_37715c;
        case 0x377174u: goto label_377174;
        case 0x37717cu: goto label_37717c;
        case 0x377190u: goto label_377190;
        case 0x3771a0u: goto label_3771a0;
        default: break;
    }

    ctx->pc = 0x377130u;

    // 0x377130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x377130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x377134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377138: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x377138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37713c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37713cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377140: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x377140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x377144: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x377144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x377148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37714c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37714Cu;
    SET_GPR_U32(ctx, 31, 0x377154u);
    ctx->pc = 0x377150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37714Cu;
    // 0x377150: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37714Cu, 0x377154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377154u;
label_377154:
    // 0x377154: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x377154u;
    SET_GPR_U32(ctx, 31, 0x37715Cu);
    ctx->pc = 0x377158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377154u;
    // 0x377158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x377154u, 0x37715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37715Cu;
label_37715c:
    // 0x37715c: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37715cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x377160: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x377160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x377164: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x377164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377168: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x377168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37716c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37716Cu;
    SET_GPR_U32(ctx, 31, 0x377174u);
    ctx->pc = 0x377170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37716Cu;
    // 0x377170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37716Cu, 0x377174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377174u;
label_377174:
    // 0x377174: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377174u;
    SET_GPR_U32(ctx, 31, 0x37717Cu);
    ctx->pc = 0x377178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377174u;
    // 0x377178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377174u, 0x37717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37717Cu;
label_37717c:
    // 0x37717c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37717cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377184: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x377184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x377188: 0xc102488  jal         func_409220
    ctx->pc = 0x377188u;
    SET_GPR_U32(ctx, 31, 0x377190u);
    ctx->pc = 0x37718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377188u;
    // 0x37718c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x377188u, 0x377190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377190u;
label_377190:
    // 0x377190: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x377190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377198: 0xc0c2dbe  jal         func_30B6F8
    ctx->pc = 0x377198u;
    SET_GPR_U32(ctx, 31, 0x3771A0u);
    ctx->pc = 0x37719Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377198u;
    // 0x37719c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B6F8u, 0x377198u, 0x3771A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3771A0u;
label_3771a0:
    // 0x3771a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3771a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3771a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3771a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3771a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3771a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3771ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3771acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3771b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3771b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3771b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3771B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3771B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3771B4u;
        // 0x3771b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3771B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3771BCu;
    // 0x3771bc: 0x0  nop
    ctx->pc = 0x3771bcu;
    // NOP
    ctx->pc = 0x3771c0u;
}
