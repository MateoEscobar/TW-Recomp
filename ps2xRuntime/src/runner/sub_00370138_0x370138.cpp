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

// Function: sub_00370138
// Address: 0x370138 - 0x3701c8
void sub_00370138_0x370138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370138_0x370138");
#endif

    switch (ctx->pc) {
        case 0x37015cu: goto label_37015c;
        case 0x370164u: goto label_370164;
        case 0x370178u: goto label_370178;
        case 0x370190u: goto label_370190;
        case 0x370198u: goto label_370198;
        case 0x3701a8u: goto label_3701a8;
        default: break;
    }

    ctx->pc = 0x370138u;

    // 0x370138: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x370138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37013c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37013cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370140: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x370140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x370144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370148: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x370148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37014c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37014cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x370150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370154: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370154u;
    SET_GPR_U32(ctx, 31, 0x37015Cu);
    ctx->pc = 0x370158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370154u;
    // 0x370158: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370154u, 0x37015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37015Cu;
label_37015c:
    // 0x37015c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37015Cu;
    SET_GPR_U32(ctx, 31, 0x370164u);
    ctx->pc = 0x370160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37015Cu;
    // 0x370160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37015Cu, 0x370164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370164u;
label_370164:
    // 0x370164: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x370164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37016c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370170: 0xc1024c6  jal         func_409318
    ctx->pc = 0x370170u;
    SET_GPR_U32(ctx, 31, 0x370178u);
    ctx->pc = 0x370174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370170u;
    // 0x370174: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x370170u, 0x370178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370178u;
label_370178:
    // 0x370178: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x370178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x37017c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x37017cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x370180: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x370180u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x370184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370188: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370188u;
    SET_GPR_U32(ctx, 31, 0x370190u);
    ctx->pc = 0x37018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370188u;
    // 0x37018c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370188u, 0x370190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370190u;
label_370190:
    // 0x370190: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370190u;
    SET_GPR_U32(ctx, 31, 0x370198u);
    ctx->pc = 0x370194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370190u;
    // 0x370194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370190u, 0x370198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370198u;
label_370198:
    // 0x370198: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x370198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37019c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37019cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3701a0: 0xc06d10e  jal         func_1B4438
    ctx->pc = 0x3701A0u;
    SET_GPR_U32(ctx, 31, 0x3701A8u);
    ctx->pc = 0x3701A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3701A0u;
    // 0x3701a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4438u, 0x3701A0u, 0x3701A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701A8u;
label_3701a8:
    // 0x3701a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3701a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3701ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3701acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3701b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3701b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3701b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3701b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3701b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3701b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3701bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3701BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3701C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3701BCu;
        // 0x3701c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3701BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3701C4u;
    // 0x3701c4: 0x0  nop
    ctx->pc = 0x3701c4u;
    // NOP
    ctx->pc = 0x3701c8u;
}
