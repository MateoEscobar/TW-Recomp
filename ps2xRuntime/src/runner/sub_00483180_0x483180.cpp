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

// Function: sub_00483180
// Address: 0x483180 - 0x4831f0
void sub_00483180_0x483180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483180_0x483180");
#endif

    switch (ctx->pc) {
        case 0x483180u: goto label_483180;
        case 0x483184u: goto label_483184;
        case 0x483188u: goto label_483188;
        case 0x48318cu: goto label_48318c;
        case 0x483190u: goto label_483190;
        case 0x483194u: goto label_483194;
        case 0x483198u: goto label_483198;
        case 0x48319cu: goto label_48319c;
        case 0x4831a0u: goto label_4831a0;
        case 0x4831a4u: goto label_4831a4;
        case 0x4831a8u: goto label_4831a8;
        case 0x4831acu: goto label_4831ac;
        case 0x4831b0u: goto label_4831b0;
        case 0x4831b4u: goto label_4831b4;
        case 0x4831b8u: goto label_4831b8;
        case 0x4831bcu: goto label_4831bc;
        case 0x4831c0u: goto label_4831c0;
        case 0x4831c4u: goto label_4831c4;
        case 0x4831c8u: goto label_4831c8;
        case 0x4831ccu: goto label_4831cc;
        case 0x4831d0u: goto label_4831d0;
        case 0x4831d4u: goto label_4831d4;
        case 0x4831d8u: goto label_4831d8;
        case 0x4831dcu: goto label_4831dc;
        case 0x4831e0u: goto label_4831e0;
        case 0x4831e4u: goto label_4831e4;
        case 0x4831e8u: goto label_4831e8;
        case 0x4831ecu: goto label_4831ec;
        default: break;
    }

    ctx->pc = 0x483180u;

label_483180:
    // 0x483180: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x483180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_483184:
    // 0x483184: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x483184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_483188:
    // 0x483188: 0x8c62ad2c  lw          $v0, -0x52D4($v1)
    ctx->pc = 0x483188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946092)));
label_48318c:
    // 0x48318c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x48318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_483190:
    // 0x483190: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x483190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_483194:
    // 0x483194: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x483194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_483198:
    // 0x483198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x483198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48319c:
    // 0x48319c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48319cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4831a0:
    // 0x4831a0: 0x40f809  jalr        $v0
label_4831a4:
    if (ctx->pc == 0x4831A4u) {
        ctx->pc = 0x4831A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4831A0u;
        // 0x4831a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4831A8u;
        goto label_4831a8;
    }
    ctx->pc = 0x4831A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4831A8u);
        ctx->pc = 0x4831A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4831A0u;
        // 0x4831a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4831A0u, 0x4831A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4831A8u;
label_4831a8:
    // 0x4831a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4831a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4831ac:
    // 0x4831ac: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_4831b0:
    if (ctx->pc == 0x4831B0u) {
        ctx->pc = 0x4831B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4831ACu;
        // 0x4831b0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4831B4u;
        goto label_4831b4;
    }
    ctx->pc = 0x4831ACu;
    {
        const bool branch_taken_0x4831ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4831ac) {
            ctx->pc = 0x4831B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4831ACu;
            // 0x4831b0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4831E0u;
            goto label_4831e0;
        }
    }
    ctx->pc = 0x4831B4u;
label_4831b4:
    // 0x4831b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4831b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4831b8:
    // 0x4831b8: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x4831b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4831bc:
    // 0x4831bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4831bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4831c0:
    // 0x4831c0: 0xc11eff2  jal         func_47BFC8
label_4831c4:
    if (ctx->pc == 0x4831C4u) {
        ctx->pc = 0x4831C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4831C0u;
        // 0x4831c4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4831C8u;
        goto label_4831c8;
    }
    ctx->pc = 0x4831C0u;
    SET_GPR_U32(ctx, 31, 0x4831C8u);
    ctx->pc = 0x4831C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4831C0u;
    // 0x4831c4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4831C0u, 0x4831C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4831C8u;
label_4831c8:
    // 0x4831c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4831c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4831cc:
    // 0x4831cc: 0xc11f024  jal         func_47C090
label_4831d0:
    if (ctx->pc == 0x4831D0u) {
        ctx->pc = 0x4831D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4831CCu;
        // 0x4831d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4831D4u;
        goto label_4831d4;
    }
    ctx->pc = 0x4831CCu;
    SET_GPR_U32(ctx, 31, 0x4831D4u);
    ctx->pc = 0x4831D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4831CCu;
    // 0x4831d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4831CCu, 0x4831D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4831D4u;
label_4831d4:
    // 0x4831d4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_4831d8:
    if (ctx->pc == 0x4831D8u) {
        ctx->pc = 0x4831D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4831D4u;
        // 0x4831d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4831DCu;
        goto label_4831dc;
    }
    ctx->pc = 0x4831D4u;
    {
        const bool branch_taken_0x4831d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4831D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4831D4u;
        // 0x4831d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4831d4) {
            ctx->pc = 0x4831E0u;
            goto label_4831e0;
        }
    }
    ctx->pc = 0x4831DCu;
label_4831dc:
    // 0x4831dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4831dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4831e0:
    // 0x4831e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4831e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4831e4:
    // 0x4831e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4831e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4831e8:
    // 0x4831e8: 0x3e00008  jr          $ra
label_4831ec:
    if (ctx->pc == 0x4831ECu) {
        ctx->pc = 0x4831ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4831E8u;
        // 0x4831ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4831F0u;
        goto label_fallthrough_0x4831e8;
    }
    ctx->pc = 0x4831E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4831ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4831E8u;
        // 0x4831ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4831E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4831e8:
    ctx->pc = 0x4831F0u;
}
