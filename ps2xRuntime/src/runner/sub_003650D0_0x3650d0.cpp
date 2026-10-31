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

// Function: sub_003650D0
// Address: 0x3650d0 - 0x3651a0
void sub_003650D0_0x3650d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003650D0_0x3650d0");
#endif

    switch (ctx->pc) {
        case 0x365100u: goto label_365100;
        case 0x365108u: goto label_365108;
        case 0x36511cu: goto label_36511c;
        case 0x365130u: goto label_365130;
        case 0x365138u: goto label_365138;
        case 0x36514cu: goto label_36514c;
        case 0x365160u: goto label_365160;
        case 0x365178u: goto label_365178;
        default: break;
    }

    ctx->pc = 0x3650d0u;

    // 0x3650d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3650d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3650d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3650d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3650d8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3650d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3650dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3650dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3650e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3650e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3650e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3650e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3650e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3650e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3650ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3650ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3650f0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3650f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3650f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3650f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3650f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3650F8u;
    SET_GPR_U32(ctx, 31, 0x365100u);
    ctx->pc = 0x3650FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3650F8u;
    // 0x3650fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3650F8u, 0x365100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365100u;
label_365100:
    // 0x365100: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365100u;
    SET_GPR_U32(ctx, 31, 0x365108u);
    ctx->pc = 0x365104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365100u;
    // 0x365104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365100u, 0x365108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365108u;
label_365108:
    // 0x365108: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x365108u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36510c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36510cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365110: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x365110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365114: 0xc102488  jal         func_409220
    ctx->pc = 0x365114u;
    SET_GPR_U32(ctx, 31, 0x36511Cu);
    ctx->pc = 0x365118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365114u;
    // 0x365118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x365114u, 0x36511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36511Cu;
label_36511c:
    // 0x36511c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36511cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365120: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x365120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365124: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x365124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x365128: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365128u;
    SET_GPR_U32(ctx, 31, 0x365130u);
    ctx->pc = 0x36512Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365128u;
    // 0x36512c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365128u, 0x365130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365130u;
label_365130:
    // 0x365130: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365130u;
    SET_GPR_U32(ctx, 31, 0x365138u);
    ctx->pc = 0x365134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365130u;
    // 0x365134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365130u, 0x365138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365138u;
label_365138:
    // 0x365138: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x365138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36513c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36513cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365140: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x365140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x365144: 0xc102488  jal         func_409220
    ctx->pc = 0x365144u;
    SET_GPR_U32(ctx, 31, 0x36514Cu);
    ctx->pc = 0x365148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365144u;
    // 0x365148: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x365144u, 0x36514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36514Cu;
label_36514c:
    // 0x36514c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36514cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365154: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x365154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x365158: 0xc102488  jal         func_409220
    ctx->pc = 0x365158u;
    SET_GPR_U32(ctx, 31, 0x365160u);
    ctx->pc = 0x36515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365158u;
    // 0x36515c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x365158u, 0x365160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365160u;
label_365160:
    // 0x365160: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x365160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365164: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x365164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365168: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x365168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36516c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36516cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365170: 0xc08e5e2  jal         func_239788
    ctx->pc = 0x365170u;
    SET_GPR_U32(ctx, 31, 0x365178u);
    ctx->pc = 0x365174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365170u;
    // 0x365174: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239788u, 0x365170u, 0x365178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365178u;
label_365178:
    // 0x365178: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x365178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36517c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36517cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365180: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x365180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x365184: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x365184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365188: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x365188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36518c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x36518cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x365190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365194: 0x3e00008  jr          $ra
    ctx->pc = 0x365194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365194u;
        // 0x365198: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36519Cu;
    // 0x36519c: 0x0  nop
    ctx->pc = 0x36519cu;
    // NOP
    ctx->pc = 0x3651a0u;
}
