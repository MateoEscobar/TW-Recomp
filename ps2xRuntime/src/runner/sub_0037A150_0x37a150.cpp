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

// Function: sub_0037A150
// Address: 0x37a150 - 0x37a228
void sub_0037A150_0x37a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A150_0x37a150");
#endif

    switch (ctx->pc) {
        case 0x37a178u: goto label_37a178;
        case 0x37a180u: goto label_37a180;
        case 0x37a190u: goto label_37a190;
        case 0x37a1a8u: goto label_37a1a8;
        case 0x37a1b0u: goto label_37a1b0;
        case 0x37a1ccu: goto label_37a1cc;
        case 0x37a1d8u: goto label_37a1d8;
        case 0x37a1e8u: goto label_37a1e8;
        case 0x37a1fcu: goto label_37a1fc;
        default: break;
    }

    ctx->pc = 0x37a150u;

    // 0x37a150: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37a154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a158: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37a158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x37a15c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37a15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a160: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x37a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x37a164: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37a164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x37a168: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x37a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x37a16c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37a16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37a170: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A170u;
    SET_GPR_U32(ctx, 31, 0x37A178u);
    ctx->pc = 0x37A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A170u;
    // 0x37a174: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A170u, 0x37A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A178u;
label_37a178:
    // 0x37a178: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37A178u;
    SET_GPR_U32(ctx, 31, 0x37A180u);
    ctx->pc = 0x37A17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A178u;
    // 0x37a17c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37A178u, 0x37A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A180u;
label_37a180:
    // 0x37a180: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37a180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a184: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a188: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37a188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a18c: 0x0  nop
    ctx->pc = 0x37a18cu;
    // NOP
label_37a190:
    // 0x37a190: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37a190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37a194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a198: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37a198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a19c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a1a0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37A1A0u;
    SET_GPR_U32(ctx, 31, 0x37A1A8u);
    ctx->pc = 0x37A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A1A0u;
    // 0x37a1a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37A1A0u, 0x37A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A1A8u;
label_37a1a8:
    // 0x37a1a8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37A1A8u;
    SET_GPR_U32(ctx, 31, 0x37A1B0u);
    ctx->pc = 0x37A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A1A8u;
    // 0x37a1ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37A1A8u, 0x37A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A1B0u;
label_37a1b0:
    // 0x37a1b0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37a1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37a1b4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37a1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37a1b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37A1B8u;
    {
        const bool branch_taken_0x37a1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A1B8u;
        // 0x37a1bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a1b8) {
            ctx->pc = 0x37A190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a190;
        }
    }
    ctx->pc = 0x37A1C0u;
    // 0x37a1c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37a1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a1c4: 0xc105ada  jal         func_416B68
    ctx->pc = 0x37A1C4u;
    SET_GPR_U32(ctx, 31, 0x37A1CCu);
    ctx->pc = 0x37A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A1C4u;
    // 0x37a1c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416B68u, 0x37A1C4u, 0x37A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A1CCu;
label_37a1cc:
    // 0x37a1cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a1d0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37a1d4: 0x0  nop
    ctx->pc = 0x37a1d4u;
    // NOP
label_37a1d8:
    // 0x37a1d8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x37a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37a1dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37a1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37a1e0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37A1E0u;
    SET_GPR_U32(ctx, 31, 0x37A1E8u);
    ctx->pc = 0x37A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A1E0u;
    // 0x37a1e4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37A1E0u, 0x37A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A1E8u;
label_37a1e8:
    // 0x37a1e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37a1e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a1ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a1f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a1f4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37A1F4u;
    SET_GPR_U32(ctx, 31, 0x37A1FCu);
    ctx->pc = 0x37A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A1F4u;
    // 0x37a1f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37A1F4u, 0x37A1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A1FCu;
label_37a1fc:
    // 0x37a1fc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37a1fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37a200: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37A200u;
    {
        const bool branch_taken_0x37a200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A200u;
        // 0x37a204: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a200) {
            ctx->pc = 0x37A1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a1d8;
        }
    }
    ctx->pc = 0x37A208u;
    // 0x37a208: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x37a208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37a20c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a210: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x37a210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37a214: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37a214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37a218: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x37a218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a21c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37a21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a220: 0x3e00008  jr          $ra
    ctx->pc = 0x37A220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A220u;
        // 0x37a224: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A228u;
}
